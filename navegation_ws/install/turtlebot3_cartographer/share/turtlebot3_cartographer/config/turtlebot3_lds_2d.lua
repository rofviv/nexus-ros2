
-- /* map → odom */

include "map_builder.lua"
include "trajectory_builder.lua"


options = {

  map_builder = MAP_BUILDER,
  trajectory_builder = TRAJECTORY_BUILDER,

  map_frame = "map",
  tracking_frame = "imu_link", -- /* estimar tu pose */
  published_frame = "odom",    -- /* publicar su “pose” - base_footprint */
  odom_frame = "odom",         -- /* odom de gazebo */


  provide_odom_frame = false,   -- /*  NO generes tu propio odom  - 'odom' (lo da Gazebo) */


  publish_frame_projected_to_2d = true,  -- /* orientación a 2D */
  use_odometry = true,           
  use_nav_sat = false,                   -- /* GPS */
  use_landmarks = false,                 -- /* BALIZAS */
  num_laser_scans = 1,                   -- /* usas 1 /scan <-------------------- */
  num_multi_echo_laser_scans = 0,
  num_subdivisions_per_laser_scan = 1, 
  num_point_clouds = 0,                  -- /*no usas LIDAR 3D aquí <-------------*/
  lookup_transform_timeout_sec = 0.2,    -- cuánto espera TF <--------------------

  submap_publish_period_sec = 0.3,       -- cada cuánto publica submapas (bloques de mapa)
  pose_publish_period_sec = 5e-3,        -- cada cuánto publica pose
  trajectory_publish_period_sec = 30e-3, -- cada cuánto publica la trayectoria
  rangefinder_sampling_ratio = 1.,       -- usa 100% de las lecturas láser
  odometry_sampling_ratio = 1.,
  fixed_frame_pose_sampling_ratio = 1.,
  imu_sampling_ratio = 1.,
  landmarks_sampling_ratio = 1.,
}



MAP_BUILDER.use_trajectory_builder_2d = true -- SLAM 2D (no 3D) <--------------------

TRAJECTORY_BUILDER_2D.min_range = 0.12
TRAJECTORY_BUILDER_2D.max_range = 3.5
TRAJECTORY_BUILDER_2D.missing_data_ray_length = 3.                    -- qué distancia asumir cuando falta dato
TRAJECTORY_BUILDER_2D.use_imu_data = false                            -- no /imu , true si lo tienes
TRAJECTORY_BUILDER_2D.use_online_correlative_scan_matching = true     -- mejora el “encaje” de scans
TRAJECTORY_BUILDER_2D.motion_filter.max_angle_radians = math.rad(0.1) -- filtra ruido si giras muy poco

POSE_GRAPH.constraint_builder.min_score = 0.65
POSE_GRAPH.constraint_builder.global_localization_min_score = 0.7

-- POSE_GRAPH.optimize_every_n_nodes = 0

return options




















-- -- /* map → odom */

-- include "map_builder.lua"
-- include "trajectory_builder.lua"

-- options = {
--   map_builder = MAP_BUILDER,
--   trajectory_builder = TRAJECTORY_BUILDER,

--   map_frame = "map",
--   tracking_frame = "imu_link",
--   published_frame = "base_footprint", -- base_footprint
--   odom_frame = "odom",

--   provide_odom_frame = true,   -- Cartographer crea 'odom'
--   publish_frame_projected_to_2d = true,

--   use_odometry = false,        -- ignora /odom externo
--   use_nav_sat = false,
--   use_landmarks = false,

--   num_laser_scans = 0,
--   num_multi_echo_laser_scans = 0,
--   num_subdivisions_per_laser_scan = 1,
--   num_point_clouds = 1,

--   lookup_transform_timeout_sec = 0.5,
--   submap_publish_period_sec = 0.3,
--   pose_publish_period_sec = 5e-3,
--   trajectory_publish_period_sec = 30e-3,
--   rangefinder_sampling_ratio = 1.,
--   odometry_sampling_ratio = 1.,
--   fixed_frame_pose_sampling_ratio = 1.,
--   imu_sampling_ratio = 1.,
--   landmarks_sampling_ratio = 1.,
-- }

-- MAP_BUILDER.use_trajectory_builder_3d = true

-- TRAJECTORY_BUILDER_3D.min_range = 0.30
-- TRAJECTORY_BUILDER_3D.max_range = 20.0
-- TRAJECTORY_BUILDER_3D.num_accumulated_range_data = 2
-- TRAJECTORY_BUILDER_3D.voxel_filter_size = 0.07



-- --TRAJECTORY_BUILDER_3D.use_imu_data = true
-- TRAJECTORY_BUILDER_3D.imu_gravity_time_constant = 3.0
-- TRAJECTORY_BUILDER_3D.use_online_correlative_scan_matching = false



-- POSE_GRAPH.optimize_every_n_nodes = 90
-- POSE_GRAPH.constraint_builder.min_score = 0.55
-- POSE_GRAPH.constraint_builder.global_localization_min_score = 0.60

-- return options









-- --TRAJECTORY_BUILDER_3D.use_imu_data = false
-- --TRAJECTORY_BUILDER_3D.use_online_correlative_scan_matching = true