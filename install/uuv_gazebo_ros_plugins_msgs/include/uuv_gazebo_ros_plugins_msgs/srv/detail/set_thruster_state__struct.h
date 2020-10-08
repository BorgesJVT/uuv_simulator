// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/SetThrusterState.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_THRUSTER_STATE__STRUCT_H_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_THRUSTER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SetThrusterState in the package uuv_gazebo_ros_plugins_msgs.
typedef struct uuv_gazebo_ros_plugins_msgs__srv__SetThrusterState_Request
{
  bool on;
} uuv_gazebo_ros_plugins_msgs__srv__SetThrusterState_Request;

// Struct for a sequence of uuv_gazebo_ros_plugins_msgs__srv__SetThrusterState_Request.
typedef struct uuv_gazebo_ros_plugins_msgs__srv__SetThrusterState_Request__Sequence
{
  uuv_gazebo_ros_plugins_msgs__srv__SetThrusterState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_gazebo_ros_plugins_msgs__srv__SetThrusterState_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SetThrusterState in the package uuv_gazebo_ros_plugins_msgs.
typedef struct uuv_gazebo_ros_plugins_msgs__srv__SetThrusterState_Response
{
  bool success;
} uuv_gazebo_ros_plugins_msgs__srv__SetThrusterState_Response;

// Struct for a sequence of uuv_gazebo_ros_plugins_msgs__srv__SetThrusterState_Response.
typedef struct uuv_gazebo_ros_plugins_msgs__srv__SetThrusterState_Response__Sequence
{
  uuv_gazebo_ros_plugins_msgs__srv__SetThrusterState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_gazebo_ros_plugins_msgs__srv__SetThrusterState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_THRUSTER_STATE__STRUCT_H_
