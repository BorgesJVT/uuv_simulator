// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/UnderwaterObjectModel.idl
// generated code does not contain a copyright notice
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/underwater_object_model__rosidl_typesupport_fastrtps_cpp.hpp"
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/underwater_object_model__struct.hpp"

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

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Inertia &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Inertia &);
size_t get_serialized_size(
  const geometry_msgs::msg::Inertia &,
  size_t current_alignment);
size_t
max_serialized_size_Inertia(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace uuv_gazebo_ros_plugins_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_gazebo_ros_plugins_msgs
cdr_serialize(
  const uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: added_mass
  {
    cdr << ros_message.added_mass;
  }
  // Member: linear_damping
  {
    cdr << ros_message.linear_damping;
  }
  // Member: linear_damping_forward_speed
  {
    cdr << ros_message.linear_damping_forward_speed;
  }
  // Member: quadratic_damping
  {
    cdr << ros_message.quadratic_damping;
  }
  // Member: volume
  cdr << ros_message.volume;
  // Member: bbox_height
  cdr << ros_message.bbox_height;
  // Member: bbox_length
  cdr << ros_message.bbox_length;
  // Member: bbox_width
  cdr << ros_message.bbox_width;
  // Member: fluid_density
  cdr << ros_message.fluid_density;
  // Member: cob
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.cob,
    cdr);
  // Member: neutrally_buoyant
  cdr << (ros_message.neutrally_buoyant ? true : false);
  // Member: inertia
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.inertia,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_gazebo_ros_plugins_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel & ros_message)
{
  // Member: added_mass
  {
    cdr >> ros_message.added_mass;
  }

  // Member: linear_damping
  {
    cdr >> ros_message.linear_damping;
  }

  // Member: linear_damping_forward_speed
  {
    cdr >> ros_message.linear_damping_forward_speed;
  }

  // Member: quadratic_damping
  {
    cdr >> ros_message.quadratic_damping;
  }

  // Member: volume
  cdr >> ros_message.volume;

  // Member: bbox_height
  cdr >> ros_message.bbox_height;

  // Member: bbox_length
  cdr >> ros_message.bbox_length;

  // Member: bbox_width
  cdr >> ros_message.bbox_width;

  // Member: fluid_density
  cdr >> ros_message.fluid_density;

  // Member: cob
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.cob);

  // Member: neutrally_buoyant
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.neutrally_buoyant = tmp ? true : false;
  }

  // Member: inertia
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.inertia);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_gazebo_ros_plugins_msgs
get_serialized_size(
  const uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: added_mass
  {
    size_t array_size = ros_message.added_mass.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.added_mass[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: linear_damping
  {
    size_t array_size = ros_message.linear_damping.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.linear_damping[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: linear_damping_forward_speed
  {
    size_t array_size = ros_message.linear_damping_forward_speed.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.linear_damping_forward_speed[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: quadratic_damping
  {
    size_t array_size = ros_message.quadratic_damping.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.quadratic_damping[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: volume
  {
    size_t item_size = sizeof(ros_message.volume);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bbox_height
  {
    size_t item_size = sizeof(ros_message.bbox_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bbox_length
  {
    size_t item_size = sizeof(ros_message.bbox_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bbox_width
  {
    size_t item_size = sizeof(ros_message.bbox_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fluid_density
  {
    size_t item_size = sizeof(ros_message.fluid_density);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cob

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.cob, current_alignment);
  // Member: neutrally_buoyant
  {
    size_t item_size = sizeof(ros_message.neutrally_buoyant);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: inertia

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.inertia, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_gazebo_ros_plugins_msgs
max_serialized_size_UnderwaterObjectModel(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: added_mass
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: linear_damping
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: linear_damping_forward_speed
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: quadratic_damping
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: volume
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: bbox_height
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: bbox_length
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: bbox_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: fluid_density
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cob
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        full_bounded, current_alignment);
    }
  }

  // Member: neutrally_buoyant
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: inertia
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Inertia(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _UnderwaterObjectModel__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _UnderwaterObjectModel__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _UnderwaterObjectModel__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _UnderwaterObjectModel__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_UnderwaterObjectModel(full_bounded, 0);
}

static message_type_support_callbacks_t _UnderwaterObjectModel__callbacks = {
  "uuv_gazebo_ros_plugins_msgs::msg",
  "UnderwaterObjectModel",
  _UnderwaterObjectModel__cdr_serialize,
  _UnderwaterObjectModel__cdr_deserialize,
  _UnderwaterObjectModel__get_serialized_size,
  _UnderwaterObjectModel__max_serialized_size
};

static rosidl_message_type_support_t _UnderwaterObjectModel__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_UnderwaterObjectModel__callbacks,
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
get_message_type_support_handle<uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel>()
{
  return &uuv_gazebo_ros_plugins_msgs::msg::typesupport_fastrtps_cpp::_UnderwaterObjectModel__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_gazebo_ros_plugins_msgs, msg, UnderwaterObjectModel)() {
  return &uuv_gazebo_ros_plugins_msgs::msg::typesupport_fastrtps_cpp::_UnderwaterObjectModel__handle;
}

#ifdef __cplusplus
}
#endif
