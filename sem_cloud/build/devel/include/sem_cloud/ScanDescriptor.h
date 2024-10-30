// Generated by gencpp from file sem_cloud/ScanDescriptor.msg
// DO NOT EDIT!


#ifndef SEM_CLOUD_MESSAGE_SCANDESCRIPTOR_H
#define SEM_CLOUD_MESSAGE_SCANDESCRIPTOR_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <sensor_msgs/LaserScan.h>
#include <sensor_msgs/PointCloud2.h>
#include <sem_cloud/GlobalDescriptor.h>

namespace sem_cloud
{
template <class ContainerAllocator>
struct ScanDescriptor_
{
  typedef ScanDescriptor_<ContainerAllocator> Type;

  ScanDescriptor_()
    : header()
    , scan()
    , scan_cloud()
    , global_descriptor()  {
    }
  ScanDescriptor_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , scan(_alloc)
    , scan_cloud(_alloc)
    , global_descriptor(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::sensor_msgs::LaserScan_<ContainerAllocator>  _scan_type;
  _scan_type scan;

   typedef  ::sensor_msgs::PointCloud2_<ContainerAllocator>  _scan_cloud_type;
  _scan_cloud_type scan_cloud;

   typedef  ::sem_cloud::GlobalDescriptor_<ContainerAllocator>  _global_descriptor_type;
  _global_descriptor_type global_descriptor;





  typedef boost::shared_ptr< ::sem_cloud::ScanDescriptor_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sem_cloud::ScanDescriptor_<ContainerAllocator> const> ConstPtr;

}; // struct ScanDescriptor_

typedef ::sem_cloud::ScanDescriptor_<std::allocator<void> > ScanDescriptor;

typedef boost::shared_ptr< ::sem_cloud::ScanDescriptor > ScanDescriptorPtr;
typedef boost::shared_ptr< ::sem_cloud::ScanDescriptor const> ScanDescriptorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sem_cloud::ScanDescriptor_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sem_cloud::ScanDescriptor_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sem_cloud::ScanDescriptor_<ContainerAllocator1> & lhs, const ::sem_cloud::ScanDescriptor_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.scan == rhs.scan &&
    lhs.scan_cloud == rhs.scan_cloud &&
    lhs.global_descriptor == rhs.global_descriptor;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sem_cloud::ScanDescriptor_<ContainerAllocator1> & lhs, const ::sem_cloud::ScanDescriptor_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sem_cloud

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::sem_cloud::ScanDescriptor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sem_cloud::ScanDescriptor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sem_cloud::ScanDescriptor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sem_cloud::ScanDescriptor_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sem_cloud::ScanDescriptor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sem_cloud::ScanDescriptor_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sem_cloud::ScanDescriptor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e76f45a9fe00fd5492368db8040ccbec";
  }

  static const char* value(const ::sem_cloud::ScanDescriptor_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe76f45a9fe00fd54ULL;
  static const uint64_t static_value2 = 0x92368db8040ccbecULL;
};

template<class ContainerAllocator>
struct DataType< ::sem_cloud::ScanDescriptor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sem_cloud/ScanDescriptor";
  }

  static const char* value(const ::sem_cloud::ScanDescriptor_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sem_cloud::ScanDescriptor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"Header header\n"
"\n"
"# scan or scan_cloud is set\n"
"sensor_msgs/LaserScan scan\n"
"sensor_msgs/PointCloud2 scan_cloud\n"
"\n"
"GlobalDescriptor global_descriptor\n"
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
"\n"
"================================================================================\n"
"MSG: sensor_msgs/LaserScan\n"
"# Single scan from a planar laser range-finder\n"
"#\n"
"# If you have another ranging device with different behavior (e.g. a sonar\n"
"# array), please find or create a different message, since applications\n"
"# will make fairly laser-specific assumptions about this data\n"
"\n"
"Header header            # timestamp in the header is the acquisition time of \n"
"                         # the first ray in the scan.\n"
"                         #\n"
"                         # in frame frame_id, angles are measured around \n"
"                         # the positive Z axis (counterclockwise, if Z is up)\n"
"                         # with zero angle being forward along the x axis\n"
"                         \n"
"float32 angle_min        # start angle of the scan [rad]\n"
"float32 angle_max        # end angle of the scan [rad]\n"
"float32 angle_increment  # angular distance between measurements [rad]\n"
"\n"
"float32 time_increment   # time between measurements [seconds] - if your scanner\n"
"                         # is moving, this will be used in interpolating position\n"
"                         # of 3d points\n"
"float32 scan_time        # time between scans [seconds]\n"
"\n"
"float32 range_min        # minimum range value [m]\n"
"float32 range_max        # maximum range value [m]\n"
"\n"
"float32[] ranges         # range data [m] (Note: values < range_min or > range_max should be discarded)\n"
"float32[] intensities    # intensity data [device-specific units].  If your\n"
"                         # device does not provide intensities, please leave\n"
"                         # the array empty.\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/PointCloud2\n"
"# This message holds a collection of N-dimensional points, which may\n"
"# contain additional information such as normals, intensity, etc. The\n"
"# point data is stored as a binary blob, its layout described by the\n"
"# contents of the \"fields\" array.\n"
"\n"
"# The point cloud data may be organized 2d (image-like) or 1d\n"
"# (unordered). Point clouds organized as 2d images may be produced by\n"
"# camera depth sensors such as stereo or time-of-flight.\n"
"\n"
"# Time of sensor data acquisition, and the coordinate frame ID (for 3d\n"
"# points).\n"
"Header header\n"
"\n"
"# 2D structure of the point cloud. If the cloud is unordered, height is\n"
"# 1 and width is the length of the point cloud.\n"
"uint32 height\n"
"uint32 width\n"
"\n"
"# Describes the channels and their layout in the binary data blob.\n"
"PointField[] fields\n"
"\n"
"bool    is_bigendian # Is this data bigendian?\n"
"uint32  point_step   # Length of a point in bytes\n"
"uint32  row_step     # Length of a row in bytes\n"
"uint8[] data         # Actual point data, size is (row_step*height)\n"
"\n"
"bool is_dense        # True if there are no invalid points\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/PointField\n"
"# This message holds the description of one point entry in the\n"
"# PointCloud2 message format.\n"
"uint8 INT8    = 1\n"
"uint8 UINT8   = 2\n"
"uint8 INT16   = 3\n"
"uint8 UINT16  = 4\n"
"uint8 INT32   = 5\n"
"uint8 UINT32  = 6\n"
"uint8 FLOAT32 = 7\n"
"uint8 FLOAT64 = 8\n"
"\n"
"string name      # Name of field\n"
"uint32 offset    # Offset from start of point struct\n"
"uint8  datatype  # Datatype enumeration, see above\n"
"uint32 count     # How many elements in the field\n"
"\n"
"================================================================================\n"
"MSG: sem_cloud/GlobalDescriptor\n"
"\n"
"Header header\n"
"\n"
"# compressed global descriptor\n"
"# use rtabmap::util3d::uncompressData() from \"rtabmap/core/util3d.h\"\n"
"int32 type\n"
"uint8[] info\n"
"uint8[] data\n"
;
  }

  static const char* value(const ::sem_cloud::ScanDescriptor_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sem_cloud::ScanDescriptor_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.scan);
      stream.next(m.scan_cloud);
      stream.next(m.global_descriptor);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ScanDescriptor_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sem_cloud::ScanDescriptor_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sem_cloud::ScanDescriptor_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "scan: ";
    s << std::endl;
    Printer< ::sensor_msgs::LaserScan_<ContainerAllocator> >::stream(s, indent + "  ", v.scan);
    s << indent << "scan_cloud: ";
    s << std::endl;
    Printer< ::sensor_msgs::PointCloud2_<ContainerAllocator> >::stream(s, indent + "  ", v.scan_cloud);
    s << indent << "global_descriptor: ";
    s << std::endl;
    Printer< ::sem_cloud::GlobalDescriptor_<ContainerAllocator> >::stream(s, indent + "  ", v.global_descriptor);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SEM_CLOUD_MESSAGE_SCANDESCRIPTOR_H
