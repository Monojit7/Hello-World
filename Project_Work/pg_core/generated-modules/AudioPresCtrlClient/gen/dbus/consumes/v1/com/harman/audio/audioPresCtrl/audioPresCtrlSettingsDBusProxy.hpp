/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Oct 04 15:43:40 EDT 2016
*/
/**
 * description: This is a Common API DBUS settings interface of audio presentation controller
 *   for Orinoco 2.0
 * author: AYatheesh
 */
#ifndef V1_COM_HARMAN_AUDIO_AUDIOPRESCTRL_audio_Pres_Ctrl_Settings_DBUS_PROXY_HPP_
#define V1_COM_HARMAN_AUDIO_AUDIOPRESCTRL_audio_Pres_Ctrl_Settings_DBUS_PROXY_HPP_

#include <v1/com/harman/audio/audioPresCtrl/audioPresCtrlSettingsProxyBase.hpp>
#include "v1/com/harman/audio/audioPresCtrl/audioPresCtrlSettingsDBusDeployment.hpp"

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
namespace audio {
namespace audioPresCtrl {

class audioPresCtrlSettingsDBusProxy
    : virtual public audioPresCtrlSettingsProxyBase, 
      virtual public CommonAPI::DBus::DBusProxy {
public:
    audioPresCtrlSettingsDBusProxy(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection);

    virtual ~audioPresCtrlSettingsDBusProxy() { }

    virtual FadeAttribute& getFadeAttribute();
    virtual BalanceAttribute& getBalanceAttribute();
    virtual BassAttribute& getBassAttribute();
    virtual MidAttribute& getMidAttribute();
    virtual TrebleAttribute& getTrebleAttribute();
    virtual EqualizerAttribute& getEqualizerAttribute();
    virtual ClarifiAttribute& getClarifiAttribute();
    virtual LoudnessAttribute& getLoudnessAttribute();
    virtual AVCModeAttribute& getAVCModeAttribute();
    virtual AuxOffsetGainAttribute& getAuxOffsetGainAttribute();
    virtual MidLowAttribute& getMidLowAttribute();
    virtual MidHighAttribute& getMidHighAttribute();
    virtual A2dpOffsetGainAttribute& getA2dpOffsetGainAttribute();
    virtual MicGainAttribute& getMicGainAttribute();
    virtual ActiveSrcMuteAttribute& getActiveSrcMuteAttribute();
    virtual MasterMuteAttribute& getMasterMuteAttribute();
    virtual MicMuteStatusAttribute& getMicMuteStatusAttribute();
    virtual TouchBeepSelectionAttribute& getTouchBeepSelectionAttribute();
    virtual KeypadBeepSelectionAttribute& getKeypadBeepSelectionAttribute();

    virtual VolumeChangeEvent& getVolumeChangeEvent();
    virtual SourceMuteStateEvent& getSourceMuteStateEvent();

    /**
     * description: This method is used to set absolute volume of presently playing source.  	If
     *   interrupt source is active, it changes the volume of active interrupt source
     *   	If no interrupts are active, it changes volume of Entertainment source.
     *   	(at)broadast VolumeChange
     */
    virtual void SetVolume(const uint16_t &_absoluteVolume, CommonAPI::CallStatus &_internalCallStatus);
    /**
     * description: This method is used to set Volume of presently playing source where volume
     *   change is given in steps example -2 or +2 	(at)broadast VolumeChange
     */
    virtual void SetVolumeStep(const int16_t &_volumeStep, CommonAPI::CallStatus &_internalCallStatus);
    /**
     * description: This method is used to set Volume of any source group 	(at)broadast VolumeChange
     */
    virtual void SetSourceVolume(const ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::sSourceVolume &_volume, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eAudioPresErrors &_error, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> SetSourceVolumeAsync(const ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::sSourceVolume &_volume, SetSourceVolumeAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: This method is used to get Volume of any source 	(at)return eAudioPresErrors
     */
    virtual void GetSourceVolume(const ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::SourceId &_sourceID, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eAudioPresErrors &_error, ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::sSourceVolume &_volumeOfSource, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> GetSourceVolumeAsync(const ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::SourceId &_sourceID, GetSourceVolumeAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: This method is used to toggle mute status of currently playing source
     *   	(at)attribute update ActiveSrcMute
     */
    virtual void ToggleActiveSrcMute(CommonAPI::CallStatus &_internalCallStatus);
    /**
     * description: This method is used to set mute status of any particular source 	(at)broadcast
     *   SourceMuteState
     */
    virtual void SetSourceMute(const ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::SourceId &_sourceID, const bool &_mute, CommonAPI::CallStatus &_internalCallStatus);
    /**
     * description: This method is used to toggle MIC mute status  	(at)attribute update
     *   MicMuteStatus
     */
    virtual void ToggleMicMute(CommonAPI::CallStatus &_internalCallStatus);
    /**
     * description: This method is used to get supported EQ preset, Touch tone list and keyboard
     *   tone list 	(at)return eAudioPresErrors
     */
    virtual void GetList(const ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eUserOption &_listType, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eAudioPresErrors &_error, ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::ListItems &_list, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> GetListAsync(const ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eUserOption &_listType, GetListAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: This method is used to get mute status of any particular source 	(at)return
     *   eAudioPresErrors
     */
    virtual void GetSourceMute(const ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::SourceId &_sourceID, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eAudioPresErrors &_error, ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::SourceId &_sourceId, bool &_mute, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> GetSourceMuteAsync(const ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::SourceId &_sourceID, GetSourceMuteAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: This method is used to toggle mute status of complete system 	(at)attribute
     *   update MasterMute
     */
    virtual void ToggleMasterMute(CommonAPI::CallStatus &_internalCallStatus);
    /**
     * description: This method is used to set audio settings attributes     You may pass a map of
     *   attributes rather than multiple calls.      For example , the balance and fade
     *   is always a combination 	(at)attribute update
     */
    virtual void setAudioAttribute(const ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::mAttribute &_attributesmap, CommonAPI::CallStatus &_internalCallStatus);


    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

private:
   
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<FadeAttribute>> fade_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<BalanceAttribute>> balance_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<BassAttribute>> bass_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<MidAttribute>> mid_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<TrebleAttribute>> treble_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<EqualizerAttribute, CommonAPI::DBus::StringDeployment>> equalizer_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<ClarifiAttribute>> clarifi_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<LoudnessAttribute>> loudness_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<AVCModeAttribute>> aVCMode_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<AuxOffsetGainAttribute>> auxOffsetGain_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<MidLowAttribute>> midLow_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<MidHighAttribute>> midHigh_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<A2dpOffsetGainAttribute>> a2dpOffsetGain_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<MicGainAttribute>> micGain_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<ActiveSrcMuteAttribute>> activeSrcMute_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<MasterMuteAttribute>> masterMute_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<MicMuteStatusAttribute>> micMuteStatus_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusAttribute<TouchBeepSelectionAttribute, CommonAPI::DBus::StringDeployment>> touchBeepSelection_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusAttribute<KeypadBeepSelectionAttribute, CommonAPI::DBus::StringDeployment>> keypadBeepSelection_;

    CommonAPI::DBus::DBusEvent<VolumeChangeEvent, CommonAPI::Deployable<::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::sSourceVolume, ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes_::sSourceVolumeDeployment_t>, CommonAPI::Deployable<bool, CommonAPI::EmptyDeployment>> volumeChange_;
    CommonAPI::DBus::DBusEvent<SourceMuteStateEvent, CommonAPI::Deployable<::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::SourceId, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<bool, CommonAPI::EmptyDeployment>> sourceMuteState_;

};

} // namespace audioPresCtrl
} // namespace audio
} // namespace harman
} // namespace com
} // namespace v1

#endif // V1_COM_HARMAN_AUDIO_AUDIOPRESCTRL_audio_Pres_Ctrl_Settings_DBUS_PROXY_HPP_
