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
#ifndef V1_COM_HARMAN_AUDIO_AUDIOPRESCTRL_audio_Pres_Ctrl_Diag_PROXY_HPP_
#define V1_COM_HARMAN_AUDIO_AUDIOPRESCTRL_audio_Pres_Ctrl_Diag_PROXY_HPP_

#include <v1/com/harman/audio/audioPresCtrl/audioPresCtrlDiagProxyBase.hpp>


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif


#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace com {
namespace harman {
namespace audio {
namespace audioPresCtrl {

template <typename ... _AttributeExtensions>
class audioPresCtrlDiagProxy
    : virtual public audioPresCtrlDiag, 
      virtual public audioPresCtrlDiagProxyBase,
      virtual public _AttributeExtensions... {
public:
    audioPresCtrlDiagProxy(std::shared_ptr<CommonAPI::Proxy> delegate);
    ~audioPresCtrlDiagProxy();

    typedef audioPresCtrlDiag InterfaceType;




    /**
     * description: For diagnostic purpose to test one or multiple speakers 	(at)return
     *   eAudioPresErrors
     * Calls TestSpeakerOn with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void TestSpeakerOn(const uint16_t &_speakerMask, const std::string &_testToneName, const float &_frequency, const uint16_t &_volume, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eAudioPresErrors &_error, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls TestSpeakerOn with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> TestSpeakerOnAsync(const uint16_t &_speakerMask, const std::string &_testToneName, const float &_frequency, const uint16_t &_volume, TestSpeakerOnAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: For diagnostic purpose to turn OFF one or more speakers 	(at)return
     *   eAudioPresErrors
     * Calls TestMultiSpeakersOff with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void TestMultiSpeakersOff(const uint16_t &_speakerMask, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eAudioPresErrors &_error, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls TestMultiSpeakersOff with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> TestMultiSpeakersOffAsync(const uint16_t &_speakerMask, TestMultiSpeakersOffAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: This function is used to play a sine signal with sine generator with special
     *   parameters.     (at)return eAudioPresErrors
     * Calls playSineTone with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void playSineTone(const ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eSampleRateType &_sampleRate, const int16_t &_frequency, const int16_t &_pauseTime, const int16_t &_pulseTime, const int16_t &_repeatCount, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eAudioPresErrors &_error, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls playSineTone with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> playSineToneAsync(const ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eSampleRateType &_sampleRate, const int16_t &_frequency, const int16_t &_pauseTime, const int16_t &_pulseTime, const int16_t &_repeatCount, PlaySineToneAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: This function is used to stop playing sine tone for diagnostics purpose    
     *   (at)return eAudioPresErrors
     * Calls StopSineTone with synchronous semantics.
     * 
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void StopSineTone(CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eAudioPresErrors &_error, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls StopSineTone with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> StopSineToneAsync(StopSineToneAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);


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
    std::shared_ptr<audioPresCtrlDiagProxyBase> delegate_;
};

typedef audioPresCtrlDiagProxy<> audioPresCtrlDiagProxyDefault;


//
// audioPresCtrlDiagProxy Implementation
//
template <typename ... _AttributeExtensions>
audioPresCtrlDiagProxy<_AttributeExtensions...>::audioPresCtrlDiagProxy(std::shared_ptr<CommonAPI::Proxy> delegate):
        _AttributeExtensions(*(std::dynamic_pointer_cast<audioPresCtrlDiagProxyBase>(delegate)))...,
        delegate_(std::dynamic_pointer_cast<audioPresCtrlDiagProxyBase>(delegate)) {
}

template <typename ... _AttributeExtensions>
audioPresCtrlDiagProxy<_AttributeExtensions...>::~audioPresCtrlDiagProxy() {
}

/**
 * description: For diagnostic purpose to test one or multiple speakers 	(at)return
 *   eAudioPresErrors
 */
template <typename ... _AttributeExtensions>
void audioPresCtrlDiagProxy<_AttributeExtensions...>::TestSpeakerOn(const uint16_t &_speakerMask, const std::string &_testToneName, const float &_frequency, const uint16_t &_volume, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eAudioPresErrors &_error, const CommonAPI::CallInfo *_info) {
    delegate_->TestSpeakerOn(_speakerMask, _testToneName, _frequency, _volume, _internalCallStatus, _error, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> audioPresCtrlDiagProxy<_AttributeExtensions...>::TestSpeakerOnAsync(const uint16_t &_speakerMask, const std::string &_testToneName, const float &_frequency, const uint16_t &_volume, TestSpeakerOnAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->TestSpeakerOnAsync(_speakerMask, _testToneName, _frequency, _volume, _callback, _info);
}
/**
 * description: For diagnostic purpose to turn OFF one or more speakers 	(at)return
 *   eAudioPresErrors
 */
template <typename ... _AttributeExtensions>
void audioPresCtrlDiagProxy<_AttributeExtensions...>::TestMultiSpeakersOff(const uint16_t &_speakerMask, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eAudioPresErrors &_error, const CommonAPI::CallInfo *_info) {
    delegate_->TestMultiSpeakersOff(_speakerMask, _internalCallStatus, _error, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> audioPresCtrlDiagProxy<_AttributeExtensions...>::TestMultiSpeakersOffAsync(const uint16_t &_speakerMask, TestMultiSpeakersOffAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->TestMultiSpeakersOffAsync(_speakerMask, _callback, _info);
}
/**
 * description: This function is used to play a sine signal with sine generator with special
 *   parameters.     (at)return eAudioPresErrors
 */
template <typename ... _AttributeExtensions>
void audioPresCtrlDiagProxy<_AttributeExtensions...>::playSineTone(const ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eSampleRateType &_sampleRate, const int16_t &_frequency, const int16_t &_pauseTime, const int16_t &_pulseTime, const int16_t &_repeatCount, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eAudioPresErrors &_error, const CommonAPI::CallInfo *_info) {
    if (!_sampleRate.validate()) {
        _internalCallStatus = CommonAPI::CallStatus::INVALID_VALUE;
        return;
    }
    delegate_->playSineTone(_sampleRate, _frequency, _pauseTime, _pulseTime, _repeatCount, _internalCallStatus, _error, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> audioPresCtrlDiagProxy<_AttributeExtensions...>::playSineToneAsync(const ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eSampleRateType &_sampleRate, const int16_t &_frequency, const int16_t &_pauseTime, const int16_t &_pulseTime, const int16_t &_repeatCount, PlaySineToneAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    if (!_sampleRate.validate()) {
        ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eAudioPresErrors error;
        _callback(CommonAPI::CallStatus::INVALID_VALUE, error);
        std::promise<CommonAPI::CallStatus> promise;
        promise.set_value(CommonAPI::CallStatus::INVALID_VALUE);
        return promise.get_future();
    }
    return delegate_->playSineToneAsync(_sampleRate, _frequency, _pauseTime, _pulseTime, _repeatCount, _callback, _info);
}
/**
 * description: This function is used to stop playing sine tone for diagnostics purpose    
 *   (at)return eAudioPresErrors
 */
template <typename ... _AttributeExtensions>
void audioPresCtrlDiagProxy<_AttributeExtensions...>::StopSineTone(CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eAudioPresErrors &_error, const CommonAPI::CallInfo *_info) {
    delegate_->StopSineTone(_internalCallStatus, _error, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> audioPresCtrlDiagProxy<_AttributeExtensions...>::StopSineToneAsync(StopSineToneAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->StopSineToneAsync(_callback, _info);
}

template <typename ... _AttributeExtensions>
const CommonAPI::Address &audioPresCtrlDiagProxy<_AttributeExtensions...>::getAddress() const {
    return delegate_->getAddress();
}

template <typename ... _AttributeExtensions>
bool audioPresCtrlDiagProxy<_AttributeExtensions...>::isAvailable() const {
    return delegate_->isAvailable();
}

template <typename ... _AttributeExtensions>
bool audioPresCtrlDiagProxy<_AttributeExtensions...>::isAvailableBlocking() const {
    return delegate_->isAvailableBlocking();
}

template <typename ... _AttributeExtensions>
CommonAPI::ProxyStatusEvent& audioPresCtrlDiagProxy<_AttributeExtensions...>::getProxyStatusEvent() {
    return delegate_->getProxyStatusEvent();
}

template <typename ... _AttributeExtensions>
CommonAPI::InterfaceVersionAttribute& audioPresCtrlDiagProxy<_AttributeExtensions...>::getInterfaceVersionAttribute() {
    return delegate_->getInterfaceVersionAttribute();
}


} // namespace audioPresCtrl
} // namespace audio
} // namespace harman
} // namespace com
} // namespace v1



// Compatibility
namespace v1_0 = v1;

#endif // V1_COM_HARMAN_AUDIO_AUDIOPRESCTRL_audio_Pres_Ctrl_Diag_PROXY_HPP_