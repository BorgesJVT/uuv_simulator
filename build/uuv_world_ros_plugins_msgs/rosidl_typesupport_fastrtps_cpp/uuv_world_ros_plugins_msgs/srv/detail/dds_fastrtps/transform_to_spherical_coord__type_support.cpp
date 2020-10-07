// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from uuv_world_ros_plugins_msgs:srv/TransformToSphericalCoord.idl
// generated code does not contain a copyright notice
#include "uuv_world_ros_plugins_msgs/srv/detail/transform_to_spherical_coord__rosidl_typesupport_fastrtps_cpp.hpp"
#include "uuv_world_ros_plugins_msgs/srv/detail/transform_to_spherical_coord__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Vector3 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Vector3 &);
size_t get_serialized_size(
  const geometry_msgs::msg::Vector3 &,
  size_t current_alignment);
size_t
max_serialized_size_Vector3(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_world_ros_plugins_msgs
cdr_serialize(
  const uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: input
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.input,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_world_ros_plugins_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Request & ros_message)
{
  // Member: input
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.input);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_world_ros_plugins_msgs
get_serialized_size(
  const uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: input

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.input, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_world_ros_plugins_msgs
max_serialized_size_TransformToSphericalCoord_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: input
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _TransformToSphericalCoord_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TransformToSphericalCoord_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TransformToSphericalCoord_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TransformToSphericalCoord_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TransformToSphericalCoord_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _TransformToSphericalCoord_Request__callbacks = {
  "uuv_world_ros_plugins_msgs::srv",
  "TransformToSphericalCoord_Request",
  _TransformToSphericalCoord_Request__cdr_serialize,
  _TransformToSphericalCoord_Request__cdr_deserialize,
  _TransformToSphericalCoord_Request__get_serialized_size,
  _TransformToSphericalCoord_Request__max_serialized_size
};

static rosidl_message_type_support_t _TransformToSphericalCoord_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TransformToSphericalCoord_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace uuv_world_ros_plugins_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_uuv_world_ros_plugins_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Request>()
{
  return &uuv_world_ros_plugins_msgs::srv::typesupport_fastrtps_cpp::_TransformToSphericalCoord_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_world_ros_plugins_msgs, srv, TransformToSphericalCoord_Request)() {
  return &uuv_world_ros_plugins_msgs::srv::typesupport_fastrtps_cpp::_TransformToSphericalCoord_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_world_ros_plugins_msgs
cdr_serialize(
  const uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: latitude_deg
  cdr << ros_message.latitude_deg;
  // Member: longitude_deg
  cdr << ros_message.longitude_deg;
  // Member: altitude
  cdr << ros_message.altitude;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_world_ros_plugins_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Response & ros_message)
{
  // Member: latitude_deg
  cdr >> ros_message.latitude_deg;

  // Member: longitude_deg
  cdr >> ros_message.longitude_deg;

  // Member: altitude
  cdr >> ros_message.altitude;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_world_ros_plugins_msgs
get_serialized_size(
  const uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: latitude_deg
  {
    size_t item_size = sizeof(ros_message.latitude_deg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: longitude_deg
  {
    size_t item_size = sizeof(ros_message.longitude_deg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: altitude
  {
    size_t item_size = sizeof(ros_message.altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_world_ros_plugins_msgs
max_serialized_size_TransformToSphericalCoord_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: latitude_deg
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: longitude_deg
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: altitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _TransformToSphericalCoord_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TransformToSphericalCoord_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TransformToSphericalCoord_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TransformToSphericalCoord_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TransformToSphericalCoord_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _TransformToSphericalCoord_Response__callbacks = {
  "uuv_world_ros_plugins_msgs::srv",
  "TransformToSphericalCoord_Response",
  _TransformToSphericalCoord_Response__cdr_serialize,
  _TransformToSphericalCoord_Response__cdr_deserialize,
  _TransformToSphericalCoord_Response__get_serialized_size,
  _TransformToSphericalCoord_Response__max_serialized_size
};

static rosidl_message_type_support_t _TransformToSphericalCoord_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TransformToSphericalCoord_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace uuv_world_ros_plugins_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_uuv_world_ros_plugins_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Response>()
{
  return &uuv_world_ros_plugins_msgs::srv::typesupport_fastrtps_cpp::_TransformToSphericalCoord_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_world_ros_plugins_msgs, srv, TransformToSphericalCoord_Response)() {
  return &uuv_world_ros_plugins_msgs::srv::typesupport_fastrtps_cpp::_TransformToSphericalCoord_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _TransformToSphericalCoord__callbacks = {
  "uuv_world_ros_plugins_msgs::srv",
  "TransformToSphericalCoord",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_world_ros_plugins_msgs, srv, TransformToSphericalCoord_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_world_ros_plugins_msgs, srv, TransformToSphericalCoord_Response)(),
};

static rosidl_service_type_support_t _TransformToSphericalCoord__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TransformToSphericalCoord__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace uuv_world_ros_plugins_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_uuv_world_ros_plugins_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord>()
{
  return &uuv_world_ros_plugins_msgs::srv::typesupport_fastrtps_cpp::_TransformToSphericalCoord__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_world_ros_plugins_msgs, srv, TransformToSphericalCoord)() {
  return &uuv_world_ros_plugins_msgs::srv::typesupport_fastrtps_cpp::_TransformToSphericalCoord__handle;
}

#ifdef __cplusplus
}
#endif
