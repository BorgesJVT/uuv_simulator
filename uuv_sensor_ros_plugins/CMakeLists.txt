cmake_minimum_required(VERSION 3.5)
project(uuv_sensor_ros_plugins)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  # we dont use add_compile_options with pedantic in message packages
  # because the Python C extensions dont comply with it
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic -Wno-inconsistent-missing-override")
endif()

if(WIN32)
  add_compile_definitions(
    # For math constants
    _USE_MATH_DEFINES
    # Minimize Windows namespace collision
    NOMINMAX
    WIN32_LEAN_AND_MEAN
  )
endif()

find_package(ament_cmake REQUIRED)
find_package(gazebo_dev REQUIRED)
find_package(uuv_gazebo_plugins REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(image_transport REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rclcpp REQUIRED)
find_package(gazebo_plugins REQUIRED)
find_package(uuv_sensor_ros_plugins_msgs REQUIRED)
find_package(message_filters REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2 REQUIRED)
find_package(laser_geometry REQUIRED)

find_package(Eigen3 REQUIRED)
find_package(OGRE REQUIRED)
find_package(OpenCV REQUIRED)
find_package(Protobuf REQUIRED)
find_package(Boost REQUIRED)
find_package(ignition-common3 REQUIRED)

option(ENABLE_PROFILER "Enable Ignition Profiler" FALSE)
if(ENABLE_PROFILER)
  find_package(ignition-common3 QUIET COMPONENTS profiler)
  if(ignition-common3_FOUND)
    add_definitions("-DIGN_PROFILER_ENABLE=1" "-DIGN_PROFILER_REMOTERY=1")
    message(STATUS "Profiler is active")
  else()
    message(WARNING "Can't find Ignition common3. Profiler will not be actived")
    add_definitions("-DIGN_PROFILER_ENABLE=0" "-DIGN_PROFILER_REMOTERY=0")
  endif()
endif()

set(UUV_SENSOR_ROS_PLUGINS_LIST "")

# Add Gazebo custom protobuf messages
set(PROTOBUF_IMPORT_DIRS "")
foreach(ITR ${GAZEBO_INCLUDE_DIRS})
  if(ITR MATCHES ".*gazebo-[0-9.]+$")
    set(PROTOBUF_IMPORT_DIRS "${ITR}/gazebo/msgs/proto")
  endif()
endforeach()

message(STATUS "PROTOBUF_IMPORT_DIRS = " ${PROTOBUF_IMPORT_DIRS})

set(GAZEBO_MSG_INCLUDE_DIRS)
foreach(ITR ${GAZEBO_INCLUDE_DIRS})
  if(ITR MATCHES ".*gazebo-[0-9.]+$")
    set(GAZEBO_MSG_INCLUDE_DIRS "${ITR}/gazebo/msgs")
  endif()
endforeach()

message(STATUS "GAZEBO_MSG_INCLUDE_DIRS = " ${GAZEBO_MSG_INCLUDE_DIRS})

file(GLOB msgs msgs/*.proto)

###########
## Build ##
###########

include_directories(
  include
  ${GAZEBO_INCLUDE_DIRS}
)

#link_directories(
#  ${GAZEBO_LIBRARY_DIRS}
#)

# protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS ${msgs})
# add_library(uuv_sensor_gazebo_msgs SHARED ${PROTO_SRCS})
# target_link_libraries(uuv_sensor_gazebo_msgs ${PROTOBUF_LIBRARY} ${GAZEBO_LIBRARIES})
# list(APPEND UUV_SENSOR_ROS_PLUGINS_LIST uuv_sensor_gazebo_msgs)

###############################################################################

#add_library(uuv_gazebo_ros_base_model_plugin
#  src/ROSBasePlugin.cc
#  src/ROSBaseModelPlugin.cc)
#ament_target_dependencies(uuv_gazebo_ros_base_model_plugin
#  gazebo_dev
#  rclcpp
#  std_msgs
#  uuv_sensor_ros_plugins_msgs
#)
#target_link_libraries(uuv_gazebo_ros_base_model_plugin ${GAZEBO_LIBRARIES})
#ament_export_libraries(uuv_gazebo_ros_base_model_plugin)
#list(APPEND UUV_SENSOR_ROS_PLUGINS_LIST uuv_gazebo_ros_base_model_plugin)

###############################################################################

#add_library(uuv_gazebo_ros_base_sensor_plugin
#  src/ROSBasePlugin.cc
#  src/ROSBaseSensorPlugin.cc)
#ament_target_dependencies(uuv_gazebo_ros_base_sensor_plugin
#  "gazebo_dev"
#)  
#target_link_libraries(uuv_gazebo_ros_base_sensor_plugin ${GAZEBO_LIBRARIES})
#ament_export_libraries(uuv_gazebo_ros_base_sensor_plugin)
#list(APPEND UUV_SENSOR_ROS_PLUGINS_LIST uuv_gazebo_ros_base_sensor_plugin)

###############################################################################

# add_library(uuv_gazebo_ros_gps_plugin
#   src/GPSROSPlugin.cc
#   src/ROSBasePlugin.cc
#   src/ROSBaseSensorPlugin.cc)
# ament_target_dependencies(uuv_gazebo_ros_gps_plugin
#   "gazebo_dev"
# )
# target_link_libraries(uuv_gazebo_ros_gps_plugin ${GAZEBO_LIBRARIES})
# ament_export_libraries(uuv_gazebo_ros_gps_plugin)
# list(APPEND UUV_SENSOR_ROS_PLUGINS_LIST uuv_gazebo_ros_gps_plugin)

# ###############################################################################

# add_library(uuv_gazebo_ros_pose_gt_plugin
#   src/PoseGTROSPlugin.cc
#   src/ROSBasePlugin.cc
#   src/ROSBaseModelPlugin.cc)
# ament_target_dependencies(uuv_gazebo_ros_pose_gt_plugin
#   "gazebo_dev"
# )
# target_link_libraries(uuv_gazebo_ros_pose_gt_plugin ${GAZEBO_LIBRARIES})
# ament_export_libraries(uuv_gazebo_ros_pose_gt_plugin)
# list(APPEND UUV_SENSOR_ROS_PLUGINS_LIST uuv_gazebo_ros_pose_gt_plugin)

# ###############################################################################

# add_library(uuv_gazebo_ros_subsea_pressure_plugin
#   src/SubseaPressureROSPlugin.cc
#   src/ROSBasePlugin.cc
#   src/ROSBaseModelPlugin.cc)
# ament_target_dependencies(uuv_gazebo_ros_subsea_pressure_plugin
#   "gazebo_dev"
# )
# target_link_libraries(uuv_gazebo_ros_subsea_pressure_plugin ${GAZEBO_LIBRARIES})
# ament_export_libraries(uuv_gazebo_ros_subsea_pressure_plugin)
# list(APPEND UUV_SENSOR_ROS_PLUGINS_LIST uuv_gazebo_ros_subsea_pressure_plugin)

# ###############################################################################

# add_library(uuv_gazebo_ros_dvl_plugin
#   src/DVLROSPlugin.cc
#   src/ROSBasePlugin.cc
#   src/ROSBaseModelPlugin.cc)
# ament_target_dependencies(uuv_gazebo_ros_dvl_plugin
#   "gazebo_dev"
# )
# target_link_libraries(uuv_gazebo_ros_dvl_plugin ${GAZEBO_LIBRARIES})
# ament_export_libraries(uuv_gazebo_ros_dvl_plugin uuv_sensor_gazebo_msgs)
# list(APPEND UUV_SENSOR_ROS_PLUGINS_LIST uuv_gazebo_ros_dvl_plugin)

# ###############################################################################

# add_library(uuv_gazebo_ros_magnetometer_plugin
#   src/MagnetometerROSPlugin.cc
#   src/ROSBasePlugin.cc
#   src/ROSBaseModelPlugin.cc)
# ament_target_dependencies(uuv_gazebo_ros_magnetometer_plugin
#   "gazebo_dev"
# )
# target_link_libraries(uuv_gazebo_ros_magnetometer_plugin ${GAZEBO_LIBRARIES})
# ament_export_libraries(uuv_gazebo_ros_magnetometer_plugin uuv_sensor_gazebo_msgs)
# list(APPEND UUV_SENSOR_ROS_PLUGINS_LIST uuv_gazebo_ros_magnetometer_plugin)

# ###############################################################################

# add_library(uuv_gazebo_ros_cpc_plugin
#   src/CPCROSPlugin.cc
#   src/ROSBasePlugin.cc
#   src/ROSBaseModelPlugin.cc)
# ament_target_dependencies(uuv_gazebo_ros_cpc_plugin
#   "gazebo_dev"
# )
# target_link_libraries(uuv_gazebo_ros_cpc_plugin ${GAZEBO_LIBRARIES})
# ament_export_libraries(uuv_gazebo_ros_cpc_plugin)
# list(APPEND UUV_SENSOR_ROS_PLUGINS_LIST uuv_gazebo_ros_cpc_plugin)

# ###############################################################################

# add_library(uuv_gazebo_ros_imu_plugin
#   src/IMUROSPlugin.cc
#   src/ROSBasePlugin.cc
#   src/ROSBaseModelPlugin.cc)
# ament_target_dependencies(uuv_gazebo_ros_imu_plugin
#   "gazebo_dev"
# )
# target_link_libraries(uuv_gazebo_ros_imu_plugin ${GAZEBO_LIBRARIES})
# ament_export_libraries(uuv_gazebo_ros_imu_plugin uuv_sensor_gazebo_msgs)
# list(APPEND UUV_SENSOR_ROS_PLUGINS_LIST uuv_gazebo_ros_imu_plugin)

# ###############################################################################

# add_library(uuv_gazebo_ros_rpt_plugin
#   src/RPTROSPlugin.cc
#   src/ROSBasePlugin.cc
#   src/ROSBaseModelPlugin.cc)
# ament_target_dependencies(uuv_gazebo_ros_rpt_plugin
#   "gazebo_dev"
# )
# target_link_libraries(uuv_gazebo_ros_rpt_plugin ${GAZEBO_LIBRARIES})
# ament_export_libraries(uuv_gazebo_ros_rpt_plugin uuv_sensor_gazebo_msgs)
# list(APPEND UUV_SENSOR_ROS_PLUGINS_LIST uuv_gazebo_ros_rpt_plugin)

# ###############################################################################

# add_library(uuv_gazebo_ros_camera_plugin src/UnderwaterCameraROSPlugin.cc)
# ament_target_dependencies(uuv_gazebo_ros_camera_plugin
#   "gazebo_dev"
# )
# target_link_libraries(uuv_gazebo_ros_camera_plugin ${GAZEBO_LIBRARIES})
# ament_export_libraries(uuv_gazebo_ros_camera_plugin)
# list(APPEND UUV_SENSOR_ROS_PLUGINS_LIST uuv_gazebo_ros_camera_plugin)

# ###############################################################################

# add_library(image_sonar_ros_plugin src/gazebo_ros_image_sonar.cpp)
# ament_target_dependencies(image_sonar_ros_plugin
#   "gazebo_dev"
# )
# target_link_libraries(image_sonar_ros_plugin ${OGRE_LIBRARIES} ${GAZEBO_LIBRARIES})
# ament_export_libraries(image_sonar_ros_plugin)
# list(APPEND UUV_SENSOR_ROS_PLUGINS_LIST image_sonar_ros_plugin)

ament_export_include_directories(include)
#ament_export_dependencies(rclcpp)
#ament_export_dependencies(gazebo_dev)
#ament_export_dependencies(gazebo_msgs)
#ament_export_dependencies(gazebo_ros)
ament_export_dependencies(std_msgs)
ament_export_dependencies(geometry_msgs)
ament_export_dependencies(uuv_sensor_ros_plugins_msgs)

ament_package()

#############
## Install ##
#############

install(TARGETS ${UUV_SENSOR_ROS_PLUGINS_LIST}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

install(DIRECTORY include/
  DESTINATION include/
)

# Install mesh files
install(DIRECTORY meshes urdf
        DESTINATION share/${PROJECT_NAME}/
)
