// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_world_ros_plugins_msgs:srv/SetCurrentModel.idl
// generated code does not contain a copyright notice

#ifndef UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_MODEL__BUILDER_HPP_
#define UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_MODEL__BUILDER_HPP_

#include "uuv_world_ros_plugins_msgs/srv/detail/set_current_model__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_SetCurrentModel_Request_mu
{
public:
  explicit Init_SetCurrentModel_Request_mu(::uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request & msg)
  : msg_(msg)
  {}
  ::uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request mu(::uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request::_mu_type arg)
  {
    msg_.mu = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request msg_;
};

class Init_SetCurrentModel_Request_noise
{
public:
  explicit Init_SetCurrentModel_Request_noise(::uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request & msg)
  : msg_(msg)
  {}
  Init_SetCurrentModel_Request_mu noise(::uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request::_noise_type arg)
  {
    msg_.noise = std::move(arg);
    return Init_SetCurrentModel_Request_mu(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request msg_;
};

class Init_SetCurrentModel_Request_max
{
public:
  explicit Init_SetCurrentModel_Request_max(::uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request & msg)
  : msg_(msg)
  {}
  Init_SetCurrentModel_Request_noise max(::uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request::_max_type arg)
  {
    msg_.max = std::move(arg);
    return Init_SetCurrentModel_Request_noise(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request msg_;
};

class Init_SetCurrentModel_Request_min
{
public:
  explicit Init_SetCurrentModel_Request_min(::uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request & msg)
  : msg_(msg)
  {}
  Init_SetCurrentModel_Request_max min(::uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request::_min_type arg)
  {
    msg_.min = std::move(arg);
    return Init_SetCurrentModel_Request_max(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request msg_;
};

class Init_SetCurrentModel_Request_mean
{
public:
  Init_SetCurrentModel_Request_mean()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetCurrentModel_Request_min mean(::uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request::_mean_type arg)
  {
    msg_.mean = std::move(arg);
    return Init_SetCurrentModel_Request_min(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request>()
{
  return uuv_world_ros_plugins_msgs::srv::builder::Init_SetCurrentModel_Request_mean();
}

}  // namespace uuv_world_ros_plugins_msgs


namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_SetCurrentModel_Response_success
{
public:
  Init_SetCurrentModel_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Response success(::uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Response>()
{
  return uuv_world_ros_plugins_msgs::srv::builder::Init_SetCurrentModel_Response_success();
}

}  // namespace uuv_world_ros_plugins_msgs

#endif  // UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_MODEL__BUILDER_HPP_
