/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/
#ifndef V3_COM_HARMAN_CONNECTIVITY_Car_Play_Domain_Svc_DBUS_PROXY_HPP_
#define V3_COM_HARMAN_CONNECTIVITY_Car_Play_Domain_Svc_DBUS_PROXY_HPP_

#include <v3/com/harman/connectivity/CarPlayDomainSvcProxyBase.hpp>
#include "v3/com/harman/connectivity/CarPlayDomainSvcDBusDeployment.hpp"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusAddress.hpp>
#include <CommonAPI/DBus/DBusFactory.hpp>
#include <CommonAPI/DBus/DBusProxy.hpp>
#include <CommonAPI/DBus/DBusAddressTranslator.hpp>
#include <CommonAPI/DBus/DBusEvent.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <string>

namespace v3 {
namespace com {
namespace harman {
namespace connectivity {

class CarPlayDomainSvcDBusProxy
    : virtual public CarPlayDomainSvcProxyBase, 
      virtual public CommonAPI::DBus::DBusProxy {
public:
    CarPlayDomainSvcDBusProxy(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection);

    virtual ~CarPlayDomainSvcDBusProxy() { }


    virtual SessionStatusEvent& getSessionStatusEvent();
    virtual RemoteScreenActiveEvent& getRemoteScreenActiveEvent();
    virtual RemoteScreenInactiveEvent& getRemoteScreenInactiveEvent();

    virtual void showRemoteScreen(CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> showRemoteScreenAsync(ShowRemoteScreenAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void hideRemoteScreen(CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> hideRemoteScreenAsync(HideRemoteScreenAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void setButtonEvent(const bool &_isBtnPressed, const CarPlayDomainSvc::enCarPlayHardButtonType &_btnType, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> setButtonEventAsync(const bool &_isBtnPressed, const CarPlayDomainSvc::enCarPlayHardButtonType &_btnType, SetButtonEventAsyncCallback _callback, const CommonAPI::CallInfo *_info);


    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

private:
   

    CommonAPI::DBus::DBusEvent<SessionStatusEvent, CommonAPI::Deployable<bool, CommonAPI::EmptyDeployment>> sessionStatus_;
    CommonAPI::DBus::DBusEvent<RemoteScreenActiveEvent> remoteScreenActive_;
    CommonAPI::DBus::DBusEvent<RemoteScreenInactiveEvent> remoteScreenInactive_;

};

} // namespace connectivity
} // namespace harman
} // namespace com
} // namespace v3

#endif // V3_COM_HARMAN_CONNECTIVITY_Car_Play_Domain_Svc_DBUS_PROXY_HPP_
