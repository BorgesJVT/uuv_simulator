// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/SetThrusterEfficiency.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_THRUSTER_EFFICIENCY__STRUCT_H_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_THRUSTER_EFFICIENCY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SetThrusterEfficiency in the package uuv_gazebo_ros_plugins_msgs.
typedef struct uuv_gazebo_ros_plugins_msgs__srv__SetThrusterEfficiency_Request
{
  double efficiency;
} uuv_gazebo_ros_plugins_msgs__srv__SetThrusterEfficiency_Request;

// Struct for a sequence of uuv_gazebo_ros_plugins_msgs__srv__SetThrusterEfficiency_Request.
typedef struct uuv_gazebo_ros_plugins_msgs__srv__SetThrusterEfficiency_Request__Sequence
{
  uuv_gazebo_ros_plugins_msgs__srv__SetThrusterEfficiency_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_gazebo_ros_plugins_msgs__srv__SetThrusterEfficiency_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SetThrusterEfficiency in the package uuv_gazebo_ros_plugins_msgs.
typedef struct uuv_gazebo_ros_plugins_msgs__srv__SetThrusterEfficiency_Response
{
  bool success;
} uuv_gazebo_ros_plugins_msgs__srv__SetThrusterEfficiency_Response;

// Struct for a sequence of uuv_gazebo_ros_plugins_msgs__srv__SetThrusterEfficiency_Response.
typedef struct uuv_gazebo_ros_plugins_msgs__srv__SetThrusterEfficiency_Response__Sequence
{
  uuv_gazebo_ros_plugins_msgs__srv__SetThrusterEfficiency_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_gazebo_ros_plugins_msgs__srv__SetThrusterEfficiency_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_THRUSTER_EFFICIENCY__STRUCT_H_
