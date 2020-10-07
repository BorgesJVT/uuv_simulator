// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/UnderwaterObjectModel.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__UNDERWATER_OBJECT_MODEL__BUILDER_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__UNDERWATER_OBJECT_MODEL__BUILDER_HPP_

#include "uuv_gazebo_ros_plugins_msgs/msg/detail/underwater_object_model__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_gazebo_ros_plugins_msgs
{

namespace msg
{

namespace builder
{

class Init_UnderwaterObjectModel_inertia
{
public:
  explicit Init_UnderwaterObjectModel_inertia(::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel & msg)
  : msg_(msg)
  {}
  ::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel inertia(::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel::_inertia_type arg)
  {
    msg_.inertia = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel msg_;
};

class Init_UnderwaterObjectModel_neutrally_buoyant
{
public:
  explicit Init_UnderwaterObjectModel_neutrally_buoyant(::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel & msg)
  : msg_(msg)
  {}
  Init_UnderwaterObjectModel_inertia neutrally_buoyant(::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel::_neutrally_buoyant_type arg)
  {
    msg_.neutrally_buoyant = std::move(arg);
    return Init_UnderwaterObjectModel_inertia(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel msg_;
};

class Init_UnderwaterObjectModel_cob
{
public:
  explicit Init_UnderwaterObjectModel_cob(::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel & msg)
  : msg_(msg)
  {}
  Init_UnderwaterObjectModel_neutrally_buoyant cob(::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel::_cob_type arg)
  {
    msg_.cob = std::move(arg);
    return Init_UnderwaterObjectModel_neutrally_buoyant(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel msg_;
};

class Init_UnderwaterObjectModel_fluid_density
{
public:
  explicit Init_UnderwaterObjectModel_fluid_density(::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel & msg)
  : msg_(msg)
  {}
  Init_UnderwaterObjectModel_cob fluid_density(::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel::_fluid_density_type arg)
  {
    msg_.fluid_density = std::move(arg);
    return Init_UnderwaterObjectModel_cob(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel msg_;
};

class Init_UnderwaterObjectModel_bbox_width
{
public:
  explicit Init_UnderwaterObjectModel_bbox_width(::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel & msg)
  : msg_(msg)
  {}
  Init_UnderwaterObjectModel_fluid_density bbox_width(::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel::_bbox_width_type arg)
  {
    msg_.bbox_width = std::move(arg);
    return Init_UnderwaterObjectModel_fluid_density(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel msg_;
};

class Init_UnderwaterObjectModel_bbox_length
{
public:
  explicit Init_UnderwaterObjectModel_bbox_length(::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel & msg)
  : msg_(msg)
  {}
  Init_UnderwaterObjectModel_bbox_width bbox_length(::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel::_bbox_length_type arg)
  {
    msg_.bbox_length = std::move(arg);
    return Init_UnderwaterObjectModel_bbox_width(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel msg_;
};

class Init_UnderwaterObjectModel_bbox_height
{
public:
  explicit Init_UnderwaterObjectModel_bbox_height(::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel & msg)
  : msg_(msg)
  {}
  Init_UnderwaterObjectModel_bbox_length bbox_height(::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel::_bbox_height_type arg)
  {
    msg_.bbox_height = std::move(arg);
    return Init_UnderwaterObjectModel_bbox_length(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel msg_;
};

class Init_UnderwaterObjectModel_volume
{
public:
  explicit Init_UnderwaterObjectModel_volume(::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel & msg)
  : msg_(msg)
  {}
  Init_UnderwaterObjectModel_bbox_height volume(::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel::_volume_type arg)
  {
    msg_.volume = std::move(arg);
    return Init_UnderwaterObjectModel_bbox_height(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel msg_;
};

class Init_UnderwaterObjectModel_quadratic_damping
{
public:
  explicit Init_UnderwaterObjectModel_quadratic_damping(::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel & msg)
  : msg_(msg)
  {}
  Init_UnderwaterObjectModel_volume quadratic_damping(::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel::_quadratic_damping_type arg)
  {
    msg_.quadratic_damping = std::move(arg);
    return Init_UnderwaterObjectModel_volume(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel msg_;
};

class Init_UnderwaterObjectModel_linear_damping_forward_speed
{
public:
  explicit Init_UnderwaterObjectModel_linear_damping_forward_speed(::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel & msg)
  : msg_(msg)
  {}
  Init_UnderwaterObjectModel_quadratic_damping linear_damping_forward_speed(::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel::_linear_damping_forward_speed_type arg)
  {
    msg_.linear_damping_forward_speed = std::move(arg);
    return Init_UnderwaterObjectModel_quadratic_damping(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel msg_;
};

class Init_UnderwaterObjectModel_linear_damping
{
public:
  explicit Init_UnderwaterObjectModel_linear_damping(::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel & msg)
  : msg_(msg)
  {}
  Init_UnderwaterObjectModel_linear_damping_forward_speed linear_damping(::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel::_linear_damping_type arg)
  {
    msg_.linear_damping = std::move(arg);
    return Init_UnderwaterObjectModel_linear_damping_forward_speed(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel msg_;
};

class Init_UnderwaterObjectModel_added_mass
{
public:
  Init_UnderwaterObjectModel_added_mass()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UnderwaterObjectModel_linear_damping added_mass(::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel::_added_mass_type arg)
  {
    msg_.added_mass = std::move(arg);
    return Init_UnderwaterObjectModel_linear_damping(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel>()
{
  return uuv_gazebo_ros_plugins_msgs::msg::builder::Init_UnderwaterObjectModel_added_mass();
}

}  // namespace uuv_gazebo_ros_plugins_msgs

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__UNDERWATER_OBJECT_MODEL__BUILDER_HPP_
