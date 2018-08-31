/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/
/**
 * author: EGMG_Tuner
 */
#include <v2/IVIRadio/Configuration/ConfigurationDBusProxy.hpp>

namespace v2 {
namespace IVIRadio {
namespace Configuration {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createConfigurationDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection) {
	return std::make_shared<ConfigurationDBusProxy>(_address, _connection);
}

INITIALIZER(registerConfigurationDBusProxy) {
     CommonAPI::DBus::Factory::get()->registerProxyCreateMethod(
		Configuration::getInterface(),
		&createConfigurationDBusProxy);
}

ConfigurationDBusProxy::ConfigurationDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection)
	:	CommonAPI::DBus::DBusProxy(_address, _connection)
,		functionalityConfiguration_(*this, "functionalityConfiguration", "aia(yv)ui", std::make_tuple(static_cast<::v2::IVIRadio::Configuration::ConfigurationTypesEnum_::FunctionalityTypesDeployment_t*>(nullptr), static_cast<::v2::IVIRadio::Configuration::ConfigurationOptions_::FuntionalityOptionsDeployment_t*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr)))
{
}


ConfigurationDBusProxy::FunctionalityConfigurationEvent& ConfigurationDBusProxy::getFunctionalityConfigurationEvent() {
    return functionalityConfiguration_;
}
    
    /**
     * description: change configuration of a basic functionalites like following or smart favorite
     *   options. it is possible to set more then one configuration at a time by adding
     *   multiple functionality types and configuration to the arrays
     */
    void ConfigurationDBusProxy::changeFunctionalityConfiguration(const ::v2::IVIRadio::Configuration::ConfigurationTypesEnum::FunctionalityTypes &_functionalityTypes, const ::v2::IVIRadio::Configuration::ConfigurationOptions::FuntionalityOptions &_functionalityOptionsSet, const uint32_t &_handle, CommonAPI::CallStatus &_internalCallStatus, uint32_t &_handleOut, ::v2::IVIRadio::Types::Types::Feedback &_feedback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v2::IVIRadio::Configuration::ConfigurationTypesEnum::FunctionalityTypes, ::v2::IVIRadio::Configuration::ConfigurationTypesEnum_::FunctionalityTypesDeployment_t> deploy_functionalityTypes(_functionalityTypes, static_cast<::v2::IVIRadio::Configuration::ConfigurationTypesEnum_::FunctionalityTypesDeployment_t*>(nullptr));
        CommonAPI::Deployable<::v2::IVIRadio::Configuration::ConfigurationOptions::FuntionalityOptions, ::v2::IVIRadio::Configuration::ConfigurationOptions_::FuntionalityOptionsDeployment_t> deploy_functionalityOptionsSet(_functionalityOptionsSet, static_cast<::v2::IVIRadio::Configuration::ConfigurationOptions_::FuntionalityOptionsDeployment_t*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_handle(_handle, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_handleOut(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v2::IVIRadio::Types::Types::Feedback, CommonAPI::EmptyDeployment> deploy_feedback(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v2::IVIRadio::Configuration::ConfigurationTypesEnum::FunctionalityTypes, ::v2::IVIRadio::Configuration::ConfigurationTypesEnum_::FunctionalityTypesDeployment_t >,
            CommonAPI::Deployable<::v2::IVIRadio::Configuration::ConfigurationOptions::FuntionalityOptions, ::v2::IVIRadio::Configuration::ConfigurationOptions_::FuntionalityOptionsDeployment_t >,
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<uint32_t,CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<::v2::IVIRadio::Types::Types::Feedback,CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "changeFunctionalityConfiguration",
        "aia(yv)u",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_functionalityTypes, deploy_functionalityOptionsSet, deploy_handle,
_internalCallStatus,
deploy_handleOut, deploy_feedback);
_handleOut = deploy_handleOut.getValue();
_feedback = deploy_feedback.getValue();
}
    std::future<CommonAPI::CallStatus> ConfigurationDBusProxy::changeFunctionalityConfigurationAsync(const ::v2::IVIRadio::Configuration::ConfigurationTypesEnum::FunctionalityTypes &_functionalityTypes, const ::v2::IVIRadio::Configuration::ConfigurationOptions::FuntionalityOptions &_functionalityOptionsSet, const uint32_t &_handle, ChangeFunctionalityConfigurationAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v2::IVIRadio::Configuration::ConfigurationTypesEnum::FunctionalityTypes, ::v2::IVIRadio::Configuration::ConfigurationTypesEnum_::FunctionalityTypesDeployment_t> deploy_functionalityTypes(_functionalityTypes, static_cast<::v2::IVIRadio::Configuration::ConfigurationTypesEnum_::FunctionalityTypesDeployment_t*>(nullptr));
        CommonAPI::Deployable<::v2::IVIRadio::Configuration::ConfigurationOptions::FuntionalityOptions, ::v2::IVIRadio::Configuration::ConfigurationOptions_::FuntionalityOptionsDeployment_t> deploy_functionalityOptionsSet(_functionalityOptionsSet, static_cast<::v2::IVIRadio::Configuration::ConfigurationOptions_::FuntionalityOptionsDeployment_t*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_handle(_handle, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_handleOut(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v2::IVIRadio::Types::Types::Feedback, CommonAPI::EmptyDeployment> deploy_feedback(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v2::IVIRadio::Configuration::ConfigurationTypesEnum::FunctionalityTypes, ::v2::IVIRadio::Configuration::ConfigurationTypesEnum_::FunctionalityTypesDeployment_t >,
            CommonAPI::Deployable<::v2::IVIRadio::Configuration::ConfigurationOptions::FuntionalityOptions, ::v2::IVIRadio::Configuration::ConfigurationOptions_::FuntionalityOptionsDeployment_t >,
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<uint32_t,CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<::v2::IVIRadio::Types::Types::Feedback,CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "changeFunctionalityConfiguration",
        "aia(yv)u",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_functionalityTypes, deploy_functionalityOptionsSet, deploy_handle,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> _handleOut, CommonAPI::Deployable<::v2::IVIRadio::Types::Types::Feedback, CommonAPI::EmptyDeployment> _feedback) {
        	if (_callback)
        		_callback(_internalCallStatus, _handleOut.getValue(), _feedback.getValue());
        },
        std::make_tuple(deploy_handleOut, deploy_feedback));
    }
    /**
     * description: request configuration of basic functionalities like following or conditional
     *   access. it is possible to request more than one configuration at a time by
     *   adding multiple functionality types and get options to the arrays
     */
    void ConfigurationDBusProxy::requestFunctionalityConfiguration(const ::v2::IVIRadio::Configuration::ConfigurationTypesEnum::FunctionalityTypes &_functionalityTypes, const ::v2::IVIRadio::Configuration::ConfigurationOptionsGetter::FuntionalityOptionsGet &_functionalityOptionsGet, const uint32_t &_handle, CommonAPI::CallStatus &_internalCallStatus, uint32_t &_handle_out, ::v2::IVIRadio::Types::Types::Feedback &_feedback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v2::IVIRadio::Configuration::ConfigurationTypesEnum::FunctionalityTypes, ::v2::IVIRadio::Configuration::ConfigurationTypesEnum_::FunctionalityTypesDeployment_t> deploy_functionalityTypes(_functionalityTypes, static_cast<::v2::IVIRadio::Configuration::ConfigurationTypesEnum_::FunctionalityTypesDeployment_t*>(nullptr));
        CommonAPI::Deployable<::v2::IVIRadio::Configuration::ConfigurationOptionsGetter::FuntionalityOptionsGet, ::v2::IVIRadio::Configuration::ConfigurationOptionsGetter_::FuntionalityOptionsGetDeployment_t> deploy_functionalityOptionsGet(_functionalityOptionsGet, static_cast<::v2::IVIRadio::Configuration::ConfigurationOptionsGetter_::FuntionalityOptionsGetDeployment_t*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_handle(_handle, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_handle_out(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v2::IVIRadio::Types::Types::Feedback, CommonAPI::EmptyDeployment> deploy_feedback(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v2::IVIRadio::Configuration::ConfigurationTypesEnum::FunctionalityTypes, ::v2::IVIRadio::Configuration::ConfigurationTypesEnum_::FunctionalityTypesDeployment_t >,
            CommonAPI::Deployable<::v2::IVIRadio::Configuration::ConfigurationOptionsGetter::FuntionalityOptionsGet, ::v2::IVIRadio::Configuration::ConfigurationOptionsGetter_::FuntionalityOptionsGetDeployment_t >,
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<uint32_t,CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<::v2::IVIRadio::Types::Types::Feedback,CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "requestFunctionalityConfiguration",
        "aia(yv)u",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_functionalityTypes, deploy_functionalityOptionsGet, deploy_handle,
_internalCallStatus,
deploy_handle_out, deploy_feedback);
_handle_out = deploy_handle_out.getValue();
_feedback = deploy_feedback.getValue();
}
    std::future<CommonAPI::CallStatus> ConfigurationDBusProxy::requestFunctionalityConfigurationAsync(const ::v2::IVIRadio::Configuration::ConfigurationTypesEnum::FunctionalityTypes &_functionalityTypes, const ::v2::IVIRadio::Configuration::ConfigurationOptionsGetter::FuntionalityOptionsGet &_functionalityOptionsGet, const uint32_t &_handle, RequestFunctionalityConfigurationAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v2::IVIRadio::Configuration::ConfigurationTypesEnum::FunctionalityTypes, ::v2::IVIRadio::Configuration::ConfigurationTypesEnum_::FunctionalityTypesDeployment_t> deploy_functionalityTypes(_functionalityTypes, static_cast<::v2::IVIRadio::Configuration::ConfigurationTypesEnum_::FunctionalityTypesDeployment_t*>(nullptr));
        CommonAPI::Deployable<::v2::IVIRadio::Configuration::ConfigurationOptionsGetter::FuntionalityOptionsGet, ::v2::IVIRadio::Configuration::ConfigurationOptionsGetter_::FuntionalityOptionsGetDeployment_t> deploy_functionalityOptionsGet(_functionalityOptionsGet, static_cast<::v2::IVIRadio::Configuration::ConfigurationOptionsGetter_::FuntionalityOptionsGetDeployment_t*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_handle(_handle, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_handle_out(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v2::IVIRadio::Types::Types::Feedback, CommonAPI::EmptyDeployment> deploy_feedback(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v2::IVIRadio::Configuration::ConfigurationTypesEnum::FunctionalityTypes, ::v2::IVIRadio::Configuration::ConfigurationTypesEnum_::FunctionalityTypesDeployment_t >,
            CommonAPI::Deployable<::v2::IVIRadio::Configuration::ConfigurationOptionsGetter::FuntionalityOptionsGet, ::v2::IVIRadio::Configuration::ConfigurationOptionsGetter_::FuntionalityOptionsGetDeployment_t >,
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<uint32_t,CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<::v2::IVIRadio::Types::Types::Feedback,CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "requestFunctionalityConfiguration",
        "aia(yv)u",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_functionalityTypes, deploy_functionalityOptionsGet, deploy_handle,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> _handle_out, CommonAPI::Deployable<::v2::IVIRadio::Types::Types::Feedback, CommonAPI::EmptyDeployment> _feedback) {
        	if (_callback)
        		_callback(_internalCallStatus, _handle_out.getValue(), _feedback.getValue());
        },
        std::make_tuple(deploy_handle_out, deploy_feedback));
    }


void ConfigurationDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
          ownVersionMajor = 2;
          ownVersionMinor = 1;
      }

      } // namespace Configuration
      } // namespace IVIRadio
      } // namespace v2
