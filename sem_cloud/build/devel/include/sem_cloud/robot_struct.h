// Generated by gencpp from file sem_cloud/robot_struct.msg
// DO NOT EDIT!


#ifndef SEM_CLOUD_MESSAGE_ROBOT_STRUCT_H
#define SEM_CLOUD_MESSAGE_ROBOT_STRUCT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace sem_cloud
{
template <class ContainerAllocator>
struct robot_struct_
{
  typedef robot_struct_<ContainerAllocator> Type;

  robot_struct_()
    : header()
    , x(0.0)
    , y(0.0)
    , h(0.0)
    , o_x(0.0)
    , o_y(0.0)
    , o_h(0.0)
    , l_x(0.0)
    , l_y(0.0)
    , l_h(0.0)  {
    }
  robot_struct_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , x(0.0)
    , y(0.0)
    , h(0.0)
    , o_x(0.0)
    , o_y(0.0)
    , o_h(0.0)
    , l_x(0.0)
    , l_y(0.0)
    , l_h(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _h_type;
  _h_type h;

   typedef float _o_x_type;
  _o_x_type o_x;

   typedef float _o_y_type;
  _o_y_type o_y;

   typedef float _o_h_type;
  _o_h_type o_h;

   typedef float _l_x_type;
  _l_x_type l_x;

   typedef float _l_y_type;
  _l_y_type l_y;

   typedef float _l_h_type;
  _l_h_type l_h;





  typedef boost::shared_ptr< ::sem_cloud::robot_struct_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sem_cloud::robot_struct_<ContainerAllocator> const> ConstPtr;

}; // struct robot_struct_

typedef ::sem_cloud::robot_struct_<std::allocator<void> > robot_struct;

typedef boost::shared_ptr< ::sem_cloud::robot_struct > robot_structPtr;
typedef boost::shared_ptr< ::sem_cloud::robot_struct const> robot_structConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sem_cloud::robot_struct_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sem_cloud::robot_struct_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sem_cloud::robot_struct_<ContainerAllocator1> & lhs, const ::sem_cloud::robot_struct_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.h == rhs.h &&
    lhs.o_x == rhs.o_x &&
    lhs.o_y == rhs.o_y &&
    lhs.o_h == rhs.o_h &&
    lhs.l_x == rhs.l_x &&
    lhs.l_y == rhs.l_y &&
    lhs.l_h == rhs.l_h;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sem_cloud::robot_struct_<ContainerAllocator1> & lhs, const ::sem_cloud::robot_struct_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sem_cloud

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::sem_cloud::robot_struct_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sem_cloud::robot_struct_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sem_cloud::robot_struct_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sem_cloud::robot_struct_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sem_cloud::robot_struct_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sem_cloud::robot_struct_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sem_cloud::robot_struct_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1e2748a1ebd7e4142014739896b06e16";
  }

  static const char* value(const ::sem_cloud::robot_struct_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1e2748a1ebd7e414ULL;
  static const uint64_t static_value2 = 0x2014739896b06e16ULL;
};

template<class ContainerAllocator>
struct DataType< ::sem_cloud::robot_struct_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sem_cloud/robot_struct";
  }

  static const char* value(const ::sem_cloud::robot_struct_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sem_cloud::robot_struct_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"float32 x\n"
"float32 y\n"
"float32 h\n"
"float32 o_x\n"
"float32 o_y\n"
"float32 o_h\n"
"float32 l_x\n"
"float32 l_y\n"
"float32 l_h\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::sem_cloud::robot_struct_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sem_cloud::robot_struct_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.h);
      stream.next(m.o_x);
      stream.next(m.o_y);
      stream.next(m.o_h);
      stream.next(m.l_x);
      stream.next(m.l_y);
      stream.next(m.l_h);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct robot_struct_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sem_cloud::robot_struct_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sem_cloud::robot_struct_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "h: ";
    Printer<float>::stream(s, indent + "  ", v.h);
    s << indent << "o_x: ";
    Printer<float>::stream(s, indent + "  ", v.o_x);
    s << indent << "o_y: ";
    Printer<float>::stream(s, indent + "  ", v.o_y);
    s << indent << "o_h: ";
    Printer<float>::stream(s, indent + "  ", v.o_h);
    s << indent << "l_x: ";
    Printer<float>::stream(s, indent + "  ", v.l_x);
    s << indent << "l_y: ";
    Printer<float>::stream(s, indent + "  ", v.l_y);
    s << indent << "l_h: ";
    Printer<float>::stream(s, indent + "  ", v.l_h);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SEM_CLOUD_MESSAGE_ROBOT_STRUCT_H
