/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/
/**
 * description: this interface offers methods to provide icons (POI, Road, Traffic, so on) to
 *   any client
 */
#ifndef V0_ORG_HARMAN_NAV_CTRL_ICON_Icon_Provider_DBUS_PROXY_HPP_
#define V0_ORG_HARMAN_NAV_CTRL_ICON_Icon_Provider_DBUS_PROXY_HPP_

#include <v0/org/harman/nav/ctrl/icon/IconProviderProxyBase.hpp>
#include "v0/org/harman/nav/ctrl/icon/IconProviderDBusDeployment.hpp"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusAddress.hpp>
#include <CommonAPI/DBus/DBusFactory.hpp>
#include <CommonAPI/DBus/DBusProxy.hpp>
#include <CommonAPI/DBus/DBusAddressTranslator.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <string>

namespace v0 {
namespace org {
namespace harman {
namespace nav {
namespace ctrl {
namespace icon {

class IconProviderDBusProxy
    : virtual public IconProviderProxyBase, 
      virtual public CommonAPI::DBus::DBusProxy {
public:
    IconProviderDBusProxy(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection);

    virtual ~IconProviderDBusProxy() { }



    /**
     * description: initialize an icon session. Prerequiste and mandatory to any other IconProvider
     *   call.
    	The client need to specify an iconFilePath, where all requested
     *   resources can be copied to.
     */
    virtual void createSession(const std::string &_iconFilePath, CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::CommonTypes::Handle &_iconSessionHandle, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> createSessionAsync(const std::string &_iconFilePath, CreateSessionAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: deletes an icon session and all assiociated resources which were requested
     */
    virtual void deleteSession(const ::org::harman::nav::ctrl::CommonTypes::Handle &_iconSessionHandle, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> deleteSessionAsync(const ::org::harman::nav::ctrl::CommonTypes::Handle &_iconSessionHandle, DeleteSessionAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: generic icon request call to get a navigation based icon
     */
    virtual void getIconResource(const ::org::harman::nav::ctrl::CommonTypes::Handle &_iconSessionHandle, const ::org::harman::nav::ctrl::icon::IconProviderTypes::IconResourceSetId &_iconResourceId, const ::org::harman::nav::ctrl::icon::IconProviderTypes::DesignParameters &_iconDesign, CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::icon::IconProviderTypes::IconResponseData &_icon, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getIconResourceAsync(const ::org::harman::nav::ctrl::CommonTypes::Handle &_iconSessionHandle, const ::org::harman::nav::ctrl::icon::IconProviderTypes::IconResourceSetId &_iconResourceId, const ::org::harman::nav::ctrl::icon::IconProviderTypes::DesignParameters &_iconDesign, GetIconResourceAsyncCallback _callback, const CommonAPI::CallInfo *_info);


    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

private:
   


};

} // namespace icon
} // namespace ctrl
} // namespace nav
} // namespace harman
} // namespace org
} // namespace v0

#endif // V0_ORG_HARMAN_NAV_CTRL_ICON_Icon_Provider_DBUS_PROXY_HPP_
