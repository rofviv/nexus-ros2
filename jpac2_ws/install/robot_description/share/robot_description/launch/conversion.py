from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    pc2_to_scan = Node(
        package='pointcloud_to_laserscan',
        executable='cloud_to_scan',
        name='cloud_to_scan',
        remappings=[
            ('cloud', '/points'),
            ('scan',  '/scan')
        ],
        parameters=[{
            'target_frame': 'lidar3d_optical_link',  # debe existir en tu TF
            'transform_tolerance': 0.01,
            'min_height': -0.05,      # rebanada vertical
            'max_height':  0.05,
            'angle_min': -3.14159,
            'angle_max':  3.14159,
            # 'angle_increment': 0.0058,  # opcional; si no se fija, el nodo lo calcula
            'range_min': 0.40,
            'range_max': 2.50
        }]
    )

    return LaunchDescription([pc2_to_scan])
