/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Thu Sep 22 00:23:23 IST 2016
*/

#ifndef COM_HARMAN_CONNECTIVITY_BT_TYPEDEFS_DBUS_DEPLOYMENT_HPP_
#define COM_HARMAN_CONNECTIVITY_BT_TYPEDEFS_DBUS_DEPLOYMENT_HPP_

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif
#include <CommonAPI/DBus/DBusDeployment.hpp>
#undef COMMONAPI_INTERNAL_COMPILATION

namespace com {
namespace harman {
namespace connectivity {
namespace btTypedefs_ {

// typecollection-specific deployment types
typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::StringDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::StringDeployment
> serviceDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::EmptyDeployment
> deviceSearchEntryDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::StringDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment
> profileDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment
> durationStructDeployment_t;

typedef CommonAPI::EmptyDeployment eCallStateDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::EmptyDeployment
> callStateInfoDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::ArrayDeployment<
        CommonAPI::DBus::StructDeployment<
            CommonAPI::DBus::StringDeployment,
            CommonAPI::EmptyDeployment,
            CommonAPI::DBus::StringDeployment,
            CommonAPI::EmptyDeployment
        >
    >
> bondedDevDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::StringDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::EmptyDeployment
> servicedescriptionDeployment_t;

typedef CommonAPI::EmptyDeployment transferDelayDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::EmptyDeployment
> lastConnectedDevDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::EmptyDeployment
    >
> deviceSearchEntryListDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::DBus::ArrayDeployment<
            CommonAPI::DBus::StructDeployment<
                CommonAPI::DBus::StringDeployment,
                CommonAPI::EmptyDeployment,
                CommonAPI::DBus::StringDeployment,
                CommonAPI::EmptyDeployment
            >
        >
    >
> bondedDevListDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::StringDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment
    >
> profileListDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::StringDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::DBus::StringDeployment
    >
> serviceListDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::StringDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::EmptyDeployment
    >
> serviceDesListDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::StructDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::EmptyDeployment
    >
> callstateInfoListDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::EmptyDeployment
> integerListDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::EmptyDeployment
    >
> lastConnectedDevListDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::StringDeployment
> stringListDeployment_t;


// typecollection-specific deployments

} // namespace btTypedefs_
} // namespace connectivity
} // namespace harman
} // namespace com

#endif // COM_HARMAN_CONNECTIVITY_BT_TYPEDEFS_DBUS_DEPLOYMENT_HPP_