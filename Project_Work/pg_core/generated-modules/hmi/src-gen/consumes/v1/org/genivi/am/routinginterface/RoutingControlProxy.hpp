/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/
/**
 * description: This class implements everything from Audiomanager -&gt; RoutingAdapter
 * author: lian zhang
 */
#ifndef V1_ORG_GENIVI_AM_ROUTINGINTERFACE_Routing_Control_PROXY_HPP_
#define V1_ORG_GENIVI_AM_ROUTINGINTERFACE_Routing_Control_PROXY_HPP_

#include <v1/org/genivi/am/routinginterface/RoutingControlProxyBase.hpp>


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif


#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace org {
namespace genivi {
namespace am {
namespace routinginterface {

template <typename ... _AttributeExtensions>
class RoutingControlProxy
    : virtual public RoutingControl, 
      virtual public RoutingControlProxyBase,
      virtual public _AttributeExtensions... {
public:
    RoutingControlProxy(std::shared_ptr<CommonAPI::Proxy> delegate);
    ~RoutingControlProxy();

    typedef RoutingControl InterfaceType;



    /**
     * description: Acknowledges for asyncSetSourceState.
     */
    /**
     * Returns the wrapper class that provides access to the broadcast ackSetSourceState.
     */
    virtual AckSetSourceStateSelectiveEvent& getAckSetSourceStateSelectiveEvent() {
        return delegate_->getAckSetSourceStateSelectiveEvent();
    }

    /**
     * description: This function is used to set the source state of a particular
     *   source.
    (at)return E_OK on success, E_UNKNOWN on error
     * Calls asyncSetSourceState with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void asyncSetSourceState(const ::v3::org::genivi::am_t::am_Handle_s &_handle, const ::v3::org::genivi::am_t::am_sourceID_t &_sourceID, const ::v3::org::genivi::am_t::am_SourceState_e &_state, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls asyncSetSourceState with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> asyncSetSourceStateAsync(const ::v3::org::genivi::am_t::am_Handle_s &_handle, const ::v3::org::genivi::am_t::am_sourceID_t &_sourceID, const ::v3::org::genivi::am_t::am_SourceState_e &_state, AsyncSetSourceStateAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);


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
    std::shared_ptr<RoutingControlProxyBase> delegate_;
};

typedef RoutingControlProxy<> RoutingControlProxyDefault;


//
// RoutingControlProxy Implementation
//
template <typename ... _AttributeExtensions>
RoutingControlProxy<_AttributeExtensions...>::RoutingControlProxy(std::shared_ptr<CommonAPI::Proxy> delegate):
        _AttributeExtensions(*(std::dynamic_pointer_cast<RoutingControlProxyBase>(delegate)))...,
        delegate_(std::dynamic_pointer_cast<RoutingControlProxyBase>(delegate)) {
}

template <typename ... _AttributeExtensions>
RoutingControlProxy<_AttributeExtensions...>::~RoutingControlProxy() {
}

/**
 * description: This function is used to set the source state of a particular
 *   source.
(at)return E_OK on success, E_UNKNOWN on error
 */
template <typename ... _AttributeExtensions>
void RoutingControlProxy<_AttributeExtensions...>::asyncSetSourceState(const ::v3::org::genivi::am_t::am_Handle_s &_handle, const ::v3::org::genivi::am_t::am_sourceID_t &_sourceID, const ::v3::org::genivi::am_t::am_SourceState_e &_state, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
    if (!_state.validate()) {
        _internalCallStatus = CommonAPI::CallStatus::INVALID_VALUE;
        return;
    }
    delegate_->asyncSetSourceState(_handle, _sourceID, _state, _internalCallStatus, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> RoutingControlProxy<_AttributeExtensions...>::asyncSetSourceStateAsync(const ::v3::org::genivi::am_t::am_Handle_s &_handle, const ::v3::org::genivi::am_t::am_sourceID_t &_sourceID, const ::v3::org::genivi::am_t::am_SourceState_e &_state, AsyncSetSourceStateAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    if (!_state.validate()) {
        _callback(CommonAPI::CallStatus::INVALID_VALUE);
        std::promise<CommonAPI::CallStatus> promise;
        promise.set_value(CommonAPI::CallStatus::INVALID_VALUE);
        return promise.get_future();
    }
    return delegate_->asyncSetSourceStateAsync(_handle, _sourceID, _state, _callback, _info);
}

template <typename ... _AttributeExtensions>
const CommonAPI::Address &RoutingControlProxy<_AttributeExtensions...>::getAddress() const {
    return delegate_->getAddress();
}

template <typename ... _AttributeExtensions>
bool RoutingControlProxy<_AttributeExtensions...>::isAvailable() const {
    return delegate_->isAvailable();
}

template <typename ... _AttributeExtensions>
bool RoutingControlProxy<_AttributeExtensions...>::isAvailableBlocking() const {
    return delegate_->isAvailableBlocking();
}

template <typename ... _AttributeExtensions>
CommonAPI::ProxyStatusEvent& RoutingControlProxy<_AttributeExtensions...>::getProxyStatusEvent() {
    return delegate_->getProxyStatusEvent();
}

template <typename ... _AttributeExtensions>
CommonAPI::InterfaceVersionAttribute& RoutingControlProxy<_AttributeExtensions...>::getInterfaceVersionAttribute() {
    return delegate_->getInterfaceVersionAttribute();
}


} // namespace routinginterface
} // namespace am
} // namespace genivi
} // namespace org
} // namespace v1



// Compatibility
namespace v1_1 = v1;

#endif // V1_ORG_GENIVI_AM_ROUTINGINTERFACE_Routing_Control_PROXY_HPP_
