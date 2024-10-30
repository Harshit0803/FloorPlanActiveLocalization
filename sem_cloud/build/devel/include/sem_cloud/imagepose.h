// Generated by gencpp from file sem_cloud/imagepose.msg
// DO NOT EDIT!


#ifndef SEM_CLOUD_MESSAGE_IMAGEPOSE_H
#define SEM_CLOUD_MESSAGE_IMAGEPOSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <sensor_msgs/Image.h>
#include <sensor_msgs/Image.h>
#include <sensor_msgs/Image.h>
#include <geometry_msgs/Pose.h>
#include <sensor_msgs/PointCloud2.h>

namespace sem_cloud
{
template <class ContainerAllocator>
struct imagepose_
{
  typedef imagepose_<ContainerAllocator> Type;

  imagepose_()
    : header()
    , rgb()
    , depth()
    , semantic()
    , poseId()
    , pose()
    , length(0)
    , loopclosureId(0)
    , proximityDetectionId(0)
    , rtabmapPcl()  {
    }
  imagepose_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , rgb(_alloc)
    , depth(_alloc)
    , semantic(_alloc)
    , poseId(_alloc)
    , pose(_alloc)
    , length(0)
    , loopclosureId(0)
    , proximityDetectionId(0)
    , rtabmapPcl(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::sensor_msgs::Image_<ContainerAllocator>  _rgb_type;
  _rgb_type rgb;

   typedef  ::sensor_msgs::Image_<ContainerAllocator>  _depth_type;
  _depth_type depth;

   typedef  ::sensor_msgs::Image_<ContainerAllocator>  _semantic_type;
  _semantic_type semantic;

   typedef std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> _poseId_type;
  _poseId_type poseId;

   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::geometry_msgs::Pose_<ContainerAllocator> >> _pose_type;
  _pose_type pose;

   typedef int32_t _length_type;
  _length_type length;

   typedef int32_t _loopclosureId_type;
  _loopclosureId_type loopclosureId;

   typedef int32_t _proximityDetectionId_type;
  _proximityDetectionId_type proximityDetectionId;

   typedef  ::sensor_msgs::PointCloud2_<ContainerAllocator>  _rtabmapPcl_type;
  _rtabmapPcl_type rtabmapPcl;





  typedef boost::shared_ptr< ::sem_cloud::imagepose_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sem_cloud::imagepose_<ContainerAllocator> const> ConstPtr;

}; // struct imagepose_

typedef ::sem_cloud::imagepose_<std::allocator<void> > imagepose;

typedef boost::shared_ptr< ::sem_cloud::imagepose > imageposePtr;
typedef boost::shared_ptr< ::sem_cloud::imagepose const> imageposeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sem_cloud::imagepose_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sem_cloud::imagepose_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sem_cloud::imagepose_<ContainerAllocator1> & lhs, const ::sem_cloud::imagepose_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.rgb == rhs.rgb &&
    lhs.depth == rhs.depth &&
    lhs.semantic == rhs.semantic &&
    lhs.poseId == rhs.poseId &&
    lhs.pose == rhs.pose &&
    lhs.length == rhs.length &&
    lhs.loopclosureId == rhs.loopclosureId &&
    lhs.proximityDetectionId == rhs.proximityDetectionId &&
    lhs.rtabmapPcl == rhs.rtabmapPcl;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sem_cloud::imagepose_<ContainerAllocator1> & lhs, const ::sem_cloud::imagepose_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sem_cloud

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::sem_cloud::imagepose_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sem_cloud::imagepose_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sem_cloud::imagepose_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sem_cloud::imagepose_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sem_cloud::imagepose_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sem_cloud::imagepose_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sem_cloud::imagepose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7690fb2db9b30a77e74c1a7930e4d8d9";
  }

  static const char* value(const ::sem_cloud::imagepose_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7690fb2db9b30a77ULL;
  static const uint64_t static_value2 = 0xe74c1a7930e4d8d9ULL;
};

template<class ContainerAllocator>
struct DataType< ::sem_cloud::imagepose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sem_cloud/imagepose";
  }

  static const char* value(const ::sem_cloud::imagepose_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sem_cloud::imagepose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"sensor_msgs/Image  rgb\n"
"\n"
"sensor_msgs/Image  depth\n"
"\n"
"sensor_msgs/Image semantic\n"
"\n"
"int32[]              poseId\n"
"\n"
"geometry_msgs/Pose[] pose\n"
"\n"
"int32              length\n"
"\n"
"int32              loopclosureId\n"
"\n"
"int32		    proximityDetectionId\n"
"\n"
"sensor_msgs/PointCloud2 rtabmapPcl\n"
"\n"
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
"MSG: sensor_msgs/Image\n"
"# This message contains an uncompressed image\n"
"# (0, 0) is at top-left corner of image\n"
"#\n"
"\n"
"Header header        # Header timestamp should be acquisition time of image\n"
"                     # Header frame_id should be optical frame of camera\n"
"                     # origin of frame should be optical center of camera\n"
"                     # +x should point to the right in the image\n"
"                     # +y should point down in the image\n"
"                     # +z should point into to plane of the image\n"
"                     # If the frame_id here and the frame_id of the CameraInfo\n"
"                     # message associated with the image conflict\n"
"                     # the behavior is undefined\n"
"\n"
"uint32 height         # image height, that is, number of rows\n"
"uint32 width          # image width, that is, number of columns\n"
"\n"
"# The legal values for encoding are in file src/image_encodings.cpp\n"
"# If you want to standardize a new string format, join\n"
"# ros-users@lists.sourceforge.net and send an email proposing a new encoding.\n"
"\n"
"string encoding       # Encoding of pixels -- channel meaning, ordering, size\n"
"                      # taken from the list of strings in include/sensor_msgs/image_encodings.h\n"
"\n"
"uint8 is_bigendian    # is this data bigendian?\n"
"uint32 step           # Full row length in bytes\n"
"uint8[] data          # actual matrix data, size is (step * rows)\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
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
;
  }

  static const char* value(const ::sem_cloud::imagepose_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sem_cloud::imagepose_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.rgb);
      stream.next(m.depth);
      stream.next(m.semantic);
      stream.next(m.poseId);
      stream.next(m.pose);
      stream.next(m.length);
      stream.next(m.loopclosureId);
      stream.next(m.proximityDetectionId);
      stream.next(m.rtabmapPcl);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct imagepose_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sem_cloud::imagepose_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sem_cloud::imagepose_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "rgb: ";
    s << std::endl;
    Printer< ::sensor_msgs::Image_<ContainerAllocator> >::stream(s, indent + "  ", v.rgb);
    s << indent << "depth: ";
    s << std::endl;
    Printer< ::sensor_msgs::Image_<ContainerAllocator> >::stream(s, indent + "  ", v.depth);
    s << indent << "semantic: ";
    s << std::endl;
    Printer< ::sensor_msgs::Image_<ContainerAllocator> >::stream(s, indent + "  ", v.semantic);
    s << indent << "poseId[]" << std::endl;
    for (size_t i = 0; i < v.poseId.size(); ++i)
    {
      s << indent << "  poseId[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.poseId[i]);
    }
    s << indent << "pose[]" << std::endl;
    for (size_t i = 0; i < v.pose.size(); ++i)
    {
      s << indent << "  pose[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.pose[i]);
    }
    s << indent << "length: ";
    Printer<int32_t>::stream(s, indent + "  ", v.length);
    s << indent << "loopclosureId: ";
    Printer<int32_t>::stream(s, indent + "  ", v.loopclosureId);
    s << indent << "proximityDetectionId: ";
    Printer<int32_t>::stream(s, indent + "  ", v.proximityDetectionId);
    s << indent << "rtabmapPcl: ";
    s << std::endl;
    Printer< ::sensor_msgs::PointCloud2_<ContainerAllocator> >::stream(s, indent + "  ", v.rtabmapPcl);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SEM_CLOUD_MESSAGE_IMAGEPOSE_H
