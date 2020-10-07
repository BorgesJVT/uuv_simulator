// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from uuv_world_ros_plugins_msgs:srv/SetCurrentModel.idl
// generated code does not contain a copyright notice
#include "uuv_world_ros_plugins_msgs/srv/detail/set_current_model__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "uuv_world_ros_plugins_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "uuv_world_ros_plugins_msgs/srv/detail/set_current_model__struct.h"
#include "uuv_world_ros_plugins_msgs/srv/detail/set_current_model__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetCurrentModel_Request__ros_msg_type = uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request;

static bool _SetCurrentModel_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetCurrentModel_Request__ros_msg_type * ros_message = static_cast<const _SetCurrentModel_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: mean
  {
    cdr << ros_message->mean;
  }

  // Field name: min
  {
    cdr << ros_message->min;
  }

  // Field name: max
  {
    cdr << ros_message->max;
  }

  // Field name: noise
  {
    cdr << ros_message->noise;
  }

  // Field name: mu
  {
    cdr << ros_message->mu;
  }

  return true;
}

static bool _SetCurrentModel_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetCurrentModel_Request__ros_msg_type * ros_message = static_cast<_SetCurrentModel_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: mean
  {
    cdr >> ros_message->mean;
  }

  // Field name: min
  {
    cdr >> ros_message->min;
  }

  // Field name: max
  {
    cdr >> ros_message->max;
  }

  // Field name: noise
  {
    cdr >> ros_message->noise;
  }

  // Field name: mu
  {
    cdr >> ros_message->mu;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_world_ros_plugins_msgs
size_t get_serialized_size_uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetCurrentModel_Request__ros_msg_type * ros_message = static_cast<const _SetCurrentModel_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name mean
  {
    size_t item_size = sizeof(ros_message->mean);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min
  {
    size_t item_size = sizeof(ros_message->min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max
  {
    size_t item_size = sizeof(ros_message->max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name noise
  {
    size_t item_size = sizeof(ros_message->noise);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mu
  {
    size_t item_size = sizeof(ros_message->mu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetCurrentModel_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_world_ros_plugins_msgs
size_t max_serialized_size_uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: mean
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: noise
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: mu
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SetCurrentModel_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetCurrentModel_Request = {
  "uuv_world_ros_plugins_msgs::srv",
  "SetCurrentModel_Request",
  _SetCurrentModel_Request__cdr_serialize,
  _SetCurrentModel_Request__cdr_deserialize,
  _SetCurrentModel_Request__get_serialized_size,
  _SetCurrentModel_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetCurrentModel_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetCurrentModel_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_world_ros_plugins_msgs, srv, SetCurrentModel_Request)() {
  return &_SetCurrentModel_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "uuv_world_ros_plugins_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "uuv_world_ros_plugins_msgs/srv/detail/set_current_model__struct.h"
// already included above
// #include "uuv_world_ros_plugins_msgs/srv/detail/set_current_model__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetCurrentModel_Response__ros_msg_type = uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response;

static bool _SetCurrentModel_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetCurrentModel_Response__ros_msg_type * ros_message = static_cast<const _SetCurrentModel_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _SetCurrentModel_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetCurrentModel_Response__ros_msg_type * ros_message = static_cast<_SetCurrentModel_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_world_ros_plugins_msgs
size_t get_serialized_size_uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetCurrentModel_Response__ros_msg_type * ros_message = static_cast<const _SetCurrentModel_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetCurrentModel_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_world_ros_plugins_msgs
size_t max_serialized_size_uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetCurrentModel_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetCurrentModel_Response = {
  "uuv_world_ros_plugins_msgs::srv",
  "SetCurrentModel_Response",
  _SetCurrentModel_Response__cdr_serialize,
  _SetCurrentModel_Response__cdr_deserialize,
  _SetCurrentModel_Response__get_serialized_size,
  _SetCurrentModel_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetCurrentModel_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetCurrentModel_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_world_ros_plugins_msgs, srv, SetCurrentModel_Response)() {
  return &_SetCurrentModel_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "uuv_world_ros_plugins_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "uuv_world_ros_plugins_msgs/srv/set_current_model.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetCurrentModel__callbacks = {
  "uuv_world_ros_plugins_msgs::srv",
  "SetCurrentModel",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_world_ros_plugins_msgs, srv, SetCurrentModel_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_world_ros_plugins_msgs, srv, SetCurrentModel_Response)(),
};

static rosidl_service_type_support_t SetCurrentModel__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetCurrentModel__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_world_ros_plugins_msgs, srv, SetCurrentModel)() {
  return &SetCurrentModel__handle;
}

#if defined(__cplusplus)
}
#endif
