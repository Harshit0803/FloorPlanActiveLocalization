// Generated by gencpp from file sem_cloud/UserData.msg
// DO NOT EDIT!


#ifndef SEM_CLOUD_MESSAGE_USERDATA_H
#define SEM_CLOUD_MESSAGE_USERDATA_H


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
struct UserData_
{
  typedef UserData_<ContainerAllocator> Type;

  UserData_()
    : header()
    , rows(0)
    , cols(0)
    , type(0)
    , data()  {
    }
  UserData_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , rows(0)
    , cols(0)
    , type(0)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint32_t _rows_type;
  _rows_type rows;

   typedef uint32_t _cols_type;
  _cols_type cols;

   typedef uint32_t _type_type;
  _type_type type;

   typedef std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::sem_cloud::UserData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sem_cloud::UserData_<ContainerAllocator> const> ConstPtr;

}; // struct UserData_

typedef ::sem_cloud::UserData_<std::allocator<void> > UserData;

typedef boost::shared_ptr< ::sem_cloud::UserData > UserDataPtr;
typedef boost::shared_ptr< ::sem_cloud::UserData const> UserDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sem_cloud::UserData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sem_cloud::UserData_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sem_cloud::UserData_<ContainerAllocator1> & lhs, const ::sem_cloud::UserData_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.rows == rhs.rows &&
    lhs.cols == rhs.cols &&
    lhs.type == rhs.type &&
    lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sem_cloud::UserData_<ContainerAllocator1> & lhs, const ::sem_cloud::UserData_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sem_cloud

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::sem_cloud::UserData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sem_cloud::UserData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sem_cloud::UserData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sem_cloud::UserData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sem_cloud::UserData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sem_cloud::UserData_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sem_cloud::UserData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e2b3ca3c96ccd4baa19ca1aeef9ec767";
  }

  static const char* value(const ::sem_cloud::UserData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe2b3ca3c96ccd4baULL;
  static const uint64_t static_value2 = 0xa19ca1aeef9ec767ULL;
};

template<class ContainerAllocator>
struct DataType< ::sem_cloud::UserData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sem_cloud/UserData";
  }

  static const char* value(const ::sem_cloud::UserData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sem_cloud::UserData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"Header header\n"
"\n"
"# OpenCV matrix containing the user data. A matrix of type CV_8UC1 \n"
"# with 1 row is considered to be compressed (with rtabmap::compressData() method).\n"
"# If you have one dimension unsigned 8 bits uncompressed data, make sure to transpose it\n"
"# (to have multiple rows instead of multiple columns) in order to be detected as\n"
"# not compressed.\n"
"uint32 rows\n"
"uint32 cols\n"
"uint32 type\n"
"uint8[] data\n"
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

  static const char* value(const ::sem_cloud::UserData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sem_cloud::UserData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.rows);
      stream.next(m.cols);
      stream.next(m.type);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct UserData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sem_cloud::UserData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sem_cloud::UserData_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "rows: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.rows);
    s << indent << "cols: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.cols);
    s << indent << "type: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.type);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SEM_CLOUD_MESSAGE_USERDATA_H
