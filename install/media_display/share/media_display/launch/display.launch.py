from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='rosbridge_server',
            executable='rosbridge_websocket',
            name='rosbridge_server',
            output='screen'
        ),
        Node(
            package='media_display',
            executable='display_node',
            name='media_display_node',
            output='screen',
            prefix='python3'
        )
    ])
