// Generated by gencpp from file op3_online_walking_module_msgs/JointPose.msg
// DO NOT EDIT!


#ifndef OP3_ONLINE_WALKING_MODULE_MSGS_MESSAGE_JOINTPOSE_H
#define OP3_ONLINE_WALKING_MODULE_MSGS_MESSAGE_JOINTPOSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sensor_msgs/JointState.h>

namespace op3_online_walking_module_msgs
{
template <class ContainerAllocator>
struct JointPose_
{
  typedef JointPose_<ContainerAllocator> Type;

  JointPose_()
    : mov_time(0.0)
    , pose()  {
    }
  JointPose_(const ContainerAllocator& _alloc)
    : mov_time(0.0)
    , pose(_alloc)  {
  (void)_alloc;
    }



   typedef double _mov_time_type;
  _mov_time_type mov_time;

   typedef  ::sensor_msgs::JointState_<ContainerAllocator>  _pose_type;
  _pose_type pose;





  typedef boost::shared_ptr< ::op3_online_walking_module_msgs::JointPose_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::op3_online_walking_module_msgs::JointPose_<ContainerAllocator> const> ConstPtr;

}; // struct JointPose_

typedef ::op3_online_walking_module_msgs::JointPose_<std::allocator<void> > JointPose;

typedef boost::shared_ptr< ::op3_online_walking_module_msgs::JointPose > JointPosePtr;
typedef boost::shared_ptr< ::op3_online_walking_module_msgs::JointPose const> JointPoseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::op3_online_walking_module_msgs::JointPose_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::op3_online_walking_module_msgs::JointPose_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace op3_online_walking_module_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'op3_online_walking_module_msgs': ['/home/robotis/catkin_ws/src/ROBOTIS-OP3-msgs/op3_online_walking_module_msgs/msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::op3_online_walking_module_msgs::JointPose_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::op3_online_walking_module_msgs::JointPose_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::op3_online_walking_module_msgs::JointPose_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::op3_online_walking_module_msgs::JointPose_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::op3_online_walking_module_msgs::JointPose_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::op3_online_walking_module_msgs::JointPose_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::op3_online_walking_module_msgs::JointPose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "93e783e02761adffe02faae8c7feff29";
  }

  static const char* value(const ::op3_online_walking_module_msgs::JointPose_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x93e783e02761adffULL;
  static const uint64_t static_value2 = 0xe02faae8c7feff29ULL;
};

template<class ContainerAllocator>
struct DataType< ::op3_online_walking_module_msgs::JointPose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "op3_online_walking_module_msgs/JointPose";
  }

  static const char* value(const ::op3_online_walking_module_msgs::JointPose_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::op3_online_walking_module_msgs::JointPose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64  mov_time\n\
sensor_msgs/JointState  pose\n\
\n\
================================================================================\n\
MSG: sensor_msgs/JointState\n\
# This is a message that holds data to describe the state of a set of torque controlled joints. \n\
#\n\
# The state of each joint (revolute or prismatic) is defined by:\n\
#  * the position of the joint (rad or m),\n\
#  * the velocity of the joint (rad/s or m/s) and \n\
#  * the effort that is applied in the joint (Nm or N).\n\
#\n\
# Each joint is uniquely identified by its name\n\
# The header specifies the time at which the joint states were recorded. All the joint states\n\
# in one message have to be recorded at the same time.\n\
#\n\
# This message consists of a multiple arrays, one for each part of the joint state. \n\
# The goal is to make each of the fields optional. When e.g. your joints have no\n\
# effort associated with them, you can leave the effort array empty. \n\
#\n\
# All arrays in this message should have the same size, or be empty.\n\
# This is the only way to uniquely associate the joint name with the correct\n\
# states.\n\
\n\
\n\
Header header\n\
\n\
string[] name\n\
float64[] position\n\
float64[] velocity\n\
float64[] effort\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::op3_online_walking_module_msgs::JointPose_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::op3_online_walking_module_msgs::JointPose_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mov_time);
      stream.next(m.pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointPose_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::op3_online_walking_module_msgs::JointPose_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::op3_online_walking_module_msgs::JointPose_<ContainerAllocator>& v)
  {
    s << indent << "mov_time: ";
    Printer<double>::stream(s, indent + "  ", v.mov_time);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::sensor_msgs::JointState_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OP3_ONLINE_WALKING_MODULE_MSGS_MESSAGE_JOINTPOSE_H