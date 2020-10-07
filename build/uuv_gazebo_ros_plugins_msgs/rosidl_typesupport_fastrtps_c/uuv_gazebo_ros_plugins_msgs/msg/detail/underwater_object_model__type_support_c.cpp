// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/UnderwaterObjectModel.idl
// generated code does not contain a copyright notice
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/underwater_object_model__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "uuv_gazebo_ros_plugins_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/underwater_object_model__struct.h"
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/underwater_object_model__functions.h"
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

#include "geometry_msgs/msg/detail/inertia__functions.h"  // inertia
#include "geometry_msgs/msg/detail/vector3__functions.h"  // cob
#include "rosidl_runtime_c/primitives_sequence.h"  // added_mass, linear_damping, linear_damping_forward_speed, quadratic_damping
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // added_mass, linear_damping, linear_damping_forward_speed, quadratic_damping

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_uuv_gazebo_ros_plugins_msgs
size_t get_serialized_size_geometry_msgs__msg__Inertia(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_uuv_gazebo_ros_plugins_msgs
size_t max_serialized_size_geometry_msgs__msg__Inertia(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_uuv_gazebo_ros_plugins_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Inertia)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_uuv_gazebo_ros_plugins_msgs
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_uuv_gazebo_ros_plugins_msgs
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_uuv_gazebo_ros_plugins_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3)();


using _UnderwaterObjectModel__ros_msg_type = uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel;

static bool _UnderwaterObjectModel__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _UnderwaterObjectModel__ros_msg_type * ros_message = static_cast<const _UnderwaterObjectModel__ros_msg_type *>(untyped_ros_message);
  // Field name: added_mass
  {
    size_t size = ros_message->added_mass.size;
    auto array_ptr = ros_message->added_mass.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: linear_damping
  {
    size_t size = ros_message->linear_damping.size;
    auto array_ptr = ros_message->linear_damping.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: linear_damping_forward_speed
  {
    size_t size = ros_message->linear_damping_forward_speed.size;
    auto array_ptr = ros_message->linear_damping_forward_speed.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: quadratic_damping
  {
    size_t size = ros_message->quadratic_damping.size;
    auto array_ptr = ros_message->quadratic_damping.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: volume
  {
    cdr << ros_message->volume;
  }

  // Field name: bbox_height
  {
    cdr << ros_message->bbox_height;
  }

  // Field name: bbox_length
  {
    cdr << ros_message->bbox_length;
  }

  // Field name: bbox_width
  {
    cdr << ros_message->bbox_width;
  }

  // Field name: fluid_density
  {
    cdr << ros_message->fluid_density;
  }

  // Field name: cob
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cob, cdr))
    {
      return false;
    }
  }

  // Field name: neutrally_buoyant
  {
    cdr << (ros_message->neutrally_buoyant ? true : false);
  }

  // Field name: inertia
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Inertia
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->inertia, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _UnderwaterObjectModel__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _UnderwaterObjectModel__ros_msg_type * ros_message = static_cast<_UnderwaterObjectModel__ros_msg_type *>(untyped_ros_message);
  // Field name: added_mass
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->added_mass.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->added_mass);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->added_mass, size)) {
      return "failed to create array for field 'added_mass'";
    }
    auto array_ptr = ros_message->added_mass.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: linear_damping
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->linear_damping.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->linear_damping);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->linear_damping, size)) {
      return "failed to create array for field 'linear_damping'";
    }
    auto array_ptr = ros_message->linear_damping.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: linear_damping_forward_speed
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->linear_damping_forward_speed.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->linear_damping_forward_speed);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->linear_damping_forward_speed, size)) {
      return "failed to create array for field 'linear_damping_forward_speed'";
    }
    auto array_ptr = ros_message->linear_damping_forward_speed.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: quadratic_damping
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->quadratic_damping.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->quadratic_damping);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->quadratic_damping, size)) {
      return "failed to create array for field 'quadratic_damping'";
    }
    auto array_ptr = ros_message->quadratic_damping.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: volume
  {
    cdr >> ros_message->volume;
  }

  // Field name: bbox_height
  {
    cdr >> ros_message->bbox_height;
  }

  // Field name: bbox_length
  {
    cdr >> ros_message->bbox_length;
  }

  // Field name: bbox_width
  {
    cdr >> ros_message->bbox_width;
  }

  // Field name: fluid_density
  {
    cdr >> ros_message->fluid_density;
  }

  // Field name: cob
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cob))
    {
      return false;
    }
  }

  // Field name: neutrally_buoyant
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->neutrally_buoyant = tmp ? true : false;
  }

  // Field name: inertia
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Inertia
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->inertia))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_gazebo_ros_plugins_msgs
size_t get_serialized_size_uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UnderwaterObjectModel__ros_msg_type * ros_message = static_cast<const _UnderwaterObjectModel__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name added_mass
  {
    size_t array_size = ros_message->added_mass.size;
    auto array_ptr = ros_message->added_mass.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name linear_damping
  {
    size_t array_size = ros_message->linear_damping.size;
    auto array_ptr = ros_message->linear_damping.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name linear_damping_forward_speed
  {
    size_t array_size = ros_message->linear_damping_forward_speed.size;
    auto array_ptr = ros_message->linear_damping_forward_speed.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name quadratic_damping
  {
    size_t array_size = ros_message->quadratic_damping.size;
    auto array_ptr = ros_message->quadratic_damping.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name volume
  {
    size_t item_size = sizeof(ros_message->volume);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bbox_height
  {
    size_t item_size = sizeof(ros_message->bbox_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bbox_length
  {
    size_t item_size = sizeof(ros_message->bbox_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bbox_width
  {
    size_t item_size = sizeof(ros_message->bbox_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fluid_density
  {
    size_t item_size = sizeof(ros_message->fluid_density);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cob

  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->cob), current_alignment);
  // field.name neutrally_buoyant
  {
    size_t item_size = sizeof(ros_message->neutrally_buoyant);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name inertia

  current_alignment += get_serialized_size_geometry_msgs__msg__Inertia(
    &(ros_message->inertia), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _UnderwaterObjectModel__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_gazebo_ros_plugins_msgs
size_t max_serialized_size_uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: added_mass
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: linear_damping
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: linear_damping_forward_speed
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: quadratic_damping
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: volume
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: bbox_height
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: bbox_length
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: bbox_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: fluid_density
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cob
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Vector3(
        full_bounded, current_alignment);
    }
  }
  // member: neutrally_buoyant
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: inertia
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Inertia(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _UnderwaterObjectModel__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_UnderwaterObjectModel = {
  "uuv_gazebo_ros_plugins_msgs::msg",
  "UnderwaterObjectModel",
  _UnderwaterObjectModel__cdr_serialize,
  _UnderwaterObjectModel__cdr_deserialize,
  _UnderwaterObjectModel__get_serialized_size,
  _UnderwaterObjectModel__max_serialized_size
};

static rosidl_message_type_support_t _UnderwaterObjectModel__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UnderwaterObjectModel,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_gazebo_ros_plugins_msgs, msg, UnderwaterObjectModel)() {
  return &_UnderwaterObjectModel__type_support;
}

#if defined(__cplusplus)
}
#endif
