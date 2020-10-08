// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/FloatStamped.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__FLOAT_STAMPED__TRAITS_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__FLOAT_STAMPED__TRAITS_HPP_

#include "uuv_gazebo_ros_plugins_msgs/msg/detail/float_stamped__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_gazebo_ros_plugins_msgs::msg::FloatStamped>()
{
  return "uuv_gazebo_ros_plugins_msgs::msg::FloatStamped";
}

template<>
inline const char * name<uuv_gazebo_ros_plugins_msgs::msg::FloatStamped>()
{
  return "uuv_gazebo_ros_plugins_msgs/msg/FloatStamped";
}

template<>
struct has_fixed_size<uuv_gazebo_ros_plugins_msgs::msg::FloatStamped>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<uuv_gazebo_ros_plugins_msgs::msg::FloatStamped>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<uuv_gazebo_ros_plugins_msgs::msg::FloatStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__FLOAT_STAMPED__TRAITS_HPP_
