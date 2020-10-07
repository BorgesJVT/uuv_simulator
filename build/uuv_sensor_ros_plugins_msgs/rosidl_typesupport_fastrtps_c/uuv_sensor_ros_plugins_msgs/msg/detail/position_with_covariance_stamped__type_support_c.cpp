// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from uuv_sensor_ros_plugins_msgs:msg/PositionWithCovarianceStamped.idl
// generated code does not contain a copyright notice
#include "uuv_sensor_ros_plugins_msgs/msg/detail/position_with_covariance_stamped__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "uuv_sensor_ros_plugins_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "uuv_sensor_ros_plugins_msgs/msg/detail/position_with_covariance_stamped__struct.h"
#include "uuv_sensor_ros_plugins_msgs/msg/detail/position_with_covariance_stamped__functions.h"
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

#include "std_msgs/msg/detail/header__functions.h"  // header
#include "uuv_sensor_ros_plugins_msgs/msg/detail/position_with_covariance__functions.h"  // pos

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_uuv_sensor_ros_plugins_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_uuv_sensor_ros_plugins_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_uuv_sensor_ros_plugins_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();
size_t get_serialized_size_uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_sensor_ros_plugins_msgs, msg, PositionWithCovariance)();


using _PositionWithCovarianceStamped__ros_msg_type = uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped;

static bool _PositionWithCovarianceStamped__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PositionWithCovarianceStamped__ros_msg_type * ros_message = static_cast<const _PositionWithCovarianceStamped__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: pos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, uuv_sensor_ros_plugins_msgs, msg, PositionWithCovariance
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pos, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PositionWithCovarianceStamped__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PositionWithCovarianceStamped__ros_msg_type * ros_message = static_cast<_PositionWithCovarianceStamped__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: pos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, uuv_sensor_ros_plugins_msgs, msg, PositionWithCovariance
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pos))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_sensor_ros_plugins_msgs
size_t get_serialized_size_uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PositionWithCovarianceStamped__ros_msg_type * ros_message = static_cast<const _PositionWithCovarianceStamped__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name pos

  current_alignment += get_serialized_size_uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance(
    &(ros_message->pos), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PositionWithCovarianceStamped__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_sensor_ros_plugins_msgs
size_t max_serialized_size_uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: pos
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PositionWithCovarianceStamped__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_uuv_sensor_ros_plugins_msgs__msg__PositionWithCovarianceStamped(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PositionWithCovarianceStamped = {
  "uuv_sensor_ros_plugins_msgs::msg",
  "PositionWithCovarianceStamped",
  _PositionWithCovarianceStamped__cdr_serialize,
  _PositionWithCovarianceStamped__cdr_deserialize,
  _PositionWithCovarianceStamped__get_serialized_size,
  _PositionWithCovarianceStamped__max_serialized_size
};

static rosidl_message_type_support_t _PositionWithCovarianceStamped__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PositionWithCovarianceStamped,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_sensor_ros_plugins_msgs, msg, PositionWithCovarianceStamped)() {
  return &_PositionWithCovarianceStamped__type_support;
}

#if defined(__cplusplus)
}
#endif
