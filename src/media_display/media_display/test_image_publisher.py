import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import numpy as np

class TestImagePublisher(Node):
    def __init__(self):
        super().__init__('test_image_publisher')
        self.publisher_ = self.create_publisher(Image, '/test_image_topic', 10)
        self.timer = self.create_timer(1.0, self.timer_callback)
        self.bridge = CvBridge()
        self.get_logger().info('Nó de teste publicando em /test_image_topic')

    def timer_callback(self):
        img = np.full((100, 200, 3), (0, 255, 0), dtype=np.uint8)
        cv2.circle(img, (100, 50), 30, (255, 255, 255), -1)
        self.publisher_.publish(self.bridge.cv2_to_imgmsg(img, "bgr8"))

def main(args=None):
    rclpy.init(args=args)
    node = TestImagePublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
