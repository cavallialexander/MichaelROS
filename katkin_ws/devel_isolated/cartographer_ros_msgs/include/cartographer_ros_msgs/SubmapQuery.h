// Generated by gencpp from file cartographer_ros_msgs/SubmapQuery.msg
// DO NOT EDIT!


#ifndef CARTOGRAPHER_ROS_MSGS_MESSAGE_SUBMAPQUERY_H
#define CARTOGRAPHER_ROS_MSGS_MESSAGE_SUBMAPQUERY_H

#include <ros/service_traits.h>


#include <cartographer_ros_msgs/SubmapQueryRequest.h>
#include <cartographer_ros_msgs/SubmapQueryResponse.h>


namespace cartographer_ros_msgs
{

struct SubmapQuery
{

typedef SubmapQueryRequest Request;
typedef SubmapQueryResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SubmapQuery
} // namespace cartographer_ros_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::cartographer_ros_msgs::SubmapQuery > {
  static const char* value()
  {
    return "d39f26c172921775c4ad99dbf7cb0792";
  }

  static const char* value(const ::cartographer_ros_msgs::SubmapQuery&) { return value(); }
};

template<>
struct DataType< ::cartographer_ros_msgs::SubmapQuery > {
  static const char* value()
  {
    return "cartographer_ros_msgs/SubmapQuery";
  }

  static const char* value(const ::cartographer_ros_msgs::SubmapQuery&) { return value(); }
};


// service_traits::MD5Sum< ::cartographer_ros_msgs::SubmapQueryRequest> should match 
// service_traits::MD5Sum< ::cartographer_ros_msgs::SubmapQuery > 
template<>
struct MD5Sum< ::cartographer_ros_msgs::SubmapQueryRequest>
{
  static const char* value()
  {
    return MD5Sum< ::cartographer_ros_msgs::SubmapQuery >::value();
  }
  static const char* value(const ::cartographer_ros_msgs::SubmapQueryRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::cartographer_ros_msgs::SubmapQueryRequest> should match 
// service_traits::DataType< ::cartographer_ros_msgs::SubmapQuery > 
template<>
struct DataType< ::cartographer_ros_msgs::SubmapQueryRequest>
{
  static const char* value()
  {
    return DataType< ::cartographer_ros_msgs::SubmapQuery >::value();
  }
  static const char* value(const ::cartographer_ros_msgs::SubmapQueryRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::cartographer_ros_msgs::SubmapQueryResponse> should match 
// service_traits::MD5Sum< ::cartographer_ros_msgs::SubmapQuery > 
template<>
struct MD5Sum< ::cartographer_ros_msgs::SubmapQueryResponse>
{
  static const char* value()
  {
    return MD5Sum< ::cartographer_ros_msgs::SubmapQuery >::value();
  }
  static const char* value(const ::cartographer_ros_msgs::SubmapQueryResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::cartographer_ros_msgs::SubmapQueryResponse> should match 
// service_traits::DataType< ::cartographer_ros_msgs::SubmapQuery > 
template<>
struct DataType< ::cartographer_ros_msgs::SubmapQueryResponse>
{
  static const char* value()
  {
    return DataType< ::cartographer_ros_msgs::SubmapQuery >::value();
  }
  static const char* value(const ::cartographer_ros_msgs::SubmapQueryResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CARTOGRAPHER_ROS_MSGS_MESSAGE_SUBMAPQUERY_H
