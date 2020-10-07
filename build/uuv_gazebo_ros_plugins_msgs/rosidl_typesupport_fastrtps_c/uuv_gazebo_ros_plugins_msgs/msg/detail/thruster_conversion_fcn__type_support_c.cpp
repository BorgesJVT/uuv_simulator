// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/ThrusterConversionFcn.idl
// generated code does not contain a copyright notice
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/thruster_conversion_fcn__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "uuv_gazebo_ros_plugins_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/thruster_conversion_fcn__struct.h"
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/thruster_conversion_fcn__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // data, lookup_table_input, lookup_table_output
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // data, lookup_table_input, lookup_table_output
#include "rosidl_runtime_c/string.h"  // function_name, tags
#include "rosidl_runtime_c/string_functions.h"  // function_name, tags

// forward declare type support functions


using _ThrusterConversionFcn__ros_msg_type = uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn;

static bool _ThrusterConversionFcn__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ThrusterConversionFcn__ros_msg_type * ros_message = static_cast<const _ThrusterConversionFcn__ros_msg_type *>(untyped_ros_message);
  // Field name: function_name
  {
    const rosidl_runtime_c__String * str = &ros_message->function_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: tags
  {
    size_t size = ros_message->tags.size;
    auto array_ptr = ros_message->tags.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: data
  {
    size_t size = ros_message->data.size;
    auto array_ptr = ros_message->data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: lookup_table_input
  {
    size_t size = ros_message->lookup_table_input.size;
    auto array_ptr = ros_message->lookup_table_input.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: lookup_table_output
  {
    size_t size = ros_message->lookup_table_output.size;
    auto array_ptr = ros_message->lookup_table_output.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _ThrusterConversionFcn__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ThrusterConversionFcn__ros_msg_type * ros_message = static_cast<_ThrusterConversionFcn__ros_msg_type *>(untyped_ros_message);
  // Field name: function_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->function_name.data) {
      rosidl_runtime_c__String__init(&ros_message->function_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->function_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'function_name'\n");
      return false;
    }
  }

  // Field name: tags
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->tags.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->tags);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->tags, size)) {
      return "failed to create array for field 'tags'";
    }
    auto array_ptr = ros_message->tags.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'tags'\n");
        return false;
      }
    }
  }

  // Field name: data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->data.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->data);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->data, size)) {
      return "failed to create array for field 'data'";
    }
    auto array_ptr = ros_message->data.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: lookup_table_input
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->lookup_table_input.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->lookup_table_input);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->lookup_table_input, size)) {
      return "failed to create array for field 'lookup_table_input'";
    }
    auto array_ptr = ros_message->lookup_table_input.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: lookup_table_output
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->lookup_table_output.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->lookup_table_output);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->lookup_table_output, size)) {
      return "failed to create array for field 'lookup_table_output'";
    }
    auto array_ptr = ros_message->lookup_table_output.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_gazebo_ros_plugins_msgs
size_t get_serialized_size_uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ThrusterConversionFcn__ros_msg_type * ros_message = static_cast<const _ThrusterConversionFcn__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name function_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->function_name.size + 1);
  // field.name tags
  {
    size_t array_size = ros_message->tags.size;
    auto array_ptr = ros_message->tags.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name data
  {
    size_t array_size = ros_message->data.size;
    auto array_ptr = ros_message->data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lookup_table_input
  {
    size_t array_size = ros_message->lookup_table_input.size;
    auto array_ptr = ros_message->lookup_table_input.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lookup_table_output
  {
    size_t array_size = ros_message->lookup_table_output.size;
    auto array_ptr = ros_message->lookup_table_output.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ThrusterConversionFcn__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_gazebo_ros_plugins_msgs
size_t max_serialized_size_uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: function_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: tags
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
  // member: data
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lookup_table_input
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lookup_table_output
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

static size_t _ThrusterConversionFcn__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ThrusterConversionFcn = {
  "uuv_gazebo_ros_plugins_msgs::msg",
  "ThrusterConversionFcn",
  _ThrusterConversionFcn__cdr_serialize,
  _ThrusterConversionFcn__cdr_deserialize,
  _ThrusterConversionFcn__get_serialized_size,
  _ThrusterConversionFcn__max_serialized_size
};

static rosidl_message_type_support_t _ThrusterConversionFcn__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ThrusterConversionFcn,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_gazebo_ros_plugins_msgs, msg, ThrusterConversionFcn)() {
  return &_ThrusterConversionFcn__type_support;
}

#if defined(__cplusplus)
}
#endif
