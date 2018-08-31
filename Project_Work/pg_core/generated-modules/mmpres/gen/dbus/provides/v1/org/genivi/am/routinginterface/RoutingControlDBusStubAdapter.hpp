/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Wed Oct 26 18:16:09 IST 2016
*/
/**
 * description: This class implements everything from Audiomanager -&gt; RoutingAdapter
 * author: lian zhang
 */
#ifndef V1_ORG_GENIVI_AM_ROUTINGINTERFACE_Routing_Control_DBUS_STUB_ADAPTER_HPP_
#define V1_ORG_GENIVI_AM_ROUTINGINTERFACE_Routing_Control_DBUS_STUB_ADAPTER_HPP_

#include <v1/org/genivi/am/routinginterface/RoutingControlStub.hpp>
#include "v1/org/genivi/am/routinginterface/RoutingControlDBusDeployment.hpp"        
#include <v3/org/genivi/am_tDBusDeployment.hpp>        

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusAddressTranslator.hpp>
#include <CommonAPI/DBus/DBusFactory.hpp>
#include <CommonAPI/DBus/DBusStubAdapterHelper.hpp>
#include <CommonAPI/DBus/DBusStubAdapter.hpp>
#include <CommonAPI/DBus/DBusDeployment.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace org {
namespace genivi {
namespace am {
namespace routinginterface {

typedef CommonAPI::DBus::DBusStubAdapterHelper<RoutingControlStub> RoutingControlDBusStubAdapterHelper;

class RoutingControlDBusStubAdapterInternal
    : public virtual RoutingControlStubAdapter,
      public RoutingControlDBusStubAdapterHelper
{
public:
    RoutingControlDBusStubAdapterInternal(
            const CommonAPI::DBus::DBusAddress &_address,
            const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
            const std::shared_ptr<CommonAPI::StubBase> &_stub);

    ~RoutingControlDBusStubAdapterInternal();

    virtual bool hasFreedesktopProperties();

    inline static const char* getInterface() {
        return RoutingControl::getInterface();
    }


    /**
     * description: Acknowledges for asyncSetSourceState.
     */
    void fireAckSetSourceStateSelective(const std::shared_ptr<CommonAPI::ClientId> _client, const ::v3::org::genivi::am_t::am_Handle_s &_handle, const ::v3::org::genivi::am_t::am_Error_e &_amError);
    void sendAckSetSourceStateSelective(const ::v3::org::genivi::am_t::am_Handle_s &_handle, const ::v3::org::genivi::am_t::am_Error_e &_amError, const std::shared_ptr<CommonAPI::ClientIdList> _receivers = nullptr);
    void subscribeForackSetSourceStateSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, bool& success);
    void unsubscribeFromackSetSourceStateSelective(const std::shared_ptr<CommonAPI::ClientId> clientId);
    std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForAckSetSourceStateSelective();


    const RoutingControlDBusStubAdapterHelper::StubDispatcherTable& getStubDispatcherTable();
    const CommonAPI::DBus::StubAttributeTable& getStubAttributeTable();

    void deactivateManagedInstances();
    

static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::org::genivi::am::routinginterface::RoutingControlStub,
        CommonAPI::Version
        > getRoutingControlInterfaceVersionStubDispatcher;



/**
 * description: This function is used to set the source state of a particular
 *   source.
(at)return E_OK on success, E_UNKNOWN on error
 */

static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v1::org::genivi::am::routinginterface::RoutingControlStub,
    std::tuple<::v3::org::genivi::am_t::am_Handle_s, ::v3::org::genivi::am_t::am_sourceID_t, ::v3::org::genivi::am_t::am_SourceState_e>,
    std::tuple<>,
    std::tuple<::v3::org::genivi::am_t_::am_Handle_sDeployment_t, CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment>,
    std::tuple<>
    
    > asyncSetSourceStateStubDispatcher;


static CommonAPI::DBus::DBusMethodWithReplyAdapterDispatcher<
    ::v1::org::genivi::am::routinginterface::RoutingControlStub,
    RoutingControlStubAdapter,
    std::tuple<>,
    std::tuple<bool>
    > subscribeAckSetSourceStateSelectiveStubDispatcher;

static CommonAPI::DBus::DBusMethodWithReplyAdapterDispatcher<
    ::v1::org::genivi::am::routinginterface::RoutingControlStub,
    RoutingControlStubAdapter,
 std::tuple<>,
    std::tuple<>
    > unsubscribeAckSetSourceStateSelectiveStubDispatcher;


 protected:
    virtual const char* getMethodsDBusIntrospectionXmlData() const;

 private:
    RoutingControlDBusStubAdapterHelper::StubDispatcherTable stubDispatcherTable_;
    CommonAPI::DBus::StubAttributeTable stubAttributeTable_;
};

class RoutingControlDBusStubAdapter
    : public RoutingControlDBusStubAdapterInternal,
      public std::enable_shared_from_this<RoutingControlDBusStubAdapter> {
public:
    RoutingControlDBusStubAdapter(
    	const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub)
    	: CommonAPI::DBus::DBusStubAdapter(
    		_address, 
    		_connection,
            false),
          RoutingControlDBusStubAdapterInternal(
          	_address, 
          	_connection, 
          	_stub) { 
    }
};

} // namespace routinginterface
} // namespace am
} // namespace genivi
} // namespace org
} // namespace v1

#endif // V1_ORG_GENIVI_AM_ROUTINGINTERFACE_Routing_Control_DBUS_STUB_ADAPTER_HPP_
