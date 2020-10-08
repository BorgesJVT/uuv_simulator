// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_world_ros_plugins_msgs:srv/SetCurrentVelocity.idl
// generated code does not contain a copyright notice

#ifndef UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_VELOCITY__STRUCT_H_
#define UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_VELOCITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SetCurrentVelocity in the package uuv_world_ros_plugins_msgs.
typedef struct uuv_world_ros_plugins_msgs__srv__SetCurrentVelocity_Request
{
  double velocity;
  double horizontal_angle;
  double vertical_angle;
} uuv_world_ros_plugins_msgs__srv__SetCurrentVelocity_Request;

// Struct for a sequence of uuv_world_ros_plugins_msgs__srv__SetCurrentVelocity_Request.
typedef struct uuv_world_ros_plugins_msgs__srv__SetCurrentVelocity_Request__Sequence
{
  uuv_world_ros_plugins_msgs__srv__SetCurrentVelocity_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_world_ros_plugins_msgs__srv__SetCurrentVelocity_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SetCurrentVelocity in the package uuv_world_ros_plugins_msgs.
typedef struct uuv_world_ros_plugins_msgs__srv__SetCurrentVelocity_Response
{
  bool success;
} uuv_world_ros_plugins_msgs__srv__SetCurrentVelocity_Response;

// Struct for a sequence of uuv_world_ros_plugins_msgs__srv__SetCurrentVelocity_Response.
typedef struct uuv_world_ros_plugins_msgs__srv__SetCurrentVelocity_Response__Sequence
{
  uuv_world_ros_plugins_msgs__srv__SetCurrentVelocity_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_world_ros_plugins_msgs__srv__SetCurrentVelocity_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_VELOCITY__STRUCT_H_
