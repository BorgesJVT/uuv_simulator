cmake_minimum_required(VERSION 3.5)
project(uuv_gazebo_ros_plugins)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
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
find_package(gazebo REQUIRED)
find_package(gazebo_dev REQUIRED)
#find_package(ignition-common3 QUIET REQUIRED COMPONENTS profiler)
find_package(rclcpp)
find_package(sensor_msgs)
find_package(geometry_msgs)
find_package(std_msgs)
find_package(visualization_msgs)
find_package(geometry_msgs)
find_package(tf2 REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(uuv_gazebo_plugins REQUIRED)
find_package(uuv_gazebo_ros_plugins_msgs REQUIRED)
find_package(ignition-common3 REQUIRED)

set(UUV_GAZEBO_ROS_PLUGINS_LIST "")

include_directories(
  ${PROJECT_SOURCE_DIR}/include
  ${GAZEBO_INCLUDE_DIRS}
  ${GAZEBO_MSG_INCLUDE_DIRS}
  ${uuv_gazebo_plugins_INCLUDE_DIRS}
)

link_directories(
  ${GAZEBO_LIBRARY_DIRS}
)

# add_library(uuv_fin_ros_plugin src/FinROSPlugin.cc)
# ament_target_dependencies(uuv_fin_ros_plugin
#   gazebo_dev
#   geometry_msgs
# )
# target_link_libraries(uuv_fin_ros_plugin 
#   ${GAZEBO_LIBRARIES} 
#   ${gazebo_dev_LIBRARIES}
# )
# ament_export_libraries(uuv_fin_ros_plugin)
# list(APPEND UUV_GAZEBO_ROS_PLUGINS_LIST uuv_fin_ros_plugin)

#add_library(uuv_thruster_ros_plugin SHARED src/ThrusterROSPlugin.cc)
#target_link_libraries(uuv_thruster_ros_plugin ${catkin_LIBRARIES})
#ament_target_dependencies(uuv_thruster_ros_plugin
#  "gazebo_dev"
#  "rclcpp"
#  "uuv_gazebo_ros_plugins_msgs"
#)
#ament_export_libraries(uuv_thruster_ros_plugin)
#list(APPEND UUV_GAZEBO_ROS_PLUGINS_LIST uuv_thruster_ros_plugin)

# add_library(uuv_underwater_object_ros_plugin src/UnderwaterObjectROSPlugin.cc)
# #target_link_libraries(uuv_underwater_object_ros_plugin ${catkin_LIBRARIES})
# ament_target_dependencies(uuv_underwater_object_ros_plugin
#   "gazebo_dev"
# )
# #add_dependencies(uuv_underwater_object_ros_plugin ${catkin_EXPORTED_TARGETS})
# ament_export_libraries(uuv_underwater_object_ros_plugin)
# list(APPEND UUV_GAZEBO_ROS_PLUGINS_LIST uuv_underwater_object_ros_plugin)

add_library(uuv_joint_state_publisher SHARED src/JointStatePublisher.cc)
ament_target_dependencies(uuv_joint_state_publisher
  "gazebo_dev"
  "rclcpp"
  "sensor_msgs"
)
list(APPEND UUV_GAZEBO_ROS_PLUGINS_LIST uuv_joint_state_publisher)

# add_library(uuv_accelerations_test_plugin src/AccelerationsTestPlugin.cc)
# #target_link_libraries(uuv_accelerations_test_plugin ${GAZEBO_LIBRARIES} ${catkin_LIBRARIES})
# ament_target_dependencies(uuv_accelerations_test_plugin
#   "gazebo_dev"
# )
# list(APPEND UUV_GAZEBO_ROS_PLUGINS_LIST uuv_accelerations_test_plugin)

# add_library(linear_battery_ros_plugin src/LinearBatteryROSPlugin.cc)
# #target_link_libraries(linear_battery_ros_plugin LinearBatteryPlugin ${catkin_LIBRARIES})
# ament_target_dependencies(linear_battery_ros_plugin
#   "gazebo_dev"
# )
# list(APPEND UUV_GAZEBO_ROS_PLUGINS_LIST linear_battery_ros_plugin)

# add_library(custom_battery_consumer_ros_plugin src/CustomBatteryConsumerROSPlugin.cc)
# #target_link_libraries(custom_battery_consumer_ros_plugin ${catkin_LIBRARIES})
# list(APPEND UUV_GAZEBO_ROS_PLUGINS_LIST custom_battery_consumer_ros_plugin)

ament_export_include_directories(include)

ament_package()

#############
## Install ##
#############

install(TARGETS ${UUV_GAZEBO_ROS_PLUGINS_LIST}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION lib
  FILES_MATCHING PATTERN "*.hh"
  PATTERN "*~" EXCLUDE
)

# # Install urdf files
install(DIRECTORY urdf
        DESTINATION share/${PROJECT_NAME}/
        PATTERN "*~" EXCLUDE)
