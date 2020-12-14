// Generated by gencpp from file dynamixel_controllers/StopController.msg
// DO NOT EDIT!


#ifndef DYNAMIXEL_CONTROLLERS_MESSAGE_STOPCONTROLLER_H
#define DYNAMIXEL_CONTROLLERS_MESSAGE_STOPCONTROLLER_H

#include <ros/service_traits.h>


#include <dynamixel_controllers/StopControllerRequest.h>
#include <dynamixel_controllers/StopControllerResponse.h>


namespace dynamixel_controllers
{

struct StopController
{

typedef StopControllerRequest Request;
typedef StopControllerResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct StopController
} // namespace dynamixel_controllers


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dynamixel_controllers::StopController > {
  static const char* value()
  {
    return "b3f1f861a8aef49071034d2f06308f6e";
  }

  static const char* value(const ::dynamixel_controllers::StopController&) { return value(); }
};

template<>
struct DataType< ::dynamixel_controllers::StopController > {
  static const char* value()
  {
    return "dynamixel_controllers/StopController";
  }

  static const char* value(const ::dynamixel_controllers::StopController&) { return value(); }
};


// service_traits::MD5Sum< ::dynamixel_controllers::StopControllerRequest> should match 
// service_traits::MD5Sum< ::dynamixel_controllers::StopController > 
template<>
struct MD5Sum< ::dynamixel_controllers::StopControllerRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dynamixel_controllers::StopController >::value();
  }
  static const char* value(const ::dynamixel_controllers::StopControllerRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dynamixel_controllers::StopControllerRequest> should match 
// service_traits::DataType< ::dynamixel_controllers::StopController > 
template<>
struct DataType< ::dynamixel_controllers::StopControllerRequest>
{
  static const char* value()
  {
    return DataType< ::dynamixel_controllers::StopController >::value();
  }
  static const char* value(const ::dynamixel_controllers::StopControllerRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dynamixel_controllers::StopControllerResponse> should match 
// service_traits::MD5Sum< ::dynamixel_controllers::StopController > 
template<>
struct MD5Sum< ::dynamixel_controllers::StopControllerResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dynamixel_controllers::StopController >::value();
  }
  static const char* value(const ::dynamixel_controllers::StopControllerResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dynamixel_controllers::StopControllerResponse> should match 
// service_traits::DataType< ::dynamixel_controllers::StopController > 
template<>
struct DataType< ::dynamixel_controllers::StopControllerResponse>
{
  static const char* value()
  {
    return DataType< ::dynamixel_controllers::StopController >::value();
  }
  static const char* value(const ::dynamixel_controllers::StopControllerResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DYNAMIXEL_CONTROLLERS_MESSAGE_STOPCONTROLLER_H