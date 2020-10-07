// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/GetListParam.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_LIST_PARAM__STRUCT_H_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_LIST_PARAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetListParam in the package uuv_gazebo_ros_plugins_msgs.
typedef struct uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request
{
  uint8_t structure_needs_at_least_one_member;
} uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request;

// Struct for a sequence of uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request.
typedef struct uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__Sequence
{
  uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'description'
// Member 'tags'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/GetListParam in the package uuv_gazebo_ros_plugins_msgs.
typedef struct uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response
{
  rosidl_runtime_c__String description;
  rosidl_runtime_c__String__Sequence tags;
  rosidl_runtime_c__double__Sequence data;
} uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response;

// Struct for a sequence of uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response.
typedef struct uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__Sequence
{
  uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_LIST_PARAM__STRUCT_H_
