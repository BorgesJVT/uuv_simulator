// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_sensor_ros_plugins_msgs:srv/ChangeSensorState.idl
// generated code does not contain a copyright notice

#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS__SRV__DETAIL__CHANGE_SENSOR_STATE__STRUCT_H_
#define UUV_SENSOR_ROS_PLUGINS_MSGS__SRV__DETAIL__CHANGE_SENSOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/ChangeSensorState in the package uuv_sensor_ros_plugins_msgs.
typedef struct uuv_sensor_ros_plugins_msgs__srv__ChangeSensorState_Request
{
  bool on;
} uuv_sensor_ros_plugins_msgs__srv__ChangeSensorState_Request;

// Struct for a sequence of uuv_sensor_ros_plugins_msgs__srv__ChangeSensorState_Request.
typedef struct uuv_sensor_ros_plugins_msgs__srv__ChangeSensorState_Request__Sequence
{
  uuv_sensor_ros_plugins_msgs__srv__ChangeSensorState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_sensor_ros_plugins_msgs__srv__ChangeSensorState_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/ChangeSensorState in the package uuv_sensor_ros_plugins_msgs.
typedef struct uuv_sensor_ros_plugins_msgs__srv__ChangeSensorState_Response
{
  bool success;
  rosidl_runtime_c__String message;
} uuv_sensor_ros_plugins_msgs__srv__ChangeSensorState_Response;

// Struct for a sequence of uuv_sensor_ros_plugins_msgs__srv__ChangeSensorState_Response.
typedef struct uuv_sensor_ros_plugins_msgs__srv__ChangeSensorState_Response__Sequence
{
  uuv_sensor_ros_plugins_msgs__srv__ChangeSensorState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_sensor_ros_plugins_msgs__srv__ChangeSensorState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_SENSOR_ROS_PLUGINS_MSGS__SRV__DETAIL__CHANGE_SENSOR_STATE__STRUCT_H_
