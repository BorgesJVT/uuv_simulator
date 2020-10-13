################################################################################
# Set minimum required version of cmake, project name and compile options
################################################################################
cmake_minimum_required(VERSION 3.5)
project(uuv_descriptions)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

################################################################################
# Find ament packages and libraries for ament and system dependencies
################################################################################
find_package(ament_cmake REQUIRED)
find_package(urdf REQUIRED)


find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2 REQUIRED)

# Install python scripts
# catkin_install_python(PROGRAMS scripts/spawn_model
#                       DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})

# add_executable(uuv_message_to_tf
#   src/message_to_tf.cpp
# )
# ament_target_dependencies(uuv_message_to_tf
#   "rclcpp"
#   "geometry_msgs"
#   "sensor_msgs"
#   "nav_msgs"
#   "tf2_ros"
#   "tf2"
# )

################################################################################
# Install
################################################################################

# install(TARGETS uuv_message_to_tf
#   ARCHIVE DESTINATION lib
#   LIBRARY DESTINATION lib
#   RUNTIME DESTINATION bin
# )


install(DIRECTORY launch meshes robots urdf
  DESTINATION share/${PROJECT_NAME}
)

################################################################################
# Macro for ament package
################################################################################
ament_package()
