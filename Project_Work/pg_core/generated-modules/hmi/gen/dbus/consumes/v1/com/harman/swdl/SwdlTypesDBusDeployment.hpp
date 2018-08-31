/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/

#ifndef V1_COM_HARMAN_SWDL_SWDL_TYPES_DBUS_DEPLOYMENT_HPP_
#define V1_COM_HARMAN_SWDL_SWDL_TYPES_DBUS_DEPLOYMENT_HPP_

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif
#include <CommonAPI/DBus/DBusDeployment.hpp>
#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace com {
namespace harman {
namespace swdl {
namespace SwdlTypes_ {

// typecollection-specific deployment types
typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::StringDeployment,
        CommonAPI::EmptyDeployment
    >
> tUpdateCheckResultDeployment_t;

typedef CommonAPI::EmptyDeployment eUpdateAvailabilityDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::StringDeployment,
    CommonAPI::EmptyDeployment
> tPackageDetailsDeployment_t;

typedef CommonAPI::EmptyDeployment eRequestDownloadDeployment_t;

typedef CommonAPI::EmptyDeployment eInstallPackageDeployment_t;

typedef CommonAPI::EmptyDeployment eSwdlErrorDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::StringDeployment
> tDownloadStatusDeployment_t;

typedef CommonAPI::EmptyDeployment eDownloadStateDeployment_t;


// typecollection-specific deployments

} // namespace SwdlTypes_
} // namespace swdl
} // namespace harman
} // namespace com
} // namespace v1

#endif // V1_COM_HARMAN_SWDL_SWDL_TYPES_DBUS_DEPLOYMENT_HPP_
