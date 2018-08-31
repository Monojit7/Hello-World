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
#include <v1/org/genivi/am/routinginterface/RoutingControlDBusProxy.hpp>

namespace v1 {
namespace org {
namespace genivi {
namespace am {
namespace routinginterface {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createRoutingControlDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection) {
	return std::make_shared<RoutingControlDBusProxy>(_address, _connection);
}

INITIALIZER(registerRoutingControlDBusProxy) {
     CommonAPI::DBus::Factory::get()->registerProxyCreateMethod(
		RoutingControl::getInterface(),
		&createRoutingControlDBusProxy);
}

RoutingControlDBusProxy::RoutingControlDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection)
	:	CommonAPI::DBus::DBusProxy(_address, _connection)
,		ackSetSourceStateSelective_(*this, "ackSetSourceState", "(iq)i", std::make_tuple(static_cast<::v3::org::genivi::am_t_::am_Handle_sDeployment_t*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr)))
{
}


RoutingControlDBusProxy::AckSetSourceStateSelectiveEvent& RoutingControlDBusProxy::getAckSetSourceStateSelectiveEvent() {
    return ackSetSourceStateSelective_;
}
    
    /**
     * description: This function is used to set the source state of a particular
     *   source.
    (at)return E_OK on success, E_UNKNOWN on error
     */
    void RoutingControlDBusProxy::asyncSetSourceState(const ::v3::org::genivi::am_t::am_Handle_s &_handle, const ::v3::org::genivi::am_t::am_sourceID_t &_sourceID, const ::v3::org::genivi::am_t::am_SourceState_e &_state, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v3::org::genivi::am_t::am_Handle_s, ::v3::org::genivi::am_t_::am_Handle_sDeployment_t> deploy_handle(_handle, static_cast<::v3::org::genivi::am_t_::am_Handle_sDeployment_t*>(nullptr));
        CommonAPI::Deployable<::v3::org::genivi::am_t::am_sourceID_t, CommonAPI::EmptyDeployment> deploy_sourceID(_sourceID, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v3::org::genivi::am_t::am_SourceState_e, CommonAPI::EmptyDeployment> deploy_state(_state, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v3::org::genivi::am_t::am_Handle_s, ::v3::org::genivi::am_t_::am_Handle_sDeployment_t >,
            CommonAPI::Deployable<::v3::org::genivi::am_t::am_sourceID_t, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable<::v3::org::genivi::am_t::am_SourceState_e, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
        	>::callMethodWithReply(
        *this,
        "asyncSetSourceState",
        "(iq)qi",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_handle, deploy_sourceID, deploy_state,
_internalCallStatus);
}
    std::future<CommonAPI::CallStatus> RoutingControlDBusProxy::asyncSetSourceStateAsync(const ::v3::org::genivi::am_t::am_Handle_s &_handle, const ::v3::org::genivi::am_t::am_sourceID_t &_sourceID, const ::v3::org::genivi::am_t::am_SourceState_e &_state, AsyncSetSourceStateAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v3::org::genivi::am_t::am_Handle_s, ::v3::org::genivi::am_t_::am_Handle_sDeployment_t> deploy_handle(_handle, static_cast<::v3::org::genivi::am_t_::am_Handle_sDeployment_t*>(nullptr));
        CommonAPI::Deployable<::v3::org::genivi::am_t::am_sourceID_t, CommonAPI::EmptyDeployment> deploy_sourceID(_sourceID, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v3::org::genivi::am_t::am_SourceState_e, CommonAPI::EmptyDeployment> deploy_state(_state, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v3::org::genivi::am_t::am_Handle_s, ::v3::org::genivi::am_t_::am_Handle_sDeployment_t >,
            CommonAPI::Deployable<::v3::org::genivi::am_t::am_sourceID_t, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable<::v3::org::genivi::am_t::am_SourceState_e, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
        	>::callMethodAsync(
        *this,
        "asyncSetSourceState",
        "(iq)qi",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_handle, deploy_sourceID, deploy_state,
        [_callback] (CommonAPI::CallStatus _internalCallStatus) {
        	if (_callback)
        		_callback(_internalCallStatus);
        },
        std::make_tuple());
    }


void RoutingControlDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
          ownVersionMajor = 1;
          ownVersionMinor = 1;
      }

      } // namespace routinginterface
      } // namespace am
      } // namespace genivi
      } // namespace org
      } // namespace v1