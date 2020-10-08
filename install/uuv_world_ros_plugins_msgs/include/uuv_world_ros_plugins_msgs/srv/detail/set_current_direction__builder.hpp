// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_world_ros_plugins_msgs:srv/SetCurrentDirection.idl
// generated code does not contain a copyright notice

#ifndef UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_DIRECTION__BUILDER_HPP_
#define UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_DIRECTION__BUILDER_HPP_

#include "uuv_world_ros_plugins_msgs/srv/detail/set_current_direction__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_SetCurrentDirection_Request_angle
{
public:
  Init_SetCurrentDirection_Request_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request angle(::uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request>()
{
  return uuv_world_ros_plugins_msgs::srv::builder::Init_SetCurrentDirection_Request_angle();
}

}  // namespace uuv_world_ros_plugins_msgs


namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_SetCurrentDirection_Response_success
{
public:
  Init_SetCurrentDirection_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response success(::uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response>()
{
  return uuv_world_ros_plugins_msgs::srv::builder::Init_SetCurrentDirection_Response_success();
}

}  // namespace uuv_world_ros_plugins_msgs

#endif  // UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_DIRECTION__BUILDER_HPP_
