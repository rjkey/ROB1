/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/ubuntu/catkin_ws/src/dynamixel_motor/dynamixel_controllers/srv/SetCompliancePunch.srv
 *
 */


#ifndef DYNAMIXEL_CONTROLLERS_MESSAGE_SETCOMPLIANCEPUNCHREQUEST_H
#define DYNAMIXEL_CONTROLLERS_MESSAGE_SETCOMPLIANCEPUNCHREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dynamixel_controllers
{
template <class ContainerAllocator>
struct SetCompliancePunchRequest_
{
  typedef SetCompliancePunchRequest_<ContainerAllocator> Type;

  SetCompliancePunchRequest_()
    : punch(0)  {
    }
  SetCompliancePunchRequest_(const ContainerAllocator& _alloc)
    : punch(0)  {
    }



   typedef uint8_t _punch_type;
  _punch_type punch;




  typedef boost::shared_ptr< ::dynamixel_controllers::SetCompliancePunchRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamixel_controllers::SetCompliancePunchRequest_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct SetCompliancePunchRequest_

typedef ::dynamixel_controllers::SetCompliancePunchRequest_<std::allocator<void> > SetCompliancePunchRequest;

typedef boost::shared_ptr< ::dynamixel_controllers::SetCompliancePunchRequest > SetCompliancePunchRequestPtr;
typedef boost::shared_ptr< ::dynamixel_controllers::SetCompliancePunchRequest const> SetCompliancePunchRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dynamixel_controllers::SetCompliancePunchRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dynamixel_controllers::SetCompliancePunchRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dynamixel_controllers

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dynamixel_controllers::SetCompliancePunchRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dynamixel_controllers::SetCompliancePunchRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamixel_controllers::SetCompliancePunchRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamixel_controllers::SetCompliancePunchRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamixel_controllers::SetCompliancePunchRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamixel_controllers::SetCompliancePunchRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dynamixel_controllers::SetCompliancePunchRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6f1db06d3f143058321215213d1c3bef";
  }

  static const char* value(const ::dynamixel_controllers::SetCompliancePunchRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6f1db06d3f143058ULL;
  static const uint64_t static_value2 = 0x321215213d1c3befULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamixel_controllers::SetCompliancePunchRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dynamixel_controllers/SetCompliancePunchRequest";
  }

  static const char* value(const ::dynamixel_controllers::SetCompliancePunchRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dynamixel_controllers::SetCompliancePunchRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
uint8 punch\n\
";
  }

  static const char* value(const ::dynamixel_controllers::SetCompliancePunchRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dynamixel_controllers::SetCompliancePunchRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.punch);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct SetCompliancePunchRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamixel_controllers::SetCompliancePunchRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dynamixel_controllers::SetCompliancePunchRequest_<ContainerAllocator>& v)
  {
    s << indent << "punch: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.punch);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DYNAMIXEL_CONTROLLERS_MESSAGE_SETCOMPLIANCEPUNCHREQUEST_H