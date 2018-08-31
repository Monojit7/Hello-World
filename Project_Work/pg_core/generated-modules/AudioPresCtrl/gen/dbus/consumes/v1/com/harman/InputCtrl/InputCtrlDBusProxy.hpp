/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Oct 04 15:43:40 EDT 2016
*/
#ifndef V1_COM_HARMAN_INPUTCTRL_Input_Ctrl_DBUS_PROXY_HPP_
#define V1_COM_HARMAN_INPUTCTRL_Input_Ctrl_DBUS_PROXY_HPP_

#include <v1/com/harman/InputCtrl/InputCtrlProxyBase.hpp>
#include "v1/com/harman/InputCtrl/InputCtrlDBusDeployment.hpp"

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

namespace v1 {
namespace com {
namespace harman {
namespace InputCtrl {

class InputCtrlDBusProxy
    : virtual public InputCtrlProxyBase, 
      virtual public CommonAPI::DBus::DBusProxy {
public:
    InputCtrlDBusProxy(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection);

    virtual ~InputCtrlDBusProxy() { }


    virtual KeyMuteEvent& getKeyMuteEvent();
    virtual KeyPushToTalkEvent& getKeyPushToTalkEvent();
    virtual KeyAcceptCallEvent& getKeyAcceptCallEvent();
    virtual KeyRejectCallEvent& getKeyRejectCallEvent();
    virtual KeySettingsEvent& getKeySettingsEvent();
    virtual KeySeekLeftEvent& getKeySeekLeftEvent();
    virtual KeySeekRightEvent& getKeySeekRightEvent();
    virtual KeyPlayPauseEvent& getKeyPlayPauseEvent();
    virtual KeyDisplayEvent& getKeyDisplayEvent();
    virtual KeySoundEvent& getKeySoundEvent();
    virtual KeyOnOffEvent& getKeyOnOffEvent();
    virtual KeyTuneRotaryEvent& getKeyTuneRotaryEvent();
    virtual KeyTuneUpEvent& getKeyTuneUpEvent();
    virtual KeyTuneDownEvent& getKeyTuneDownEvent();
    virtual KeyVolumeRotaryEvent& getKeyVolumeRotaryEvent();
    virtual KeyVolumeUpEvent& getKeyVolumeUpEvent();
    virtual KeyVolumeDownEvent& getKeyVolumeDownEvent();
    virtual KeyCombinationEvent& getKeyCombinationEvent();



    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

private:
   

    CommonAPI::DBus::DBusEvent<KeyMuteEvent, CommonAPI::Deployable<::v1::com::harman::InputCtrl::InputCtrlType::ButtonInfoStruct, ::v1::com::harman::InputCtrl::InputCtrlType_::ButtonInfoStructDeployment_t>> keyMute_;
    CommonAPI::DBus::DBusEvent<KeyPushToTalkEvent, CommonAPI::Deployable<::v1::com::harman::InputCtrl::InputCtrlType::ButtonInfoStruct, ::v1::com::harman::InputCtrl::InputCtrlType_::ButtonInfoStructDeployment_t>> keyPushToTalk_;
    CommonAPI::DBus::DBusEvent<KeyAcceptCallEvent, CommonAPI::Deployable<::v1::com::harman::InputCtrl::InputCtrlType::ButtonInfoStruct, ::v1::com::harman::InputCtrl::InputCtrlType_::ButtonInfoStructDeployment_t>> keyAcceptCall_;
    CommonAPI::DBus::DBusEvent<KeyRejectCallEvent, CommonAPI::Deployable<::v1::com::harman::InputCtrl::InputCtrlType::ButtonInfoStruct, ::v1::com::harman::InputCtrl::InputCtrlType_::ButtonInfoStructDeployment_t>> keyRejectCall_;
    CommonAPI::DBus::DBusEvent<KeySettingsEvent, CommonAPI::Deployable<::v1::com::harman::InputCtrl::InputCtrlType::ButtonInfoStruct, ::v1::com::harman::InputCtrl::InputCtrlType_::ButtonInfoStructDeployment_t>> keySettings_;
    CommonAPI::DBus::DBusEvent<KeySeekLeftEvent, CommonAPI::Deployable<::v1::com::harman::InputCtrl::InputCtrlType::ButtonInfoStruct, ::v1::com::harman::InputCtrl::InputCtrlType_::ButtonInfoStructDeployment_t>> keySeekLeft_;
    CommonAPI::DBus::DBusEvent<KeySeekRightEvent, CommonAPI::Deployable<::v1::com::harman::InputCtrl::InputCtrlType::ButtonInfoStruct, ::v1::com::harman::InputCtrl::InputCtrlType_::ButtonInfoStructDeployment_t>> keySeekRight_;
    CommonAPI::DBus::DBusEvent<KeyPlayPauseEvent, CommonAPI::Deployable<::v1::com::harman::InputCtrl::InputCtrlType::ButtonInfoStruct, ::v1::com::harman::InputCtrl::InputCtrlType_::ButtonInfoStructDeployment_t>> keyPlayPause_;
    CommonAPI::DBus::DBusEvent<KeyDisplayEvent, CommonAPI::Deployable<::v1::com::harman::InputCtrl::InputCtrlType::ButtonInfoStruct, ::v1::com::harman::InputCtrl::InputCtrlType_::ButtonInfoStructDeployment_t>> keyDisplay_;
    CommonAPI::DBus::DBusEvent<KeySoundEvent, CommonAPI::Deployable<::v1::com::harman::InputCtrl::InputCtrlType::ButtonInfoStruct, ::v1::com::harman::InputCtrl::InputCtrlType_::ButtonInfoStructDeployment_t>> keySound_;
    CommonAPI::DBus::DBusEvent<KeyOnOffEvent, CommonAPI::Deployable<::v1::com::harman::InputCtrl::InputCtrlType::ButtonInfoStruct, ::v1::com::harman::InputCtrl::InputCtrlType_::ButtonInfoStructDeployment_t>> keyOnOff_;
    CommonAPI::DBus::DBusEvent<KeyTuneRotaryEvent, CommonAPI::Deployable<::v1::com::harman::InputCtrl::InputCtrlType::RotaryInfoStruct, ::v1::com::harman::InputCtrl::InputCtrlType_::RotaryInfoStructDeployment_t>> keyTuneRotary_;
    CommonAPI::DBus::DBusEvent<KeyTuneUpEvent, CommonAPI::Deployable<::v1::com::harman::InputCtrl::InputCtrlType::ButtonInfoStruct, ::v1::com::harman::InputCtrl::InputCtrlType_::ButtonInfoStructDeployment_t>, CommonAPI::Deployable<int16_t, CommonAPI::EmptyDeployment>> keyTuneUp_;
    CommonAPI::DBus::DBusEvent<KeyTuneDownEvent, CommonAPI::Deployable<::v1::com::harman::InputCtrl::InputCtrlType::ButtonInfoStruct, ::v1::com::harman::InputCtrl::InputCtrlType_::ButtonInfoStructDeployment_t>, CommonAPI::Deployable<int16_t, CommonAPI::EmptyDeployment>> keyTuneDown_;
    CommonAPI::DBus::DBusEvent<KeyVolumeRotaryEvent, CommonAPI::Deployable<::v1::com::harman::InputCtrl::InputCtrlType::RotaryInfoStruct, ::v1::com::harman::InputCtrl::InputCtrlType_::RotaryInfoStructDeployment_t>> keyVolumeRotary_;
    CommonAPI::DBus::DBusEvent<KeyVolumeUpEvent, CommonAPI::Deployable<::v1::com::harman::InputCtrl::InputCtrlType::RotaryInfoStruct, ::v1::com::harman::InputCtrl::InputCtrlType_::RotaryInfoStructDeployment_t>> keyVolumeUp_;
    CommonAPI::DBus::DBusEvent<KeyVolumeDownEvent, CommonAPI::Deployable<::v1::com::harman::InputCtrl::InputCtrlType::RotaryInfoStruct, ::v1::com::harman::InputCtrl::InputCtrlType_::RotaryInfoStructDeployment_t>> keyVolumeDown_;
    CommonAPI::DBus::DBusEvent<KeyCombinationEvent, CommonAPI::Deployable<std::vector<::v1::com::harman::InputCtrl::InputCtrlType::eKeys>, CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>>, CommonAPI::Deployable<::v1::com::harman::InputCtrl::InputCtrlType::ButtonInfoStruct, ::v1::com::harman::InputCtrl::InputCtrlType_::ButtonInfoStructDeployment_t>> keyCombination_;

};

} // namespace InputCtrl
} // namespace harman
} // namespace com
} // namespace v1

#endif // V1_COM_HARMAN_INPUTCTRL_Input_Ctrl_DBUS_PROXY_HPP_

