/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/

#ifndef V2_IVIRADIO_CONFIGURATION_CONFIGURATION_OPTIONS_GETTER_DBUS_DEPLOYMENT_HPP_
#define V2_IVIRADIO_CONFIGURATION_CONFIGURATION_OPTIONS_GETTER_DBUS_DEPLOYMENT_HPP_

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif
#include <CommonAPI/DBus/DBusDeployment.hpp>
#undef COMMONAPI_INTERNAL_COMPILATION

namespace v2 {
namespace IVIRadio {
namespace Configuration {
namespace ConfigurationOptionsGetter_ {

// typecollection-specific deployment types
typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment
> EPGOptionsGetDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment
> TPEGOptionsGetDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::VariantDeployment<
        CommonAPI::DBus::StructDeployment<
            CommonAPI::EmptyDeployment
        >,
        CommonAPI::DBus::StructDeployment<
            CommonAPI::DBus::ArrayDeployment<
                CommonAPI::EmptyDeployment
            >
        >,
        CommonAPI::DBus::StructDeployment<
            CommonAPI::EmptyDeployment
        >,
        CommonAPI::DBus::StructDeployment<
            CommonAPI::DBus::ArrayDeployment<
                CommonAPI::EmptyDeployment
            >
        >,
        CommonAPI::DBus::StructDeployment<
            CommonAPI::DBus::ArrayDeployment<
                CommonAPI::EmptyDeployment
            >
        >,
        CommonAPI::DBus::StructDeployment<
            CommonAPI::DBus::ArrayDeployment<
                CommonAPI::EmptyDeployment
            >
        >,
        CommonAPI::DBus::StructDeployment<
            CommonAPI::EmptyDeployment
        >,
        CommonAPI::DBus::StructDeployment<
            CommonAPI::EmptyDeployment
        >,
        CommonAPI::DBus::StructDeployment<
            CommonAPI::DBus::ArrayDeployment<
                CommonAPI::EmptyDeployment
            >
        >,
        CommonAPI::DBus::StructDeployment<
            CommonAPI::DBus::ArrayDeployment<
                CommonAPI::EmptyDeployment
            >
        >,
        CommonAPI::DBus::StructDeployment<
            CommonAPI::DBus::ArrayDeployment<
                CommonAPI::EmptyDeployment
            >
        >,
        CommonAPI::DBus::StructDeployment<
            CommonAPI::DBus::ArrayDeployment<
                CommonAPI::EmptyDeployment
            >
        >
    >
> FuntionalityOptionsGetDeployment_t;

typedef CommonAPI::DBus::VariantDeployment<
    CommonAPI::DBus::StructDeployment<
        CommonAPI::EmptyDeployment
    >,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::ArrayDeployment<
            CommonAPI::EmptyDeployment
        >
    >,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::EmptyDeployment
    >,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::ArrayDeployment<
            CommonAPI::EmptyDeployment
        >
    >,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::ArrayDeployment<
            CommonAPI::EmptyDeployment
        >
    >,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::ArrayDeployment<
            CommonAPI::EmptyDeployment
        >
    >,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::EmptyDeployment
    >,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::EmptyDeployment
    >,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::ArrayDeployment<
            CommonAPI::EmptyDeployment
        >
    >,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::ArrayDeployment<
            CommonAPI::EmptyDeployment
        >
    >,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::ArrayDeployment<
            CommonAPI::EmptyDeployment
        >
    >,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::ArrayDeployment<
            CommonAPI::EmptyDeployment
        >
    >
> FunctionalityOptionGetDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::ArrayDeployment<
        CommonAPI::EmptyDeployment
    >
> RegionalisationOptionsGetDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::ArrayDeployment<
        CommonAPI::EmptyDeployment
    >
> DLSOptionsGetDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::ArrayDeployment<
        CommonAPI::EmptyDeployment
    >
> AvailableBandoptionsGetDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::ArrayDeployment<
        CommonAPI::EmptyDeployment
    >
> RTOptionsGetDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::ArrayDeployment<
        CommonAPI::EmptyDeployment
    >
> CoverageAreaOptionsGetDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment
> AMModiOptionsGetDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::ArrayDeployment<
        CommonAPI::EmptyDeployment
    >
> RDSOptionsGetDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment
> InterfaceVersionOptionsGetDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment
> HDOptionsGetDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::ArrayDeployment<
        CommonAPI::EmptyDeployment
    >
> CountryVariantsOptionsGetDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::ArrayDeployment<
        CommonAPI::EmptyDeployment
    >
> FollowingOptionsGetDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment
> SmartFavoriteOptionsGetDeployment_t;


// typecollection-specific deployments

} // namespace ConfigurationOptionsGetter_
} // namespace Configuration
} // namespace IVIRadio
} // namespace v2

#endif // V2_IVIRADIO_CONFIGURATION_CONFIGURATION_OPTIONS_GETTER_DBUS_DEPLOYMENT_HPP_