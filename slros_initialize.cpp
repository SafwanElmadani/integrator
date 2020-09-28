#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "integrator";

// For Block integrator/Subscribe
SimulinkSubscriber<geometry_msgs::TwistStamped, SL_Bus_integrator_geometry_msgs_TwistStamped> Sub_integrator_3;

// For Block integrator/Subsystem/Publish
SimulinkPublisher<geometry_msgs::PointStamped, SL_Bus_integrator_geometry_msgs_PointStamped> Pub_integrator_26;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

