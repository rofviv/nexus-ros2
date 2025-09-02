#!/usr/bin/env python3
import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess, TimerAction, IncludeLaunchDescription, GroupAction
from launch.conditions import IfCondition, UnlessCondition
from launch.substitutions import Command, LaunchConfiguration
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue

def generate_launch_description():
    pkg_share = get_package_share_directory('robot_description')
    pkg_nav2 = get_package_share_directory('turtlebot3_navigation2')
    nav2_bringup_dir = get_package_share_directory('nav2_bringup')

    # Rutas por defecto
    default_model_path = os.path.join(pkg_share, 'urdf', 'JPAC2.xacro')
    default_rviz_path  = os.path.join(pkg_share, 'rviz', 'min.rviz')
    world_path         = os.path.join(pkg_share, 'world', 'creado.sdf')
    
    # Archivos de configuración
    # ✅ Usa el archivo de parámetros corregido que me proporcionaste.
    nav2_params_path = os.path.join(pkg_nav2, 'param', '/home/leyla/Desktop/nexus_ws/src/turtlebot3_navigation2/param/leyla_nav2.yaml')
    # Configuración de RViz para navegación.
    rviz_config_nav = os.path.join(pkg_nav2, 'rviz', 'tb3_navigation2.rviz')

    # Argumentos
    use_sim_time = LaunchConfiguration('use_sim_time', default='true')
    model_arg = DeclareLaunchArgument(
        name='model', default_value=default_model_path,
        description='Absolute path to robot xacro/urdf file'
    )
    rviz_arg = DeclareLaunchArgument(
        name='rvizconfig', default_value=default_rviz_path,
        description='Absolute path to rviz config file'
    )

    # Robot_description a partir de xacro
    meshes_abs = os.path.join(pkg_share, 'meshes', 'visual')
    robot_description_content = Command([
        'xacro ',
        LaunchConfiguration('model'),
        ' ',
        'meshes_path:=', meshes_abs
    ])
    robot_description = ParameterValue(robot_description_content, value_type=str)

    # Nodos básicos del robot y Gazebo
    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{
            'robot_description': robot_description,
            'use_sim_time': use_sim_time
        }]
    )

    joint_state_publisher_node = Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
        parameters=[{'use_sim_time': use_sim_time}]
    )
    
    gazebo = ExecuteProcess(
        cmd=[
            'gazebo', '--verbose',
            '-s', 'libgazebo_ros_init.so',
            '-s', 'libgazebo_ros_factory.so',
            world_path
        ],
        output='screen'
    )
    spawn = Node(
        package='gazebo_ros',
        executable='spawn_entity.py',
        arguments=['-entity', 'JPAC2', '-topic', 'robot_description', '-robot_namespace', ''],
        output='screen'
    )
    spawn_after_delay = TimerAction(period=3.0, actions=[spawn])

    # Scan derivado desde la nube 3D (ajustado para usar use_sim_time)
    scan_from_l1 = Node(
        package='robot_description',
        executable='dist.py',
        name='robot_height_scan',
        output='screen',
        parameters=[{
            'input_cloud': '/points',
            'scan_topic':  '/scan',
            'scan_frame':  'lidar3d_scan',
            'use_sim_time': use_sim_time,
            'tilt_deg': 90.0,
            'pitch_min_deg':  0.5,
            'pitch_max_deg': 22.0,
            'yaw_min_deg':  -160.0,
            'yaw_max_deg':   160.0,
            'bin_width_deg': 2.0,
            'range_min': 0.10,
            'range_max': 30.00,
            'percentile': 0.15,
            'stride':     1,
            'front_sector_deg': 180.0,
            'use_horizontal_range': True
        }]
    )

    # 🚨 SOLUCIÓN 1: Integrar el stack de navegación
    # Usamos GroupAction para asegurar que los nodos de navegación se lancen de forma coherente.
    nav_group = GroupAction(
        actions=[
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    os.path.join(nav2_bringup_dir, 'launch', 'bringup_launch.py')
                ),
                launch_arguments={
                    'map': '/home/leyla/maps/custom_map.yaml',
                    'use_sim_time': use_sim_time,
                    'params_file': nav2_params_path
                }.items()
            )
        ]
    )

    # RViz (ahora con el config para navegación)
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', rviz_config_nav],
        parameters=[{'use_sim_time': use_sim_time}]
    )

    return LaunchDescription([
        # Argumentos
        model_arg,
        rviz_arg,
        
        # Nodos básicos del robot y Gazebo
        robot_state_publisher_node,
        joint_state_publisher_node,
        gazebo,
        spawn_after_delay,
        
        # Nodos de sensores
        scan_from_l1,
        
        # 🚨 SOLUCIÓN 1: El stack completo de Nav2
        nav_group,
        
        # RViz
        rviz_node,
    ])