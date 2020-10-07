// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/GetFloat.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_FLOAT__TRAITS_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_FLOAT__TRAITS_HPP_

#include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_float__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_gazebo_ros_plugins_msgs::srv::GetFloat_Request>()
{
  return "uuv_gazebo_ros_plugins_msgs::srv::GetFloat_Request";
}

template<>
inline const char * name<uuv_gazebo_ros_plugins_msgs::srv::GetFloat_Request>()
{
  return "uuv_gazebo_ros_plugins_msgs/srv/GetFloat_Request";
}

template<>
struct has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::GetFloat_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::GetFloat_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_gazebo_ros_plugins_msgs::srv::GetFloat_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_gazebo_ros_plugins_msgs::srv::GetFloat_Response>()
{
  return "uuv_gazebo_ros_plugins_msgs::srv::GetFloat_Response";
}

template<>
inline const char * name<uuv_gazebo_ros_plugins_msgs::srv::GetFloat_Response>()
{
  return "uuv_gazebo_ros_plugins_msgs/srv/GetFloat_Response";
}

template<>
struct has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::GetFloat_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::GetFloat_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_gazebo_ros_plugins_msgs::srv::GetFloat_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_gazebo_ros_plugins_msgs::srv::GetFloat>()
{
  return "uuv_gazebo_ros_plugins_msgs::srv::GetFloat";
}

template<>
inline const char * name<uuv_gazebo_ros_plugins_msgs::srv::GetFloat>()
{
  return "uuv_gazebo_ros_plugins_msgs/srv/GetFloat";
}

template<>
struct has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::GetFloat>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::GetFloat_Request>::value &&
    has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::GetFloat_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::GetFloat>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::GetFloat_Request>::value &&
    has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::GetFloat_Response>::value
  >
{
};

template<>
struct is_service<uuv_gazebo_ros_plugins_msgs::srv::GetFloat>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_gazebo_ros_plugins_msgs::srv::GetFloat_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_gazebo_ros_plugins_msgs::srv::GetFloat_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_FLOAT__TRAITS_HPP_
