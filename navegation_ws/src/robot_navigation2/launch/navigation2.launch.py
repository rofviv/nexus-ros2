import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


# navigation using lidar 3d , conversion de point to laser scan


def generate_launch_description():

    use_sim_time = LaunchConfiguration('use_sim_time', default='true')

    # pakage .yaml
    default_params = os.path.join(
        get_package_share_directory('robot_navigation2'),   
        'param', 'humble', 'conf_jpac2.yaml'
    )

    # map
    default_map = os.path.join(
        get_package_share_directory('robot_navigation2'),   
        'map', 'BIONDA.yaml'
    )

    param_dir = LaunchConfiguration('params_file', default=default_params)
    map_dir   = LaunchConfiguration('map',         default=default_map)

    nav2_launch_file_dir = os.path.join(get_package_share_directory('nav2_bringup'), 'launch')
    rviz_config_dir = os.path.join(
        get_package_share_directory('turtlebot3_navigation2'),
        'rviz',
        'tb3_navigation2.rviz'
    )

    return LaunchDescription([
        DeclareLaunchArgument(
            'map',
            default_value=map_dir,
            description='Ruta al YAML del mapa (map_server).',
        ),
        DeclareLaunchArgument(
            'params_file',
            default_value=param_dir,
            description='Ruta al YAML de parámetros de Nav2.',
        ),
        DeclareLaunchArgument(
            'use_sim_time',
            default_value='true',
            description='Usar reloj de simulación.',
        ),
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([nav2_launch_file_dir, '/bringup_launch.py']),
            launch_arguments={
                'map': map_dir,
                'use_sim_time': use_sim_time,
                'params_file': param_dir
            }.items(),
        ),
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            arguments=['-d', rviz_config_dir],
            parameters=[{'use_sim_time': use_sim_time}],
            output='screen'
        ),
    ])
