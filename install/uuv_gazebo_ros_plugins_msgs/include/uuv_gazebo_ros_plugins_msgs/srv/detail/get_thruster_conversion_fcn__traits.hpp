// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/GetThrusterConversionFcn.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_THRUSTER_CONVERSION_FCN__TRAITS_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_THRUSTER_CONVERSION_FCN__TRAITS_HPP_

#include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_thruster_conversion_fcn__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request>()
{
  return "uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request";
}

template<>
inline const char * name<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request>()
{
  return "uuv_gazebo_ros_plugins_msgs/srv/GetThrusterConversionFcn_Request";
}

template<>
struct has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'fcn'
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/thruster_conversion_fcn__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response>()
{
  return "uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response";
}

template<>
inline const char * name<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response>()
{
  return "uuv_gazebo_ros_plugins_msgs/srv/GetThrusterConversionFcn_Response";
}

template<>
struct has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response>
  : std::integral_constant<bool, has_fixed_size<uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn>::value> {};

template<>
struct has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response>
  : std::integral_constant<bool, has_bounded_size<uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn>::value> {};

template<>
struct is_message<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn>()
{
  return "uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn";
}

template<>
inline const char * name<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn>()
{
  return "uuv_gazebo_ros_plugins_msgs/srv/GetThrusterConversionFcn";
}

template<>
struct has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request>::value &&
    has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request>::value &&
    has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response>::value
  >
{
};

template<>
struct is_service<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_THRUSTER_CONVERSION_FCN__TRAITS_HPP_
