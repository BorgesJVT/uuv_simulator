// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/GetThrusterConversionFcn.idl
// generated code does not contain a copyright notice
#include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_thruster_conversion_fcn__rosidl_typesupport_fastrtps_cpp.hpp"
#include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_thruster_conversion_fcn__struct.hpp"

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

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_gazebo_ros_plugins_msgs
cdr_serialize(
  const uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_gazebo_ros_plugins_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_gazebo_ros_plugins_msgs
get_serialized_size(
  const uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_gazebo_ros_plugins_msgs
max_serialized_size_GetThrusterConversionFcn_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _GetThrusterConversionFcn_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetThrusterConversionFcn_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetThrusterConversionFcn_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetThrusterConversionFcn_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetThrusterConversionFcn_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _GetThrusterConversionFcn_Request__callbacks = {
  "uuv_gazebo_ros_plugins_msgs::srv",
  "GetThrusterConversionFcn_Request",
  _GetThrusterConversionFcn_Request__cdr_serialize,
  _GetThrusterConversionFcn_Request__cdr_deserialize,
  _GetThrusterConversionFcn_Request__get_serialized_size,
  _GetThrusterConversionFcn_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetThrusterConversionFcn_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetThrusterConversionFcn_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace uuv_gazebo_ros_plugins_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_uuv_gazebo_ros_plugins_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request>()
{
  return &uuv_gazebo_ros_plugins_msgs::srv::typesupport_fastrtps_cpp::_GetThrusterConversionFcn_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_gazebo_ros_plugins_msgs, srv, GetThrusterConversionFcn_Request)() {
  return &uuv_gazebo_ros_plugins_msgs::srv::typesupport_fastrtps_cpp::_GetThrusterConversionFcn_Request__handle;
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
namespace uuv_gazebo_ros_plugins_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn &);
size_t get_serialized_size(
  const uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn &,
  size_t current_alignment);
size_t
max_serialized_size_ThrusterConversionFcn(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace uuv_gazebo_ros_plugins_msgs


namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_gazebo_ros_plugins_msgs
cdr_serialize(
  const uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: fcn
  uuv_gazebo_ros_plugins_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.fcn,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_gazebo_ros_plugins_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response & ros_message)
{
  // Member: fcn
  uuv_gazebo_ros_plugins_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.fcn);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_gazebo_ros_plugins_msgs
get_serialized_size(
  const uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: fcn

  current_alignment +=
    uuv_gazebo_ros_plugins_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.fcn, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_gazebo_ros_plugins_msgs
max_serialized_size_GetThrusterConversionFcn_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: fcn
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        uuv_gazebo_ros_plugins_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ThrusterConversionFcn(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GetThrusterConversionFcn_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetThrusterConversionFcn_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetThrusterConversionFcn_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetThrusterConversionFcn_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetThrusterConversionFcn_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _GetThrusterConversionFcn_Response__callbacks = {
  "uuv_gazebo_ros_plugins_msgs::srv",
  "GetThrusterConversionFcn_Response",
  _GetThrusterConversionFcn_Response__cdr_serialize,
  _GetThrusterConversionFcn_Response__cdr_deserialize,
  _GetThrusterConversionFcn_Response__get_serialized_size,
  _GetThrusterConversionFcn_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetThrusterConversionFcn_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetThrusterConversionFcn_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace uuv_gazebo_ros_plugins_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_uuv_gazebo_ros_plugins_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response>()
{
  return &uuv_gazebo_ros_plugins_msgs::srv::typesupport_fastrtps_cpp::_GetThrusterConversionFcn_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_gazebo_ros_plugins_msgs, srv, GetThrusterConversionFcn_Response)() {
  return &uuv_gazebo_ros_plugins_msgs::srv::typesupport_fastrtps_cpp::_GetThrusterConversionFcn_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GetThrusterConversionFcn__callbacks = {
  "uuv_gazebo_ros_plugins_msgs::srv",
  "GetThrusterConversionFcn",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_gazebo_ros_plugins_msgs, srv, GetThrusterConversionFcn_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_gazebo_ros_plugins_msgs, srv, GetThrusterConversionFcn_Response)(),
};

static rosidl_service_type_support_t _GetThrusterConversionFcn__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetThrusterConversionFcn__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace uuv_gazebo_ros_plugins_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_uuv_gazebo_ros_plugins_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn>()
{
  return &uuv_gazebo_ros_plugins_msgs::srv::typesupport_fastrtps_cpp::_GetThrusterConversionFcn__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_gazebo_ros_plugins_msgs, srv, GetThrusterConversionFcn)() {
  return &uuv_gazebo_ros_plugins_msgs::srv::typesupport_fastrtps_cpp::_GetThrusterConversionFcn__handle;
}

#ifdef __cplusplus
}
#endif
