// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from uuv_sensor_ros_plugins_msgs:msg/DVLBeam.idl
// generated code does not contain a copyright notice

#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__DVL_BEAM__FUNCTIONS_H_
#define UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__DVL_BEAM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "uuv_sensor_ros_plugins_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "uuv_sensor_ros_plugins_msgs/msg/detail/dvl_beam__struct.h"

/// Initialize msg/DVLBeam message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * uuv_sensor_ros_plugins_msgs__msg__DVLBeam
 * )) before or use
 * uuv_sensor_ros_plugins_msgs__msg__DVLBeam__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_sensor_ros_plugins_msgs
bool
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__init(uuv_sensor_ros_plugins_msgs__msg__DVLBeam * msg);

/// Finalize msg/DVLBeam message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_sensor_ros_plugins_msgs
void
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__fini(uuv_sensor_ros_plugins_msgs__msg__DVLBeam * msg);

/// Create msg/DVLBeam message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * uuv_sensor_ros_plugins_msgs__msg__DVLBeam__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_sensor_ros_plugins_msgs
uuv_sensor_ros_plugins_msgs__msg__DVLBeam *
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__create();

/// Destroy msg/DVLBeam message.
/**
 * It calls
 * uuv_sensor_ros_plugins_msgs__msg__DVLBeam__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_sensor_ros_plugins_msgs
void
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__destroy(uuv_sensor_ros_plugins_msgs__msg__DVLBeam * msg);


/// Initialize array of msg/DVLBeam messages.
/**
 * It allocates the memory for the number of elements and calls
 * uuv_sensor_ros_plugins_msgs__msg__DVLBeam__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_sensor_ros_plugins_msgs
bool
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence__init(uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence * array, size_t size);

/// Finalize array of msg/DVLBeam messages.
/**
 * It calls
 * uuv_sensor_ros_plugins_msgs__msg__DVLBeam__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_sensor_ros_plugins_msgs
void
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence__fini(uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence * array);

/// Create array of msg/DVLBeam messages.
/**
 * It allocates the memory for the array and calls
 * uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_sensor_ros_plugins_msgs
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence *
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence__create(size_t size);

/// Destroy array of msg/DVLBeam messages.
/**
 * It calls
 * uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_sensor_ros_plugins_msgs
void
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence__destroy(uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__DVL_BEAM__FUNCTIONS_H_
