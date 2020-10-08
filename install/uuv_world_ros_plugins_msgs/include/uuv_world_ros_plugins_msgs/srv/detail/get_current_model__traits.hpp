// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_world_ros_plugins_msgs:srv/GetCurrentModel.idl
// generated code does not contain a copyright notice

#ifndef UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_CURRENT_MODEL__TRAITS_HPP_
#define UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_CURRENT_MODEL__TRAITS_HPP_

#include "uuv_world_ros_plugins_msgs/srv/detail/get_current_model__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request>()
{
  return "uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request";
}

template<>
inline const char * name<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request>()
{
  return "uuv_world_ros_plugins_msgs/srv/GetCurrentModel_Request";
}

template<>
struct has_fixed_size<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response>()
{
  return "uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response";
}

template<>
inline const char * name<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response>()
{
  return "uuv_world_ros_plugins_msgs/srv/GetCurrentModel_Response";
}

template<>
struct has_fixed_size<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_world_ros_plugins_msgs::srv::GetCurrentModel>()
{
  return "uuv_world_ros_plugins_msgs::srv::GetCurrentModel";
}

template<>
inline const char * name<uuv_world_ros_plugins_msgs::srv::GetCurrentModel>()
{
  return "uuv_world_ros_plugins_msgs/srv/GetCurrentModel";
}

template<>
struct has_fixed_size<uuv_world_ros_plugins_msgs::srv::GetCurrentModel>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request>::value &&
    has_fixed_size<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_world_ros_plugins_msgs::srv::GetCurrentModel>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request>::value &&
    has_bounded_size<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response>::value
  >
{
};

template<>
struct is_service<uuv_world_ros_plugins_msgs::srv::GetCurrentModel>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_CURRENT_MODEL__TRAITS_HPP_
