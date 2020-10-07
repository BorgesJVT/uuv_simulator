// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/GetThrusterEfficiency.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_THRUSTER_EFFICIENCY__BUILDER_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_THRUSTER_EFFICIENCY__BUILDER_HPP_

#include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_thruster_efficiency__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency_Request>()
{
  return ::uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace uuv_gazebo_ros_plugins_msgs


namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_GetThrusterEfficiency_Response_efficiency
{
public:
  Init_GetThrusterEfficiency_Response_efficiency()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency_Response efficiency(::uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency_Response::_efficiency_type arg)
  {
    msg_.efficiency = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency_Response>()
{
  return uuv_gazebo_ros_plugins_msgs::srv::builder::Init_GetThrusterEfficiency_Response_efficiency();
}

}  // namespace uuv_gazebo_ros_plugins_msgs

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_THRUSTER_EFFICIENCY__BUILDER_HPP_
