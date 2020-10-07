// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/GetModelProperties.idl
// generated code does not contain a copyright notice
#include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_model_properties__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "uuv_gazebo_ros_plugins_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_model_properties__struct.h"
#include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_model_properties__functions.h"
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


using _GetModelProperties_Request__ros_msg_type = uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Request;

static bool _GetModelProperties_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetModelProperties_Request__ros_msg_type * ros_message = static_cast<const _GetModelProperties_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _GetModelProperties_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetModelProperties_Request__ros_msg_type * ros_message = static_cast<_GetModelProperties_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_gazebo_ros_plugins_msgs
size_t get_serialized_size_uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetModelProperties_Request__ros_msg_type * ros_message = static_cast<const _GetModelProperties_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetModelProperties_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_gazebo_ros_plugins_msgs
size_t max_serialized_size_uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _GetModelProperties_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetModelProperties_Request = {
  "uuv_gazebo_ros_plugins_msgs::srv",
  "GetModelProperties_Request",
  _GetModelProperties_Request__cdr_serialize,
  _GetModelProperties_Request__cdr_deserialize,
  _GetModelProperties_Request__get_serialized_size,
  _GetModelProperties_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetModelProperties_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetModelProperties_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_gazebo_ros_plugins_msgs, srv, GetModelProperties_Request)() {
  return &_GetModelProperties_Request__type_support;
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
// #include "uuv_gazebo_ros_plugins_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_model_properties__struct.h"
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_model_properties__functions.h"
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

#include "rosidl_runtime_c/string.h"  // link_names
#include "rosidl_runtime_c/string_functions.h"  // link_names
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/underwater_object_model__functions.h"  // models

// forward declare type support functions
size_t get_serialized_size_uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_gazebo_ros_plugins_msgs, msg, UnderwaterObjectModel)();


using _GetModelProperties_Response__ros_msg_type = uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response;

static bool _GetModelProperties_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetModelProperties_Response__ros_msg_type * ros_message = static_cast<const _GetModelProperties_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: link_names
  {
    size_t size = ros_message->link_names.size;
    auto array_ptr = ros_message->link_names.data;
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

  // Field name: models
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, uuv_gazebo_ros_plugins_msgs, msg, UnderwaterObjectModel
      )()->data);
    size_t size = ros_message->models.size;
    auto array_ptr = ros_message->models.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _GetModelProperties_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetModelProperties_Response__ros_msg_type * ros_message = static_cast<_GetModelProperties_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: link_names
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->link_names.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->link_names);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->link_names, size)) {
      return "failed to create array for field 'link_names'";
    }
    auto array_ptr = ros_message->link_names.data;
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
        fprintf(stderr, "failed to assign string into field 'link_names'\n");
        return false;
      }
    }
  }

  // Field name: models
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, uuv_gazebo_ros_plugins_msgs, msg, UnderwaterObjectModel
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->models.data) {
      uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence__fini(&ros_message->models);
    }
    if (!uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence__init(&ros_message->models, size)) {
      return "failed to create array for field 'models'";
    }
    auto array_ptr = ros_message->models.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_gazebo_ros_plugins_msgs
size_t get_serialized_size_uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetModelProperties_Response__ros_msg_type * ros_message = static_cast<const _GetModelProperties_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name link_names
  {
    size_t array_size = ros_message->link_names.size;
    auto array_ptr = ros_message->link_names.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name models
  {
    size_t array_size = ros_message->models.size;
    auto array_ptr = ros_message->models.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetModelProperties_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_gazebo_ros_plugins_msgs
size_t max_serialized_size_uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: link_names
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
  // member: models
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetModelProperties_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetModelProperties_Response = {
  "uuv_gazebo_ros_plugins_msgs::srv",
  "GetModelProperties_Response",
  _GetModelProperties_Response__cdr_serialize,
  _GetModelProperties_Response__cdr_deserialize,
  _GetModelProperties_Response__get_serialized_size,
  _GetModelProperties_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetModelProperties_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetModelProperties_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_gazebo_ros_plugins_msgs, srv, GetModelProperties_Response)() {
  return &_GetModelProperties_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "uuv_gazebo_ros_plugins_msgs/srv/get_model_properties.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetModelProperties__callbacks = {
  "uuv_gazebo_ros_plugins_msgs::srv",
  "GetModelProperties",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_gazebo_ros_plugins_msgs, srv, GetModelProperties_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_gazebo_ros_plugins_msgs, srv, GetModelProperties_Response)(),
};

static rosidl_service_type_support_t GetModelProperties__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetModelProperties__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_gazebo_ros_plugins_msgs, srv, GetModelProperties)() {
  return &GetModelProperties__handle;
}

#if defined(__cplusplus)
}
#endif
