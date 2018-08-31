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
#ifndef V1_COM_HARMAN_SWDL_Software_Download_DBUS_PROXY_HPP_
#define V1_COM_HARMAN_SWDL_Software_Download_DBUS_PROXY_HPP_

#include <v1/com/harman/swdl/SoftwareDownloadProxyBase.hpp>
#include "v1/com/harman/swdl/SoftwareDownloadDBusDeployment.hpp"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusAddress.hpp>
#include <CommonAPI/DBus/DBusFactory.hpp>
#include <CommonAPI/DBus/DBusProxy.hpp>
#include <CommonAPI/DBus/DBusAddressTranslator.hpp>
#include <CommonAPI/DBus/DBusAttribute.hpp>
#include <CommonAPI/DBus/DBusEvent.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <string>

namespace v1 {
namespace com {
namespace harman {
namespace swdl {

class SoftwareDownloadDBusProxy
    : virtual public SoftwareDownloadProxyBase, 
      virtual public CommonAPI::DBus::DBusProxy {
public:
    SoftwareDownloadDBusProxy(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection);

    virtual ~SoftwareDownloadDBusProxy() { }

    virtual DownloadProgressAttribute& getDownloadProgressAttribute();

    virtual SoftwareAvailableForDownloadEvent& getSoftwareAvailableForDownloadEvent();
    virtual SoftwareAvailableForInstallEvent& getSoftwareAvailableForInstallEvent();
    virtual SoftwareDownloadStatusEvent& getSoftwareDownloadStatusEvent();

    /**
     * description: To check for any software updates are available for download and install.
     *   
    					   Software update service checks in server for any update available.
     */
    virtual void CheckForUpdates(CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::swdl::SwdlTypes::eSwdlError &_error, ::v1::com::harman::swdl::SwdlTypes::tUpdateCheckResult &_checkResult, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> CheckForUpdatesAsync(CheckForUpdatesAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: To start the download of newly available software. Download can be accepted,
     *   deferred and declined using this method
     */
    virtual void StartSoftwareDownload(const ::v1::com::harman::swdl::SwdlTypes::eRequestDownload &_requestDownload, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::swdl::SwdlTypes::eSwdlError &_error, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> StartSoftwareDownloadAsync(const ::v1::com::harman::swdl::SwdlTypes::eRequestDownload &_requestDownload, StartSoftwareDownloadAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: To start the installation of newly available software. Download can be
     *   accepted, deferred and declined using this method.
    					   The installation
     *   happens in special software update mode.
     */
    virtual void StartInstallation(const ::v1::com::harman::swdl::SwdlTypes::eInstallPackage &_installPackage, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::swdl::SwdlTypes::eSwdlError &_error, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> StartInstallationAsync(const ::v1::com::harman::swdl::SwdlTypes::eInstallPackage &_installPackage, StartInstallationAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: To cancel the download which is already started
     */
    virtual void CancelDownload(CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::swdl::SwdlTypes::eSwdlError &_error, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> CancelDownloadAsync(CancelDownloadAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: To enable disable automatic download. true for enabling automatic download and
     *   false for disabling. 
    							In case of enabling automatic check, checking
     *   interval in minutes can be passed
     */
    virtual void SetAutomaticCheck(const bool &_enableAutoCheck, const uint32_t &_checkInterval, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::swdl::SwdlTypes::eSwdlError &_error, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> SetAutomaticCheckAsync(const bool &_enableAutoCheck, const uint32_t &_checkInterval, SetAutomaticCheckAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: To get the enable/disable status of automatich check. If automtic check is
     *   enabled checkInterval 
    							will checking interval in minutes otherwise
     *   checkInterval is not valid
     */
    virtual void GetAutomaticCheckStatus(CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::swdl::SwdlTypes::eSwdlError &_error, bool &_enableAutoCheck, uint32_t &_checkInterval, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> GetAutomaticCheckStatusAsync(GetAutomaticCheckStatusAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: To enable disable automatic download. true for enabling automatic download and
     *   false for disabling. 
    							In case of enabling automatic download, the
     *   automatic download limet autoDownloadLimit can be passed
     */
    virtual void SetAutomaticDownload(const bool &_enableAutoCheck, const uint32_t &_autoDownloadLimit, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::swdl::SwdlTypes::eSwdlError &_error, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> SetAutomaticDownloadAsync(const bool &_enableAutoCheck, const uint32_t &_autoDownloadLimit, SetAutomaticDownloadAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: To get the enable/disable status of automatich download. If automtic download
     *   is enabled the autoDownloadLimit 
    							will give the value of automatic
     *   download limit
     */
    virtual void GetAutomaticDownloadStatus(CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::swdl::SwdlTypes::eSwdlError &_error, bool &_enableAutoCheck, uint32_t &_autoDownloadLimit, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> GetAutomaticDownloadStatusAsync(GetAutomaticDownloadStatusAsyncCallback _callback, const CommonAPI::CallInfo *_info);


    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

private:
   
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusAttribute<DownloadProgressAttribute>> downloadProgress_;

    CommonAPI::DBus::DBusEvent<SoftwareAvailableForDownloadEvent, CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::tPackageDetails, ::v1::com::harman::swdl::SwdlTypes_::tPackageDetailsDeployment_t>> softwareAvailableForDownload_;
    CommonAPI::DBus::DBusEvent<SoftwareAvailableForInstallEvent> softwareAvailableForInstall_;
    CommonAPI::DBus::DBusEvent<SoftwareDownloadStatusEvent, CommonAPI::Deployable<::v1::com::harman::swdl::SwdlTypes::tDownloadStatus, ::v1::com::harman::swdl::SwdlTypes_::tDownloadStatusDeployment_t>> softwareDownloadStatus_;

};

} // namespace swdl
} // namespace harman
} // namespace com
} // namespace v1

#endif // V1_COM_HARMAN_SWDL_Software_Download_DBUS_PROXY_HPP_
