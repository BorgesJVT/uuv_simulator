// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/UnderwaterObjectModel.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__UNDERWATER_OBJECT_MODEL__FUNCTIONS_H_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__UNDERWATER_OBJECT_MODEL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "uuv_gazebo_ros_plugins_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "uuv_gazebo_ros_plugins_msgs/msg/detail/underwater_object_model__struct.h"

/// Initialize msg/UnderwaterObjectModel message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel
 * )) before or use
 * uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_gazebo_ros_plugins_msgs
bool
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__init(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel * msg);

/// Finalize msg/UnderwaterObjectModel message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_gazebo_ros_plugins_msgs
void
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__fini(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel * msg);

/// Create msg/UnderwaterObjectModel message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_gazebo_ros_plugins_msgs
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel *
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__create();

/// Destroy msg/UnderwaterObjectModel message.
/**
 * It calls
 * uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_gazebo_ros_plugins_msgs
void
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__destroy(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel * msg);


/// Initialize array of msg/UnderwaterObjectModel messages.
/**
 * It allocates the memory for the number of elements and calls
 * uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_gazebo_ros_plugins_msgs
bool
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence__init(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence * array, size_t size);

/// Finalize array of msg/UnderwaterObjectModel messages.
/**
 * It calls
 * uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_gazebo_ros_plugins_msgs
void
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence__fini(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence * array);

/// Create array of msg/UnderwaterObjectModel messages.
/**
 * It allocates the memory for the array and calls
 * uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_gazebo_ros_plugins_msgs
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence *
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence__create(size_t size);

/// Destroy array of msg/UnderwaterObjectModel messages.
/**
 * It calls
 * uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_gazebo_ros_plugins_msgs
void
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence__destroy(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__UNDERWATER_OBJECT_MODEL__FUNCTIONS_H_
