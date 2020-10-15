#include <nav_msgs/msg/odometry.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <geometry_msgs/msg/vector3_stamped.hpp>
#include <geometry_msgs/msg/transform_stamped.hpp>
#include <sensor_msgs/msg/imu.hpp>
#include <tf2_ros/transform_broadcaster.h>
#include <tf2_ros/transform_listener.h> // for tf::getPrefixParam()
#include <tf2/transform_datatypes.h>
#include <rclcpp/rclcpp.hpp>

#include <geometry_msgs/msg/quaternion.hpp>
#include <geometry_msgs/msg/quaternion_stamped.hpp>
#include <geometry_msgs/msg/transform.hpp>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>
#include <tf2/LinearMath/Quaternion.h>

//#include <topic_tools/shape_shifter.h>

std::string g_odometry_topic;
std::string g_pose_topic;
std::string g_imu_topic;
std::string g_topic;
std::string g_frame_id;
std::string g_footprint_frame_id;
std::string g_position_frame_id;
std::string g_stabilized_frame_id;
std::string g_child_frame_id;

bool g_publish_roll_pitch;

std::string g_tf_prefix;

std::shared_ptr<tf2_ros::TransformBroadcaster> g_transform_broadcaster;
rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr g_pose_publisher;
rclcpp::Publisher<geometry_msgs::msg::Vector3Stamped>::SharedPtr g_euler_publisher;

// #ifndef TF_MATRIX3x3_H
//   typedef btScalar tfScalar;
//   namespace tf { typedef btMatrix3x3 Matrix3x3; }
// #endif

void addTransform(std::vector<geometry_msgs::msg::TransformStamped>& transforms, const geometry_msgs::msg::TransformStamped& new_tf)
{
  transforms.push_back(new_tf);
  //transforms.push_back(geometry_msgs::msg::TransformStamped());
  //tf::transformStampedTFToMsg(new_tf, transforms.back());
}

void sendTransform(geometry_msgs::msg::Pose const &pose, const std_msgs::msg::Header& header, std::string child_frame_id = "")
{
  std::vector<geometry_msgs::msg::TransformStamped> transforms;

  geometry_msgs::msg::TransformStamped new_tf_msg;
  tf2::Stamped<tf2::Transform> new_tf;
  new_tf_msg.header.stamp = header.stamp;

  new_tf_msg.header.frame_id = header.frame_id;
  if (!g_frame_id.empty()) new_tf_msg.header.frame_id = g_frame_id;
  //new_tf.frame_id_ = tf::resolve(g_tf_prefix, tf.frame_id_);

  if (!g_child_frame_id.empty()) child_frame_id = g_child_frame_id;
  if (child_frame_id.empty()) child_frame_id = "base_link";

  tf2::Quaternion orientation;
  tf2::fromMsg(pose.orientation, orientation);
  tf2Scalar yaw, pitch, roll;
  tf2::Matrix3x3(orientation).getEulerYPR(yaw, pitch, roll);
  geometry_msgs::msg::Point position;
  position.x = pose.position.x;
  position.y = pose.position.y;
  position.z = pose.position.z;

  // position intermediate transform (x,y,z)
  if( !g_position_frame_id.empty() && child_frame_id != g_position_frame_id) {
    //new_tf.child_frame_id_ = tf::resolve(g_tf_prefix, g_position_frame_id);
    new_tf.setOrigin(tf2::Vector3(position.x, position.y, position.z ));
    new_tf.setRotation(tf2::Quaternion(0.0, 0.0, 0.0, 1.0));
    new_tf_msg = tf2::toMsg(new_tf);
    addTransform(transforms, new_tf_msg);
  }

  // footprint intermediate transform (x,y,yaw)
  if (!g_footprint_frame_id.empty() && child_frame_id != g_footprint_frame_id) {
    //new_tf.child_frame_id_ = tf::resolve(g_tf_prefix, g_footprint_frame_id);
    new_tf.setOrigin(tf2::Vector3(position.x, position.y, 0.0));
    tf2::Quaternion q;
    tf2Scalar r = 0.0;
    tf2Scalar p = 0.0;
    tf2::Matrix3x3(q).getRPY(r, p, yaw);
    new_tf.setRotation(q);
    new_tf_msg = tf2::toMsg(new_tf);
    addTransform(transforms, new_tf_msg);

    yaw = 0.0;
    position.x = 0.0;
    position.y = 0.0;
    //new_tf.frame_id_ = tf::resolve(g_tf_prefix, g_footprint_frame_id);
  }

  // stabilized intermediate transform (z)
  if (!g_footprint_frame_id.empty() && child_frame_id != g_stabilized_frame_id) {
    //new_tf.child_frame_id_ = tf::resolve(g_tf_prefix, g_stabilized_frame_id);
    new_tf.setOrigin(tf2::Vector3(0.0, 0.0, position.z));
    new_tf.setBasis(tf2::Matrix3x3::getIdentity());
    new_tf_msg = tf2::toMsg(new_tf);
    addTransform(transforms, new_tf_msg);

    position.z = 0.0;
    //new_tf.frame_id_ = tf::resolve(g_tf_prefix, g_stabilized_frame_id);
  }

  // base_link transform (roll, pitch)
  if (g_publish_roll_pitch) {
    //new_tf.child_frame_id_ = tf::resolve(g_tf_prefix, child_frame_id);
    new_tf.setOrigin(tf2::Vector3(position.x, position.y, position.z));
    tf2::Quaternion q;
    tf2::Matrix3x3(q).getRPY(roll, pitch, yaw);
    new_tf.setRotation(q);
    new_tf_msg = tf2::toMsg(new_tf);
    addTransform(transforms, new_tf_msg);
  }

  g_transform_broadcaster->sendTransform(transforms);

  // publish pose message
  if (g_pose_publisher) {
    geometry_msgs::msg::PoseStamped pose_stamped;
    pose_stamped.pose = pose;
    pose_stamped.header = header;
    g_pose_publisher->publish(pose_stamped);
  }

  // publish pose message
  if (g_euler_publisher) {
    geometry_msgs::msg::Vector3Stamped euler_stamped;
    euler_stamped.vector.x = roll;
    euler_stamped.vector.y = pitch;
    euler_stamped.vector.z = yaw;
    euler_stamped.header = header;
    g_euler_publisher->publish(euler_stamped);
  }
}

void odomCallback(const nav_msgs::msg::Odometry::SharedPtr odometry) {
  sendTransform(odometry->pose.pose, odometry->header, odometry->child_frame_id);
}

void poseCallback(const geometry_msgs::msg::PoseStamped::SharedPtr pose) {
  sendTransform(pose->pose, pose->header);
}

void tfCallback(const geometry_msgs::msg::TransformStamped::SharedPtr tf) {
  geometry_msgs::msg::Pose pose;
  pose.position.x = tf->transform.translation.x;
  pose.position.y = tf->transform.translation.y;
  pose.position.z = tf->transform.translation.z;
  pose.orientation = tf->transform.rotation;

  sendTransform(pose, tf->header);
}

void imuCallback(const sensor_msgs::msg::Imu::SharedPtr imu) {
  std::vector<geometry_msgs::msg::TransformStamped> transforms;
  std::string child_frame_id;

  geometry_msgs::msg::TransformStamped new_tf_msg;
  tf2::Stamped<tf2::Transform> new_tf;
  new_tf_msg.header.stamp = imu->header.stamp;

  //new_tf.frame_id_ = tf::resolve(g_tf_prefix, g_stabilized_frame_id);
  if (!g_child_frame_id.empty()) child_frame_id = g_child_frame_id;
  if (child_frame_id.empty()) child_frame_id = "base_link";

  tf2::Quaternion orientation;
  tf2::fromMsg(imu->orientation, orientation);
  tf2Scalar yaw, pitch, roll;
  tf2::Matrix3x3(orientation).getEulerYPR(yaw, pitch, roll);
  tf2::Quaternion rollpitch;
  tf2Scalar v = 0.0;
  tf2::Matrix3x3(rollpitch).getRPY(roll, pitch, v);

  // base_link transform (roll, pitch)
  if (g_publish_roll_pitch) {
    //new_tf.child_frame_id_ = tf::resolve(g_tf_prefix, child_frame_id);
    new_tf.setOrigin(tf2::Vector3(0.0, 0.0, 0.0));
    new_tf.setRotation(rollpitch);
    addTransform(transforms, new_tf_msg);
  }

  if (!transforms.empty()) g_transform_broadcaster->sendTransform(transforms);

  // publish pose message
  if (g_pose_publisher) {
    geometry_msgs::msg::PoseStamped pose_stamped;
    pose_stamped.header.stamp = imu->header.stamp;
    pose_stamped.header.frame_id = g_stabilized_frame_id;
    pose_stamped.pose.orientation = tf2::toMsg(rollpitch);
    g_pose_publisher->publish(pose_stamped);
  }
}
/*
void multiCallback(topic_tools::ShapeShifter const &input) {
  if (input.getDataType() == "nav_msgs/msg/Odometry") {
    nav_msgs::msg::Odometry::ConstPtr odom = input.instantiate<nav_msgs::msg::Odometry>();
    odomCallback(*odom);
    return;
  }

  if (input.getDataType() == "geometry_msgs/msg/PoseStamped") {
    geometry_msgs::msg::PoseStamped::ConstPtr pose = input.instantiate<geometry_msgs::msg::PoseStamped>();
    poseCallback(*pose);
    return;
  }

  if (input.getDataType() == "sensor_msgs/msg/Imu") {
    sensor_msgs::Imu::ConstPtr imu = input.instantiate<sensor_msgs::msg::Imu>();
    imuCallback(*imu);
    return;
  }

  if (input.getDataType() == "geometry_msgs/msg/TransformStamped") {
    geometry_msgs::TransformStamped::ConstPtr tf = input.instantiate<geometry_msgs::msg::TransformStamped>();
    tfCallback(*tf);
    return;
  }

  ROS_ERROR_THROTTLE(1.0, "message_to_tf received a %s message. Supported message types: nav_msgs/Odometry geometry_msgs/PoseStamped geometry_msgs/TransformStamped sensor_msgs/Imu", input.getDataType().c_str());
}
*/
int main(int argc, char** argv) {
  rclcpp::init(argc, argv);

  rclcpp::Node::SharedPtr node = std::make_shared<rclcpp::Node>("message_to_tf");
  rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr sub1;
  rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr sub2;
  rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr sub3;
  //rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr sub4;
  
  auto logger = rclcpp::get_logger("message_to_tf");

  g_footprint_frame_id = "base_footprint";
  g_stabilized_frame_id = "base_stabilized";
  // g_position_frame_id = "base_position";
  // g_child_frame_id = "base_link";

  //rclcpp::Node::SharedPtr priv_nh = std::make_shared<rclcpp::Node>("message_to_tf");
  node->get_parameter("odometry_topic", g_odometry_topic);
  node->get_parameter("pose_topic", g_pose_topic);
  node->get_parameter("imu_topic", g_imu_topic);
  node->get_parameter("topic", g_topic);
  node->get_parameter("frame_id", g_frame_id);
  node->get_parameter("footprint_frame_id", g_footprint_frame_id);
  node->get_parameter("position_frame_id", g_position_frame_id);
  node->get_parameter("stabilized_frame_id", g_stabilized_frame_id);
  node->get_parameter("child_frame_id", g_child_frame_id);

  // get topic from the commandline
  if (argc > 1) {
      g_topic = argv[1];
      g_odometry_topic.clear();
      g_pose_topic.clear();
      g_imu_topic.clear();
  }

  g_publish_roll_pitch = true;
  node->get_parameter("publish_roll_pitch", g_publish_roll_pitch);

  //g_tf_prefix = tf::getPrefixParam(node);
  g_transform_broadcaster = std::make_shared<tf2_ros::TransformBroadcaster>(node);
  int subscribers = 1;
  if (!g_odometry_topic.empty()) {
      sub1 = node->create_subscription<nav_msgs::msg::Odometry>(
        g_odometry_topic, 10, odomCallback);
      subscribers++;
  }
  if (!g_pose_topic.empty()) {
      sub2 = node->create_subscription<geometry_msgs::msg::PoseStamped>(
        g_pose_topic, 10, poseCallback);
      subscribers++;
  }
  if (!g_imu_topic.empty()) {
      sub3 = node->create_subscription<sensor_msgs::msg::Imu>(
        g_imu_topic, 10, imuCallback);
      subscribers++;
  }
  // if (!g_topic.empty()) {
  //     sub4 = node->create_subscription(g_topic, 10, &multiCallback);
  //     subscribers++;
  // }

  if (subscribers == 0) {
    RCLCPP_FATAL(logger, "Usage: ros2 run message_to_tf message_to_tf <topic>");
    return 1;
  } else if (subscribers > 1) {
    RCLCPP_FATAL(logger, "More than one of the parameters odometry_topic, pose_topic, imu_topic and topic are set.\n"
              "Please specify exactly one of them or simply add the topic name to the command line.");
    return 1;
  }

  bool publish_pose = true;
  node->get_parameter("publish_pose", publish_pose);
  if (publish_pose) {
    std::string publish_pose_topic;
    node->get_parameter("publish_pose_topic", publish_pose_topic);

    if (!publish_pose_topic.empty())
      g_pose_publisher = node->create_publisher<geometry_msgs::msg::PoseStamped>(publish_pose_topic, 10);
    else
      g_pose_publisher = node->create_publisher<geometry_msgs::msg::PoseStamped>("pose", 10);
  }

  bool publish_euler = true;
  node->get_parameter("publish_euler", publish_euler);
  if (publish_euler) {
    std::string publish_euler_topic;
    node->get_parameter("publish_euler_topic", publish_euler_topic);

    if (!publish_euler_topic.empty())
      g_euler_publisher = node->create_publisher<geometry_msgs::msg::Vector3Stamped>(publish_euler_topic, 10);
    else
      g_euler_publisher = node->create_publisher<geometry_msgs::msg::Vector3Stamped>("euler", 10);
  }

  rclcpp::spin(node);

  return 0;
}
