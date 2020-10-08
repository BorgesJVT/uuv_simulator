// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_world_ros_plugins_msgs:srv/GetCurrentModel.idl
// generated code does not contain a copyright notice

#ifndef UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_CURRENT_MODEL__BUILDER_HPP_
#define UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_CURRENT_MODEL__BUILDER_HPP_

#include "uuv_world_ros_plugins_msgs/srv/detail/get_current_model__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_world_ros_plugins_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request>()
{
  return ::uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace uuv_world_ros_plugins_msgs


namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_GetCurrentModel_Response_mu
{
public:
  explicit Init_GetCurrentModel_Response_mu(::uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response & msg)
  : msg_(msg)
  {}
  ::uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response mu(::uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response::_mu_type arg)
  {
    msg_.mu = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response msg_;
};

class Init_GetCurrentModel_Response_noise
{
public:
  explicit Init_GetCurrentModel_Response_noise(::uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response & msg)
  : msg_(msg)
  {}
  Init_GetCurrentModel_Response_mu noise(::uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response::_noise_type arg)
  {
    msg_.noise = std::move(arg);
    return Init_GetCurrentModel_Response_mu(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response msg_;
};

class Init_GetCurrentModel_Response_max
{
public:
  explicit Init_GetCurrentModel_Response_max(::uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response & msg)
  : msg_(msg)
  {}
  Init_GetCurrentModel_Response_noise max(::uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response::_max_type arg)
  {
    msg_.max = std::move(arg);
    return Init_GetCurrentModel_Response_noise(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response msg_;
};

class Init_GetCurrentModel_Response_min
{
public:
  explicit Init_GetCurrentModel_Response_min(::uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response & msg)
  : msg_(msg)
  {}
  Init_GetCurrentModel_Response_max min(::uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response::_min_type arg)
  {
    msg_.min = std::move(arg);
    return Init_GetCurrentModel_Response_max(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response msg_;
};

class Init_GetCurrentModel_Response_mean
{
public:
  Init_GetCurrentModel_Response_mean()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetCurrentModel_Response_min mean(::uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response::_mean_type arg)
  {
    msg_.mean = std::move(arg);
    return Init_GetCurrentModel_Response_min(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_world_ros_plugins_msgs::srv::GetCurrentModel_Response>()
{
  return uuv_world_ros_plugins_msgs::srv::builder::Init_GetCurrentModel_Response_mean();
}

}  // namespace uuv_world_ros_plugins_msgs

#endif  // UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_CURRENT_MODEL__BUILDER_HPP_
