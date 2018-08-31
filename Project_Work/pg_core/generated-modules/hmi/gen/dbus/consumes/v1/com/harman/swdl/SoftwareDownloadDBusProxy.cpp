/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/
/**
 * description: This is a Common API DBUS interface Orinoco 2.0 that can used to Software
 *   Download from other interested modules
 * author: SThekkumbada
 */
#include <v1/com/harman/swdl/SoftwareDownloadDBusProxy.hpp>

namespace v1 {
namespace com {
namespace harman {
namespace swdl {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createSoftwareDownloadDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection) {
	return std::make_shared<SoftwareDownloadDBusProxy>(_address, _connection);
}

INITIALIZER(registerSoftwareDownloadDBusProxy) {
     CommonAPI::DBus::Factory::get()->registerProxyCreateMethod(
		SoftwareDownload::getInterface(),
		&createSoftwareDownloadDBusProxy);
}

SoftwareDownloadDBusProxy::SoftwareDownloadDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection)
	:	CommonAPI::DBus::DBusProxy(_address, _connection)
,		downloadProgress_(*this, "onDownloadProgressAttributeChanged", "setDownloadProgressAttribute", "u", "getDownloadProgressAttribute", static_cast<CommonAPI::EmptyDeployment*>(nullptr))
,		softwareAvailableForDownload_(*this, "SoftwareAvailableForDownload", "(su)", std::make_tuple(static_cast<::v1::com::harman::swdl::SwdlTypes_::tPackageDetailsDeployment_t*>(nullptr))),
		softwareAvailableForInstall_(*this, "SoftwareAvailableForInstall", "", std::make_tuple()),
		softwareDownloadStatus_(*this, "SoftwareDownloadStatus", "(is)", std::make_tuple(static_cast<::v1::com::harman::swdl::SwdlTypes_::tDownloadStatusDeployment_t*>(nullptr)))
{
}

      SoftwareDownloadDBusProxy::DownloadProgressAttribute& SoftwareDownloadDBusProxy::getDownloadProgressAttribute() {
          return downloadProgress_;
      }

SoftwareDownloadDBusProxy::SoftwareAvailableForDownloadEvent& SoftwareDownloadDBusProxy::getSoftwareAvailableForDownloadEvent() {
    return softwareAvailableForDownload_;
}
SoftwareDownloadDBusProxy::SoftwareAvailableForInstallEvent& SoftwareDownloadDBusProxy::getSoftwareAvailableForInstallEvent() {
    return softwareAvailableForInstall_;
}
SoftwareDownloadDBusProxy::SoftwareDownloadStatusEvent& SoftwareDownloadDBusProxy::getSoftwareDownloadStatusEvent() {
    return softwareDownloadStatus_;
}
    
    /**
     * description: To check for any software updates are available for download and install.
     *   
    					   Software update service checks in server for any update available.
     */
    void SoftwareDownloadDBusProxy::CheckForUpdates(CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::swdl::SwdlTypes::eSwdlError &_error, ::v1::com::harman::swdl::SwdlTypes::tUpdateCheckResult &_checkResult, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment> deploy_error(static_cast<CommonAPI::EmptyDeployment *>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::tUpdateCheckResult, ::v1::com::harman::swdl::SwdlTypes_::tUpdateCheckResultDeployment_t> deploy_checkResult(static_cast<::v1::com::harman::swdl::SwdlTypes_::tUpdateCheckResultDeployment_t*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::tUpdateCheckResult,::v1::com::harman::swdl::SwdlTypes_::tUpdateCheckResultDeployment_t>
            >
        	>::callMethodWithReply(
        *this,
        "CheckForUpdates",
        "",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
_internalCallStatus,
deploy_error,
deploy_checkResult);
_error = deploy_error.getValue();
_checkResult = deploy_checkResult.getValue();
}
    std::future<CommonAPI::CallStatus> SoftwareDownloadDBusProxy::CheckForUpdatesAsync(CheckForUpdatesAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment> deploy_error(static_cast<CommonAPI::EmptyDeployment *>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::tUpdateCheckResult, ::v1::com::harman::swdl::SwdlTypes_::tUpdateCheckResultDeployment_t> deploy_checkResult(static_cast<::v1::com::harman::swdl::SwdlTypes_::tUpdateCheckResultDeployment_t*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::tUpdateCheckResult,::v1::com::harman::swdl::SwdlTypes_::tUpdateCheckResultDeployment_t>
            >
        	>::callMethodAsync(
        *this,
        "CheckForUpdates",
        "",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment> _deploy_error, CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::tUpdateCheckResult, ::v1::com::harman::swdl::SwdlTypes_::tUpdateCheckResultDeployment_t> _checkResult) {
        	if (_callback)
        		_callback(_internalCallStatus, _deploy_error.getValue(), _checkResult.getValue());
        },
        std::make_tuple(deploy_error, deploy_checkResult));
    }
    /**
     * description: To start the download of newly available software. Download can be accepted,
     *   deferred and declined using this method
     */
    void SoftwareDownloadDBusProxy::StartSoftwareDownload(const ::v1::com::harman::swdl::SwdlTypes::eRequestDownload &_requestDownload, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::swdl::SwdlTypes::eSwdlError &_error, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment> deploy_error(static_cast<CommonAPI::EmptyDeployment *>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eRequestDownload, CommonAPI::EmptyDeployment> deploy_requestDownload(_requestDownload, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eRequestDownload, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "StartSoftwareDownload",
        "i",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_requestDownload,
_internalCallStatus,
deploy_error);
_error = deploy_error.getValue();
}
    std::future<CommonAPI::CallStatus> SoftwareDownloadDBusProxy::StartSoftwareDownloadAsync(const ::v1::com::harman::swdl::SwdlTypes::eRequestDownload &_requestDownload, StartSoftwareDownloadAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment> deploy_error(static_cast<CommonAPI::EmptyDeployment *>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eRequestDownload, CommonAPI::EmptyDeployment> deploy_requestDownload(_requestDownload, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eRequestDownload, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "StartSoftwareDownload",
        "i",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_requestDownload,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment> _deploy_error) {
        	if (_callback)
        		_callback(_internalCallStatus, _deploy_error.getValue());
        },
        std::make_tuple(deploy_error));
    }
    /**
     * description: To start the installation of newly available software. Download can be
     *   accepted, deferred and declined using this method.
    					   The installation
     *   happens in special software update mode.
     */
    void SoftwareDownloadDBusProxy::StartInstallation(const ::v1::com::harman::swdl::SwdlTypes::eInstallPackage &_installPackage, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::swdl::SwdlTypes::eSwdlError &_error, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment> deploy_error(static_cast<CommonAPI::EmptyDeployment *>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eInstallPackage, CommonAPI::EmptyDeployment> deploy_installPackage(_installPackage, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eInstallPackage, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "StartInstallation",
        "i",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_installPackage,
_internalCallStatus,
deploy_error);
_error = deploy_error.getValue();
}
    std::future<CommonAPI::CallStatus> SoftwareDownloadDBusProxy::StartInstallationAsync(const ::v1::com::harman::swdl::SwdlTypes::eInstallPackage &_installPackage, StartInstallationAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment> deploy_error(static_cast<CommonAPI::EmptyDeployment *>(nullptr));
        CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eInstallPackage, CommonAPI::EmptyDeployment> deploy_installPackage(_installPackage, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eInstallPackage, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "StartInstallation",
        "i",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_installPackage,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment> _deploy_error) {
        	if (_callback)
        		_callback(_internalCallStatus, _deploy_error.getValue());
        },
        std::make_tuple(deploy_error));
    }
    /**
     * description: To cancel the download which is already started
     */
    void SoftwareDownloadDBusProxy::CancelDownload(CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::swdl::SwdlTypes::eSwdlError &_error, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment> deploy_error(static_cast<CommonAPI::EmptyDeployment *>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "CancelDownload",
        "",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
_internalCallStatus,
deploy_error);
_error = deploy_error.getValue();
}
    std::future<CommonAPI::CallStatus> SoftwareDownloadDBusProxy::CancelDownloadAsync(CancelDownloadAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment> deploy_error(static_cast<CommonAPI::EmptyDeployment *>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "CancelDownload",
        "",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment> _deploy_error) {
        	if (_callback)
        		_callback(_internalCallStatus, _deploy_error.getValue());
        },
        std::make_tuple(deploy_error));
    }
    /**
     * description: To enable disable automatic download. true for enabling automatic download and
     *   false for disabling. 
    							In case of enabling automatic check, checking
     *   interval in minutes can be passed
     */
    void SoftwareDownloadDBusProxy::SetAutomaticCheck(const bool &_enableAutoCheck, const uint32_t &_checkInterval, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::swdl::SwdlTypes::eSwdlError &_error, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment> deploy_error(static_cast<CommonAPI::EmptyDeployment *>(nullptr));
        CommonAPI::Deployable<bool, CommonAPI::EmptyDeployment> deploy_enableAutoCheck(_enableAutoCheck, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_checkInterval(_checkInterval, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<bool, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "SetAutomaticCheck",
        "bu",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_enableAutoCheck, deploy_checkInterval,
_internalCallStatus,
deploy_error);
_error = deploy_error.getValue();
}
    std::future<CommonAPI::CallStatus> SoftwareDownloadDBusProxy::SetAutomaticCheckAsync(const bool &_enableAutoCheck, const uint32_t &_checkInterval, SetAutomaticCheckAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment> deploy_error(static_cast<CommonAPI::EmptyDeployment *>(nullptr));
        CommonAPI::Deployable<bool, CommonAPI::EmptyDeployment> deploy_enableAutoCheck(_enableAutoCheck, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_checkInterval(_checkInterval, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<bool, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "SetAutomaticCheck",
        "bu",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_enableAutoCheck, deploy_checkInterval,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment> _deploy_error) {
        	if (_callback)
        		_callback(_internalCallStatus, _deploy_error.getValue());
        },
        std::make_tuple(deploy_error));
    }
    /**
     * description: To get the enable/disable status of automatich check. If automtic check is
     *   enabled checkInterval 
    							will checking interval in minutes otherwise
     *   checkInterval is not valid
     */
    void SoftwareDownloadDBusProxy::GetAutomaticCheckStatus(CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::swdl::SwdlTypes::eSwdlError &_error, bool &_enableAutoCheck, uint32_t &_checkInterval, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment> deploy_error(static_cast<CommonAPI::EmptyDeployment *>(nullptr));
        CommonAPI::Deployable<bool, CommonAPI::EmptyDeployment> deploy_enableAutoCheck(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_checkInterval(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<bool,CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<uint32_t,CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "GetAutomaticCheckStatus",
        "",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
_internalCallStatus,
deploy_error,
deploy_enableAutoCheck, deploy_checkInterval);
_error = deploy_error.getValue();
_enableAutoCheck = deploy_enableAutoCheck.getValue();
_checkInterval = deploy_checkInterval.getValue();
}
    std::future<CommonAPI::CallStatus> SoftwareDownloadDBusProxy::GetAutomaticCheckStatusAsync(GetAutomaticCheckStatusAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment> deploy_error(static_cast<CommonAPI::EmptyDeployment *>(nullptr));
        CommonAPI::Deployable<bool, CommonAPI::EmptyDeployment> deploy_enableAutoCheck(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_checkInterval(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<bool,CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<uint32_t,CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "GetAutomaticCheckStatus",
        "",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment> _deploy_error, CommonAPI::Deployable<bool, CommonAPI::EmptyDeployment> _enableAutoCheck, CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> _checkInterval) {
        	if (_callback)
        		_callback(_internalCallStatus, _deploy_error.getValue(), _enableAutoCheck.getValue(), _checkInterval.getValue());
        },
        std::make_tuple(deploy_error, deploy_enableAutoCheck, deploy_checkInterval));
    }
    /**
     * description: To enable disable automatic download. true for enabling automatic download and
     *   false for disabling. 
    							In case of enabling automatic download, the
     *   automatic download limet autoDownloadLimit can be passed
     */
    void SoftwareDownloadDBusProxy::SetAutomaticDownload(const bool &_enableAutoCheck, const uint32_t &_autoDownloadLimit, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::swdl::SwdlTypes::eSwdlError &_error, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment> deploy_error(static_cast<CommonAPI::EmptyDeployment *>(nullptr));
        CommonAPI::Deployable<bool, CommonAPI::EmptyDeployment> deploy_enableAutoCheck(_enableAutoCheck, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_autoDownloadLimit(_autoDownloadLimit, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<bool, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "SetAutomaticDownload",
        "bu",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_enableAutoCheck, deploy_autoDownloadLimit,
_internalCallStatus,
deploy_error);
_error = deploy_error.getValue();
}
    std::future<CommonAPI::CallStatus> SoftwareDownloadDBusProxy::SetAutomaticDownloadAsync(const bool &_enableAutoCheck, const uint32_t &_autoDownloadLimit, SetAutomaticDownloadAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment> deploy_error(static_cast<CommonAPI::EmptyDeployment *>(nullptr));
        CommonAPI::Deployable<bool, CommonAPI::EmptyDeployment> deploy_enableAutoCheck(_enableAutoCheck, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_autoDownloadLimit(_autoDownloadLimit, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<bool, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "SetAutomaticDownload",
        "bu",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_enableAutoCheck, deploy_autoDownloadLimit,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment> _deploy_error) {
        	if (_callback)
        		_callback(_internalCallStatus, _deploy_error.getValue());
        },
        std::make_tuple(deploy_error));
    }
    /**
     * description: To get the enable/disable status of automatich download. If automtic download
     *   is enabled the autoDownloadLimit 
    							will give the value of automatic
     *   download limit
     */
    void SoftwareDownloadDBusProxy::GetAutomaticDownloadStatus(CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::swdl::SwdlTypes::eSwdlError &_error, bool &_enableAutoCheck, uint32_t &_autoDownloadLimit, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment> deploy_error(static_cast<CommonAPI::EmptyDeployment *>(nullptr));
        CommonAPI::Deployable<bool, CommonAPI::EmptyDeployment> deploy_enableAutoCheck(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_autoDownloadLimit(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<bool,CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<uint32_t,CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "GetAutomaticDownloadStatus",
        "",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
_internalCallStatus,
deploy_error,
deploy_enableAutoCheck, deploy_autoDownloadLimit);
_error = deploy_error.getValue();
_enableAutoCheck = deploy_enableAutoCheck.getValue();
_autoDownloadLimit = deploy_autoDownloadLimit.getValue();
}
    std::future<CommonAPI::CallStatus> SoftwareDownloadDBusProxy::GetAutomaticDownloadStatusAsync(GetAutomaticDownloadStatusAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment> deploy_error(static_cast<CommonAPI::EmptyDeployment *>(nullptr));
        CommonAPI::Deployable<bool, CommonAPI::EmptyDeployment> deploy_enableAutoCheck(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_autoDownloadLimit(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<bool,CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<uint32_t,CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "GetAutomaticDownloadStatus",
        "",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::eSwdlError, CommonAPI::EmptyDeployment> _deploy_error, CommonAPI::Deployable<bool, CommonAPI::EmptyDeployment> _enableAutoCheck, CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> _autoDownloadLimit) {
        	if (_callback)
        		_callback(_internalCallStatus, _deploy_error.getValue(), _enableAutoCheck.getValue(), _autoDownloadLimit.getValue());
        },
        std::make_tuple(deploy_error, deploy_enableAutoCheck, deploy_autoDownloadLimit));
    }


void SoftwareDownloadDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
          ownVersionMajor = 1;
          ownVersionMinor = 0;
      }

      } // namespace swdl
      } // namespace harman
      } // namespace com
      } // namespace v1