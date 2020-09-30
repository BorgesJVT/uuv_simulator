#include <gazebo_ros/node.hpp>

#include <gazebo/physics/Link.hh>
#include <gazebo/physics/Model.hh>
#include <gazebo/physics/PhysicsEngine.hh>
#include <gazebo/physics/World.hh>
#include <gazebo/transport/transport.hh>


#include <boost/make_shared.hpp> //For gazebo transport

#include <uuv_gazebo_plugins/ThrusterPlugin.hpp>
#include <uuv_gazebo_plugins/ThrusterConversionFcn.hh> //REFATORAR?
#include <uuv_gazebo_plugins/Dynamics.hh>              //REFATORAR?

//#include "Double.pb.h"
#include <geometry_msgs/msg/vector3.hpp>
#include <std_msgs/msg/float64.hpp>

//*******************************//
 // ROS PLUGINS INCLUDES
#include <uuv_gazebo_ros_plugins_msgs/srv/set_thruster_state.hpp>
#include <uuv_gazebo_ros_plugins_msgs/srv/get_thruster_state.hpp>
#include <uuv_gazebo_ros_plugins_msgs/srv/set_thruster_efficiency.hpp>
#include <uuv_gazebo_ros_plugins_msgs/srv/get_thruster_efficiency.hpp>
#include <uuv_gazebo_ros_plugins_msgs/srv/get_thruster_conversion_fcn.hpp>

#include <uuv_gazebo_ros_plugins_msgs/msg/float_stamped.hpp>

#include <geometry_msgs/msg/wrench_stamped.hpp>
#include <std_msgs/msg/bool.hpp> 
#include <std_msgs/msg/float64.hpp> 
//---------------------------------------------------//



namespace uuv_gazebo
{
class ThrusterPluginPrivate
{
public:

  /// Node for ROS communication.
  gazebo_ros::Node::SharedPtr ros_node_;

  /// Callback to be called at every simulation iteration.
  /// \param[in] _info Information used in the update event.
  void OnUpdate(const gazebo::common::UpdateInfo & _info);

  /// \brief Callback for the input topic subscriber
  //void UpdateInput(ConstDoublePtr &_msg);
  //void UpdateInput(const std::shared_ptr<uuv_gazebo_plugins_msgs::msgs::Double> & _msg);
  void UpdateInput(const std_msgs::msg::Float64::SharedPtr _msg);

  /// \brief Thruster dynamic model
  std::shared_ptr<uuv_gazebo::Dynamics> thrusterDynamics;

  /// \brief Thruster conversion function
  std::shared_ptr<uuv_gazebo::ConversionFunction> conversionFunction;

  /// \brief Pointer to the thruster link
  gazebo::physics::LinkPtr thrusterLink;
  
  /// \brief Pointer to the update event connection
  gazebo::event::ConnectionPtr update_connection;

  /// \brief Gazebo node used to talk to XXX----XXXX?
  //gazebo::transport::NodePtr gazebo_node_;

  /// \brief Subscriber to the reference signal topic.
  //gazebo::transport::SubscriberPtr commandSubscriber;
  rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr commandSubscriber;
  
  /// \brief Publisher to the output thrust topic
  //gazebo::transport::PublisherPtr thrustTopicPublisher;
  rclcpp::Publisher<geometry_msgs::msg::Vector3>::SharedPtr thrustTopicPublisher;

  /// \brief Input command, typically desired angular velocity of the rotor.
  double input_command;

  /// \brief Latest thrust force in [N]
  double thrustForce;

  /// \brief Time stamp of latest thrust force
  gazebo::common::Time thrustForceStamp;

  /// \brief Optional: The rotor joint, used for visualization
  gazebo::physics::JointPtr joint;

  /// \brief: Optional: Commands less than this value will be clamped.
  double clampMin;

  /// \brief: Optional: Commands greater than this value will be clamped.
  double clampMax;

  /// \brief: Optional: Minimum thrust force output
  double thrustMin;

  /// \brief: Optional: Maximum thrust force output
  double thrustMax;

  /// \brief Thruster ID, used to generated topic names automatically
  int thrusterID;

  /// \brief Thruster topics prefix
  std::string topicPrefix;

  /// \brief: Optional: Gain factor: Desired angular velocity = command * gain
  double gain;

  /// \brief Optional: Flag to indicate if the thruster is turned on or off
  bool isOn;

  /// \brief Optional: Output thrust efficiency factor of the thruster
  double thrustEfficiency;

  /// \brief Optional: Propeller angular velocity efficiency term
  double propellerEfficiency;

  /// \brief The axis about which the thruster rotates
  ignition::math::Vector3d thrusterAxis;

 
//***************************************************************//
// ROS PLUGINS HEADER

   /// \brief Publish thruster state via ROS.
    void RosPublishStates();

    /// \brief Set new set point (desired thrust [N]) for thruster.
    void SetThrustReference(
        const uuv_gazebo_ros_plugins_msgs::msg::FloatStamped::SharedPtr _msg);

    /// \brief Return the ROS publish period.
    gazebo::common::Time  GetRosPublishPeriod();

    /// \brief Set the ROS publish frequency (Hz).
    void SetRosPublishRate(double _hz);

    /// \brief Set the thrust efficiency factor
    bool SetThrustForceEfficiency(
      uuv_gazebo_ros_plugins_msgs::srv::SetThrusterEfficiency::Request::SharedPtr _req,
      uuv_gazebo_ros_plugins_msgs::srv::SetThrusterEfficiency::Response::SharedPtr _res);

    /// \brief Get the thrust efficiency factor
    bool GetThrustForceEfficiency(
      uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency::Request::SharedPtr _req,
      uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency::Response::SharedPtr _res);

    /// \brief Set the dynamic state efficiency factor
    bool SetDynamicStateEfficiency(
      uuv_gazebo_ros_plugins_msgs::srv::SetThrusterEfficiency::Request::SharedPtr _req,
      uuv_gazebo_ros_plugins_msgs::srv::SetThrusterEfficiency::Response::SharedPtr _res);

      /// \brief Get the dynamic state efficiency factor
    bool GetDynamicStateEfficiency(
        uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency::Request::SharedPtr _req,
        uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency::Response::SharedPtr _res);

    /// \brief Turn thruster on/off
    bool SetThrusterState(
      uuv_gazebo_ros_plugins_msgs::srv::SetThrusterState::Request::SharedPtr _req,
      uuv_gazebo_ros_plugins_msgs::srv::SetThrusterState::Response::SharedPtr _res);

    /// \brief Get thruster state
    bool GetThrusterState(
      uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState::Request::SharedPtr _req,
      uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState::Response::SharedPtr _res);

    /// \brief Get thruster conversion function parameters
    bool GetThrusterConversionFcn(
      uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn::Request::SharedPtr _req,
      uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn::Response::SharedPtr _res);

    /// \brief Map of thruster services
    rclcpp::Service<uuv_gazebo_ros_plugins_msgs::srv::SetThrusterEfficiency>::SharedPtr set_thruste_efficiecy_srv;                                

    /// \brief Pointer to this ROS node's handle.
    //gazebo_ros::Node::SharedPtr ros_node_;

    /// \brief Subscriber reacting to new reference thrust set points.
    rclcpp::Subscription<uuv_gazebo_ros_plugins_msgs::msg::FloatStamped>::SharedPtr subThrustReference;

    /// \brief Publisher for current actual thrust.
    rclcpp::Publisher<uuv_gazebo_ros_plugins_msgs::msg::FloatStamped>::SharedPtr pubThrust;

    /// \brief Publisher for current actual thrust as wrench.
    rclcpp::Publisher<geometry_msgs::msg::WrenchStamped>::SharedPtr pubThrustWrench;

    /// \brief Publisher for the thruster state
    rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr pubThrusterState;
    
    /// \brief Publisher for the thrust force efficiency
    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr pubThrustForceEff;

    /// \brief Publisher for the dynamic state efficiency
    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr pubDynamicStateEff;

    /// \brief Connection for callbacks on update world. //Usando o update_connection 
    gazebo::event::ConnectionPtr rosPublishConnection;

    /// \brief Period after which we should publish a message via ROS.
    gazebo::common::Time rosPublishPeriod;

    /// \brief Last time we published a message via ROS.
    gazebo::common::Time lastRosPublishTime;

// FIM ROS PLUGINS HEADER
//---------------------------------------------------// 

};

ThrusterPlugin::ThrusterPlugin() 
: impl_(std::make_unique<ThrusterPluginPrivate>())
{
}

ThrusterPlugin::~ThrusterPlugin()
{
  if ( impl_->update_connection )  {
    impl_->commandSubscriber.reset();
  }
}

/////////////////////////////////////////////////
void ThrusterPlugin::Load(gazebo::physics::ModelPtr _model,
                          sdf::ElementPtr _sdf)
{

  impl_->ros_node_ = gazebo_ros::Node::Get(_sdf);

  auto logger = rclcpp::get_logger("thruster_plugin"); //Depois saber o nome do plugin

  // Target link
  if (!_sdf->HasElement("linkName")) { 
    RCLCPP_ERROR(logger, "Truhster plugin missing <linkName>, cannot proceed");
    return;
  }

  // Retrieve the link name on which the thrust will be applied  
  auto link_name = _sdf->GetElement("linkName")->Get<std::string>();
  
  impl_->thrusterLink = _model->GetLink(link_name);
  if (!impl_->thrusterLink) {
    RCLCPP_ERROR(logger, "Link named: %s does not exist\n", link_name.c_str());
    return;
  }

  // Reading thruster ID
  if (!_sdf->HasElement("thrusterID")) {
    RCLCPP_ERROR(logger, "Thruster ID was not provided");
    return;
  }
  impl_->thrusterID = _sdf->Get<int>("thrusterID");
  gzmsg << "Thruster #" << impl_->thrusterID << " initialized" << std::endl;

  // Thruster dynamics configuration:
  if (!_sdf->HasElement("dynamics")) {
    RCLCPP_ERROR(logger, "Could not find dynamics.");
    return;
  }
  impl_->thrusterDynamics.reset(
        DynamicsFactory::GetInstance().CreateDynamics(
          _sdf->GetElement("dynamics")));
  
  //// Thrust conversion function ANALISAR PQ ESSE TRECHO FICA SEM CARREGAR O ROBO (waiting)
  if (!_sdf->HasElement("conversion")) {
    RCLCPP_ERROR(logger, "Could not find conversion function.");
    return;
  }
  impl_->conversionFunction.reset(
        ConversionFunctionFactory::GetInstance().CreateConversionFunction(
          _sdf->GetElement("conversion")));
  

  // Optional paramters: 
  //
  // Rotor joint, used for visualization if available.
  if (_sdf->HasElement("jointName")) {
    impl_->joint = _model->GetJoint(_sdf->Get<std::string>("jointName"));
  }
  
  // Clamping interval
  if (_sdf->HasElement("clampMin"))
    impl_->clampMin = _sdf->Get<double>("clampMin");

  if (_sdf->HasElement("clampMax"))
    impl_->clampMax = _sdf->Get<double>("clampMax");

  if (impl_->clampMin >= impl_->clampMax)
  {
    gzmsg << "clampMax must be greater than clampMin, returning to default values..." << std::endl;
    impl_->clampMin = std::numeric_limits<double>::lowest();
    impl_->clampMax = std::numeric_limits<double>::max();
  }

  // Thrust force interval
  if (_sdf->HasElement("thrustMin"))
    impl_->thrustMin = _sdf->Get<double>("thrustMin");

  if (_sdf->HasElement("thrustMax"))
    impl_->thrustMax = _sdf->Get<double>("thrustMax");

  if (impl_->thrustMin >= impl_->thrustMax)
  {
    gzmsg << "thrustMax must be greater than thrustMin, returning to default values..." << std::endl;
    impl_->thrustMin = std::numeric_limits<double>::lowest();
    impl_->thrustMax = std::numeric_limits<double>::max();
  }

    // Gain (1.0 by default)
  if (_sdf->HasElement("gain"))
    impl_->gain = _sdf->Get<double>("gain");

  if (_sdf->HasElement("thrust_efficiency"))
  {
    impl_->thrustEfficiency = _sdf->Get<double>("thrust_efficiency");
    if (impl_->thrustEfficiency < 0.0 || impl_->thrustEfficiency > 1.0)
    {
      gzmsg << "Invalid thrust efficiency factor, setting it to 100%" << std::endl;
      impl_->thrustEfficiency = 1.0;
    }
  }
  
  if (_sdf->HasElement("propeller_efficiency"))
  {
    impl_->propellerEfficiency = _sdf->Get<double>("propeller_efficiency");
    if (impl_->propellerEfficiency < 0.0 || impl_->propellerEfficiency > 1.0)
    {
      gzmsg << "Invalid propeller dynamics efficiency factor, setting it to 100%" << std::endl;
      impl_->propellerEfficiency = 1.0;
    }
  }

  impl_->thrusterAxis = impl_->joint->WorldPose().Rot().RotateVectorReverse(impl_->joint->GlobalAxis(0));
  
  // Root string for topics
  std::stringstream strs;
  strs << "/" << _model->GetName() << "/thrusters/id" << impl_->thrusterID << "/";
  impl_->topicPrefix = strs.str();

  // Advertise the thrust topic
  auto thrust_topic_name = impl_->topicPrefix + "thrust";

  impl_->thrustTopicPublisher = impl_->ros_node_->create_publisher<geometry_msgs::msg::Vector3>(thrust_topic_name, 1);

  // Subscribe to the input signal topic
  auto input_signal_topic_name = impl_->topicPrefix + "input";

  impl_->commandSubscriber = impl_->ros_node_->create_subscription<std_msgs::msg::Float64>
              (
                input_signal_topic_name , 10,
                std::bind(&ThrusterPluginPrivate::UpdateInput, impl_.get(), std::placeholders::_1)
              );

  impl_->update_connection = gazebo::event::Events::ConnectWorldUpdateBegin(
     std::bind(&ThrusterPluginPrivate::OnUpdate, impl_.get(), std::placeholders::_1));

//Services
{
  impl_->set_thruste_efficiecy_srv = impl_->ros_node_->create_service<uuv_gazebo_ros_plugins_msgs::srv::SetThrusterEfficiency>
      (
      impl_->topicPrefix + "set_thrust_force_efficiency", 
      std::bind(&ThrusterPluginPrivate::SetThrustForceEfficiency, impl_.get(), std::placeholders::_1, std::placeholders::_2) 
      );
  gzmsg << "BLA2" << std::endl;
  impl_->ros_node_->create_service<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency>
      (
      impl_->topicPrefix + "get_thrust_force_efficiency",
      std::bind(&ThrusterPluginPrivate::GetThrustForceEfficiency, impl_.get(), std::placeholders::_1, std::placeholders::_2)
      );

  impl_->ros_node_->create_service<uuv_gazebo_ros_plugins_msgs::srv::SetThrusterEfficiency>
      (
      impl_->topicPrefix + "set_dynamic_state_efficiency",
      std::bind(&ThrusterPluginPrivate::SetDynamicStateEfficiency, impl_.get(), std::placeholders::_1, std::placeholders::_2)
      );

  impl_->ros_node_->create_service<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency>
      (
      impl_->topicPrefix + "get_dynamic_state_efficiency",
      std::bind(&ThrusterPluginPrivate::GetDynamicStateEfficiency, impl_.get(), std::placeholders::_1, std::placeholders::_2)
      );

  impl_->ros_node_->create_service<uuv_gazebo_ros_plugins_msgs::srv::SetThrusterState>
      (
      impl_->topicPrefix + "set_thruster_state",
      std::bind(&ThrusterPluginPrivate::SetThrusterState, impl_.get(), std::placeholders::_1, std::placeholders::_2)
      );

  impl_->ros_node_->create_service<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState>
      (
      impl_->topicPrefix + "get_thruster_state",
      std::bind(&ThrusterPluginPrivate::GetThrusterState, impl_.get(), std::placeholders::_1, std::placeholders::_2)
      );

  impl_->ros_node_->create_service<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn>
      (
      impl_->topicPrefix + "get_thruster_conversion_fcn",
      std::bind(&ThrusterPluginPrivate::GetThrusterConversionFcn, impl_.get(), std::placeholders::_1, std::placeholders::_2)
      );
}
{


  impl_->subThrustReference = impl_->ros_node_->create_subscription<uuv_gazebo_ros_plugins_msgs::msg::FloatStamped>
              (
                impl_->commandSubscriber->get_topic_name(), 10,
                std::bind(&ThrusterPluginPrivate::SetThrustReference, impl_.get(), std::placeholders::_1)
              );

  impl_->pubThrust = impl_->ros_node_->create_publisher<uuv_gazebo_ros_plugins_msgs::msg::FloatStamped>(
    impl_->thrustTopicPublisher->get_topic_name(), 10);


  auto thuster_wrench_topic_name = impl_->thrustTopicPublisher->get_topic_name() + std::string("_wrench");

  impl_->pubThrustWrench =
    impl_->ros_node_->create_publisher<geometry_msgs::msg::WrenchStamped>(
      thuster_wrench_topic_name, 10);
    

  impl_->pubThrusterState = impl_->ros_node_->create_publisher<std_msgs::msg::Bool>(
    impl_->topicPrefix + "is_on", 1);

  impl_->pubThrustForceEff = impl_->ros_node_->create_publisher<std_msgs::msg::Float64>(
    impl_->topicPrefix + "thrust_efficiency", 1);

  impl_->pubDynamicStateEff = impl_->ros_node_->create_publisher<std_msgs::msg::Float64>(
    impl_->topicPrefix + "dynamic_state_efficiency", 1); 
}

  // Connect the update event 
 
  impl_->rosPublishConnection = gazebo::event::Events::ConnectWorldUpdateBegin(
     std::bind(&ThrusterPluginPrivate::RosPublishStates, impl_.get()) );

// FIM ROS PLUGINS LOADS
//---------------------------------------------------//

}

/////////////////////////////////////////////////
void ThrusterPluginPrivate::UpdateInput(const std_msgs::msg::Float64::SharedPtr _msg)
{
  //this->input_command = _msg->value();
  this->input_command = _msg->data;
}

// void ThrusterPlugin::Reset()
// {
//     impl_->thrusterDynamics->Reset();
// }

/////////////////////////////////////////////////
void ThrusterPluginPrivate::OnUpdate(const gazebo::common::UpdateInfo &_info)
{

  GZ_ASSERT(!std::isnan(this->input_command),"nan in this->input_command");

  double dynamicsInput;
  double dynamicState;
  // Test if the thruster has been turned off
  if (this->isOn)
  {
    double clamped = this->input_command;
    clamped = std::min(clamped, this->clampMax);
    clamped = std::max(clamped, this->clampMin);

    dynamicsInput = this->gain*clamped;
  }
  else
  {
    // In case the thruster is turned off in runtime, the dynamic state
    // will converge to zero
    dynamicsInput = 0.0;
  }
  
  //RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "TESTANDO A BAGAÇA");

  dynamicState = this->propellerEfficiency *
    this->thrusterDynamics->update(dynamicsInput, _info.simTime.Double());

  GZ_ASSERT(!std::isnan(dynamicState), "Invalid dynamic state");
  // Multiply the output force magnitude with the efficiency
  this->thrustForce = this->thrustEfficiency *
    this->conversionFunction->convert(dynamicState);
  GZ_ASSERT(!std::isnan(this->thrustForce), "Invalid thrust force");

  // Use the thrust force limits
  this->thrustForce = std::max(this->thrustForce, this->thrustMin);
  this->thrustForce = std::min(this->thrustForce, this->thrustMax);

  this->thrustForceStamp = _info.simTime;
  ignition::math::Vector3d force(this->thrustForce*this->thrusterAxis);

  this->thrusterLink->AddRelativeForce(force);

  if (this->joint)
  {
    // Let joint rotate with correct angular velocity.
    this->joint->SetVelocity(0, dynamicState);
  }

  // Publish thrust:
  //gazebo::msgs::Vector3d thrustMsg;
  geometry_msgs::msg::Vector3 thrustMsg;
  thrustMsg.x = this->thrustForce;
  thrustMsg.y = 0.0;
  thrustMsg.z = 0.0;
  //gazebo::msgs::Set (&thrustMsg, ignition::math::Vector3d(this->thrustForce, 0., 0.)  );
  
  this->thrustTopicPublisher->publish(thrustMsg);

}



//**************************************************************/
// ROS PLUGINS FUNCTIONS

/////////////////////////////////////////////////
void ThrusterPluginPrivate::SetThrustReference(
    const uuv_gazebo_ros_plugins_msgs::msg::FloatStamped::SharedPtr _msg)
{
  if (std::isnan(_msg->data))
  {
    RCLCPP_WARN(this->ros_node_->get_logger(), "ThrusterROSPlugin: Ignoring nan command");
    return;
  }

  this->input_command = _msg->data;
}

/////////////////////////////////////////////////
gazebo::common::Time ThrusterPluginPrivate::GetRosPublishPeriod()
{
  return this->rosPublishPeriod;
}

/////////////////////////////////////////////////
void ThrusterPluginPrivate::SetRosPublishRate(double _hz)
{
  if (_hz > 0.0)
    this->rosPublishPeriod = 1.0 / _hz;
  else
    this->rosPublishPeriod = 0.;

}



/////////////////////////////////////////////////
void ThrusterPluginPrivate::RosPublishStates()
{

  // Limit publish rate according to publish period
  if (this->thrustForceStamp - this->lastRosPublishTime >=
      this->rosPublishPeriod)
  {
    this->lastRosPublishTime = this->thrustForceStamp;

    // Publish the thrust force magnitude
    uuv_gazebo_ros_plugins_msgs::msg::FloatStamped thrustMsg;
    thrustMsg.header.stamp = this->ros_node_->get_clock()->now();// Pega desse NODE mesmo?
    thrustMsg.header.frame_id = this->thrusterLink->GetName();
    thrustMsg.data = this->thrustForce;
    this->pubThrust->publish(thrustMsg);

    // Publish the thrust force vector wrt the thruster frame
    geometry_msgs::msg::WrenchStamped thrustWrenchMsg;
    thrustWrenchMsg.header.stamp = this->ros_node_->get_clock()->now(); // Pega desse NODE mesmo?
    thrustWrenchMsg.header.frame_id = this->thrusterLink->GetName();
    ignition::math::Vector3d thrustVector = this->thrustForce * this->thrusterAxis;
    thrustWrenchMsg.wrench.force.x = thrustVector.X();
    thrustWrenchMsg.wrench.force.y = thrustVector.Y();
    thrustWrenchMsg.wrench.force.z = thrustVector.Z();
    this->pubThrustWrench->publish(thrustWrenchMsg);

    // Publish the thruster current state (ON or OFF)
    std_msgs::msg::Bool isOnMsg;
    isOnMsg.data = this->isOn;
    this->pubThrusterState->publish(isOnMsg);

    // Publish thrust output efficiency
    std_msgs::msg::Float64 thrustEffMsg;
    thrustEffMsg.data = this->thrustEfficiency;
    this->pubThrustForceEff->publish(thrustEffMsg);

    // Publish dynamic state efficiency
    std_msgs::msg::Float64 dynStateEffMsg;
    dynStateEffMsg.data = this->propellerEfficiency;
    this->pubDynamicStateEff->publish(dynStateEffMsg);

    //RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "TESTANDO A BAGAÇA");
  }
}

/////////////////////////////////////////////////
bool ThrusterPluginPrivate::SetThrustForceEfficiency(
  uuv_gazebo_ros_plugins_msgs::srv::SetThrusterEfficiency::Request::SharedPtr _req,
  uuv_gazebo_ros_plugins_msgs::srv::SetThrusterEfficiency::Response::SharedPtr _res)
{
  if (_req->efficiency < 0.0 || _req->efficiency > 1.0)
  {
    _res->success = false;
  }
  else
  {
    this->thrustEfficiency = _req->efficiency;
    _res->success = true;
    gzmsg << "Setting thrust efficiency at thruster " <<
      this->thrusterLink->GetName() << "=" << _req->efficiency  * 100
      << "%" << std::endl;
  }
  return true;
}

/////////////////////////////////////////////////
bool ThrusterPluginPrivate::GetThrustForceEfficiency(
  uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency::Request::SharedPtr _req,
  uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency::Response::SharedPtr _res)
{
  _res->efficiency = this->thrustEfficiency;
  return true;
}

/////////////////////////////////////////////////
bool ThrusterPluginPrivate::SetDynamicStateEfficiency(
  uuv_gazebo_ros_plugins_msgs::srv::SetThrusterEfficiency::Request::SharedPtr _req,
  uuv_gazebo_ros_plugins_msgs::srv::SetThrusterEfficiency::Response::SharedPtr _res)
{
  if (_req->efficiency < 0.0 || _req->efficiency > 1.0)
  {
    _res->success = false;
  }
  else
  {
    this->propellerEfficiency = _req->efficiency;
    _res->success = true;
    gzmsg << "Setting propeller efficiency at thruster " <<
      this->thrusterLink->GetName() << "=" << _req->efficiency * 100
      << "%" << std::endl;
  }
  return true;
}

/////////////////////////////////////////////////
bool ThrusterPluginPrivate::GetDynamicStateEfficiency(
  uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency::Request::SharedPtr _req,
  uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency::Response::SharedPtr _res)
{
  _res->efficiency = this->propellerEfficiency;
  return true;
}

/////////////////////////////////////////////////
bool ThrusterPluginPrivate::SetThrusterState(
  uuv_gazebo_ros_plugins_msgs::srv::SetThrusterState::Request::SharedPtr _req,
  uuv_gazebo_ros_plugins_msgs::srv::SetThrusterState::Response::SharedPtr _res)
{
  this->isOn = _req->on;
  gzmsg << "Turning thruster " << this->thrusterLink->GetName() << " " <<
    (this->isOn ? "ON" : "OFF") << std::endl;
  _res->success = true;
  return true;
}

/////////////////////////////////////////////////
bool ThrusterPluginPrivate::GetThrusterState(
  uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState::Request::SharedPtr _req,
  uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState::Response::SharedPtr _res)
{
  _res->is_on = this->isOn;
  return true;
}

/////////////////////////////////////////////////
bool ThrusterPluginPrivate::GetThrusterConversionFcn(
  uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn::Request::SharedPtr _req,
  uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn::Response::SharedPtr _res)
{
  _res->fcn.function_name = this->conversionFunction->GetType();

  double param;

  if (!_res->fcn.function_name.compare("Basic"))
  {
    gzmsg << "ThrusterPlugin::GetThrusterConversionFcn::Basic" << std::endl;
    _res->fcn.tags.push_back("rotor_constant");
    this->conversionFunction->GetParam("rotor_constant", param);
    _res->fcn.data.push_back(param);
  }
  else if (!_res->fcn.function_name.compare("Bessa"))
  {
    gzmsg << "ThrusterPlugin::GetThrusterConversionFcn::Bessa" << std::endl;
    _res->fcn.tags.push_back("rotor_constant_l");
    this->conversionFunction->GetParam("rotor_constant_l", param);
    _res->fcn.data.push_back(param);

    _res->fcn.tags.push_back("rotor_constant_r");
    this->conversionFunction->GetParam("rotor_constant_r", param);
    _res->fcn.data.push_back(param);

    _res->fcn.tags.push_back("delta_l");
    this->conversionFunction->GetParam("delta_l", param);
    _res->fcn.data.push_back(param);

    _res->fcn.tags.push_back("delta_r");
    this->conversionFunction->GetParam("delta_r", param);
    _res->fcn.data.push_back(param);
  }
  else if (!_res->fcn.function_name.compare("LinearInterp"))
  {
    gzmsg << "ThrusterPlugin::GetThrusterConversionFcn::LinearInterp" << std::endl;
    std::map<double, double> table = this->conversionFunction->GetTable();

    for (auto& item : table)
    {
      gzmsg << item.first << " " << item.second << std::endl;
      _res->fcn.lookup_table_input.push_back(item.first);
      _res->fcn.lookup_table_output.push_back(item.second);
    }
  }

  return true;
}

// FIM ROS PLUGINS FUNCTIONS
//---------------------------------------------------// 
GZ_REGISTER_MODEL_PLUGIN(ThrusterPlugin)

} // namespace gazebo_plugins
