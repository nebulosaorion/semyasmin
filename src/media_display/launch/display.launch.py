from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch_ros.actions import Node

def generate_launch_description():
    ros_node_port = 9090  # Porta padrão do rosbridge

    return LaunchDescription([
        # Inicia o rosbridge_server
        Node(
            package='rosbridge_server',
            executable='rosbridge_websocket',
            name='rosbridge_server',
            output='screen',
            parameters=[{'port': ros_node_port}]
        ),

        # Inicia o display_node
        ExecuteProcess(
            cmd=['python3', 'src/media_display/media_display/display_node.py'],
            cwd='/home/mii/ros2_ws',
            output='screen'
        ),

        # Abre automaticamente o Foxglove Studio no navegador
        ExecuteProcess(
            cmd=[
                'xdg-open',
                f'https://studio.foxglove.dev/?ds=rosbridge-websocket&ds.url=ws://localhost:{ros_node_port}'
            ],
            output='screen'
        )
    ])
