// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_sensor_ros_plugins_msgs:msg/PositionWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__POSITION_WITH_COVARIANCE__TRAITS_HPP_
#define UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__POSITION_WITH_COVARIANCE__TRAITS_HPP_

#include "uuv_sensor_ros_plugins_msgs/msg/detail/position_with_covariance__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pos'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance>()
{
  return "uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance";
}

template<>
inline const char * name<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance>()
{
  return "uuv_sensor_ros_plugins_msgs/msg/PositionWithCovariance";
}

template<>
struct has_fixed_size<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__POSITION_WITH_COVARIANCE__TRAITS_HPP_
