/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/
#ifndef V1_COM_HARMAN_SERVICE_Car_Life_Domain_Svc_PROXY_BASE_HPP_
#define V1_COM_HARMAN_SERVICE_Car_Life_Domain_Svc_PROXY_BASE_HPP_

#include <v1/com/harman/service/CarLifeDomainSvc.hpp>



#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <cstdint>
#include <vector>

#include <CommonAPI/Event.hpp>
#include <CommonAPI/Proxy.hpp>
#include <functional>
#include <future>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace com {
namespace harman {
namespace service {

class CarLifeDomainSvcProxyBase
    : virtual public CommonAPI::Proxy {
public:
    typedef CommonAPI::Event<
        ::v1::com::harman::service::CarLifeDomainSvc::enSessionStatus, std::string
    > SessionStatusEvent;
    typedef CommonAPI::Event<
    > RemoteScreenActiveEvent;
    typedef CommonAPI::Event<
    > RemoteScreenInactiveEvent;
    typedef CommonAPI::Event<
    > RequestScreenEvent;

    typedef std::function<void(const CommonAPI::CallStatus&)> ShowRemoteScreenAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&)> HideRemoteScreenAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&)> SetButtonEventAsyncCallback;


    virtual SessionStatusEvent& getSessionStatusEvent() = 0;
    virtual RemoteScreenActiveEvent& getRemoteScreenActiveEvent() = 0;
    virtual RemoteScreenInactiveEvent& getRemoteScreenInactiveEvent() = 0;
    virtual RequestScreenEvent& getRequestScreenEvent() = 0;

    virtual void showRemoteScreen(CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> showRemoteScreenAsync(ShowRemoteScreenAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void hideRemoteScreen(CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> hideRemoteScreenAsync(HideRemoteScreenAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void setButtonEvent(const bool &_isBtnPressed, const CarLifeDomainSvc::enCarLifeHardButtonType &_btnType, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> setButtonEventAsync(const bool &_isBtnPressed, const CarLifeDomainSvc::enCarLifeHardButtonType &_btnType, SetButtonEventAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
};

} // namespace service
} // namespace harman
} // namespace com
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_COM_HARMAN_SERVICE_Car_Life_Domain_Svc_PROXY_BASE_HPP_