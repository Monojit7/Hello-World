/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/
#ifndef V1_COM_HARMAN_SERVICE_Car_Life_Domain_Svc_PROXY_HPP_
#define V1_COM_HARMAN_SERVICE_Car_Life_Domain_Svc_PROXY_HPP_

#include <v1/com/harman/service/CarLifeDomainSvcProxyBase.hpp>


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif


#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace com {
namespace harman {
namespace service {

template <typename ... _AttributeExtensions>
class CarLifeDomainSvcProxy
    : virtual public CarLifeDomainSvc, 
      virtual public CarLifeDomainSvcProxyBase,
      virtual public _AttributeExtensions... {
public:
    CarLifeDomainSvcProxy(std::shared_ptr<CommonAPI::Proxy> delegate);
    ~CarLifeDomainSvcProxy();

    typedef CarLifeDomainSvc InterfaceType;



    /**
     * Returns the wrapper class that provides access to the broadcast sessionStatus.
     */
    virtual SessionStatusEvent& getSessionStatusEvent() {
        return delegate_->getSessionStatusEvent();
    }
    /**
     * Returns the wrapper class that provides access to the broadcast remoteScreenActive.
     */
    virtual RemoteScreenActiveEvent& getRemoteScreenActiveEvent() {
        return delegate_->getRemoteScreenActiveEvent();
    }
    /**
     * Returns the wrapper class that provides access to the broadcast remoteScreenInactive.
     */
    virtual RemoteScreenInactiveEvent& getRemoteScreenInactiveEvent() {
        return delegate_->getRemoteScreenInactiveEvent();
    }
    /**
     * Returns the wrapper class that provides access to the broadcast requestScreen.
     */
    virtual RequestScreenEvent& getRequestScreenEvent() {
        return delegate_->getRequestScreenEvent();
    }

    /**
     * Calls showRemoteScreen with synchronous semantics.
     * 
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void showRemoteScreen(CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls showRemoteScreen with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> showRemoteScreenAsync(ShowRemoteScreenAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls hideRemoteScreen with synchronous semantics.
     * 
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void hideRemoteScreen(CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls hideRemoteScreen with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> hideRemoteScreenAsync(HideRemoteScreenAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setButtonEvent with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void setButtonEvent(const bool &_isBtnPressed, const CarLifeDomainSvc::enCarLifeHardButtonType &_btnType, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setButtonEvent with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> setButtonEventAsync(const bool &_isBtnPressed, const CarLifeDomainSvc::enCarLifeHardButtonType &_btnType, SetButtonEventAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);


    /**
     * Returns the CommonAPI address of the remote partner this proxy communicates with.
     */
    virtual const CommonAPI::Address &getAddress() const;

    /**
     * Returns true if the remote partner for this proxy is currently known to be available.
     */
    virtual bool isAvailable() const;

    /**
     * Returns true if the remote partner for this proxy is available.
     */
    virtual bool isAvailableBlocking() const;

    /**
     * Returns the wrapper class that is used to (de-)register for notifications about
     * the availability of the remote partner of this proxy.
     */
    virtual CommonAPI::ProxyStatusEvent& getProxyStatusEvent();

    /**
     * Returns the wrapper class that is used to access version information of the remote
     * partner of this proxy.
     */
    virtual CommonAPI::InterfaceVersionAttribute& getInterfaceVersionAttribute();

 private:
    std::shared_ptr<CarLifeDomainSvcProxyBase> delegate_;
};

typedef CarLifeDomainSvcProxy<> CarLifeDomainSvcProxyDefault;


//
// CarLifeDomainSvcProxy Implementation
//
template <typename ... _AttributeExtensions>
CarLifeDomainSvcProxy<_AttributeExtensions...>::CarLifeDomainSvcProxy(std::shared_ptr<CommonAPI::Proxy> delegate):
        _AttributeExtensions(*(std::dynamic_pointer_cast<CarLifeDomainSvcProxyBase>(delegate)))...,
        delegate_(std::dynamic_pointer_cast<CarLifeDomainSvcProxyBase>(delegate)) {
}

template <typename ... _AttributeExtensions>
CarLifeDomainSvcProxy<_AttributeExtensions...>::~CarLifeDomainSvcProxy() {
}

template <typename ... _AttributeExtensions>
void CarLifeDomainSvcProxy<_AttributeExtensions...>::showRemoteScreen(CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
    delegate_->showRemoteScreen(_internalCallStatus, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> CarLifeDomainSvcProxy<_AttributeExtensions...>::showRemoteScreenAsync(ShowRemoteScreenAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->showRemoteScreenAsync(_callback, _info);
}
template <typename ... _AttributeExtensions>
void CarLifeDomainSvcProxy<_AttributeExtensions...>::hideRemoteScreen(CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
    delegate_->hideRemoteScreen(_internalCallStatus, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> CarLifeDomainSvcProxy<_AttributeExtensions...>::hideRemoteScreenAsync(HideRemoteScreenAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->hideRemoteScreenAsync(_callback, _info);
}
template <typename ... _AttributeExtensions>
void CarLifeDomainSvcProxy<_AttributeExtensions...>::setButtonEvent(const bool &_isBtnPressed, const CarLifeDomainSvc::enCarLifeHardButtonType &_btnType, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
    if (!_btnType.validate()) {
        _internalCallStatus = CommonAPI::CallStatus::INVALID_VALUE;
        return;
    }
    delegate_->setButtonEvent(_isBtnPressed, _btnType, _internalCallStatus, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> CarLifeDomainSvcProxy<_AttributeExtensions...>::setButtonEventAsync(const bool &_isBtnPressed, const CarLifeDomainSvc::enCarLifeHardButtonType &_btnType, SetButtonEventAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    if (!_btnType.validate()) {
        _callback(CommonAPI::CallStatus::INVALID_VALUE);
        std::promise<CommonAPI::CallStatus> promise;
        promise.set_value(CommonAPI::CallStatus::INVALID_VALUE);
        return promise.get_future();
    }
    return delegate_->setButtonEventAsync(_isBtnPressed, _btnType, _callback, _info);
}

template <typename ... _AttributeExtensions>
const CommonAPI::Address &CarLifeDomainSvcProxy<_AttributeExtensions...>::getAddress() const {
    return delegate_->getAddress();
}

template <typename ... _AttributeExtensions>
bool CarLifeDomainSvcProxy<_AttributeExtensions...>::isAvailable() const {
    return delegate_->isAvailable();
}

template <typename ... _AttributeExtensions>
bool CarLifeDomainSvcProxy<_AttributeExtensions...>::isAvailableBlocking() const {
    return delegate_->isAvailableBlocking();
}

template <typename ... _AttributeExtensions>
CommonAPI::ProxyStatusEvent& CarLifeDomainSvcProxy<_AttributeExtensions...>::getProxyStatusEvent() {
    return delegate_->getProxyStatusEvent();
}

template <typename ... _AttributeExtensions>
CommonAPI::InterfaceVersionAttribute& CarLifeDomainSvcProxy<_AttributeExtensions...>::getInterfaceVersionAttribute() {
    return delegate_->getInterfaceVersionAttribute();
}


} // namespace service
} // namespace harman
} // namespace com
} // namespace v1



// Compatibility
namespace v1_0 = v1;

#endif // V1_COM_HARMAN_SERVICE_Car_Life_Domain_Svc_PROXY_HPP_
