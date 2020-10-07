// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/ThrusterConversionFcn.idl
// generated code does not contain a copyright notice
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/thruster_conversion_fcn__rosidl_typesupport_fastrtps_cpp.hpp"
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/thruster_conversion_fcn__struct.hpp"

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

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_gazebo_ros_plugins_msgs
cdr_serialize(
  const uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: function_name
  cdr << ros_message.function_name;
  // Member: tags
  {
    cdr << ros_message.tags;
  }
  // Member: data
  {
    cdr << ros_message.data;
  }
  // Member: lookup_table_input
  {
    cdr << ros_message.lookup_table_input;
  }
  // Member: lookup_table_output
  {
    cdr << ros_message.lookup_table_output;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_gazebo_ros_plugins_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn & ros_message)
{
  // Member: function_name
  cdr >> ros_message.function_name;

  // Member: tags
  {
    cdr >> ros_message.tags;
  }

  // Member: data
  {
    cdr >> ros_message.data;
  }

  // Member: lookup_table_input
  {
    cdr >> ros_message.lookup_table_input;
  }

  // Member: lookup_table_output
  {
    cdr >> ros_message.lookup_table_output;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_gazebo_ros_plugins_msgs
get_serialized_size(
  const uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: function_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.function_name.size() + 1);
  // Member: tags
  {
    size_t array_size = ros_message.tags.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.tags[index].size() + 1);
    }
  }
  // Member: data
  {
    size_t array_size = ros_message.data.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.data[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lookup_table_input
  {
    size_t array_size = ros_message.lookup_table_input.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.lookup_table_input[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lookup_table_output
  {
    size_t array_size = ros_message.lookup_table_output.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.lookup_table_output[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_gazebo_ros_plugins_msgs
max_serialized_size_ThrusterConversionFcn(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: function_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: tags
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: data
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lookup_table_input
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lookup_table_output
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ThrusterConversionFcn__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ThrusterConversionFcn__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ThrusterConversionFcn__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ThrusterConversionFcn__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ThrusterConversionFcn(full_bounded, 0);
}

static message_type_support_callbacks_t _ThrusterConversionFcn__callbacks = {
  "uuv_gazebo_ros_plugins_msgs::msg",
  "ThrusterConversionFcn",
  _ThrusterConversionFcn__cdr_serialize,
  _ThrusterConversionFcn__cdr_deserialize,
  _ThrusterConversionFcn__get_serialized_size,
  _ThrusterConversionFcn__max_serialized_size
};

static rosidl_message_type_support_t _ThrusterConversionFcn__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ThrusterConversionFcn__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace uuv_gazebo_ros_plugins_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_uuv_gazebo_ros_plugins_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn>()
{
  return &uuv_gazebo_ros_plugins_msgs::msg::typesupport_fastrtps_cpp::_ThrusterConversionFcn__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_gazebo_ros_plugins_msgs, msg, ThrusterConversionFcn)() {
  return &uuv_gazebo_ros_plugins_msgs::msg::typesupport_fastrtps_cpp::_ThrusterConversionFcn__handle;
}

#ifdef __cplusplus
}
#endif
