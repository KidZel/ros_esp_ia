#include "ros/ros.h"
#include "std_msgs/String.h"
#include <string>
using namespace std;

void funesp32(std_msgs::String msg)
{
    ROS_INFO("NODOESP32: [%s]", msg.data.c_str());
}

int main(int argc, char **argv)
{
    ros::init(argc,argv, "esp32nodeDemo");
    ros::NodeHandle nh;
    ros::Subscriber sub = nh.subscribe("chatter", 1000, funesp32);
    ros::spin();
    return 0;
}