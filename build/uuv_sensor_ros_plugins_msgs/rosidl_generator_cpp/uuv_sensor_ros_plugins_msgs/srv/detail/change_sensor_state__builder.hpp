// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_sensor_ros_plugins_msgs:srv/ChangeSensorState.idl
// generated code does not contain a copyright notice

#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS__SRV__DETAIL__CHANGE_SENSOR_STATE__BUILDER_HPP_
#define UUV_SENSOR_ROS_PLUGINS_MSGS__SRV__DETAIL__CHANGE_SENSOR_STATE__BUILDER_HPP_

#include "uuv_sensor_ros_plugins_msgs/srv/detail/change_sensor_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_sensor_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_ChangeSensorState_Request_on
{
public:
  Init_ChangeSensorState_Request_on()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Request on(::uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Request::_on_type arg)
  {
    msg_.on = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Request>()
{
  return uuv_sensor_ros_plugins_msgs::srv::builder::Init_ChangeSensorState_Request_on();
}

}  // namespace uuv_sensor_ros_plugins_msgs


namespace uuv_sensor_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_ChangeSensorState_Response_message
{
public:
  explicit Init_ChangeSensorState_Response_message(::uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Response & msg)
  : msg_(msg)
  {}
  ::uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Response message(::uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Response msg_;
};

class Init_ChangeSensorState_Response_success
{
public:
  Init_ChangeSensorState_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChangeSensorState_Response_message success(::uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ChangeSensorState_Response_message(msg_);
  }

private:
  ::uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Response>()
{
  return uuv_sensor_ros_plugins_msgs::srv::builder::Init_ChangeSensorState_Response_success();
}

}  // namespace uuv_sensor_ros_plugins_msgs

#endif  // UUV_SENSOR_ROS_PLUGINS_MSGS__SRV__DETAIL__CHANGE_SENSOR_STATE__BUILDER_HPP_
