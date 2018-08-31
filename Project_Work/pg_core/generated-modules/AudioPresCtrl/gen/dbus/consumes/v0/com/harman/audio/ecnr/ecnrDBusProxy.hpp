/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Sun Oct 16 06:59:52 IST 2016
*/
/**
 * description: This class implements all echo cacellation & noise reduction
 * author: lian zhang
 */
#ifndef V0_COM_HARMAN_AUDIO_ECNR_ecnr_DBUS_PROXY_HPP_
#define V0_COM_HARMAN_AUDIO_ECNR_ecnr_DBUS_PROXY_HPP_

#include <v0/com/harman/audio/ecnr/ecnrProxyBase.hpp>
#include "v0/com/harman/audio/ecnr/ecnrDBusDeployment.hpp"

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

namespace v0 {
namespace com {
namespace harman {
namespace audio {
namespace ecnr {

class ecnrDBusProxy
    : virtual public ecnrProxyBase, 
      virtual public CommonAPI::DBus::DBusProxy {
public:
    ecnrDBusProxy(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection);

    virtual ~ecnrDBusProxy() { }


    virtual MicMuteChangedEvent& getMicMuteChangedEvent();
    virtual MicGainChangedEvent& getMicGainChangedEvent();

    /**
     * description: This function is used to start one scenario.
     */
    virtual void start(const ::v0::com::harman::audio::ecnr::ecnrType::ecnr_scenario_e &_scenario, CommonAPI::CallStatus &_internalCallStatus, ::v0::com::harman::audio::ecnr::ecnrType::ecnr_Error_e &_err, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> startAsync(const ::v0::com::harman::audio::ecnr::ecnrType::ecnr_scenario_e &_scenario, StartAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: This function is used to stop one scenario.
     */
    virtual void stop(const ::v0::com::harman::audio::ecnr::ecnrType::ecnr_scenario_e &_scenario, CommonAPI::CallStatus &_internalCallStatus, ::v0::com::harman::audio::ecnr::ecnrType::ecnr_Error_e &_err, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> stopAsync(const ::v0::com::harman::audio::ecnr::ecnrType::ecnr_scenario_e &_scenario, StopAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: This function is used to mute mic.
     */
    virtual void setMicMute(const ::v0::com::harman::audio::ecnr::ecnrType::ecnr_mute_e &_muteState, CommonAPI::CallStatus &_internalCallStatus, ::v0::com::harman::audio::ecnr::ecnrType::ecnr_Error_e &_err, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> setMicMuteAsync(const ::v0::com::harman::audio::ecnr::ecnrType::ecnr_mute_e &_muteState, SetMicMuteAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: This function is used to change the microphone gain value of current scenario.
     */
    virtual void setMicGain(const float &_gain, CommonAPI::CallStatus &_internalCallStatus, ::v0::com::harman::audio::ecnr::ecnrType::ecnr_Error_e &_err, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> setMicGainAsync(const float &_gain, SetMicGainAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: This function is used to change the log level.
     */
    virtual void logLevel(const ::v0::com::harman::audio::ecnr::ecnrType::ecnr_logLevel_e &_level, CommonAPI::CallStatus &_internalCallStatus, ::v0::com::harman::audio::ecnr::ecnrType::ecnr_Error_e &_err, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> logLevelAsync(const ::v0::com::harman::audio::ecnr::ecnrType::ecnr_logLevel_e &_level, LogLevelAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: This function is used to change the tuning mode.
     */
    virtual void tuningMode(const ::v0::com::harman::audio::ecnr::ecnrType::ecnr_tuningMode_e &_mode, CommonAPI::CallStatus &_internalCallStatus, ::v0::com::harman::audio::ecnr::ecnrType::ecnr_Error_e &_err, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> tuningModeAsync(const ::v0::com::harman::audio::ecnr::ecnrType::ecnr_tuningMode_e &_mode, TuningModeAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: This function is used to get mute status of mic.
     */
    virtual void getMicMute(CommonAPI::CallStatus &_internalCallStatus, ::v0::com::harman::audio::ecnr::ecnrType::ecnr_mute_e &_muteState, ::v0::com::harman::audio::ecnr::ecnrType::ecnr_Error_e &_err, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getMicMuteAsync(GetMicMuteAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: This function is used to get the microphone gain value of current scenario.
     */
    virtual void getMicGain(CommonAPI::CallStatus &_internalCallStatus, float &_gain, ::v0::com::harman::audio::ecnr::ecnrType::ecnr_Error_e &_err, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getMicGainAsync(GetMicGainAsyncCallback _callback, const CommonAPI::CallInfo *_info);


    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

private:
   

    CommonAPI::DBus::DBusEvent<MicMuteChangedEvent, CommonAPI::Deployable<::v0::com::harman::audio::ecnr::ecnrType::ecnr_mute_e, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<::v0::com::harman::audio::ecnr::ecnrType::ecnr_Error_e, CommonAPI::EmptyDeployment>> micMuteChanged_;
    CommonAPI::DBus::DBusEvent<MicGainChangedEvent, CommonAPI::Deployable<float, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<::v0::com::harman::audio::ecnr::ecnrType::ecnr_Error_e, CommonAPI::EmptyDeployment>> micGainChanged_;

};

} // namespace ecnr
} // namespace audio
} // namespace harman
} // namespace com
} // namespace v0

#endif // V0_COM_HARMAN_AUDIO_ECNR_ecnr_DBUS_PROXY_HPP_
