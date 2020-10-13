#ifndef UUV_GAZEBO_PLUGINS__JOINT_STATE_PUBLISHER_HPP__
#define UUV_GAZEBO_PLUGINS__JOINT_STATE_PUBLISHER_HPP__

#include <string>
#include <vector>

#include <boost/scoped_ptr.hpp>
#include <boost/algorithm/string.hpp>
#include <gazebo/common/Plugin.hh>
#include <gazebo/common/Event.hh>
#include <gazebo/physics/Model.hh>
#include <gazebo/physics/Joint.hh>
#include <gazebo/physics/World.hh>

//#include <ros/ros.h>
#include "rclcpp/rclcpp.hpp"
#include <gazebo_ros/node.hpp>

//#include <sensor_msgs/JointState.h>
#include <sensor_msgs/msg/joint_state.hpp>

#include <sstream>

namespace uuv_gazebo_plugins
{
class JointStatePublisher : public gazebo::ModelPlugin
{
public:
  JointStatePublisher();

  ~JointStatePublisher();

  void Load(gazebo::physics::ModelPtr _parent, sdf::ElementPtr _sdf);

  void OnUpdate(const gazebo::common::UpdateInfo &_info);

  void PublishJointStates();

private:
  bool IsIgnoredJoint(std::string _jointName);

  gazebo::physics::WorldPtr world;

  gazebo::physics::ModelPtr model;

  gazebo::event::ConnectionPtr updateConnection;

  gazebo_ros::Node::SharedPtr rosNode;

  std::string robotNamespace;

  std::vector<std::string> movingJoints;

  double updateRate;

  double updatePeriod;

  gazebo::common::Time lastUpdate;

  rclcpp::Publisher<sensor_msgs::msg::JointState>::SharedPtr jointStatePub;
};

}  //namespace uuv_gazebo_plugins
#endif  // UUV_GAZEBO_PLUGINS__JOINT_STATE_PUBLISHER_HPP__

