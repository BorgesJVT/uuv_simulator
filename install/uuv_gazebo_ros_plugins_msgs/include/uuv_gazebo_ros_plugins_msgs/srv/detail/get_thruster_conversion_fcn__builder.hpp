// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/GetThrusterConversionFcn.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_THRUSTER_CONVERSION_FCN__BUILDER_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_THRUSTER_CONVERSION_FCN__BUILDER_HPP_

#include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_thruster_conversion_fcn__struct.hpp"
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
auto build<::uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request>()
{
  return ::uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace uuv_gazebo_ros_plugins_msgs


namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_GetThrusterConversionFcn_Response_fcn
{
public:
  Init_GetThrusterConversionFcn_Response_fcn()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response fcn(::uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response::_fcn_type arg)
  {
    msg_.fcn = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response>()
{
  return uuv_gazebo_ros_plugins_msgs::srv::builder::Init_GetThrusterConversionFcn_Response_fcn();
}

}  // namespace uuv_gazebo_ros_plugins_msgs

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_THRUSTER_CONVERSION_FCN__BUILDER_HPP_
