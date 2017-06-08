/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus .
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v1/com/harman/hmiDialogueService/hmiDialogueServiceInterfaceDBusProxy.hpp>

namespace v1 {
namespace com {
namespace harman {
namespace hmiDialogueService {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createhmiDialogueServiceInterfaceDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection) {
	return std::make_shared<hmiDialogueServiceInterfaceDBusProxy>(_address, _connection);
}

INITIALIZER(registerhmiDialogueServiceInterfaceDBusProxy) {
     CommonAPI::DBus::Factory::get()->registerProxyCreateMethod(
		hmiDialogueServiceInterface::getInterface(),
		&createhmiDialogueServiceInterfaceDBusProxy);
}

hmiDialogueServiceInterfaceDBusProxy::hmiDialogueServiceInterfaceDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection)
	:	CommonAPI::DBus::DBusProxy(_address, _connection)
,		event_AlertStatus_(*this, "event_AlertStatus", "(sbi)", std::make_tuple(static_cast<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::StatusDialogueDeployment_t*>(nullptr))),
		event_BandONSStatus_(*this, "event_BandONSStatus", "(sbi)", std::make_tuple(static_cast<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::StatusDialogueDeployment_t*>(nullptr))),
		event_alertButtonInteraction_(*this, "event_alertButtonInteraction", "(susi)", std::make_tuple(static_cast<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::ButtonInteractionDeployment_t*>(nullptr))),
		event_alertSpecialButtonInteraction_(*this, "event_alertSpecialButtonInteraction", "((susi)bi)", std::make_tuple(static_cast<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::SpecialButtonInteractionDeployment_t*>(nullptr)))
{
}


hmiDialogueServiceInterfaceDBusProxy::Event_AlertStatusEvent& hmiDialogueServiceInterfaceDBusProxy::getEvent_AlertStatusEvent() {
    return event_AlertStatus_;
}
hmiDialogueServiceInterfaceDBusProxy::Event_BandONSStatusEvent& hmiDialogueServiceInterfaceDBusProxy::getEvent_BandONSStatusEvent() {
    return event_BandONSStatus_;
}
hmiDialogueServiceInterfaceDBusProxy::Event_alertButtonInteractionEvent& hmiDialogueServiceInterfaceDBusProxy::getEvent_alertButtonInteractionEvent() {
    return event_alertButtonInteraction_;
}
hmiDialogueServiceInterfaceDBusProxy::Event_alertSpecialButtonInteractionEvent& hmiDialogueServiceInterfaceDBusProxy::getEvent_alertSpecialButtonInteractionEvent() {
    return event_alertSpecialButtonInteraction_;
}
    
    /**
     * description: Requests for an Alert to be shown, updated, or hidden from the user
     * param: request (RequestDialogueAlert) : values used to direct the Alert, including
     *   showing or hiding it
            
            returns: response
     *   (RequestDialogueResponse) : indication of success or failure
     */
    void hmiDialogueServiceInterfaceDBusProxy::request_alert(const ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueAlert &_request, CommonAPI::CallStatus &_internalCallStatus, ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueResponse &_response, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueAlert, ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueAlertDeployment_t> deploy_request(_request, static_cast<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueAlertDeployment_t*>(nullptr));
        CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueResponse, ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueResponseDeployment_t> deploy_response(static_cast<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueResponseDeployment_t*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueAlert, ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueAlertDeployment_t >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueResponse,::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueResponseDeployment_t>
            >
        	>::callMethodWithReply(
        *this,
        "request_alert",
        "(sbsasbbia(suubbii(is))ub)",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_request,
_internalCallStatus,
deploy_response);
_response = deploy_response.getValue();
}
    std::future<CommonAPI::CallStatus> hmiDialogueServiceInterfaceDBusProxy::request_alertAsync(const ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueAlert &_request, Request_alertAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueAlert, ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueAlertDeployment_t> deploy_request(_request, static_cast<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueAlertDeployment_t*>(nullptr));
        CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueResponse, ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueResponseDeployment_t> deploy_response(static_cast<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueResponseDeployment_t*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueAlert, ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueAlertDeployment_t >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueResponse,::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueResponseDeployment_t>
            >
        	>::callMethodAsync(
        *this,
        "request_alert",
        "(sbsasbbia(suubbii(is))ub)",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_request,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueResponse, ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueResponseDeployment_t> _response) {
        	if (_callback)
        		_callback(_internalCallStatus, _response.getValue());
        },
        std::make_tuple(deploy_response));
    }
    /**
     * description: Requests for an Alert to be shown, updated, or hidden from the user with
     *   special buttons along with other basic button and properties
     * param: request (RequestDialogueAlertWithSpecialButton) : values used to direct the
     *   Alert
            
            returns: response (RequestDialogueResponse) :
     *   indication of success or failure
     */
    void hmiDialogueServiceInterfaceDBusProxy::request_special_alert(const ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueSpecialAlert &_request, CommonAPI::CallStatus &_internalCallStatus, ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueResponse &_response, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueSpecialAlert, ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueSpecialAlertDeployment_t> deploy_request(_request, static_cast<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueSpecialAlertDeployment_t*>(nullptr));
        CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueResponse, ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueResponseDeployment_t> deploy_response(static_cast<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueResponseDeployment_t*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueSpecialAlert, ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueSpecialAlertDeployment_t >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueResponse,::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueResponseDeployment_t>
            >
        	>::callMethodWithReply(
        *this,
        "request_special_alert",
        "((sbsasbbia(suubbii(is))ub)(bis)a(isubuubbib))",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_request,
_internalCallStatus,
deploy_response);
_response = deploy_response.getValue();
}
    std::future<CommonAPI::CallStatus> hmiDialogueServiceInterfaceDBusProxy::request_special_alertAsync(const ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueSpecialAlert &_request, Request_special_alertAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueSpecialAlert, ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueSpecialAlertDeployment_t> deploy_request(_request, static_cast<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueSpecialAlertDeployment_t*>(nullptr));
        CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueResponse, ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueResponseDeployment_t> deploy_response(static_cast<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueResponseDeployment_t*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueSpecialAlert, ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueSpecialAlertDeployment_t >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueResponse,::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueResponseDeployment_t>
            >
        	>::callMethodAsync(
        *this,
        "request_special_alert",
        "((sbsasbbia(suubbii(is))ub)(bis)a(isubuubbib))",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_request,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueResponse, ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueResponseDeployment_t> _response) {
        	if (_callback)
        		_callback(_internalCallStatus, _response.getValue());
        },
        std::make_tuple(deploy_response));
    }
    /**
     * description: Requests for a BandONS to be shown, updated, or hidden from the user
     * param: request (RequestDialogueBandONS) : values used to direct the BandONS, including
     *   showing or hiding it
            
            returns: response
     *   (RequestDialogueResponse) : indication of success or failure
     */
    void hmiDialogueServiceInterfaceDBusProxy::request_bandONS(const ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueBandONS &_request, CommonAPI::CallStatus &_internalCallStatus, ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueResponse &_response, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueBandONS, ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueBandONSDeployment_t> deploy_request(_request, static_cast<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueBandONSDeployment_t*>(nullptr));
        CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueResponse, ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueResponseDeployment_t> deploy_response(static_cast<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueResponseDeployment_t*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueBandONS, ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueBandONSDeployment_t >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueResponse,::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueResponseDeployment_t>
            >
        	>::callMethodWithReply(
        *this,
        "request_bandONS",
        "(ssbu)",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_request,
_internalCallStatus,
deploy_response);
_response = deploy_response.getValue();
}
    std::future<CommonAPI::CallStatus> hmiDialogueServiceInterfaceDBusProxy::request_bandONSAsync(const ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueBandONS &_request, Request_bandONSAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueBandONS, ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueBandONSDeployment_t> deploy_request(_request, static_cast<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueBandONSDeployment_t*>(nullptr));
        CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueResponse, ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueResponseDeployment_t> deploy_response(static_cast<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueResponseDeployment_t*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueBandONS, ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueBandONSDeployment_t >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueResponse,::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueResponseDeployment_t>
            >
        	>::callMethodAsync(
        *this,
        "request_bandONS",
        "(ssbu)",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_request,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::RequestDialogueResponse, ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes_::RequestDialogueResponseDeployment_t> _response) {
        	if (_callback)
        		_callback(_internalCallStatus, _response.getValue());
        },
        std::make_tuple(deploy_response));
    }
    /**
     * description: Request to destroy an existing Alert. This will destroy the alert under given
     *   context permanently.
     * param: AlertContext : context to identify the alert to be destroyed
            
           
     *   returns: DialogueResponseCode : indication of success or failure
     */
    void hmiDialogueServiceInterfaceDBusProxy::Remove_alert(const std::string &_AlertContext, CommonAPI::CallStatus &_internalCallStatus, ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::DialogueResponseCode &_code, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_AlertContext(_AlertContext, static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::DialogueResponseCode, CommonAPI::EmptyDeployment> deploy_code(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::DialogueResponseCode,CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "Remove_alert",
        "s",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_AlertContext,
_internalCallStatus,
deploy_code);
_code = deploy_code.getValue();
}
    std::future<CommonAPI::CallStatus> hmiDialogueServiceInterfaceDBusProxy::Remove_alertAsync(const std::string &_AlertContext, Remove_alertAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_AlertContext(_AlertContext, static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::DialogueResponseCode, CommonAPI::EmptyDeployment> deploy_code(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::DialogueResponseCode,CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "Remove_alert",
        "s",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_AlertContext,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::DialogueResponseCode, CommonAPI::EmptyDeployment> _code) {
        	if (_callback)
        		_callback(_internalCallStatus, _code.getValue());
        },
        std::make_tuple(deploy_code));
    }
    /**
     * description: Request to destroy an existing BandONS. This will destroy the BandONS under
     *   given context permanently.
     * param: BandONSContext : context to identify the BandONS to be destroyed
            
         
     *     returns: DialogueResponseCode : indication of success or failure
     */
    void hmiDialogueServiceInterfaceDBusProxy::Remove_BandONS(const std::string &_BandONSContext, CommonAPI::CallStatus &_internalCallStatus, ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::DialogueResponseCode &_code, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_BandONSContext(_BandONSContext, static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::DialogueResponseCode, CommonAPI::EmptyDeployment> deploy_code(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::DialogueResponseCode,CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "Remove_BandONS",
        "s",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_BandONSContext,
_internalCallStatus,
deploy_code);
_code = deploy_code.getValue();
}
    std::future<CommonAPI::CallStatus> hmiDialogueServiceInterfaceDBusProxy::Remove_BandONSAsync(const std::string &_BandONSContext, Remove_BandONSAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_BandONSContext(_BandONSContext, static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::DialogueResponseCode, CommonAPI::EmptyDeployment> deploy_code(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::DialogueResponseCode,CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "Remove_BandONS",
        "s",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_BandONSContext,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::DialogueResponseCode, CommonAPI::EmptyDeployment> _code) {
        	if (_callback)
        		_callback(_internalCallStatus, _code.getValue());
        },
        std::make_tuple(deploy_code));
    }
    /**
     * description: Request to provide status of an existing Alert.
     * param: AlertContext : context to identify the alert 
            
            returns:
     *   DialogueResponseCode : indication of success or failure
     */
    void hmiDialogueServiceInterfaceDBusProxy::status_alert(const std::string &_AlertContext, CommonAPI::CallStatus &_internalCallStatus, ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::DialogueResponseCode &_code, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_AlertContext(_AlertContext, static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::DialogueResponseCode, CommonAPI::EmptyDeployment> deploy_code(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::DialogueResponseCode,CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "status_alert",
        "s",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_AlertContext,
_internalCallStatus,
deploy_code);
_code = deploy_code.getValue();
}
    std::future<CommonAPI::CallStatus> hmiDialogueServiceInterfaceDBusProxy::status_alertAsync(const std::string &_AlertContext, Status_alertAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_AlertContext(_AlertContext, static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::DialogueResponseCode, CommonAPI::EmptyDeployment> deploy_code(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::DialogueResponseCode,CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "status_alert",
        "s",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_AlertContext,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::DialogueResponseCode, CommonAPI::EmptyDeployment> _code) {
        	if (_callback)
        		_callback(_internalCallStatus, _code.getValue());
        },
        std::make_tuple(deploy_code));
    }
    /**
     * description: Request to provide status of an existing BandONS.
     * param: BandONSContext : context to identify the BandONS
            
            returns:
     *   DialogueResponseCode : indication of success or failure
     */
    void hmiDialogueServiceInterfaceDBusProxy::status_BandONS(const std::string &_BandONSContext, CommonAPI::CallStatus &_internalCallStatus, ::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::DialogueResponseCode &_code, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_BandONSContext(_BandONSContext, static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::DialogueResponseCode, CommonAPI::EmptyDeployment> deploy_code(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::DialogueResponseCode,CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "status_BandONS",
        "s",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_BandONSContext,
_internalCallStatus,
deploy_code);
_code = deploy_code.getValue();
}
    std::future<CommonAPI::CallStatus> hmiDialogueServiceInterfaceDBusProxy::status_BandONSAsync(const std::string &_BandONSContext, Status_BandONSAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_BandONSContext(_BandONSContext, static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::DialogueResponseCode, CommonAPI::EmptyDeployment> deploy_code(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::DialogueResponseCode,CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "status_BandONS",
        "s",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_BandONSContext,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<::com::harman::hmiDialogueServiceTypes::hmiDialogueServiceTypes::DialogueResponseCode, CommonAPI::EmptyDeployment> _code) {
        	if (_callback)
        		_callback(_internalCallStatus, _code.getValue());
        },
        std::make_tuple(deploy_code));
    }


void hmiDialogueServiceInterfaceDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
          ownVersionMajor = 1;
          ownVersionMinor = 1;
      }

      } // namespace hmiDialogueService
      } // namespace harman
      } // namespace com
      } // namespace v1