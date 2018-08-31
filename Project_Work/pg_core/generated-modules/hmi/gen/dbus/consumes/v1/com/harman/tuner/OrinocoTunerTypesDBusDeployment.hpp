/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/

#ifndef V1_COM_HARMAN_TUNER_ORINOCO_TUNER_TYPES_DBUS_DEPLOYMENT_HPP_
#define V1_COM_HARMAN_TUNER_ORINOCO_TUNER_TYPES_DBUS_DEPLOYMENT_HPP_

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif
#include <CommonAPI/DBus/DBusDeployment.hpp>
#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace com {
namespace harman {
namespace tuner {
namespace OrinocoTunerTypes_ {

// typecollection-specific deployment types
typedef CommonAPI::EmptyDeployment SourceDeployment_t;

typedef CommonAPI::EmptyDeployment StationSeekModeDeployment_t;

typedef CommonAPI::EmptyDeployment AnnouncementStateDeployment_t;

typedef CommonAPI::EmptyDeployment AmFmRegionCodeDeployment_t;

typedef CommonAPI::EmptyDeployment DabRegionCodeDeployment_t;

typedef CommonAPI::EmptyDeployment AmFmCodingFlagDeployment_t;

typedef CommonAPI::EmptyDeployment DabCodingFlagDeployment_t;

typedef CommonAPI::EmptyDeployment AmFmHdModeDeployment_t;

typedef CommonAPI::EmptyDeployment StationListTypeDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::EmptyDeployment
> UInt32sDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment
> CurrentSourceDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment
> StationSelectorDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment
> StationMetadataDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::StringDeployment
> GroupInfoDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::DBus::StringDeployment
    >
> StationNameDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment
> StationGenreDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment
> StationFlagsDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment
> StationQualityDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment
    >,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StructDeployment<
            CommonAPI::EmptyDeployment,
            CommonAPI::DBus::StringDeployment,
            CommonAPI::EmptyDeployment,
            CommonAPI::DBus::StringDeployment
        >
    >,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment
    >,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::EmptyDeployment
    >,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment
    >,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment
    >,
    CommonAPI::EmptyDeployment
> CurrentStationDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment
    >,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StructDeployment<
            CommonAPI::EmptyDeployment,
            CommonAPI::DBus::StringDeployment,
            CommonAPI::EmptyDeployment,
            CommonAPI::DBus::StringDeployment
        >
    >,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::EmptyDeployment
    >
> ListStationDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::StructDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::DBus::StructDeployment<
            CommonAPI::EmptyDeployment,
            CommonAPI::EmptyDeployment,
            CommonAPI::EmptyDeployment,
            CommonAPI::EmptyDeployment
        >,
        CommonAPI::DBus::StructDeployment<
            CommonAPI::DBus::StringDeployment,
            CommonAPI::DBus::StructDeployment<
                CommonAPI::EmptyDeployment,
                CommonAPI::DBus::StringDeployment,
                CommonAPI::EmptyDeployment,
                CommonAPI::DBus::StringDeployment
            >
        >,
        CommonAPI::DBus::StructDeployment<
            CommonAPI::EmptyDeployment
        >
    >
> ListStationsDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::ArrayDeployment<
        CommonAPI::DBus::StructDeployment<
            CommonAPI::EmptyDeployment,
            CommonAPI::DBus::StructDeployment<
                CommonAPI::EmptyDeployment,
                CommonAPI::EmptyDeployment,
                CommonAPI::EmptyDeployment,
                CommonAPI::EmptyDeployment
            >,
            CommonAPI::DBus::StructDeployment<
                CommonAPI::DBus::StringDeployment,
                CommonAPI::DBus::StructDeployment<
                    CommonAPI::EmptyDeployment,
                    CommonAPI::DBus::StringDeployment,
                    CommonAPI::EmptyDeployment,
                    CommonAPI::DBus::StringDeployment
                >
            >,
            CommonAPI::DBus::StructDeployment<
                CommonAPI::EmptyDeployment
            >
        >
    >,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment
> StationListDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment
    >,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StructDeployment<
            CommonAPI::EmptyDeployment,
            CommonAPI::DBus::StringDeployment,
            CommonAPI::EmptyDeployment,
            CommonAPI::DBus::StringDeployment
        >
    >,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment
> AnnouncementStationDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment
> AmFmWavebandGridDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::StructDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment
    >,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment
    >,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment
    >,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment
    >
> AmFmWavebandGridsDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::StructDeployment<
            CommonAPI::EmptyDeployment,
            CommonAPI::EmptyDeployment,
            CommonAPI::EmptyDeployment,
            CommonAPI::EmptyDeployment
        >,
        CommonAPI::DBus::StructDeployment<
            CommonAPI::EmptyDeployment,
            CommonAPI::EmptyDeployment,
            CommonAPI::EmptyDeployment,
            CommonAPI::EmptyDeployment
        >,
        CommonAPI::DBus::StructDeployment<
            CommonAPI::EmptyDeployment,
            CommonAPI::EmptyDeployment,
            CommonAPI::EmptyDeployment,
            CommonAPI::EmptyDeployment
        >,
        CommonAPI::DBus::StructDeployment<
            CommonAPI::EmptyDeployment,
            CommonAPI::EmptyDeployment,
            CommonAPI::EmptyDeployment,
            CommonAPI::EmptyDeployment
        >
    >
> AmFmRegionInfoDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment
> DabRegionInfoDeployment_t;


// typecollection-specific deployments

} // namespace OrinocoTunerTypes_
} // namespace tuner
} // namespace harman
} // namespace com
} // namespace v1

#endif // V1_COM_HARMAN_TUNER_ORINOCO_TUNER_TYPES_DBUS_DEPLOYMENT_HPP_
