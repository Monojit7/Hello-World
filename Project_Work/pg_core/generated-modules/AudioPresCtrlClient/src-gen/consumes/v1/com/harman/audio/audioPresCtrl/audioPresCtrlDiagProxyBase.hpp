/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Wed Sep 21 21:11:39 IST 2016
*/
/**
 * description: This is a Common API DBUS diagnostics interface of audio presentation
 *   controller for Orinoco 2.0
 * author: AYatheesh
 */
#ifndef V1_COM_HARMAN_AUDIO_AUDIOPRESCTRL_audio_Pres_Ctrl_Diag_PROXY_BASE_HPP_
#define V1_COM_HARMAN_AUDIO_AUDIOPRESCTRL_audio_Pres_Ctrl_Diag_PROXY_BASE_HPP_

#include <v1/com/harman/audio/audioPresCtrl/audioPresCtrlDiag.hpp>


#include <v1/com/harman/audio/audioPresCtrl/audioPresCtrlTypes.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <cstdint>
#include <vector>

#include <CommonAPI/Proxy.hpp>
#include <functional>
#include <future>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace com {
namespace harman {
namespace audio {
namespace audioPresCtrl {

class audioPresCtrlDiagProxyBase
    : virtual public CommonAPI::Proxy {
public:

    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eAudioPresErrors&)> TestSpeakerOnAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eAudioPresErrors&)> TestMultiSpeakersOffAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eAudioPresErrors&)> PlaySineToneAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eAudioPresErrors&)> StopSineToneAsyncCallback;



    /**
     * description: For diagnostic purpose to test one or multiple speakers 	(at)return
     *   eAudioPresErrors
     */
    virtual void TestSpeakerOn(const uint16_t &_speakerMask, const std::string &_testToneName, const float &_frequency, const uint16_t &_volume, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eAudioPresErrors &_error, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> TestSpeakerOnAsync(const uint16_t &_speakerMask, const std::string &_testToneName, const float &_frequency, const uint16_t &_volume, TestSpeakerOnAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: For diagnostic purpose to turn OFF one or more speakers 	(at)return
     *   eAudioPresErrors
     */
    virtual void TestMultiSpeakersOff(const uint16_t &_speakerMask, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eAudioPresErrors &_error, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> TestMultiSpeakersOffAsync(const uint16_t &_speakerMask, TestMultiSpeakersOffAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: This function is used to play a sine signal with sine generator with special
     *   parameters.     (at)return eAudioPresErrors
     */
    virtual void playSineTone(const ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eSampleRateType &_sampleRate, const int16_t &_frequency, const int16_t &_pauseTime, const int16_t &_pulseTime, const int16_t &_repeatCount, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eAudioPresErrors &_error, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> playSineToneAsync(const ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eSampleRateType &_sampleRate, const int16_t &_frequency, const int16_t &_pauseTime, const int16_t &_pulseTime, const int16_t &_repeatCount, PlaySineToneAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: This function is used to stop playing sine tone for diagnostics purpose    
     *   (at)return eAudioPresErrors
     */
    virtual void StopSineTone(CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eAudioPresErrors &_error, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> StopSineToneAsync(StopSineToneAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
};

} // namespace audioPresCtrl
} // namespace audio
} // namespace harman
} // namespace com
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_COM_HARMAN_AUDIO_AUDIOPRESCTRL_audio_Pres_Ctrl_Diag_PROXY_BASE_HPP_
