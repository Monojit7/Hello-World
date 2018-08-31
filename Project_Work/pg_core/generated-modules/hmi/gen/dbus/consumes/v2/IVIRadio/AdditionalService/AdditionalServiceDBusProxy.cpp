/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/
/**
 * description: Tuner generic and project independent interface for additional services. This
 *   interface provides functions to request data services and to configure them.
 *   Other services like announcements can also be configured.
 * author: EGMG_Tuner
 */
#include <v2/IVIRadio/AdditionalService/AdditionalServiceDBusProxy.hpp>

namespace v2 {
namespace IVIRadio {
namespace AdditionalService {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createAdditionalServiceDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection) {
	return std::make_shared<AdditionalServiceDBusProxy>(_address, _connection);
}

INITIALIZER(registerAdditionalServiceDBusProxy) {
     CommonAPI::DBus::Factory::get()->registerProxyCreateMethod(
		AdditionalService::getInterface(),
		&createAdditionalServiceDBusProxy);
}

AdditionalServiceDBusProxy::AdditionalServiceDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection)
	:	CommonAPI::DBus::DBusProxy(_address, _connection)
,		data_(*this, "Data", "a(uau)i(iu)(yv)ii(yv)ui", std::make_tuple(static_cast<::v2::IVIRadio::Types::Types_::StationSelectorsDeployment_t*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions_::UnifiedServiceOptionDeployment_t*>(nullptr), static_cast<::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions_::DataServiceOptionDeployment_t*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<::v2::IVIRadio::AdditionalService::AdditionalServiceTypes_::DataDeployment_t*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr))),
		announcement_(*this, "Announcement", "a(uau)a(iiu)aaiui", std::make_tuple(static_cast<::v2::IVIRadio::Types::Types_::StationSelectorsDeployment_t*>(nullptr), static_cast<::v2::IVIRadio::AdditionalService::AdditionalServiceTypes_::AnnouncementConfigurationsDeployment_t*>(nullptr), static_cast<::v2::IVIRadio::AdditionalService::AdditionalServiceTypes_::arrayAnnouncementStatesDeployment_t*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr))),
		announcementFinished_(*this, "AnnouncementFinished", "((uau)i)ui", std::make_tuple(static_cast<::v2::IVIRadio::AdditionalService::AdditionalServiceTypes_::AnnouncementDeployment_t*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr))),
		subscribedServiceOptions_(*this, "SubscribedServiceOptions", "iaa(uau)a(iu)a(yv)ui", std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<::v2::IVIRadio::Types::Types_::arrayStationSelectorsDeployment_t*>(nullptr), static_cast<::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions_::UnifiedServiceOptionsDeployment_t*>(nullptr), static_cast<::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions_::DataServiceOptionsDeployment_t*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr)))
{
}


AdditionalServiceDBusProxy::DataEvent& AdditionalServiceDBusProxy::getDataEvent() {
    return data_;
}
AdditionalServiceDBusProxy::AnnouncementEvent& AdditionalServiceDBusProxy::getAnnouncementEvent() {
    return announcement_;
}
AdditionalServiceDBusProxy::AnnouncementFinishedEvent& AdditionalServiceDBusProxy::getAnnouncementFinishedEvent() {
    return announcementFinished_;
}
AdditionalServiceDBusProxy::SubscribedServiceOptionsEvent& AdditionalServiceDBusProxy::getSubscribedServiceOptionsEvent() {
    return subscribedServiceOptions_;
}
    
    /**
     * description: Function to request data from one or many stations for a specific data service.
     *   It is possible to configure the request by the DataServiceOption parameter.
     */
    void AdditionalServiceDBusProxy::requestDataService(const ::v2::IVIRadio::AdditionalService::AdditionalServiceTypes::DataService &_dataService, const ::v2::IVIRadio::Types::Types::StationSelectors &_selectors, const ::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions::UnifiedServiceOption &_unifiedOptions, const ::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions::DataServiceOption &_serviceOptions, const uint32_t &_handle, CommonAPI::CallStatus &_internalCallStatus, uint32_t &_handleOut, ::v2::IVIRadio::Types::Types::Feedback &_feedback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v2::IVIRadio::AdditionalService::AdditionalServiceTypes::DataService, CommonAPI::EmptyDeployment> deploy_dataService(_dataService, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v2::IVIRadio::Types::Types::StationSelectors, ::v2::IVIRadio::Types::Types_::StationSelectorsDeployment_t> deploy_selectors(_selectors, static_cast<::v2::IVIRadio::Types::Types_::StationSelectorsDeployment_t*>(nullptr));
        CommonAPI::Deployable<::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions::UnifiedServiceOption, ::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions_::UnifiedServiceOptionDeployment_t> deploy_unifiedOptions(_unifiedOptions, static_cast<::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions_::UnifiedServiceOptionDeployment_t*>(nullptr));
        CommonAPI::Deployable<::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions::DataServiceOption, ::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions_::DataServiceOptionDeployment_t> deploy_serviceOptions(_serviceOptions, static_cast<::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions_::DataServiceOptionDeployment_t*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_handle(_handle, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_handleOut(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v2::IVIRadio::Types::Types::Feedback, CommonAPI::EmptyDeployment> deploy_feedback(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v2::IVIRadio::AdditionalService::AdditionalServiceTypes::DataService, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable<::v2::IVIRadio::Types::Types::StationSelectors, ::v2::IVIRadio::Types::Types_::StationSelectorsDeployment_t >,
            CommonAPI::Deployable<::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions::UnifiedServiceOption, ::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions_::UnifiedServiceOptionDeployment_t >,
            CommonAPI::Deployable<::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions::DataServiceOption, ::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions_::DataServiceOptionDeployment_t >,
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<uint32_t,CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<::v2::IVIRadio::Types::Types::Feedback,CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "requestDataService",
        "ia(uau)(iu)(yv)u",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_dataService, deploy_selectors, deploy_unifiedOptions, deploy_serviceOptions, deploy_handle,
_internalCallStatus,
deploy_handleOut, deploy_feedback);
_handleOut = deploy_handleOut.getValue();
_feedback = deploy_feedback.getValue();
}
    std::future<CommonAPI::CallStatus> AdditionalServiceDBusProxy::requestDataServiceAsync(const ::v2::IVIRadio::AdditionalService::AdditionalServiceTypes::DataService &_dataService, const ::v2::IVIRadio::Types::Types::StationSelectors &_selectors, const ::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions::UnifiedServiceOption &_unifiedOptions, const ::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions::DataServiceOption &_serviceOptions, const uint32_t &_handle, RequestDataServiceAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v2::IVIRadio::AdditionalService::AdditionalServiceTypes::DataService, CommonAPI::EmptyDeployment> deploy_dataService(_dataService, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v2::IVIRadio::Types::Types::StationSelectors, ::v2::IVIRadio::Types::Types_::StationSelectorsDeployment_t> deploy_selectors(_selectors, static_cast<::v2::IVIRadio::Types::Types_::StationSelectorsDeployment_t*>(nullptr));
        CommonAPI::Deployable<::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions::UnifiedServiceOption, ::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions_::UnifiedServiceOptionDeployment_t> deploy_unifiedOptions(_unifiedOptions, static_cast<::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions_::UnifiedServiceOptionDeployment_t*>(nullptr));
        CommonAPI::Deployable<::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions::DataServiceOption, ::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions_::DataServiceOptionDeployment_t> deploy_serviceOptions(_serviceOptions, static_cast<::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions_::DataServiceOptionDeployment_t*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_handle(_handle, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_handleOut(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v2::IVIRadio::Types::Types::Feedback, CommonAPI::EmptyDeployment> deploy_feedback(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v2::IVIRadio::AdditionalService::AdditionalServiceTypes::DataService, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable<::v2::IVIRadio::Types::Types::StationSelectors, ::v2::IVIRadio::Types::Types_::StationSelectorsDeployment_t >,
            CommonAPI::Deployable<::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions::UnifiedServiceOption, ::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions_::UnifiedServiceOptionDeployment_t >,
            CommonAPI::Deployable<::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions::DataServiceOption, ::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions_::DataServiceOptionDeployment_t >,
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<uint32_t,CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<::v2::IVIRadio::Types::Types::Feedback,CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "requestDataService",
        "ia(uau)(iu)(yv)u",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_dataService, deploy_selectors, deploy_unifiedOptions, deploy_serviceOptions, deploy_handle,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> _handleOut, CommonAPI::Deployable<::v2::IVIRadio::Types::Types::Feedback, CommonAPI::EmptyDeployment> _feedback) {
        	if (_callback)
        		_callback(_internalCallStatus, _handleOut.getValue(), _feedback.getValue());
        },
        std::make_tuple(deploy_handleOut, deploy_feedback));
    }
    void AdditionalServiceDBusProxy::requestSubscribedServiceOptions(const ::v2::IVIRadio::AdditionalService::AdditionalServiceTypes::DataService &_dataservice, const uint32_t &_handle, CommonAPI::CallStatus &_internalCallStatus, uint32_t &_handleOut, ::v2::IVIRadio::Types::Types::Feedback &_feedback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v2::IVIRadio::AdditionalService::AdditionalServiceTypes::DataService, CommonAPI::EmptyDeployment> deploy_dataservice(_dataservice, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_handle(_handle, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_handleOut(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v2::IVIRadio::Types::Types::Feedback, CommonAPI::EmptyDeployment> deploy_feedback(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v2::IVIRadio::AdditionalService::AdditionalServiceTypes::DataService, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<uint32_t,CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<::v2::IVIRadio::Types::Types::Feedback,CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "requestSubscribedServiceOptions",
        "iu",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_dataservice, deploy_handle,
_internalCallStatus,
deploy_handleOut, deploy_feedback);
_handleOut = deploy_handleOut.getValue();
_feedback = deploy_feedback.getValue();
}
    std::future<CommonAPI::CallStatus> AdditionalServiceDBusProxy::requestSubscribedServiceOptionsAsync(const ::v2::IVIRadio::AdditionalService::AdditionalServiceTypes::DataService &_dataservice, const uint32_t &_handle, RequestSubscribedServiceOptionsAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v2::IVIRadio::AdditionalService::AdditionalServiceTypes::DataService, CommonAPI::EmptyDeployment> deploy_dataservice(_dataservice, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_handle(_handle, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_handleOut(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v2::IVIRadio::Types::Types::Feedback, CommonAPI::EmptyDeployment> deploy_feedback(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v2::IVIRadio::AdditionalService::AdditionalServiceTypes::DataService, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<uint32_t,CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<::v2::IVIRadio::Types::Types::Feedback,CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "requestSubscribedServiceOptions",
        "iu",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_dataservice, deploy_handle,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> _handleOut, CommonAPI::Deployable<::v2::IVIRadio::Types::Types::Feedback, CommonAPI::EmptyDeployment> _feedback) {
        	if (_callback)
        		_callback(_internalCallStatus, _handleOut.getValue(), _feedback.getValue());
        },
        std::make_tuple(deploy_handleOut, deploy_feedback));
    }
    /**
     * description: abort a currently active transmission of data
     */
    void AdditionalServiceDBusProxy::abort(const ::v2::IVIRadio::AdditionalService::AdditionalServiceTypes::DataService &_dataService, const ::v2::IVIRadio::Types::Types::StationSelectors &_stationSelectors, const ::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions::UnifiedServiceOption &_unifiedOptions, const ::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions::DataServiceOption &_dataServiceOption, const uint32_t &_handle, CommonAPI::CallStatus &_internalCallStatus, uint32_t &_handleOut, ::v2::IVIRadio::Types::Types::Feedback &_feedback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v2::IVIRadio::AdditionalService::AdditionalServiceTypes::DataService, CommonAPI::EmptyDeployment> deploy_dataService(_dataService, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v2::IVIRadio::Types::Types::StationSelectors, ::v2::IVIRadio::Types::Types_::StationSelectorsDeployment_t> deploy_stationSelectors(_stationSelectors, static_cast<::v2::IVIRadio::Types::Types_::StationSelectorsDeployment_t*>(nullptr));
        CommonAPI::Deployable<::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions::UnifiedServiceOption, ::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions_::UnifiedServiceOptionDeployment_t> deploy_unifiedOptions(_unifiedOptions, static_cast<::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions_::UnifiedServiceOptionDeployment_t*>(nullptr));
        CommonAPI::Deployable<::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions::DataServiceOption, ::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions_::DataServiceOptionDeployment_t> deploy_dataServiceOption(_dataServiceOption, static_cast<::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions_::DataServiceOptionDeployment_t*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_handle(_handle, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_handleOut(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v2::IVIRadio::Types::Types::Feedback, CommonAPI::EmptyDeployment> deploy_feedback(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v2::IVIRadio::AdditionalService::AdditionalServiceTypes::DataService, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable<::v2::IVIRadio::Types::Types::StationSelectors, ::v2::IVIRadio::Types::Types_::StationSelectorsDeployment_t >,
            CommonAPI::Deployable<::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions::UnifiedServiceOption, ::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions_::UnifiedServiceOptionDeployment_t >,
            CommonAPI::Deployable<::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions::DataServiceOption, ::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions_::DataServiceOptionDeployment_t >,
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<uint32_t,CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<::v2::IVIRadio::Types::Types::Feedback,CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "abort",
        "ia(uau)(iu)(yv)u",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_dataService, deploy_stationSelectors, deploy_unifiedOptions, deploy_dataServiceOption, deploy_handle,
_internalCallStatus,
deploy_handleOut, deploy_feedback);
_handleOut = deploy_handleOut.getValue();
_feedback = deploy_feedback.getValue();
}
    std::future<CommonAPI::CallStatus> AdditionalServiceDBusProxy::abortAsync(const ::v2::IVIRadio::AdditionalService::AdditionalServiceTypes::DataService &_dataService, const ::v2::IVIRadio::Types::Types::StationSelectors &_stationSelectors, const ::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions::UnifiedServiceOption &_unifiedOptions, const ::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions::DataServiceOption &_dataServiceOption, const uint32_t &_handle, AbortAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v2::IVIRadio::AdditionalService::AdditionalServiceTypes::DataService, CommonAPI::EmptyDeployment> deploy_dataService(_dataService, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v2::IVIRadio::Types::Types::StationSelectors, ::v2::IVIRadio::Types::Types_::StationSelectorsDeployment_t> deploy_stationSelectors(_stationSelectors, static_cast<::v2::IVIRadio::Types::Types_::StationSelectorsDeployment_t*>(nullptr));
        CommonAPI::Deployable<::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions::UnifiedServiceOption, ::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions_::UnifiedServiceOptionDeployment_t> deploy_unifiedOptions(_unifiedOptions, static_cast<::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions_::UnifiedServiceOptionDeployment_t*>(nullptr));
        CommonAPI::Deployable<::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions::DataServiceOption, ::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions_::DataServiceOptionDeployment_t> deploy_dataServiceOption(_dataServiceOption, static_cast<::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions_::DataServiceOptionDeployment_t*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_handle(_handle, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_handleOut(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v2::IVIRadio::Types::Types::Feedback, CommonAPI::EmptyDeployment> deploy_feedback(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v2::IVIRadio::AdditionalService::AdditionalServiceTypes::DataService, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable<::v2::IVIRadio::Types::Types::StationSelectors, ::v2::IVIRadio::Types::Types_::StationSelectorsDeployment_t >,
            CommonAPI::Deployable<::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions::UnifiedServiceOption, ::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions_::UnifiedServiceOptionDeployment_t >,
            CommonAPI::Deployable<::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions::DataServiceOption, ::v2::IVIRadio::AdditionalService::AdditionalServiceTypesOptions_::DataServiceOptionDeployment_t >,
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<uint32_t,CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<::v2::IVIRadio::Types::Types::Feedback,CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "abort",
        "ia(uau)(iu)(yv)u",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_dataService, deploy_stationSelectors, deploy_unifiedOptions, deploy_dataServiceOption, deploy_handle,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> _handleOut, CommonAPI::Deployable<::v2::IVIRadio::Types::Types::Feedback, CommonAPI::EmptyDeployment> _feedback) {
        	if (_callback)
        		_callback(_internalCallStatus, _handleOut.getValue(), _feedback.getValue());
        },
        std::make_tuple(deploy_handleOut, deploy_feedback));
    }


void AdditionalServiceDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
          ownVersionMajor = 2;
          ownVersionMinor = 1;
      }

      } // namespace AdditionalService
      } // namespace IVIRadio
      } // namespace v2