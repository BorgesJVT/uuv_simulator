// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/SetUseGlobalCurrentVel.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_USE_GLOBAL_CURRENT_VEL__BUILDER_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_USE_GLOBAL_CURRENT_VEL__BUILDER_HPP_

#include "uuv_gazebo_ros_plugins_msgs/srv/detail/set_use_global_current_vel__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_SetUseGlobalCurrentVel_Request_use_global
{
public:
  Init_SetUseGlobalCurrentVel_Request_use_global()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Request use_global(::uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Request::_use_global_type arg)
  {
    msg_.use_global = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Request>()
{
  return uuv_gazebo_ros_plugins_msgs::srv::builder::Init_SetUseGlobalCurrentVel_Request_use_global();
}

}  // namespace uuv_gazebo_ros_plugins_msgs


namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_SetUseGlobalCurrentVel_Response_success
{
public:
  Init_SetUseGlobalCurrentVel_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Response success(::uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Response>()
{
  return uuv_gazebo_ros_plugins_msgs::srv::builder::Init_SetUseGlobalCurrentVel_Response_success();
}

}  // namespace uuv_gazebo_ros_plugins_msgs

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_USE_GLOBAL_CURRENT_VEL__BUILDER_HPP_
