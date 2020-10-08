// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/SetThrusterState.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_THRUSTER_STATE__BUILDER_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_THRUSTER_STATE__BUILDER_HPP_

#include "uuv_gazebo_ros_plugins_msgs/srv/detail/set_thruster_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_SetThrusterState_Request_on
{
public:
  Init_SetThrusterState_Request_on()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_gazebo_ros_plugins_msgs::srv::SetThrusterState_Request on(::uuv_gazebo_ros_plugins_msgs::srv::SetThrusterState_Request::_on_type arg)
  {
    msg_.on = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::srv::SetThrusterState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_gazebo_ros_plugins_msgs::srv::SetThrusterState_Request>()
{
  return uuv_gazebo_ros_plugins_msgs::srv::builder::Init_SetThrusterState_Request_on();
}

}  // namespace uuv_gazebo_ros_plugins_msgs


namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_SetThrusterState_Response_success
{
public:
  Init_SetThrusterState_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_gazebo_ros_plugins_msgs::srv::SetThrusterState_Response success(::uuv_gazebo_ros_plugins_msgs::srv::SetThrusterState_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::srv::SetThrusterState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_gazebo_ros_plugins_msgs::srv::SetThrusterState_Response>()
{
  return uuv_gazebo_ros_plugins_msgs::srv::builder::Init_SetThrusterState_Response_success();
}

}  // namespace uuv_gazebo_ros_plugins_msgs

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_THRUSTER_STATE__BUILDER_HPP_
