/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Fri Jun 23 13:08:16 IST 2017
*/

#ifndef V1_COMMONAPI_EXAMPLES_E04_Phone_Book_DBUS_DEPLOYMENT_HPP_
#define V1_COMMONAPI_EXAMPLES_E04_Phone_Book_DBUS_DEPLOYMENT_HPP_

#include <v1/commonapi/examples/E04PhoneBookDBusDeployment.hpp>        

#include <v1/commonapi/examples/E04PhoneBookDBusDeployment.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif
#include <CommonAPI/DBus/DBusDeployment.hpp>
#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace commonapi {
namespace examples {
namespace E04PhoneBook_ {

// Interface-specific deployment types
typedef CommonAPI::MapDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::StringDeployment
> phoneNumberMapDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::MapDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::DBus::StringDeployment
    >
> phoneBookStructDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment
> elementFilterStructDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::StringDeployment
> contentFilterStructDeployment_t;

typedef CommonAPI::EmptyDeployment phoneBookDataElementDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::StringDeployment
> phoneBookDataElementStringDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::MapDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::DBus::StringDeployment
    >
> phoneBookDataElementPhoneNumberDeployment_t;

typedef CommonAPI::MapDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment
> phoneBookDataElementMapDeployment_t;


// Type-specific deployments

// Attribute-specific deployments

// Argument-specific deployments

// Broadcast-specific deployments


} // namespace E04PhoneBook_
} // namespace examples
} // namespace commonapi
} // namespace v1

#endif // V1_COMMONAPI_EXAMPLES_E04_Phone_Book_DBUS_DEPLOYMENT_HPP_
