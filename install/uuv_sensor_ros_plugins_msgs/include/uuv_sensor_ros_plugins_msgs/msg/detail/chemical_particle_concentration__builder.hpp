// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_sensor_ros_plugins_msgs:msg/ChemicalParticleConcentration.idl
// generated code does not contain a copyright notice

#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__CHEMICAL_PARTICLE_CONCENTRATION__BUILDER_HPP_
#define UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__CHEMICAL_PARTICLE_CONCENTRATION__BUILDER_HPP_

#include "uuv_sensor_ros_plugins_msgs/msg/detail/chemical_particle_concentration__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_sensor_ros_plugins_msgs
{

namespace msg
{

namespace builder
{

class Init_ChemicalParticleConcentration_is_measuring
{
public:
  explicit Init_ChemicalParticleConcentration_is_measuring(::uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration & msg)
  : msg_(msg)
  {}
  ::uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration is_measuring(::uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration::_is_measuring_type arg)
  {
    msg_.is_measuring = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration msg_;
};

class Init_ChemicalParticleConcentration_concentration
{
public:
  explicit Init_ChemicalParticleConcentration_concentration(::uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration & msg)
  : msg_(msg)
  {}
  Init_ChemicalParticleConcentration_is_measuring concentration(::uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration::_concentration_type arg)
  {
    msg_.concentration = std::move(arg);
    return Init_ChemicalParticleConcentration_is_measuring(msg_);
  }

private:
  ::uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration msg_;
};

class Init_ChemicalParticleConcentration_depth
{
public:
  explicit Init_ChemicalParticleConcentration_depth(::uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration & msg)
  : msg_(msg)
  {}
  Init_ChemicalParticleConcentration_concentration depth(::uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return Init_ChemicalParticleConcentration_concentration(msg_);
  }

private:
  ::uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration msg_;
};

class Init_ChemicalParticleConcentration_longitude
{
public:
  explicit Init_ChemicalParticleConcentration_longitude(::uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration & msg)
  : msg_(msg)
  {}
  Init_ChemicalParticleConcentration_depth longitude(::uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_ChemicalParticleConcentration_depth(msg_);
  }

private:
  ::uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration msg_;
};

class Init_ChemicalParticleConcentration_latitude
{
public:
  explicit Init_ChemicalParticleConcentration_latitude(::uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration & msg)
  : msg_(msg)
  {}
  Init_ChemicalParticleConcentration_longitude latitude(::uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_ChemicalParticleConcentration_longitude(msg_);
  }

private:
  ::uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration msg_;
};

class Init_ChemicalParticleConcentration_position
{
public:
  explicit Init_ChemicalParticleConcentration_position(::uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration & msg)
  : msg_(msg)
  {}
  Init_ChemicalParticleConcentration_latitude position(::uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_ChemicalParticleConcentration_latitude(msg_);
  }

private:
  ::uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration msg_;
};

class Init_ChemicalParticleConcentration_header
{
public:
  Init_ChemicalParticleConcentration_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChemicalParticleConcentration_position header(::uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ChemicalParticleConcentration_position(msg_);
  }

private:
  ::uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration>()
{
  return uuv_sensor_ros_plugins_msgs::msg::builder::Init_ChemicalParticleConcentration_header();
}

}  // namespace uuv_sensor_ros_plugins_msgs

#endif  // UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__CHEMICAL_PARTICLE_CONCENTRATION__BUILDER_HPP_
