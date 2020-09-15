cmake_minimum_required(VERSION 3.5)
project(uuv_gazebo_plugins)

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
find_package(gazebo_ros REQUIRED)
find_package(gazebo_msgs REQUIRED)
find_package(Boost REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(Protobuf REQUIRED)
find_package(ignition-common3 QUIET COMPONENTS profiler)

file(MAKE_DIRECTORY ${PROJECT_BINARY_DIR}/msgs)

set(UUV_GAZEBO_PLUGINS_LIST "")

# add_subdirectory(msgs)
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

#catkin_package(
#  INCLUDE_DIRS
#    include
#    ${CMAKE_CURRENT_BINARY_DIR} # for generated messages
#    ${GAZEBO_MSG_INCLUDE_DIRS}
#  LIBRARIES
#    uuv_underwater_object_plugin
#    uuv_thruster_plugin
#    uuv_fin_plugin
#    uuv_dynamics
#)

include_directories(${PROJECT_SOURCE_DIR}/include
                    ${CMAKE_CURRENT_BINARY_DIR} # for generated messages
                    ${Boost_INCLUDE_DIR}
                    ${GAZEBO_INCLUDE_DIRS}
                    ${SDF_INCLUDE_DIRS}
                    ${GAZEBO_MSG_INCLUDE_DIRS}
                    ${EIGEN3_INCLUDE_DIRS})

link_directories(${EIGEN3_LIBRARY_DIRS} ${GAZEBO_INCLUDE_DIRS} ${gazebo_dev_LIBRARY_DIRS})

###########
## Build ##
###########

protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS ${msgs})
add_library(uuv_gazebo_plugins_msgs SHARED ${PROTO_SRCS})
target_link_libraries(uuv_gazebo_plugins_msgs ${PROTOBUF_LIBRARY})
list(APPEND UUV_GAZEBO_PLUGINS_LIST uuv_gazebo_plugins_msgs)

add_library(uuv_dynamics SHARED
    src/Dynamics.cc
)
target_include_directories(uuv_dynamics PUBLIC include)
ament_target_dependencies(uuv_dynamics
  "gazebo_dev"
)
target_link_libraries(uuv_dynamics ${gazebo_LIBRARIES})
target_compile_definitions(uuv_dynamics
  PRIVATE BUILDING_DLL
)
ament_export_libraries(uuv_dynamics)
# if(TRUE)
#   target_include_directories(uuv_dynamics PUBLIC ${ignition-common3_INCLUDE_DIRS})
#   target_link_libraries(uuv_dynamics ${ignition-common3_LIBRARIES})
# endif()
list(APPEND UUV_GAZEBO_PLUGINS_LIST uuv_dynamics)

add_library(uuv_fin_plugin
    src/LiftDragModel.cc
    src/FinPlugin.cc
)
#target_include_directories(uuv_fin_plugin PUBLIC include)
ament_target_dependencies(uuv_fin_plugin
    "gazebo_dev"
)
target_link_libraries(uuv_fin_plugin
  uuv_dynamics
  uuv_gazebo_plugins_msgs
  ${Boost_LIBRARIES}
)
ament_export_libraries(uuv_fin_plugin)
list(APPEND UUV_GAZEBO_PLUGINS_LIST uuv_fin_plugin)

add_library(uuv_underwater_object_plugin
    src/HydrodynamicModel.cc
    src/BuoyantObject.cc
    src/UnderwaterObjectPlugin.cc
)
ament_target_dependencies(uuv_underwater_object_plugin
    "gazebo_dev"
)
#target_link_libraries(uuv_underwater_object_plugin ${EIGEN3_LIBRARIES})
ament_export_libraries(uuv_underwater_object_plugin)
list(APPEND UUV_GAZEBO_PLUGINS_LIST uuv_underwater_object_plugin)

add_library(uuv_thruster_plugin
  src/ThrusterConversionFcn.cc
  src/ThrusterPlugin.cc
)
ament_target_dependencies(uuv_thruster_plugin
  "gazebo_dev"
)
target_link_libraries(uuv_thruster_plugin 
  uuv_dynamics
  uuv_gazebo_plugins_msgs
  #${EIGEN3_LIBRARIES}
  #${Boost_LIBRARIES}
)
ament_export_libraries(uuv_thruster_plugin)
list(APPEND UUV_GAZEBO_PLUGINS_LIST uuv_thruster_plugin)

add_library(umbilical_plugin
  src/UmbilicalModel.cc
  src/UmbilicalPlugin.cc
)
ament_target_dependencies(umbilical_plugin
  ${Boost_LIBRARIES}
  "gazebo_dev"
)
ament_export_libraries(umbilical_plugin)
list(APPEND UUV_GAZEBO_PLUGINS_LIST umbilical_plugin)

ament_export_include_directories(include)
#ament_export_dependencies(rclcpp)
#ament_export_dependencies(gazebo_dev)
#ament_export_dependencies(gazebo_msgs)
#ament_export_dependencies(gazebo_ros)
ament_export_dependencies(geometry_msgs)

ament_package()

#############
## Install ##
#############

install(TARGETS ${UUV_GAZEBO_PLUGINS_LIST}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION include/${PROJECT_NAME}/
  FILES_MATCHING PATTERN "*.hh"
  PATTERN "*~" EXCLUDE
)

install(DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/
  DESTINATION include/
  FILES_MATCHING PATTERN "*.pb.*"
  PATTERN "*~" EXCLUDE
)
