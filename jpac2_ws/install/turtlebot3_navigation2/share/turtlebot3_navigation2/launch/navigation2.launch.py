
# -- coding: utf-8 --


# ====== LOCALIZATION //////////// ESTE SIIIII ////////////  ======


import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    use_sim_time = LaunchConfiguration('use_sim_time', default='true')

    # Usa TU paquete para ubicar RViz y params por defecto
    pkg_share = get_package_share_directory('turtlebot3_navigation2')



    # Mapa 
    default_map = os.path.expanduser('/home/leyla/Desktop/nexus_ws/src/turtlebot3_navigation2/map/custom_map.yaml')
    map_arg = LaunchConfiguration('map', default=default_map)




    # Params por defecto: un YAML tuyo dentro del paquete
    default_params = os.path.join(pkg_share, 'param', 'navegation2.yaml')
    params_arg = LaunchConfiguration('params_file', default=default_params)

    # RViz config existente del paquete (puedes cambiarlo si tienes otro)
    rviz_config_dir = os.path.join(pkg_share, 'rviz', 'tb3_navigation2.rviz')

    # Permitir apagar RViz si quieres
    use_rviz = LaunchConfiguration('use_rviz', default='true')

    nav2_launch_file_dir = os.path.join(get_package_share_directory('nav2_bringup'), 'launch')

    return LaunchDescription([
        DeclareLaunchArgument(
            'map',
            default_value=default_map,
            description='Ruta absoluta a tu mapa YAML'
        ),
        DeclareLaunchArgument(
            'params_file',
            default_value=default_params,
            description='Ruta absoluta al archivo de parámetros de Nav2'
        ),
        DeclareLaunchArgument(
            'use_sim_time',
            default_value='true',
            description='Usar tiempo de simulación (Gazebo)'
        ),
        DeclareLaunchArgument(
            'use_rviz',
            default_value='true',
            description='Lanzar RViz o no'
        ),

        # Trae Nav2
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([nav2_launch_file_dir, '/bringup_launch.py']),
            launch_arguments={
                'map': map_arg,
                'use_sim_time': use_sim_time,
                'params_file': params_arg
            }.items(),
        ),

        # RViz (opcional)
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            arguments=['-d', rviz_config_dir],
            parameters=[{'use_sim_time': use_sim_time}],
            output='screen',
            condition=IfCondition(use_rviz),
        ),
    ])










# # navigation.launch.py
# # -*- coding: utf-8 -*-
# import os
# from ament_index_python.packages import get_package_share_directory
# from launch import LaunchDescription
# from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
# from launch.conditions import IfCondition
# from launch.launch_description_sources import PythonLaunchDescriptionSource
# from launch.substitutions import LaunchConfiguration
# from launch_ros.actions import Node

# def generate_launch_description():
#     use_sim_time = LaunchConfiguration('use_sim_time', default='true')

#     pkg_share = get_package_share_directory('turtlebot3_navigation2')

#     # YAML en modo SLAM (sin map_server ni amcl) -> ver punto 3
#     default_params = os.path.join(pkg_share, 'param', 'leyla_nav2_slam.yaml')
#     params_arg = LaunchConfiguration('params_file', default=default_params)

#     rviz_config_dir = os.path.join(pkg_share, 'rviz', 'tb3_navigation2.rviz')
#     use_rviz = LaunchConfiguration('use_rviz', default='true')

#     nav2_launch_dir = os.path.join(get_package_share_directory('nav2_bringup'), 'launch')

#     return LaunchDescription([
#         DeclareLaunchArgument('params_file', default_value=default_params,
#                               description='YAML de Nav2 (modo SLAM)'),
#         DeclareLaunchArgument('use_sim_time', default_value='true',
#                               description='Usar tiempo de simulación'),
#         DeclareLaunchArgument('use_rviz', default_value='true',
#                               description='Lanzar RViz'),

#         # SOLO NAVEGACIÓN (planner, controller, bt_navigator, behavior_server)
#         IncludeLaunchDescription(
#             PythonLaunchDescriptionSource([nav2_launch_dir, '/navigation_launch.py']),
#             launch_arguments={
#                 'use_sim_time': use_sim_time,
#                 'params_file': params_arg,
#                 'autostart': 'true'
#             }.items(),
#         ),

#         # RViz (opcional)
#         Node(
#             package='rviz2',
#             executable='rviz2',
#             name='rviz2',
#             arguments=['-d', rviz_config_dir],
#             parameters=[{'use_sim_time': use_sim_time}],
#             output='screen',
#             condition=IfCondition(use_rviz),
#         ),
#     ])


















