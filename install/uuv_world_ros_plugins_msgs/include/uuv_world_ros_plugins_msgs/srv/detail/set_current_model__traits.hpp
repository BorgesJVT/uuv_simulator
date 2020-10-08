// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_world_ros_plugins_msgs:srv/SetCurrentModel.idl
// generated code does not contain a copyright notice

#ifndef UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_MODEL__TRAITS_HPP_
#define UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_MODEL__TRAITS_HPP_

#include "uuv_world_ros_plugins_msgs/srv/detail/set_current_model__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request>()
{
  return "uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request";
}

template<>
inline const char * name<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request>()
{
  return "uuv_world_ros_plugins_msgs/srv/SetCurrentModel_Request";
}

template<>
struct has_fixed_size<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Response>()
{
  return "uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Response";
}

template<>
inline const char * name<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Response>()
{
  return "uuv_world_ros_plugins_msgs/srv/SetCurrentModel_Response";
}

template<>
struct has_fixed_size<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_world_ros_plugins_msgs::srv::SetCurrentModel>()
{
  return "uuv_world_ros_plugins_msgs::srv::SetCurrentModel";
}

template<>
inline const char * name<uuv_world_ros_plugins_msgs::srv::SetCurrentModel>()
{
  return "uuv_world_ros_plugins_msgs/srv/SetCurrentModel";
}

template<>
struct has_fixed_size<uuv_world_ros_plugins_msgs::srv::SetCurrentModel>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request>::value &&
    has_fixed_size<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_world_ros_plugins_msgs::srv::SetCurrentModel>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request>::value &&
    has_bounded_size<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Response>::value
  >
{
};

template<>
struct is_service<uuv_world_ros_plugins_msgs::srv::SetCurrentModel>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_MODEL__TRAITS_HPP_
