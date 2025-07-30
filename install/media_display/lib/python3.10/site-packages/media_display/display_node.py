import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import numpy as np
import threading
import time

class MediaDisplayNode(Node):
    def __init__(self):
        super().__init__('media_display_node')

        # Parâmetros
        self.declare_parameter('screen_width', 640)
        self.declare_parameter('screen_height', 480)
        self.screen_width = self.get_parameter('screen_width').value
        self.screen_height = self.get_parameter('screen_height').value

        # Publicador e Assinante
        self.ui_publisher = self.create_publisher(Image, '/ui_display', 10)
        self.command_subscriber = self.create_subscription(
            String,
            '/display_command',
            self.command_callback,
            10)

        self.bridge = CvBridge()
        self.current_media_thread = None
        self.stop_media_flag = threading.Event()
        self.current_topic_subscriber = None

        self.get_logger().info('Media Display Node iniciado. Aguardando comandos em /display_command')

    def stop_current_media(self):
        if self.current_media_thread is not None:
            self.stop_media_flag.set()
            self.current_media_thread.join()
            self.stop_media_flag.clear()
            self.current_media_thread = None

        if self.current_topic_subscriber is not None:
            self.destroy_subscription(self.current_topic_subscriber)
            self.current_topic_subscriber = None

    def command_callback(self, msg):
        self.stop_current_media()

        parts = msg.data.split(':', 1)
        if len(parts) != 2:
            self.get_logger().error(f'Comando mal formatado: "{msg.data}". Use "tipo:valor".')
            return

        media_type, media_value = parts
        self.get_logger().info(f'Comando recebido: tipo="{media_type}"')

        if media_type == 'sentence':
            self.handle_sentence(media_value)
        elif media_type == 'image':
            self.handle_image(media_value)
        elif media_type == 'video':
            self.current_media_thread = threading.Thread(target=self.handle_video, args=(media_value,))
            self.current_media_thread.start()
        elif media_type == 'topic':
            self.handle_topic(media_value)

    def handle_sentence(self, text):
        image = np.full((self.screen_height, self.screen_width, 3), (20, 20, 20), dtype=np.uint8)
        y0, dy = 50, 40
        for i, line in enumerate(text.split('\\n')):
            cv2.putText(image, line, (50, y0 + i * dy), cv2.FONT_HERSHEY_SIMPLEX, 1, (255, 255, 255), 2)
        self.ui_publisher.publish(self.bridge.cv2_to_imgmsg(image, "bgr8"))

    def handle_image(self, path):
        try:
            image = cv2.imread(path)
            resized_image = cv2.resize(image, (self.screen_width, self.screen_height))
            self.ui_publisher.publish(self.bridge.cv2_to_imgmsg(resized_image, "bgr8"))
        except Exception as e:
            self.get_logger().error(f'Falha ao processar imagem: {e}')

    def handle_video(self, path):
        cap = cv2.VideoCapture(path)
        while not self.stop_media_flag.is_set():
            ret, frame = cap.read()
            if not ret:
                cap.set(cv2.CAP_PROP_POS_FRAMES, 0)
                continue
            resized_frame = cv2.resize(frame, (self.screen_width, self.screen_height))
            self.ui_publisher.publish(self.bridge.cv2_to_imgmsg(resized_frame, "bgr8"))
            time.sleep(1/30)
        cap.release()

    def handle_topic(self, topic_name):
        self.current_topic_subscriber = self.create_subscription(
            Image, topic_name, self.ui_publisher.publish, 10)

def main(args=None):
    rclpy.init(args=args)
    node = MediaDisplayNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
