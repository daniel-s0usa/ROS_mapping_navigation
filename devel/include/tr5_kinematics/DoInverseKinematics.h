// Generated by gencpp from file tr5_kinematics/DoInverseKinematics.msg
// DO NOT EDIT!


#ifndef TR5_KINEMATICS_MESSAGE_DOINVERSEKINEMATICS_H
#define TR5_KINEMATICS_MESSAGE_DOINVERSEKINEMATICS_H

#include <ros/service_traits.h>


#include <tr5_kinematics/DoInverseKinematicsRequest.h>
#include <tr5_kinematics/DoInverseKinematicsResponse.h>


namespace tr5_kinematics
{

struct DoInverseKinematics
{

typedef DoInverseKinematicsRequest Request;
typedef DoInverseKinematicsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct DoInverseKinematics
} // namespace tr5_kinematics


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::tr5_kinematics::DoInverseKinematics > {
  static const char* value()
  {
    return "2f2254e383e50f68fbb62f9a1189526d";
  }

  static const char* value(const ::tr5_kinematics::DoInverseKinematics&) { return value(); }
};

template<>
struct DataType< ::tr5_kinematics::DoInverseKinematics > {
  static const char* value()
  {
    return "tr5_kinematics/DoInverseKinematics";
  }

  static const char* value(const ::tr5_kinematics::DoInverseKinematics&) { return value(); }
};


// service_traits::MD5Sum< ::tr5_kinematics::DoInverseKinematicsRequest> should match
// service_traits::MD5Sum< ::tr5_kinematics::DoInverseKinematics >
template<>
struct MD5Sum< ::tr5_kinematics::DoInverseKinematicsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::tr5_kinematics::DoInverseKinematics >::value();
  }
  static const char* value(const ::tr5_kinematics::DoInverseKinematicsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::tr5_kinematics::DoInverseKinematicsRequest> should match
// service_traits::DataType< ::tr5_kinematics::DoInverseKinematics >
template<>
struct DataType< ::tr5_kinematics::DoInverseKinematicsRequest>
{
  static const char* value()
  {
    return DataType< ::tr5_kinematics::DoInverseKinematics >::value();
  }
  static const char* value(const ::tr5_kinematics::DoInverseKinematicsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::tr5_kinematics::DoInverseKinematicsResponse> should match
// service_traits::MD5Sum< ::tr5_kinematics::DoInverseKinematics >
template<>
struct MD5Sum< ::tr5_kinematics::DoInverseKinematicsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::tr5_kinematics::DoInverseKinematics >::value();
  }
  static const char* value(const ::tr5_kinematics::DoInverseKinematicsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::tr5_kinematics::DoInverseKinematicsResponse> should match
// service_traits::DataType< ::tr5_kinematics::DoInverseKinematics >
template<>
struct DataType< ::tr5_kinematics::DoInverseKinematicsResponse>
{
  static const char* value()
  {
    return DataType< ::tr5_kinematics::DoInverseKinematics >::value();
  }
  static const char* value(const ::tr5_kinematics::DoInverseKinematicsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TR5_KINEMATICS_MESSAGE_DOINVERSEKINEMATICS_H