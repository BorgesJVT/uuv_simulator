// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from uuv_world_ros_plugins_msgs:srv/GetCurrentModel.idl
// generated code does not contain a copyright notice

#ifndef UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_CURRENT_MODEL__FUNCTIONS_H_
#define UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_CURRENT_MODEL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "uuv_world_ros_plugins_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "uuv_world_ros_plugins_msgs/srv/detail/get_current_model__struct.h"

/// Initialize srv/GetCurrentModel message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Request
 * )) before or use
 * uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_world_ros_plugins_msgs
bool
uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Request__init(uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Request * msg);

/// Finalize srv/GetCurrentModel message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_world_ros_plugins_msgs
void
uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Request__fini(uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Request * msg);

/// Create srv/GetCurrentModel message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_world_ros_plugins_msgs
uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Request *
uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Request__create();

/// Destroy srv/GetCurrentModel message.
/**
 * It calls
 * uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_world_ros_plugins_msgs
void
uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Request__destroy(uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Request * msg);


/// Initialize array of srv/GetCurrentModel messages.
/**
 * It allocates the memory for the number of elements and calls
 * uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_world_ros_plugins_msgs
bool
uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Request__Sequence__init(uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetCurrentModel messages.
/**
 * It calls
 * uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_world_ros_plugins_msgs
void
uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Request__Sequence__fini(uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Request__Sequence * array);

/// Create array of srv/GetCurrentModel messages.
/**
 * It allocates the memory for the array and calls
 * uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_world_ros_plugins_msgs
uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Request__Sequence *
uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetCurrentModel messages.
/**
 * It calls
 * uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_world_ros_plugins_msgs
void
uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Request__Sequence__destroy(uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Request__Sequence * array);

/// Initialize srv/GetCurrentModel message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Response
 * )) before or use
 * uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_world_ros_plugins_msgs
bool
uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Response__init(uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Response * msg);

/// Finalize srv/GetCurrentModel message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_world_ros_plugins_msgs
void
uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Response__fini(uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Response * msg);

/// Create srv/GetCurrentModel message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_world_ros_plugins_msgs
uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Response *
uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Response__create();

/// Destroy srv/GetCurrentModel message.
/**
 * It calls
 * uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_world_ros_plugins_msgs
void
uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Response__destroy(uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Response * msg);


/// Initialize array of srv/GetCurrentModel messages.
/**
 * It allocates the memory for the number of elements and calls
 * uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_world_ros_plugins_msgs
bool
uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Response__Sequence__init(uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetCurrentModel messages.
/**
 * It calls
 * uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_world_ros_plugins_msgs
void
uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Response__Sequence__fini(uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Response__Sequence * array);

/// Create array of srv/GetCurrentModel messages.
/**
 * It allocates the memory for the array and calls
 * uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_world_ros_plugins_msgs
uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Response__Sequence *
uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetCurrentModel messages.
/**
 * It calls
 * uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_world_ros_plugins_msgs
void
uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Response__Sequence__destroy(uuv_world_ros_plugins_msgs__srv__GetCurrentModel_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_CURRENT_MODEL__FUNCTIONS_H_
