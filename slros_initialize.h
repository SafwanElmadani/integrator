#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block integrator/Subscribe
extern SimulinkSubscriber<geometry_msgs::TwistStamped, SL_Bus_integrator_geometry_msgs_TwistStamped> Sub_integrator_3;

// For Block integrator/Subsystem/Publish
extern SimulinkPublisher<geometry_msgs::PointStamped, SL_Bus_integrator_geometry_msgs_PointStamped> Pub_integrator_26;

void slros_node_init(int argc, char** argv);

#endif
