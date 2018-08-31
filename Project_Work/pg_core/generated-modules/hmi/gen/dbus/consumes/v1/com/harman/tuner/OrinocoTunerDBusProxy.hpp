/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/
/**
 * description: Orinoco specific tuner interface. This interface is a facade to a bunch of
 *   plattform interfaces in order to provide a simplified access to tuner data and
 *   functionality.
 * author: Dirk Engel
 */
#ifndef V1_COM_HARMAN_TUNER_Orinoco_Tuner_DBUS_PROXY_HPP_
#define V1_COM_HARMAN_TUNER_Orinoco_Tuner_DBUS_PROXY_HPP_

#include <v1/com/harman/tuner/OrinocoTunerProxyBase.hpp>
#include "v1/com/harman/tuner/OrinocoTunerDBusDeployment.hpp"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusAddress.hpp>
#include <CommonAPI/DBus/DBusFactory.hpp>
#include <CommonAPI/DBus/DBusProxy.hpp>
#include <CommonAPI/DBus/DBusAddressTranslator.hpp>
#include <CommonAPI/DBus/DBusAttribute.hpp>
#include <CommonAPI/DBus/DBusEvent.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <string>

namespace v1 {
namespace com {
namespace harman {
namespace tuner {

class OrinocoTunerDBusProxy
    : virtual public OrinocoTunerProxyBase, 
      virtual public CommonAPI::DBus::DBusProxy {
public:
    OrinocoTunerDBusProxy(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection);

    virtual ~OrinocoTunerDBusProxy() { }

    virtual ControlReadyAttribute& getControlReadyAttribute();
    virtual ControlPowerSyncAttribute& getControlPowerSyncAttribute();
    virtual AudioCurrentSourceAttribute& getAudioCurrentSourceAttribute();
    virtual AnnouncementCurrentStationAttribute& getAnnouncementCurrentStationAttribute();
    virtual AmfmControlRegionInfoAttribute& getAmfmControlRegionInfoAttribute();
    virtual AmfmControlAfSwitchAttribute& getAmfmControlAfSwitchAttribute();
    virtual AmfmControlRegSwitchAttribute& getAmfmControlRegSwitchAttribute();
    virtual AmfmControlHdModeAttribute& getAmfmControlHdModeAttribute();
    virtual DabControlRegionInfoAttribute& getDabControlRegionInfoAttribute();
    virtual DabControlFollowingSwitchAttribute& getDabControlFollowingSwitchAttribute();

    virtual StationCurrentStationEvent& getStationCurrentStationEvent();
    virtual StationStationListEvent& getStationStationListEvent();

    /**
     * description: Set the coding of the AM/FM tuner and DAB tuner. 
    	 	IMPORTANT: This request
     *   must be called first before everything else otherwise the tuner will not start
     *   correctly.
     */
    virtual void controlSetRegion(const OrinocoTunerTypes::AmFmRegionCode &_amfmRegionCode, const uint32_t &_amfmCodingFlags, const OrinocoTunerTypes::DabRegionInfo &_dabRegionCode, const uint32_t &_dabCodingFlags, const uint8_t &_fmAntennaGain, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> controlSetRegionAsync(const OrinocoTunerTypes::AmFmRegionCode &_amfmRegionCode, const uint32_t &_amfmCodingFlags, const OrinocoTunerTypes::DabRegionInfo &_dabRegionCode, const uint32_t &_dabCodingFlags, const uint8_t &_fmAntennaGain, ControlSetRegionAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Use this method to set the currently active tuner source as soon as the tuner
     *   application is entered or changed. Furthmore, use this method if the tuner
     *   application is exited in combination with "ASRC_NONE".&#13;
    		As result the
     *   attribute "audioCurrentSource" is updated with the given handle.
     */
    virtual void audioSetCurrentSource(const OrinocoTunerTypes::Source &_source, const uint32_t &_handle, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> audioSetCurrentSourceAsync(const OrinocoTunerTypes::Source &_source, const uint32_t &_handle, AudioSetCurrentSourceAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Any manipulation of the current station: Selection by list / direct frequency
     *   tuning / preset selection / starting a search run.  &#13;
    		As result the
     *   information "stationCurrentStation" is updated with the given handle.
     */
    virtual void stationSelectStation(const OrinocoTunerTypes::StationSelector &_stationSelector, const uint32_t &_handle, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> stationSelectStationAsync(const OrinocoTunerTypes::StationSelector &_stationSelector, const uint32_t &_handle, StationSelectStationAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Store the given station in corresponding preset list and assign the given
     *   preset number for later recalls (via "stationStartTune").&#13;
    		As result the
     *   corresponding information "stationStationList" is updated with the given
     *   handle.
     */
    virtual void stationStorePreset(const OrinocoTunerTypes::StationSelector &_stationSelector, const uint32_t &_preset, const uint32_t &_handle, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> stationStorePresetAsync(const OrinocoTunerTypes::StationSelector &_stationSelector, const uint32_t &_preset, const uint32_t &_handle, StationStorePresetAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Remove given preset number from corresponding preset list.
    		As result the
     *   corresponding information "stationStationList" is updated with the given handle
     */
    virtual void stationDeletePreset(const uint32_t &_preset, const uint32_t &_handle, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> stationDeletePresetAsync(const uint32_t &_preset, const uint32_t &_handle, StationDeletePresetAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Enable/disable the announcement monitoring for FM and DAB.
    		As result the
     *   attribute "announcementCurrentStation" is updated with the given handle
     */
    virtual void announcementSwitchTp(const bool &_enable, const uint32_t &_handle, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> announcementSwitchTpAsync(const bool &_enable, const uint32_t &_handle, AnnouncementSwitchTpAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Abort an active announcement. As a result the attribute
     *   "announcementCurrentStation" is updated with the given handle.
     */
    virtual void announcementAbort(const uint32_t &_handle, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> announcementAbortAsync(const uint32_t &_handle, AnnouncementAbortAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Set the desired RDS alternative frequency (AF) state.
    		As result the attribute
     *   "amfmControlAfSwitch" is updated with the given handle.
     */
    virtual void amfmControlSetAfSwitch(const bool &_enable, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> amfmControlSetAfSwitchAsync(const bool &_enable, AmfmControlSetAfSwitchAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Set the desired RDS regionalisation (REG) state.
    		As result the attribute
     *   "amfmControlRegSwitch" is updated with the given handle.
     */
    virtual void amfmControlSetRegSwitch(const bool &_enable, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> amfmControlSetRegSwitchAsync(const bool &_enable, AmfmControlSetRegSwitchAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Set the desired HD mode.
    		As result the attribute "amfmControlHdMode" is
     *   updated with the given handle.
     */
    virtual void amfmControlSetHdMode(const OrinocoTunerTypes::AmFmHdMode &_hdMode, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> amfmControlSetHdModeAsync(const OrinocoTunerTypes::AmFmHdMode &_hdMode, AmfmControlSetHdModeAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Set the desired service following at the FollowingMaster.
    		As result the
     *   attribute "dabControlFollowingSwitch" is updated with the given
     *   handle.
    		Note: This switch only affects DAB/FM linking, DAB/DAB is always on
     */
    virtual void dabControlSetFollowingSwitch(const bool &_enable, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> dabControlSetFollowingSwitchAsync(const bool &_enable, DabControlSetFollowingSwitchAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Request initial information update at startup (stationCurrentStation,
     *   stationStationList) in order to force an "on change" update.
     */
    virtual void forceInformationUpdate(CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> forceInformationUpdateAsync(ForceInformationUpdateAsyncCallback _callback, const CommonAPI::CallInfo *_info);


    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

private:
   
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<ControlReadyAttribute>> controlReady_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<ControlPowerSyncAttribute, OrinocoTunerTypes_::UInt32sDeployment_t>> controlPowerSync_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<AudioCurrentSourceAttribute, OrinocoTunerTypes_::CurrentSourceDeployment_t>> audioCurrentSource_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<AnnouncementCurrentStationAttribute, OrinocoTunerTypes_::AnnouncementStationDeployment_t>> announcementCurrentStation_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<AmfmControlRegionInfoAttribute, OrinocoTunerTypes_::AmFmRegionInfoDeployment_t>> amfmControlRegionInfo_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<AmfmControlAfSwitchAttribute>> amfmControlAfSwitch_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<AmfmControlRegSwitchAttribute>> amfmControlRegSwitch_;
    class DBusamfmControlHdMode_Attribute : public CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<AmfmControlHdModeAttribute>> {
    public:
    template <typename... _A>
    	DBusamfmControlHdMode_Attribute(DBusProxy &_proxy,
    		_A ... arguments)
    		: CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<AmfmControlHdModeAttribute>>(
    			_proxy, arguments...) {}
    };
    DBusamfmControlHdMode_Attribute amfmControlHdMode_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<DabControlRegionInfoAttribute, OrinocoTunerTypes_::DabRegionInfoDeployment_t>> dabControlRegionInfo_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<DabControlFollowingSwitchAttribute>> dabControlFollowingSwitch_;

    CommonAPI::DBus::DBusEvent<StationCurrentStationEvent, CommonAPI::Deployable<::v1::com::harman::tuner::OrinocoTunerTypes::CurrentStation, OrinocoTunerTypes_::CurrentStationDeployment_t>> stationCurrentStation_;
    CommonAPI::DBus::DBusEvent<StationStationListEvent, CommonAPI::Deployable<::v1::com::harman::tuner::OrinocoTunerTypes::StationList, OrinocoTunerTypes_::StationListDeployment_t>> stationStationList_;

};

} // namespace tuner
} // namespace harman
} // namespace com
} // namespace v1

#endif // V1_COM_HARMAN_TUNER_Orinoco_Tuner_DBUS_PROXY_HPP_

