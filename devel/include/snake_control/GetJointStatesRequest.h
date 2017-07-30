// Generated by gencpp from file snake_control/GetJointStatesRequest.msg
// DO NOT EDIT!


#ifndef SNAKE_CONTROL_MESSAGE_GETJOINTSTATESREQUEST_H
#define SNAKE_CONTROL_MESSAGE_GETJOINTSTATESREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace snake_control
{
template <class ContainerAllocator>
struct GetJointStatesRequest_
{
  typedef GetJointStatesRequest_<ContainerAllocator> Type;

  GetJointStatesRequest_()
    {
    }
  GetJointStatesRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }






  typedef boost::shared_ptr< ::snake_control::GetJointStatesRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::snake_control::GetJointStatesRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetJointStatesRequest_

typedef ::snake_control::GetJointStatesRequest_<std::allocator<void> > GetJointStatesRequest;

typedef boost::shared_ptr< ::snake_control::GetJointStatesRequest > GetJointStatesRequestPtr;
typedef boost::shared_ptr< ::snake_control::GetJointStatesRequest const> GetJointStatesRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::snake_control::GetJointStatesRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::snake_control::GetJointStatesRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace snake_control

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::snake_control::GetJointStatesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::snake_control::GetJointStatesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::snake_control::GetJointStatesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::snake_control::GetJointStatesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::snake_control::GetJointStatesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::snake_control::GetJointStatesRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::snake_control::GetJointStatesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::snake_control::GetJointStatesRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::snake_control::GetJointStatesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "snake_control/GetJointStatesRequest";
  }

  static const char* value(const ::snake_control::GetJointStatesRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::snake_control::GetJointStatesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
";
  }

  static const char* value(const ::snake_control::GetJointStatesRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::snake_control::GetJointStatesRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetJointStatesRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::snake_control::GetJointStatesRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::snake_control::GetJointStatesRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // SNAKE_CONTROL_MESSAGE_GETJOINTSTATESREQUEST_H
