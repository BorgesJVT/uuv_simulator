// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from uuv_world_ros_plugins_msgs:srv/TransformToSphericalCoord.idl
// generated code does not contain a copyright notice
#include "uuv_world_ros_plugins_msgs/srv/detail/transform_to_spherical_coord__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "uuv_world_ros_plugins_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "uuv_world_ros_plugins_msgs/srv/detail/transform_to_spherical_coord__struct.h"
#include "uuv_world_ros_plugins_msgs/srv/detail/transform_to_spherical_coord__functions.h"
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

#include "geometry_msgs/msg/detail/vector3__functions.h"  // input

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_uuv_world_ros_plugins_msgs
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_uuv_world_ros_plugins_msgs
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_uuv_world_ros_plugins_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3)();


using _TransformToSphericalCoord_Request__ros_msg_type = uuv_world_ros_plugins_msgs__srv__TransformToSphericalCoord_Request;

static bool _TransformToSphericalCoord_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TransformToSphericalCoord_Request__ros_msg_type * ros_message = static_cast<const _TransformToSphericalCoord_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: input
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->input, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TransformToSphericalCoord_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TransformToSphericalCoord_Request__ros_msg_type * ros_message = static_cast<_TransformToSphericalCoord_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: input
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->input))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_world_ros_plugins_msgs
size_t get_serialized_size_uuv_world_ros_plugins_msgs__srv__TransformToSphericalCoord_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TransformToSphericalCoord_Request__ros_msg_type * ros_message = static_cast<const _TransformToSphericalCoord_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name input

  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->input), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TransformToSphericalCoord_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_uuv_world_ros_plugins_msgs__srv__TransformToSphericalCoord_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_world_ros_plugins_msgs
size_t max_serialized_size_uuv_world_ros_plugins_msgs__srv__TransformToSphericalCoord_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: input
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Vector3(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TransformToSphericalCoord_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_uuv_world_ros_plugins_msgs__srv__TransformToSphericalCoord_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TransformToSphericalCoord_Request = {
  "uuv_world_ros_plugins_msgs::srv",
  "TransformToSphericalCoord_Request",
  _TransformToSphericalCoord_Request__cdr_serialize,
  _TransformToSphericalCoord_Request__cdr_deserialize,
  _TransformToSphericalCoord_Request__get_serialized_size,
  _TransformToSphericalCoord_Request__max_serialized_size
};

static rosidl_message_type_support_t _TransformToSphericalCoord_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TransformToSphericalCoord_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_world_ros_plugins_msgs, srv, TransformToSphericalCoord_Request)() {
  return &_TransformToSphericalCoord_Request__type_support;
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
// #include "uuv_world_ros_plugins_msgs/srv/detail/transform_to_spherical_coord__struct.h"
// already included above
// #include "uuv_world_ros_plugins_msgs/srv/detail/transform_to_spherical_coord__functions.h"
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


using _TransformToSphericalCoord_Response__ros_msg_type = uuv_world_ros_plugins_msgs__srv__TransformToSphericalCoord_Response;

static bool _TransformToSphericalCoord_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TransformToSphericalCoord_Response__ros_msg_type * ros_message = static_cast<const _TransformToSphericalCoord_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: latitude_deg
  {
    cdr << ros_message->latitude_deg;
  }

  // Field name: longitude_deg
  {
    cdr << ros_message->longitude_deg;
  }

  // Field name: altitude
  {
    cdr << ros_message->altitude;
  }

  return true;
}

static bool _TransformToSphericalCoord_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TransformToSphericalCoord_Response__ros_msg_type * ros_message = static_cast<_TransformToSphericalCoord_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: latitude_deg
  {
    cdr >> ros_message->latitude_deg;
  }

  // Field name: longitude_deg
  {
    cdr >> ros_message->longitude_deg;
  }

  // Field name: altitude
  {
    cdr >> ros_message->altitude;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_world_ros_plugins_msgs
size_t get_serialized_size_uuv_world_ros_plugins_msgs__srv__TransformToSphericalCoord_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TransformToSphericalCoord_Response__ros_msg_type * ros_message = static_cast<const _TransformToSphericalCoord_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name latitude_deg
  {
    size_t item_size = sizeof(ros_message->latitude_deg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longitude_deg
  {
    size_t item_size = sizeof(ros_message->longitude_deg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name altitude
  {
    size_t item_size = sizeof(ros_message->altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TransformToSphericalCoord_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_uuv_world_ros_plugins_msgs__srv__TransformToSphericalCoord_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_world_ros_plugins_msgs
size_t max_serialized_size_uuv_world_ros_plugins_msgs__srv__TransformToSphericalCoord_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: latitude_deg
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: longitude_deg
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: altitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TransformToSphericalCoord_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_uuv_world_ros_plugins_msgs__srv__TransformToSphericalCoord_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TransformToSphericalCoord_Response = {
  "uuv_world_ros_plugins_msgs::srv",
  "TransformToSphericalCoord_Response",
  _TransformToSphericalCoord_Response__cdr_serialize,
  _TransformToSphericalCoord_Response__cdr_deserialize,
  _TransformToSphericalCoord_Response__get_serialized_size,
  _TransformToSphericalCoord_Response__max_serialized_size
};

static rosidl_message_type_support_t _TransformToSphericalCoord_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TransformToSphericalCoord_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_world_ros_plugins_msgs, srv, TransformToSphericalCoord_Response)() {
  return &_TransformToSphericalCoord_Response__type_support;
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
#include "uuv_world_ros_plugins_msgs/srv/transform_to_spherical_coord.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TransformToSphericalCoord__callbacks = {
  "uuv_world_ros_plugins_msgs::srv",
  "TransformToSphericalCoord",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_world_ros_plugins_msgs, srv, TransformToSphericalCoord_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_world_ros_plugins_msgs, srv, TransformToSphericalCoord_Response)(),
};

static rosidl_service_type_support_t TransformToSphericalCoord__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TransformToSphericalCoord__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_world_ros_plugins_msgs, srv, TransformToSphericalCoord)() {
  return &TransformToSphericalCoord__handle;
}

#if defined(__cplusplus)
}
#endif
