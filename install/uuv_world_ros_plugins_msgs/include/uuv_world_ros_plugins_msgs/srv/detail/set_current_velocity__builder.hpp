// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_world_ros_plugins_msgs:srv/SetCurrentVelocity.idl
// generated code does not contain a copyright notice

#ifndef UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_VELOCITY__BUILDER_HPP_
#define UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_VELOCITY__BUILDER_HPP_

#include "uuv_world_ros_plugins_msgs/srv/detail/set_current_velocity__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_SetCurrentVelocity_Request_vertical_angle
{
public:
  explicit Init_SetCurrentVelocity_Request_vertical_angle(::uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request & msg)
  : msg_(msg)
  {}
  ::uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request vertical_angle(::uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request::_vertical_angle_type arg)
  {
    msg_.vertical_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request msg_;
};

class Init_SetCurrentVelocity_Request_horizontal_angle
{
public:
  explicit Init_SetCurrentVelocity_Request_horizontal_angle(::uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request & msg)
  : msg_(msg)
  {}
  Init_SetCurrentVelocity_Request_vertical_angle horizontal_angle(::uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request::_horizontal_angle_type arg)
  {
    msg_.horizontal_angle = std::move(arg);
    return Init_SetCurrentVelocity_Request_vertical_angle(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request msg_;
};

class Init_SetCurrentVelocity_Request_velocity
{
public:
  Init_SetCurrentVelocity_Request_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetCurrentVelocity_Request_horizontal_angle velocity(::uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_SetCurrentVelocity_Request_horizontal_angle(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request>()
{
  return uuv_world_ros_plugins_msgs::srv::builder::Init_SetCurrentVelocity_Request_velocity();
}

}  // namespace uuv_world_ros_plugins_msgs


namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_SetCurrentVelocity_Response_success
{
public:
  Init_SetCurrentVelocity_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response success(::uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response>()
{
  return uuv_world_ros_plugins_msgs::srv::builder::Init_SetCurrentVelocity_Response_success();
}

}  // namespace uuv_world_ros_plugins_msgs

#endif  // UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_VELOCITY__BUILDER_HPP_
