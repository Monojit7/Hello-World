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
#ifndef V2_IVIRADIO_STATION_Station_DBUS_PROXY_HPP_
#define V2_IVIRADIO_STATION_Station_DBUS_PROXY_HPP_

#include <v2/IVIRadio/Station/StationProxyBase.hpp>
#include "v2/IVIRadio/Station/StationDBusDeployment.hpp"

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

namespace v2 {
namespace IVIRadio {
namespace Station {

class StationDBusProxy
    : virtual public StationProxyBase, 
      virtual public CommonAPI::DBus::DBusProxy {
public:
    StationDBusProxy(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection);

    virtual ~StationDBusProxy() { }


    virtual CurrentStationEvent& getCurrentStationEvent();
    virtual SeekEvent& getSeekEvent();
    virtual StationListEvent& getStationListEvent();

    /**
     * description: deallocate a tuner resource
     */
    virtual void abortTune(const ::v2::IVIRadio::Types::Types::DeviceType &_deviceType, const uint32_t &_handle, CommonAPI::CallStatus &_internalCallStatus, uint32_t &_handleOut, ::v2::IVIRadio::Types::Types::Feedback &_feedback, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> abortTuneAsync(const ::v2::IVIRadio::Types::Types::DeviceType &_deviceType, const uint32_t &_handle, AbortTuneAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: make station permanent (tuning information will not be removed from middleware
     *   even if station is not receivable any more)
     */
    virtual void makePermanent(const ::v2::IVIRadio::Types::Types::StationSelector &_station, const bool &_permanent, const uint32_t &_handle, CommonAPI::CallStatus &_internalCallStatus, uint32_t &_handleOut, ::v2::IVIRadio::Types::Types::Feedback &_feedback, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> makePermanentAsync(const ::v2::IVIRadio::Types::Types::StationSelector &_station, const bool &_permanent, const uint32_t &_handle, MakePermanentAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: request explicit update of currentStation or stationList information. E.g.
     *   necessary after startup.
     */
    virtual void controlUpdate(const ::v2::IVIRadio::Station::StationTypes::UpdateElement &_updateElement, const ::v2::IVIRadio::Types::Types::UpdateType &_updateType, const uint32_t &_sourceType, const uint32_t &_stationType, const uint32_t &_handle, CommonAPI::CallStatus &_internalCallStatus, uint32_t &_handleOut, ::v2::IVIRadio::Types::Types::Feedback &_feedback, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> controlUpdateAsync(const ::v2::IVIRadio::Station::StationTypes::UpdateElement &_updateElement, const ::v2::IVIRadio::Types::Types::UpdateType &_updateType, const uint32_t &_sourceType, const uint32_t &_stationType, const uint32_t &_handle, ControlUpdateAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: starts/stops a seek process
     */
    virtual void seek(const ::v2::IVIRadio::Types::Types::DeviceType &_device, const ::v2::IVIRadio::Station::StationTypes::SeekMode &_seekMode, const uint8_t &_genre, const uint32_t &_flags, const uint32_t &_handle, CommonAPI::CallStatus &_internalCallStatus, uint32_t &_handleOut, ::v2::IVIRadio::Types::Types::Feedback &_feedback, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> seekAsync(const ::v2::IVIRadio::Types::Types::DeviceType &_device, const ::v2::IVIRadio::Station::StationTypes::SeekMode &_seekMode, const uint8_t &_genre, const uint32_t &_flags, const uint32_t &_handle, SeekAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: start tuning a frequency or selecting a station
     */
    virtual void startTune(const ::v2::IVIRadio::Types::Types::StationSelector &_station, const ::v2::IVIRadio::Station::StationTypes::SelectionMode &_selectionMode, const uint32_t &_handle, CommonAPI::CallStatus &_internalCallStatus, uint32_t &_handleOut, ::v2::IVIRadio::Types::Types::Feedback &_feedback, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> startTuneAsync(const ::v2::IVIRadio::Types::Types::StationSelector &_station, const ::v2::IVIRadio::Station::StationTypes::SelectionMode &_selectionMode, const uint32_t &_handle, StartTuneAsyncCallback _callback, const CommonAPI::CallInfo *_info);


    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

private:
   

    CommonAPI::DBus::DBusEvent<CurrentStationEvent, CommonAPI::Deployable<::v2::IVIRadio::Station::StationTypes::Station, ::v2::IVIRadio::Station::StationTypes_::StationDeployment_t>, CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<::v2::IVIRadio::Types::Types::ErrorCodes, CommonAPI::EmptyDeployment>> currentStation_;
    CommonAPI::DBus::DBusEvent<SeekEvent, CommonAPI::Deployable<::v2::IVIRadio::Station::StationTypes::SeekData, ::v2::IVIRadio::Station::StationTypes_::SeekDataDeployment_t>, CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<::v2::IVIRadio::Types::Types::ErrorCodes, CommonAPI::EmptyDeployment>> seek_;
    CommonAPI::DBus::DBusEvent<StationListEvent, CommonAPI::Deployable<::v2::IVIRadio::Station::StationTypes::StationList, ::v2::IVIRadio::Station::StationTypes_::StationListDeployment_t>, CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<::v2::IVIRadio::Types::Types::ErrorCodes, CommonAPI::EmptyDeployment>> stationList_;

};

} // namespace Station
} // namespace IVIRadio
} // namespace v2

#endif // V2_IVIRADIO_STATION_Station_DBUS_PROXY_HPP_
