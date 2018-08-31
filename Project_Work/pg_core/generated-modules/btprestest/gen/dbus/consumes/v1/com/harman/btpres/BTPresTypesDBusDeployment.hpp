/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Thu Sep 22 00:23:23 IST 2016
*/

#ifndef V1_COM_HARMAN_BTPRES_BT_PRES_TYPES_DBUS_DEPLOYMENT_HPP_
#define V1_COM_HARMAN_BTPRES_BT_PRES_TYPES_DBUS_DEPLOYMENT_HPP_

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif
#include <CommonAPI/DBus/DBusDeployment.hpp>
#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace com {
namespace harman {
namespace btpres {
namespace BTPresTypes_ {

// typecollection-specific deployment types
typedef CommonAPI::EmptyDeployment eBluetoothStatusDeployment_t;

typedef CommonAPI::EmptyDeployment eSupportedFeatureDeployment_t;

typedef CommonAPI::EmptyDeployment eSupportedProfileDeployment_t;

typedef CommonAPI::EmptyDeployment eCODDeployment_t;

typedef CommonAPI::EmptyDeployment eBondingTypeDeployment_t;

typedef CommonAPI::EmptyDeployment ePairingStatusDeployment_t;

typedef CommonAPI::EmptyDeployment eConnectionStatusDeployment_t;

typedef CommonAPI::EmptyDeployment eServiceConnectDisconnectReasonDeployment_t;

typedef CommonAPI::EmptyDeployment eTransferDelayDeployment_t;

typedef CommonAPI::EmptyDeployment eCodecTypeDeployment_t;

typedef CommonAPI::EmptyDeployment eDirectionDeployment_t;

typedef CommonAPI::EmptyDeployment eBatteryChargeLevelDeployment_t;

typedef CommonAPI::EmptyDeployment eRssiLevelDeployment_t;

typedef CommonAPI::EmptyDeployment eNetworkRegStateDeployment_t;

typedef CommonAPI::EmptyDeployment eOperatorModeDeployment_t;

typedef CommonAPI::EmptyDeployment eCallStateDeployment_t;

typedef CommonAPI::EmptyDeployment eAudioStatusDeployment_t;

typedef CommonAPI::EmptyDeployment eErrorTypeDeployment_t;

typedef CommonAPI::EmptyDeployment eFilterTypeDeployment_t;

typedef CommonAPI::EmptyDeployment eResultTypeDeployment_t;

typedef CommonAPI::EmptyDeployment eDatabaseTypeDeployment_t;

typedef CommonAPI::EmptyDeployment eDbOperationIdDeployment_t;

typedef CommonAPI::EmptyDeployment eSyncStateDeployment_t;

typedef CommonAPI::EmptyDeployment eContactNameOredrDeployment_t;

typedef CommonAPI::EmptyDeployment eTelTypeDeployment_t;

typedef CommonAPI::EmptyDeployment eContactNameFieldDeployment_t;

typedef CommonAPI::EmptyDeployment eAddrtypeDeployment_t;

typedef CommonAPI::EmptyDeployment eEmailtypeDeployment_t;

typedef CommonAPI::EmptyDeployment eExtraFeatureDeployment_t;

typedef CommonAPI::EmptyDeployment eFoldertypeDeployment_t;

typedef CommonAPI::EmptyDeployment eMsgNotificationDeployment_t;

typedef CommonAPI::EmptyDeployment phonebookResultDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment
> ContactAddressDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::MapDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::DBus::StringDeployment
    >,
    CommonAPI::MapDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::DBus::ArrayDeployment<
            CommonAPI::DBus::StringDeployment
        >
    >,
    CommonAPI::MapDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::DBus::StructDeployment<
            CommonAPI::DBus::StringDeployment,
            CommonAPI::DBus::StringDeployment,
            CommonAPI::DBus::StringDeployment,
            CommonAPI::DBus::StringDeployment,
            CommonAPI::DBus::StringDeployment,
            CommonAPI::DBus::StringDeployment,
            CommonAPI::DBus::StringDeployment,
            CommonAPI::DBus::StringDeployment
        >
    >,
    CommonAPI::MapDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::DBus::ArrayDeployment<
            CommonAPI::DBus::StringDeployment
        >
    >,
    CommonAPI::MapDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::DBus::StringDeployment
    >
> phonebookEntryDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::MapDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::DBus::StringDeployment
    >,
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment
> callstackEntryDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::StringDeployment,
    CommonAPI::EmptyDeployment
> networkIfStatusDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::EmptyDeployment
> networkOperatorInfoDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::StringDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment
> signalChargeInfoDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::StringDeployment,
    CommonAPI::MapDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment
    >
> hfpSupportedFeaturesDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::StringDeployment,
    CommonAPI::EmptyDeployment
> hfModeStatusDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::StringDeployment,
    CommonAPI::EmptyDeployment
> vrModeStatusDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::StringDeployment,
    CommonAPI::EmptyDeployment
> audioStatusDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment
> callStateInfoDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::StringDeployment
> callDurationDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment
> tDeviceSearchEntryDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::MapDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment
    >
> bondedDevDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment
> deviceInfoDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment
> smsEntryDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::StringDeployment,
    CommonAPI::MapDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment
    >
> pimPropertiesDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::MapDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::DBus::StringDeployment
    >
> browsingDataDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::StringDeployment,
    CommonAPI::EmptyDeployment
> alphaJumpTableDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::DBus::ArrayDeployment<
        CommonAPI::EmptyDeployment
    >,
    CommonAPI::DBus::StringDeployment,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::MapDeployment<
            CommonAPI::EmptyDeployment,
            CommonAPI::DBus::StringDeployment
        >,
        CommonAPI::MapDeployment<
            CommonAPI::EmptyDeployment,
            CommonAPI::DBus::ArrayDeployment<
                CommonAPI::DBus::StringDeployment
            >
        >,
        CommonAPI::MapDeployment<
            CommonAPI::EmptyDeployment,
            CommonAPI::DBus::StructDeployment<
                CommonAPI::DBus::StringDeployment,
                CommonAPI::DBus::StringDeployment,
                CommonAPI::DBus::StringDeployment,
                CommonAPI::DBus::StringDeployment,
                CommonAPI::DBus::StringDeployment,
                CommonAPI::DBus::StringDeployment,
                CommonAPI::DBus::StringDeployment,
                CommonAPI::DBus::StringDeployment
            >
        >,
        CommonAPI::MapDeployment<
            CommonAPI::EmptyDeployment,
            CommonAPI::DBus::ArrayDeployment<
                CommonAPI::DBus::StringDeployment
            >
        >,
        CommonAPI::MapDeployment<
            CommonAPI::EmptyDeployment,
            CommonAPI::DBus::StringDeployment
        >
    >,
    CommonAPI::DBus::ArrayDeployment<
        CommonAPI::EmptyDeployment
    >
> InsertItemsDeployment_t;

typedef CommonAPI::MapDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment
> connectionStateMapDeployment_t;

typedef CommonAPI::MapDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment
> supportedFeatureMapDeployment_t;

typedef CommonAPI::MapDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment
> phonebookResultMapDeployment_t;

typedef CommonAPI::MapDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::StringDeployment
> contactNameMapDeployment_t;

typedef CommonAPI::MapDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::ArrayDeployment<
        CommonAPI::DBus::StringDeployment
    >
> phoneNumberMapDeployment_t;

typedef CommonAPI::MapDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment
    >
> contactAddressMapDeployment_t;

typedef CommonAPI::MapDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::ArrayDeployment<
        CommonAPI::DBus::StringDeployment
    >
> contactEmailMapDeployment_t;

typedef CommonAPI::MapDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::StringDeployment
> contactExtendeFeatureMapDeployment_t;

typedef CommonAPI::MapDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment
> dBSyncStateMapDeployment_t;

typedef CommonAPI::MapDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::StringDeployment
> filterMapDeployment_t;

typedef CommonAPI::MapDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment
> requiredFieldMapDeployment_t;

typedef CommonAPI::MapDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::StringDeployment
> ResultSpecificMapDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment
    >
> tDeviceSearchEntryListDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::MapDeployment<
            CommonAPI::EmptyDeployment,
            CommonAPI::EmptyDeployment
        >
    >
> bondedDevListDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment
    >
> unstableDeviceInfoListDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::EmptyDeployment
> integerListDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::StringDeployment
> stringListDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::EmptyDeployment
> tSupportedFeatureListDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::StructDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::EmptyDeployment
    >
> networkOperatorInfoListDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::StringDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment
    >
> signalChargeInfoListDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::StringDeployment,
        CommonAPI::MapDeployment<
            CommonAPI::EmptyDeployment,
            CommonAPI::EmptyDeployment
        >
    >
> hfpSupportedFeaturesListDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::StringDeployment,
        CommonAPI::EmptyDeployment
    >
> hfModeStatusListDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::StringDeployment,
        CommonAPI::EmptyDeployment
    >
> vrModeStatusListDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::StructDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment
    >
> callstateInfoListDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::StructDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::DBus::StringDeployment
    >
> callDurationListDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::StringDeployment,
        CommonAPI::EmptyDeployment
    >
> audioStatusListDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::StructDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::MapDeployment<
            CommonAPI::EmptyDeployment,
            CommonAPI::DBus::StringDeployment
        >,
        CommonAPI::MapDeployment<
            CommonAPI::EmptyDeployment,
            CommonAPI::DBus::ArrayDeployment<
                CommonAPI::DBus::StringDeployment
            >
        >,
        CommonAPI::MapDeployment<
            CommonAPI::EmptyDeployment,
            CommonAPI::DBus::StructDeployment<
                CommonAPI::DBus::StringDeployment,
                CommonAPI::DBus::StringDeployment,
                CommonAPI::DBus::StringDeployment,
                CommonAPI::DBus::StringDeployment,
                CommonAPI::DBus::StringDeployment,
                CommonAPI::DBus::StringDeployment,
                CommonAPI::DBus::StringDeployment,
                CommonAPI::DBus::StringDeployment
            >
        >,
        CommonAPI::MapDeployment<
            CommonAPI::EmptyDeployment,
            CommonAPI::DBus::ArrayDeployment<
                CommonAPI::DBus::StringDeployment
            >
        >,
        CommonAPI::MapDeployment<
            CommonAPI::EmptyDeployment,
            CommonAPI::DBus::StringDeployment
        >
    >
> phonebookDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::StructDeployment<
        CommonAPI::MapDeployment<
            CommonAPI::EmptyDeployment,
            CommonAPI::DBus::StringDeployment
        >,
        CommonAPI::EmptyDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment
    >
> arcallstackDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::StringDeployment
> arStringDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::DBus::StringDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment
    >
> arSMSDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::StringDeployment,
        CommonAPI::MapDeployment<
            CommonAPI::EmptyDeployment,
            CommonAPI::EmptyDeployment
        >
    >
> pimPropertiesListDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::StructDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::MapDeployment<
            CommonAPI::EmptyDeployment,
            CommonAPI::DBus::StringDeployment
        >
    >
> arfieldListDeployment_t;

typedef CommonAPI::DBus::ArrayDeployment<
    CommonAPI::DBus::StructDeployment<
        CommonAPI::DBus::StringDeployment,
        CommonAPI::EmptyDeployment
    >
> alphaJumpListDeployment_t;


// typecollection-specific deployments

} // namespace BTPresTypes_
} // namespace btpres
} // namespace harman
} // namespace com
} // namespace v1

#endif // V1_COM_HARMAN_BTPRES_BT_PRES_TYPES_DBUS_DEPLOYMENT_HPP_