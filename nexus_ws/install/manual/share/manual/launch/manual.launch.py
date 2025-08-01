from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([

        Node(package='joy', executable='joy_node', name='joy_node'),

        Node(package='manual', executable='joystick', name='joystick'),

        Node(package='manual', executable='control', name='control'),
    ])
