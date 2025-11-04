#!/usr/bin/env python3
import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess, TimerAction, IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration, Command
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue

def generate_launch_description():
    pkg_share = get_package_share_directory('robot_description')

    # Rutas por defecto
    default_model_path = os.path.join(pkg_share, 'urdf', 'JPAC2.xacro')
    default_rviz_path  = os.path.join(pkg_share, 'rviz', 'urdf.rviz')
    world_path         = os.path.join(pkg_share, 'world', 'creado.sdf')
    slam_params_path   = os.path.join(pkg_share, 'config', 'slam_toolbox.yaml')

    # NAV2
    nav2_bringup_dir = get_package_share_directory('nav2_bringup')
    nav2_params_path = os.path.join(pkg_share, 'config', 'nav2_params.yaml')

    # -------------------- Args --------------------
    gui_arg = DeclareLaunchArgument(
        name='gui', default_value='false', choices=['true', 'false'],
        description='Enable joint_state_publisher_gui'
    )
    model_arg = DeclareLaunchArgument(
        name='model', default_value=default_model_path,
        description='Absolute path to robot xacro/urdf file'
    )
    rviz_arg = DeclareLaunchArgument(
        name='rvizconfig', default_value=default_rviz_path,
        description='Absolute path to rviz config file'
    )
    use_sim_time = DeclareLaunchArgument(
        name='use_sim_time', default_value='true'
    )
    map_arg = DeclareLaunchArgument(
        name='map_yaml',
        default_value='/home/leyla/maps/custom_map.yaml',
        description='Absolute path to the YAML map file'
    )

    # -------------------- robot_description --------------------
    meshes_abs = os.path.join(pkg_share, 'meshes', 'visual')
    robot_description_content = Command([
        'xacro ',
        LaunchConfiguration('model'),
        ' ',
        'meshes_path:=', meshes_abs
    ])
    robot_description = ParameterValue(robot_description_content, value_type=str)

    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{
            'robot_description': robot_description,
            'use_sim_time': LaunchConfiguration('use_sim_time'),
        }]
    )

    # -------------------- Gazebo + spawn --------------------
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
        arguments=['-entity', 'JPAC2', '-topic', 'robot_description'],
        output='screen'
    )
    spawn_after_delay = TimerAction(period=3.0, actions=[spawn])

    # -------------------- RViz --------------------
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', LaunchConfiguration('rvizconfig')],
        parameters=[{'use_sim_time': LaunchConfiguration('use_sim_time')}]
    )

    # -------------------- TF estático (LIDAR nivelado) --------------------
    lidar_level_tf = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='lidar3d_level_tf',
        # x y z yaw pitch roll parent child
        arguments=['0', '0', '0', '0', '0', '-1.57079632679',
                   'lidar3d_optical_link', 'lidar3d_scan']
    )
    lidar_level_tf_after_delay = TimerAction(period=2.0, actions=[lidar_level_tf])

    # -------------------- Scan derivado desde la nube 3D --------------------
    scan_from_l1 = Node(
        package='robot_description',
        executable='dist.py',
        name='robot_height_scan',
        output='screen',
        parameters=[{
            'input_cloud': '/points',
            'scan_topic':  '/scan',
            'scan_frame':  'lidar3d_scan',
            'use_sim_time': LaunchConfiguration('use_sim_time'),
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

    # ===================== MODO MAPA ESTÁTICO =====================
    # 1) MAP SERVER: publica /map y /map_metadata desde el YAML
    map_server = Node(
        package='nav2_map_server',
        executable='map_server',
        name='map_server',
        output='screen',
        parameters=[{
            'use_sim_time': LaunchConfiguration('use_sim_time'),
            'yaml_filename': LaunchConfiguration('map_yaml')
        }]
    )

    # 2) AMCL: alinea /scan al mapa y publica TF map->odom
    amcl = Node(
        package='nav2_amcl',
        executable='amcl',
        name='amcl',
        output='screen',
        parameters=[
            nav2_params_path,
            {
                'use_sim_time': LaunchConfiguration('use_sim_time'),
                'base_frame_id': 'base_link',  # tu base
                'odom_frame_id': 'odom',       # odometría de Gazebo
                'map_frame':  'map',           # frame del mapa
                'tf_broadcast': True           # AMCL publica map->odom
            }
        ],
        remappings=[('scan', '/scan')]          # asegura que AMCL lea tu láser
    )

    # 3) Lifecycle manager: activa automáticamente map_server y amcl
    lifecycle_manager = Node(
        package='nav2_lifecycle_manager',
        executable='lifecycle_manager',
        name='lifecycle_manager_localization',
        output='screen',
        parameters=[{
            'use_sim_time': LaunchConfiguration('use_sim_time'),
            'autostart': True,
            'node_names': ['map_server', 'amcl']
        }]
    )

    # (NO usar SLAM a la vez que mapa estático)
    # slam = Node(
    #     package='slam_toolbox',
    #     executable='sync_slam_toolbox_node',
    #     name='slam_toolbox',
    #     output='screen',
    #     parameters=[slam_params_path, {'use_sim_time': LaunchConfiguration('use_sim_time')}]
    # )

    return LaunchDescription([
        gui_arg, model_arg, rviz_arg, use_sim_time, map_arg,
        robot_state_publisher_node,

        gazebo,
        spawn_after_delay,

        rviz_node,
        lidar_level_tf_after_delay,
        scan_from_l1,

        # ===== Mapa + Localización =====
        map_server,
        amcl,
        lifecycle_manager,
    ])







# #!/usr/bin/env python3
# import os
# from ament_index_python.packages import get_package_share_directory
# from launch import LaunchDescription
# from launch.actions import DeclareLaunchArgument, ExecuteProcess, TimerAction, IncludeLaunchDescription
# from launch.substitutions import LaunchConfiguration
# from launch.launch_description_sources import PythonLaunchDescriptionSource
# from launch_ros.actions import Node
# from launch_ros.parameter_descriptions import ParameterValue
# from launch.substitutions import Command

# def generate_launch_description():
#     pkg_share = get_package_share_directory('robot_description')

#     # Rutas por defecto
#     default_model_path = os.path.join(pkg_share, 'urdf', 'JPAC2.xacro')
#     default_rviz_path  = os.path.join(pkg_share, 'rviz', 'urdf.rviz')
#     world_path         = os.path.join(pkg_share, 'world', 'creado.sdf')
#     slam_params_path   = os.path.join(pkg_share, 'config', 'slam_toolbox.yaml')

#     # NAV2
#     nav2_bringup_dir = get_package_share_directory('nav2_bringup')
#     nav2_params_path = os.path.join(pkg_share, 'config', 'nav2_params.yaml')

#     # -------------------- Args --------------------
#     gui_arg = DeclareLaunchArgument(
#         name='gui', default_value='false', choices=['true', 'false'],
#         description='Enable joint_state_publisher_gui'
#     )
#     model_arg = DeclareLaunchArgument(
#         name='model', default_value=default_model_path,
#         description='Absolute path to robot xacro/urdf file'
#     )
#     rviz_arg = DeclareLaunchArgument(
#         name='rvizconfig', default_value=default_rviz_path,
#         description='Absolute path to rviz config file'
#     )
#     use_sim_time = DeclareLaunchArgument(
#         name='use_sim_time', default_value='true'
#     )
#     # NUEVO: ruta al mapa yaml
#     map_arg = DeclareLaunchArgument(
#         name='map_yaml',
#         default_value='/home/leyla/maps/custom_map.yaml',
#         description='Absolute path to the YAML map file'
#     )

#     # -------------------- robot_description --------------------
#     meshes_abs = os.path.join(pkg_share, 'meshes', 'visual')
#     robot_description_content = Command([
#         'xacro ',
#         LaunchConfiguration('model'),
#         ' ',
#         'meshes_path:=', meshes_abs
#     ])
#     robot_description = ParameterValue(robot_description_content, value_type=str)

#     robot_state_publisher_node = Node(
#         package='robot_state_publisher',
#         executable='robot_state_publisher',
#         parameters=[{
#             'robot_description': robot_description,
#             'use_sim_time': LaunchConfiguration('use_sim_time'),
#         }]
#     )

#     # -------------------- Gazebo + spawn --------------------
#     gazebo = ExecuteProcess(
#         cmd=[
#             'gazebo', '--verbose',
#             '-s', 'libgazebo_ros_init.so',
#             '-s', 'libgazebo_ros_factory.so',
#             world_path
#         ],
#         output='screen'
#     )
#     spawn = Node(
#         package='gazebo_ros',
#         executable='spawn_entity.py',
#         arguments=['-entity', 'JPAC2', '-topic', 'robot_description'],
#         output='screen'
#     )
#     spawn_after_delay = TimerAction(period=3.0, actions=[spawn])

#     # -------------------- SLAM (NO usando mapa estático) --------------------
#     # slam = Node(
#     #     package='slam_toolbox',
#     #     executable='sync_slam_toolbox_node',
#     #     name='slam_toolbox',
#     #     output='screen',
#     #     parameters=[slam_params_path, {'use_sim_time': LaunchConfiguration('use_sim_time')}]
#     # )

#     # -------------------- RViz --------------------
#     rviz_node = Node(
#         package='rviz2',
#         executable='rviz2',
#         name='rviz2',
#         output='screen',
#         arguments=['-d', LaunchConfiguration('rvizconfig')],
#         parameters=[{'use_sim_time': LaunchConfiguration('use_sim_time')}]
#     )

#     # -------------------- TF estático (LIDAR nivelado) --------------------
#     lidar_level_tf = Node(
#         package='tf2_ros',
#         executable='static_transform_publisher',
#         name='lidar3d_level_tf',
#         arguments=['0', '0', '0', '0', '0', '-1.57079632679',
#                    'lidar3d_optical_link', 'lidar3d_scan']
#     )
#     lidar_level_tf_after_delay = TimerAction(period=2.0, actions=[lidar_level_tf])

#     # -------------------- Scan derivado desde la nube 3D --------------------
#     scan_from_l1 = Node(
#         package='robot_description',
#         executable='dist.py',
#         name='robot_height_scan',
#         output='screen',
#         parameters=[{
#             'input_cloud': '/points',
#             'scan_topic':  '/scan',
#             'scan_frame':  'lidar3d_scan',
#             'use_sim_time': LaunchConfiguration('use_sim_time'),
#             'tilt_deg': 90.0,
#             'pitch_min_deg':  0.5,
#             'pitch_max_deg': 22.0,
#             'yaw_min_deg':  -160.0,
#             'yaw_max_deg':   160.0,
#             'bin_width_deg': 2.0,
#             'range_min': 0.10,
#             'range_max': 30.00,
#             'percentile': 0.15,
#             'stride':     1,
#             'front_sector_deg': 180.0,
#             'use_horizontal_range': True
#         }]
#     )

#     # ===================== MODO MAPA ESTÁTICO =====================
#     # 1) MAP SERVER: publica /map y /map_metadata desde el YAML
#     map_server = Node(
#         package='nav2_map_server',
#         executable='map_server',
#         name='map_server',
#         output='screen',
#         parameters=[{
#             'use_sim_time': LaunchConfiguration('use_sim_time'),
#             'yaml_filename': LaunchConfiguration('map_yaml')
#         }]
#     )

#     # 2) AMCL: alinea /scan al mapa y publica TF map->odom
#     amcl = Node(
#         package='nav2_amcl',
#         executable='amcl',
#         name='amcl',
#         output='screen',
#         parameters=[nav2_params_path,  # puedes poner aquí tus params de AMCL
#                     {'use_sim_time': LaunchConfiguration('use_sim_time')}]
#         # si tu /scan no se llama /scan, remapea aquí:
#         # remappings=[('scan', '/scan')]
#     )

#     # 3) Lifecycle manager: arranca automáticamente map_server y amcl
#     lifecycle_manager = Node(
#         package='nav2_lifecycle_manager',
#         executable='lifecycle_manager',
#         name='lifecycle_manager_localization',
#         output='screen',
#         parameters=[{
#             'use_sim_time': LaunchConfiguration('use_sim_time'),
#             'autostart': True,
#             'node_names': ['map_server', 'amcl']
#         }]
#     )

#     # (OPCIONAL) Si prefieres usar el launch de nav2_bringup:
#     # localization = IncludeLaunchDescription(
#     #     PythonLaunchDescriptionSource(
#     #         os.path.join(nav2_bringup_dir, 'launch', 'localization_launch.py')
#     #     ),
#     #     launch_arguments={
#     #         'use_sim_time': 'true',
#     #         'map': LaunchConfiguration('map_yaml'),
#     #         'params_file': nav2_params_path,
#     #         'autostart': 'true'
#     #     }.items()
#     # )

#     return LaunchDescription([
#         gui_arg, model_arg, rviz_arg, use_sim_time, map_arg,
#         robot_state_publisher_node,

#         gazebo,
#         spawn_after_delay,

#         # slam,   # ← NO si usas mapa estático
#         rviz_node,
#         lidar_level_tf_after_delay,
#         scan_from_l1,

#         # ===== Mapa + Localización =====
#         map_server,
#         amcl,
#         lifecycle_manager,

#         # localization,  # alternativa al bloque de arriba
#         # nav2,          # cuando ya quieras planner, controller, BTs, etc.
#     ])
