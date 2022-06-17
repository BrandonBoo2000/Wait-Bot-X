// Generated by gencpp from file astra_camera/GetUVCWhiteBalanceResponse.msg
// DO NOT EDIT!


#ifndef ASTRA_CAMERA_MESSAGE_GETUVCWHITEBALANCERESPONSE_H
#define ASTRA_CAMERA_MESSAGE_GETUVCWHITEBALANCERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace astra_camera
{
template <class ContainerAllocator>
struct GetUVCWhiteBalanceResponse_
{
  typedef GetUVCWhiteBalanceResponse_<ContainerAllocator> Type;

  GetUVCWhiteBalanceResponse_()
    : white_balance(0)  {
    }
  GetUVCWhiteBalanceResponse_(const ContainerAllocator& _alloc)
    : white_balance(0)  {
  (void)_alloc;
    }



   typedef int32_t _white_balance_type;
  _white_balance_type white_balance;





  typedef boost::shared_ptr< ::astra_camera::GetUVCWhiteBalanceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::astra_camera::GetUVCWhiteBalanceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetUVCWhiteBalanceResponse_

typedef ::astra_camera::GetUVCWhiteBalanceResponse_<std::allocator<void> > GetUVCWhiteBalanceResponse;

typedef boost::shared_ptr< ::astra_camera::GetUVCWhiteBalanceResponse > GetUVCWhiteBalanceResponsePtr;
typedef boost::shared_ptr< ::astra_camera::GetUVCWhiteBalanceResponse const> GetUVCWhiteBalanceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::astra_camera::GetUVCWhiteBalanceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::astra_camera::GetUVCWhiteBalanceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::astra_camera::GetUVCWhiteBalanceResponse_<ContainerAllocator1> & lhs, const ::astra_camera::GetUVCWhiteBalanceResponse_<ContainerAllocator2> & rhs)
{
  return lhs.white_balance == rhs.white_balance;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::astra_camera::GetUVCWhiteBalanceResponse_<ContainerAllocator1> & lhs, const ::astra_camera::GetUVCWhiteBalanceResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace astra_camera

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::astra_camera::GetUVCWhiteBalanceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::astra_camera::GetUVCWhiteBalanceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::astra_camera::GetUVCWhiteBalanceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::astra_camera::GetUVCWhiteBalanceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::astra_camera::GetUVCWhiteBalanceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::astra_camera::GetUVCWhiteBalanceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::astra_camera::GetUVCWhiteBalanceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fc2837b62008590625057801873acc63";
  }

  static const char* value(const ::astra_camera::GetUVCWhiteBalanceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfc2837b620085906ULL;
  static const uint64_t static_value2 = 0x25057801873acc63ULL;
};

template<class ContainerAllocator>
struct DataType< ::astra_camera::GetUVCWhiteBalanceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "astra_camera/GetUVCWhiteBalanceResponse";
  }

  static const char* value(const ::astra_camera::GetUVCWhiteBalanceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::astra_camera::GetUVCWhiteBalanceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 white_balance\n"
;
  }

  static const char* value(const ::astra_camera::GetUVCWhiteBalanceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::astra_camera::GetUVCWhiteBalanceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.white_balance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetUVCWhiteBalanceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::astra_camera::GetUVCWhiteBalanceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::astra_camera::GetUVCWhiteBalanceResponse_<ContainerAllocator>& v)
  {
    s << indent << "white_balance: ";
    Printer<int32_t>::stream(s, indent + "  ", v.white_balance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ASTRA_CAMERA_MESSAGE_GETUVCWHITEBALANCERESPONSE_H
