// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from uuv_world_ros_plugins_msgs:srv/GetCurrentModel.idl
// generated code does not contain a copyright notice
#include "uuv_world_ros_plugins_msgs/srv/detail/get_current_model__rosidl_typesupport_fastrtps_cpp.hpp"
#include "uuv_world_ros_plugins_msgs/srv/detail/get_current_model__struct.hpp"

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

namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_world_ros_plugins_msgs
cdr_serialize(
  const uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_world_ros_plugins_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_world_ros_plugins_msgs
get_serialized_size(
  const uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request & ros_message,
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
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_world_ros_plugins_msgs
max_serialized_size_GetCurrentModel_Request(
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

static bool _GetCurrentModel_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetCurrentModel_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetCurrentModel_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetCurrentModel_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetCurrentModel_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _GetCurrentModel_Request__callbacks = {
  "uuv_world_ros_plugins_msgs::srv",
  "GetCurrentModel_Request",
  _GetCurrentModel_Request__cdr_serialize,
  _GetCurrentModel_Request__cdr_deserialize,
  _GetCurrentModel_Request__get_serialized_size,
  _GetCurrentModel_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetCurrentModel_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetCurrentModel_Request__callbacks,
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
get_message_type_support_handle<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request>()
{
  return &uuv_world_ros_plugins_msgs::srv::typesupport_fastrtps_cpp::_GetCurrentModel_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_world_ros_plugins_msgs, srv, GetCurrentModel_Request)() {
  return &uuv_world_ros_plugins_msgs::srv::typesupport_fastrtps_cpp::_GetCurrentModel_Request__handle;
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
  const uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: mean
  cdr << ros_message.mean;
  // Member: min
  cdr << ros_message.min;
  // Member: max
  cdr << ros_message.max;
  // Member: noise
  cdr << ros_message.noise;
  // Member: mu
  cdr << ros_message.mu;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_world_ros_plugins_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response & ros_message)
{
  // Member: mean
  cdr >> ros_message.mean;

  // Member: min
  cdr >> ros_message.min;

  // Member: max
  cdr >> ros_message.max;

  // Member: noise
  cdr >> ros_message.noise;

  // Member: mu
  cdr >> ros_message.mu;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_world_ros_plugins_msgs
get_serialized_size(
  const uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: mean
  {
    size_t item_size = sizeof(ros_message.mean);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min
  {
    size_t item_size = sizeof(ros_message.min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max
  {
    size_t item_size = sizeof(ros_message.max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: noise
  {
    size_t item_size = sizeof(ros_message.noise);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mu
  {
    size_t item_size = sizeof(ros_message.mu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_world_ros_plugins_msgs
max_serialized_size_GetCurrentModel_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: mean
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: noise
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: mu
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _GetCurrentModel_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetCurrentModel_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetCurrentModel_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetCurrentModel_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetCurrentModel_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _GetCurrentModel_Response__callbacks = {
  "uuv_world_ros_plugins_msgs::srv",
  "GetCurrentModel_Response",
  _GetCurrentModel_Response__cdr_serialize,
  _GetCurrentModel_Response__cdr_deserialize,
  _GetCurrentModel_Response__get_serialized_size,
  _GetCurrentModel_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetCurrentModel_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetCurrentModel_Response__callbacks,
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
get_message_type_support_handle<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response>()
{
  return &uuv_world_ros_plugins_msgs::srv::typesupport_fastrtps_cpp::_GetCurrentModel_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_world_ros_plugins_msgs, srv, GetCurrentModel_Response)() {
  return &uuv_world_ros_plugins_msgs::srv::typesupport_fastrtps_cpp::_GetCurrentModel_Response__handle;
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

static service_type_support_callbacks_t _GetCurrentModel__callbacks = {
  "uuv_world_ros_plugins_msgs::srv",
  "GetCurrentModel",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_world_ros_plugins_msgs, srv, GetCurrentModel_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_world_ros_plugins_msgs, srv, GetCurrentModel_Response)(),
};

static rosidl_service_type_support_t _GetCurrentModel__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetCurrentModel__callbacks,
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
get_service_type_support_handle<uuv_world_ros_plugins_msgs::srv::GetCurrentModel>()
{
  return &uuv_world_ros_plugins_msgs::srv::typesupport_fastrtps_cpp::_GetCurrentModel__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_world_ros_plugins_msgs, srv, GetCurrentModel)() {
  return &uuv_world_ros_plugins_msgs::srv::typesupport_fastrtps_cpp::_GetCurrentModel__handle;
}

#ifdef __cplusplus
}
#endif
