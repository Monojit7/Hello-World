/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Wed Oct 26 18:16:09 IST 2016
*/
/**
 * description: Device Manager interfaces provide device detection control
	and get device
 *   informations.
 * author: ydou
 */
#include <v1/com/harman/media/DeviceManagerDBusProxy.hpp>

namespace v1 {
namespace com {
namespace harman {
namespace media {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createDeviceManagerDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection) {
	return std::make_shared<DeviceManagerDBusProxy>(_address, _connection);
}

INITIALIZER(registerDeviceManagerDBusProxy) {
     CommonAPI::DBus::Factory::get()->registerProxyCreateMethod(
		DeviceManager::getInterface(),
		&createDeviceManagerDBusProxy);
}

DeviceManagerDBusProxy::DeviceManagerDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection)
	:	CommonAPI::DBus::DBusProxy(_address, _connection)
,		onMediumChanged_(*this, "onMediumChanged", "(uusiiisssbss)", std::make_tuple(static_cast<::v1::com::harman::media::BaseType_::tMediumInfoDeployment_t*>(nullptr))),
		syncProgress_(*this, "syncProgress", "ud", std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr))),
		deviceError_(*this, "deviceError", "ui", std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr)))
{
}


DeviceManagerDBusProxy::OnMediumChangedEvent& DeviceManagerDBusProxy::getOnMediumChangedEvent() {
    return onMediumChanged_;
}
DeviceManagerDBusProxy::SyncProgressEvent& DeviceManagerDBusProxy::getSyncProgressEvent() {
    return syncProgress_;
}
DeviceManagerDBusProxy::DeviceErrorEvent& DeviceManagerDBusProxy::getDeviceErrorEvent() {
    return deviceError_;
}
    
    /**
     * description: Trigger the Device Manager to init & work for device detection.
     * author: ydou
     */
    void DeviceManagerDBusProxy::startDeviceDetection(CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::media::BaseType::tBaseError &_error, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError, CommonAPI::EmptyDeployment> deploy_error(static_cast<CommonAPI::EmptyDeployment *>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError, CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "startDeviceDetection",
        "",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
_internalCallStatus,
deploy_error);
_error = deploy_error.getValue();
}
    std::future<CommonAPI::CallStatus> DeviceManagerDBusProxy::startDeviceDetectionAsync(StartDeviceDetectionAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError, CommonAPI::EmptyDeployment> deploy_error(static_cast<CommonAPI::EmptyDeployment *>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError, CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "startDeviceDetection",
        "",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError, CommonAPI::EmptyDeployment> _deploy_error) {
        	if (_callback)
        		_callback(_internalCallStatus, _deploy_error.getValue());
        },
        std::make_tuple(deploy_error));
    }
    /**
     * description: Get the current connecting devices to Top with the detail information.
     * author: ydou
     */
    void DeviceManagerDBusProxy::getDevices(CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::media::BaseType::tBaseError &_error, ::v1::com::harman::media::BaseType::tMediumInfoList &_mediumList, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError, CommonAPI::EmptyDeployment> deploy_error(static_cast<CommonAPI::EmptyDeployment *>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::media::BaseType::tMediumInfoList, ::v1::com::harman::media::BaseType_::tMediumInfoListDeployment_t> deploy_mediumList(static_cast<::v1::com::harman::media::BaseType_::tMediumInfoListDeployment_t*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError, CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<::v1::com::harman::media::BaseType::tMediumInfoList,::v1::com::harman::media::BaseType_::tMediumInfoListDeployment_t>
            >
        	>::callMethodWithReply(
        *this,
        "getDevices",
        "",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
_internalCallStatus,
deploy_error,
deploy_mediumList);
_error = deploy_error.getValue();
_mediumList = deploy_mediumList.getValue();
}
    std::future<CommonAPI::CallStatus> DeviceManagerDBusProxy::getDevicesAsync(GetDevicesAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError, CommonAPI::EmptyDeployment> deploy_error(static_cast<CommonAPI::EmptyDeployment *>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::media::BaseType::tMediumInfoList, ::v1::com::harman::media::BaseType_::tMediumInfoListDeployment_t> deploy_mediumList(static_cast<::v1::com::harman::media::BaseType_::tMediumInfoListDeployment_t*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError, CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<::v1::com::harman::media::BaseType::tMediumInfoList,::v1::com::harman::media::BaseType_::tMediumInfoListDeployment_t>
            >
        	>::callMethodAsync(
        *this,
        "getDevices",
        "",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError, CommonAPI::EmptyDeployment> _deploy_error, CommonAPI::Deployable<::v1::com::harman::media::BaseType::tMediumInfoList, ::v1::com::harman::media::BaseType_::tMediumInfoListDeployment_t> _mediumList) {
        	if (_callback)
        		_callback(_internalCallStatus, _deploy_error.getValue(), _mediumList.getValue());
        },
        std::make_tuple(deploy_error, deploy_mediumList));
    }
    /**
     * description: allocate a shadow device
    					   onMediumChanged broadcast will be emitted if
     *   allocate success.
    			mediumId: device id which connectted to the
     *   target.
    			type: must be 'MT_SHADOW' for allocating a shadow device.
    			name:
     *   the name for the allocated device.
     */
    void DeviceManagerDBusProxy::allocateDevice(const uint32_t &_mediumId, const ::v1::com::harman::media::BaseType::tMediumType &_type, const std::string &_name, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_mediumId(_mediumId, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::media::BaseType::tMediumType, CommonAPI::EmptyDeployment> deploy_type(_type, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_name(_name, static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError, CommonAPI::EmptyDeployment> deploy_e(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable<::v1::com::harman::media::BaseType::tMediumType, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError,CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "allocateDevice",
        "uis",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_mediumId, deploy_type, deploy_name,
_internalCallStatus,
deploy_e);
_e = deploy_e.getValue();
}
    std::future<CommonAPI::CallStatus> DeviceManagerDBusProxy::allocateDeviceAsync(const uint32_t &_mediumId, const ::v1::com::harman::media::BaseType::tMediumType &_type, const std::string &_name, AllocateDeviceAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_mediumId(_mediumId, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::media::BaseType::tMediumType, CommonAPI::EmptyDeployment> deploy_type(_type, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_name(_name, static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError, CommonAPI::EmptyDeployment> deploy_e(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable<::v1::com::harman::media::BaseType::tMediumType, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError,CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "allocateDevice",
        "uis",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_mediumId, deploy_type, deploy_name,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError, CommonAPI::EmptyDeployment> _e) {
        	if (_callback)
        		_callback(_internalCallStatus, _e.getValue());
        },
        std::make_tuple(deploy_e));
    }
    /**
     * description: free a shadow device which allocated with allocateDevice
     *   interface.
    			onMediumChanged broadcast will be emitted if free
     *   success.
    
    			mediumId: device id which connectted to the target.
    			handleId:
     *   shadow device handle.
     */
    void DeviceManagerDBusProxy::freeDevice(const uint32_t &_mediumId, const uint32_t &_handleId, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_mediumId(_mediumId, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_handleId(_handleId, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError, CommonAPI::EmptyDeployment> deploy_e(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError,CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "freeDevice",
        "uu",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_mediumId, deploy_handleId,
_internalCallStatus,
deploy_e);
_e = deploy_e.getValue();
}
    std::future<CommonAPI::CallStatus> DeviceManagerDBusProxy::freeDeviceAsync(const uint32_t &_mediumId, const uint32_t &_handleId, FreeDeviceAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_mediumId(_mediumId, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_handleId(_handleId, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError, CommonAPI::EmptyDeployment> deploy_e(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError,CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "freeDevice",
        "uu",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_mediumId, deploy_handleId,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError, CommonAPI::EmptyDeployment> _e) {
        	if (_callback)
        		_callback(_internalCallStatus, _e.getValue());
        },
        std::make_tuple(deploy_e));
    }
    /**
     * description: get device items information.
    
    			mediumId: device id which connectted to the
     *   target.
    			itemsInfo: imtes information will be returned.
    			e: error code.
     */
    void DeviceManagerDBusProxy::getDeviceItemsInfo(const uint32_t &_meidumId, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::media::BaseType::tItemsInfo &_itemsInfo, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_meidumId(_meidumId, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::media::BaseType::tItemsInfo, ::v1::com::harman::media::BaseType_::tItemsInfoDeployment_t> deploy_itemsInfo(static_cast<::v1::com::harman::media::BaseType_::tItemsInfoDeployment_t*>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError, CommonAPI::EmptyDeployment> deploy_e(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::media::BaseType::tItemsInfo,::v1::com::harman::media::BaseType_::tItemsInfoDeployment_t>,
            CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError,CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "getDeviceItemsInfo",
        "u",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_meidumId,
_internalCallStatus,
deploy_itemsInfo, deploy_e);
_itemsInfo = deploy_itemsInfo.getValue();
_e = deploy_e.getValue();
}
    std::future<CommonAPI::CallStatus> DeviceManagerDBusProxy::getDeviceItemsInfoAsync(const uint32_t &_meidumId, GetDeviceItemsInfoAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_meidumId(_meidumId, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::media::BaseType::tItemsInfo, ::v1::com::harman::media::BaseType_::tItemsInfoDeployment_t> deploy_itemsInfo(static_cast<::v1::com::harman::media::BaseType_::tItemsInfoDeployment_t*>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError, CommonAPI::EmptyDeployment> deploy_e(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::media::BaseType::tItemsInfo,::v1::com::harman::media::BaseType_::tItemsInfoDeployment_t>,
            CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError,CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "getDeviceItemsInfo",
        "u",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_meidumId,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<::v1::com::harman::media::BaseType::tItemsInfo, ::v1::com::harman::media::BaseType_::tItemsInfoDeployment_t> _itemsInfo, CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError, CommonAPI::EmptyDeployment> _e) {
        	if (_callback)
        		_callback(_internalCallStatus, _itemsInfo.getValue(), _e.getValue());
        },
        std::make_tuple(deploy_itemsInfo, deploy_e));
    }
    /**
     * description: get device firmware information.
    
    			mediumId: device id which connectted to
     *   the target.
    			fmInfo: firmware information will be returned.
    			e: error code.
     */
    void DeviceManagerDBusProxy::getDeviceFirmwareInfo(const uint32_t &_meidumId, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::media::BaseType::tFirmwareInfo &_fmInfo, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_meidumId(_meidumId, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::media::BaseType::tFirmwareInfo, ::v1::com::harman::media::BaseType_::tFirmwareInfoDeployment_t> deploy_fmInfo(static_cast<::v1::com::harman::media::BaseType_::tFirmwareInfoDeployment_t*>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError, CommonAPI::EmptyDeployment> deploy_e(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::media::BaseType::tFirmwareInfo,::v1::com::harman::media::BaseType_::tFirmwareInfoDeployment_t>,
            CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError,CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "getDeviceFirmwareInfo",
        "u",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_meidumId,
_internalCallStatus,
deploy_fmInfo, deploy_e);
_fmInfo = deploy_fmInfo.getValue();
_e = deploy_e.getValue();
}
    std::future<CommonAPI::CallStatus> DeviceManagerDBusProxy::getDeviceFirmwareInfoAsync(const uint32_t &_meidumId, GetDeviceFirmwareInfoAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_meidumId(_meidumId, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::media::BaseType::tFirmwareInfo, ::v1::com::harman::media::BaseType_::tFirmwareInfoDeployment_t> deploy_fmInfo(static_cast<::v1::com::harman::media::BaseType_::tFirmwareInfoDeployment_t*>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError, CommonAPI::EmptyDeployment> deploy_e(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::media::BaseType::tFirmwareInfo,::v1::com::harman::media::BaseType_::tFirmwareInfoDeployment_t>,
            CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError,CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "getDeviceFirmwareInfo",
        "u",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_meidumId,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<::v1::com::harman::media::BaseType::tFirmwareInfo, ::v1::com::harman::media::BaseType_::tFirmwareInfoDeployment_t> _fmInfo, CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError, CommonAPI::EmptyDeployment> _e) {
        	if (_callback)
        		_callback(_internalCallStatus, _fmInfo.getValue(), _e.getValue());
        },
        std::make_tuple(deploy_fmInfo, deploy_e));
    }
    /**
     * description: get device hardware information.
    
    			mediumId: device id which connectted to
     *   the target.
    			hwInfo: hardware information will be returned.
    			e: error code.
     */
    void DeviceManagerDBusProxy::getDeviceHarwareInfo(const uint32_t &_meidumId, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::media::BaseType::tHardwareInfo &_hwInfo, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_meidumId(_meidumId, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::media::BaseType::tHardwareInfo, ::v1::com::harman::media::BaseType_::tHardwareInfoDeployment_t> deploy_hwInfo(static_cast<::v1::com::harman::media::BaseType_::tHardwareInfoDeployment_t*>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError, CommonAPI::EmptyDeployment> deploy_e(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::media::BaseType::tHardwareInfo,::v1::com::harman::media::BaseType_::tHardwareInfoDeployment_t>,
            CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError,CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "getDeviceHarwareInfo",
        "u",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_meidumId,
_internalCallStatus,
deploy_hwInfo, deploy_e);
_hwInfo = deploy_hwInfo.getValue();
_e = deploy_e.getValue();
}
    std::future<CommonAPI::CallStatus> DeviceManagerDBusProxy::getDeviceHarwareInfoAsync(const uint32_t &_meidumId, GetDeviceHarwareInfoAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_meidumId(_meidumId, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::media::BaseType::tHardwareInfo, ::v1::com::harman::media::BaseType_::tHardwareInfoDeployment_t> deploy_hwInfo(static_cast<::v1::com::harman::media::BaseType_::tHardwareInfoDeployment_t*>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError, CommonAPI::EmptyDeployment> deploy_e(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::media::BaseType::tHardwareInfo,::v1::com::harman::media::BaseType_::tHardwareInfoDeployment_t>,
            CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError,CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "getDeviceHarwareInfo",
        "u",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_meidumId,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<::v1::com::harman::media::BaseType::tHardwareInfo, ::v1::com::harman::media::BaseType_::tHardwareInfoDeployment_t> _hwInfo, CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError, CommonAPI::EmptyDeployment> _e) {
        	if (_callback)
        		_callback(_internalCallStatus, _hwInfo.getValue(), _e.getValue());
        },
        std::make_tuple(deploy_hwInfo, deploy_e));
    }
    /**
     * description: get the remote player capability for BT device.
    
    			mediumId: device id which
     *   connectted to the target.
    			caps: remote player capabilities.
    			e: error
     *   code.
     */
    void DeviceManagerDBusProxy::getRemotePlayerCapability(const uint32_t &_mediumId, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::media::BaseType::tRemotePlayerCapability &_caps, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_mediumId(_mediumId, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::media::BaseType::tRemotePlayerCapability, ::v1::com::harman::media::BaseType_::tRemotePlayerCapabilityDeployment_t> deploy_caps(static_cast<::v1::com::harman::media::BaseType_::tRemotePlayerCapabilityDeployment_t*>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError, CommonAPI::EmptyDeployment> deploy_e(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::media::BaseType::tRemotePlayerCapability,::v1::com::harman::media::BaseType_::tRemotePlayerCapabilityDeployment_t>,
            CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError,CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "getRemotePlayerCapability",
        "u",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_mediumId,
_internalCallStatus,
deploy_caps, deploy_e);
_caps = deploy_caps.getValue();
_e = deploy_e.getValue();
}
    std::future<CommonAPI::CallStatus> DeviceManagerDBusProxy::getRemotePlayerCapabilityAsync(const uint32_t &_mediumId, GetRemotePlayerCapabilityAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_mediumId(_mediumId, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::media::BaseType::tRemotePlayerCapability, ::v1::com::harman::media::BaseType_::tRemotePlayerCapabilityDeployment_t> deploy_caps(static_cast<::v1::com::harman::media::BaseType_::tRemotePlayerCapabilityDeployment_t*>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError, CommonAPI::EmptyDeployment> deploy_e(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::media::BaseType::tRemotePlayerCapability,::v1::com::harman::media::BaseType_::tRemotePlayerCapabilityDeployment_t>,
            CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError,CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "getRemotePlayerCapability",
        "u",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_mediumId,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<::v1::com::harman::media::BaseType::tRemotePlayerCapability, ::v1::com::harman::media::BaseType_::tRemotePlayerCapabilityDeployment_t> _caps, CommonAPI::Deployable<::v1::com::harman::media::BaseType::tBaseError, CommonAPI::EmptyDeployment> _e) {
        	if (_callback)
        		_callback(_internalCallStatus, _caps.getValue(), _e.getValue());
        },
        std::make_tuple(deploy_caps, deploy_e));
    }


void DeviceManagerDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
          ownVersionMajor = 1;
          ownVersionMinor = 0;
      }

      } // namespace media
      } // namespace harman
      } // namespace com
      } // namespace v1
