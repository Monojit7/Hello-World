/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Sun Oct 16 06:59:52 IST 2016
*/
#include <v1/com/harman/audio/audioPresCtrl/audioPresCtrlDiag.hpp>
#include <v1/com/harman/audio/audioPresCtrl/audioPresCtrlDiagDBusStubAdapter.hpp>

namespace v1 {
namespace com {
namespace harman {
namespace audio {
namespace audioPresCtrl {

std::shared_ptr<CommonAPI::DBus::DBusStubAdapter> createaudioPresCtrlDiagDBusStubAdapter(
                   const CommonAPI::DBus::DBusAddress &_address,
                   const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
                   const std::shared_ptr<CommonAPI::StubBase> &_stub) {
    return std::make_shared<audioPresCtrlDiagDBusStubAdapter>(_address, _connection, _stub);
}

INITIALIZER(registeraudioPresCtrlDiagDBusStubAdapter) {
    CommonAPI::DBus::Factory::get()->registerStubAdapterCreateMethod(
    	audioPresCtrlDiag::getInterface(), &createaudioPresCtrlDiagDBusStubAdapter);
}

audioPresCtrlDiagDBusStubAdapterInternal::~audioPresCtrlDiagDBusStubAdapterInternal() {
    deactivateManagedInstances();
    audioPresCtrlDiagDBusStubAdapterHelper::deinit();
}

void audioPresCtrlDiagDBusStubAdapterInternal::deactivateManagedInstances() {

}

const char* audioPresCtrlDiagDBusStubAdapterInternal::getMethodsDBusIntrospectionXmlData() const {
    static const std::string introspectionData =
        "<method name=\"getInterfaceVersion\">\n"
            "<arg name=\"value\" type=\"uu\" direction=\"out\" />"
        "</method>\n"
        /**
         * description: For diagnostic purpose to test one or multiple speakers 	(at)return
         *   eAudioPresErrors
         */
        "<method name=\"TestSpeakerOn\">\n"
            "<arg name=\"_speakerMask\" type=\"q\" direction=\"in\" />\n"
            "<arg name=\"_testToneName\" type=\"s\" direction=\"in\" />\n"
            "<arg name=\"_frequency\" type=\"d\" direction=\"in\" />\n"
            "<arg name=\"_volume\" type=\"q\" direction=\"in\" />\n"
            "<arg name=\"_error\" type=\"i\" direction=\"out\" />\n"
        "</method>\n"
        /**
         * description: For diagnostic purpose to turn OFF one or more speakers 	(at)return
         *   eAudioPresErrors
         */
        "<method name=\"TestMultiSpeakersOff\">\n"
            "<arg name=\"_speakerMask\" type=\"q\" direction=\"in\" />\n"
            "<arg name=\"_error\" type=\"i\" direction=\"out\" />\n"
        "</method>\n"
        /**
         * description: This function is used to play a sine signal with sine generator with special
         *   parameters.     (at)return eAudioPresErrors
         */
        "<method name=\"playSineTone\">\n"
            "<arg name=\"_sampleRate\" type=\"i\" direction=\"in\" />\n"
            "<arg name=\"_frequency\" type=\"n\" direction=\"in\" />\n"
            "<arg name=\"_pauseTime\" type=\"n\" direction=\"in\" />\n"
            "<arg name=\"_pulseTime\" type=\"n\" direction=\"in\" />\n"
            "<arg name=\"_repeatCount\" type=\"n\" direction=\"in\" />\n"
            "<arg name=\"_error\" type=\"i\" direction=\"out\" />\n"
        "</method>\n"
        /**
         * description: This function is used to stop playing sine tone for diagnostics purpose    
         *   (at)return eAudioPresErrors
         */
        "<method name=\"StopSineTone\">\n"
            "<arg name=\"_error\" type=\"i\" direction=\"out\" />\n"
        "</method>\n"

    ;
    return introspectionData.c_str();
}

CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlDiagStub,
        CommonAPI::Version
        > audioPresCtrlDiagDBusStubAdapterInternal::getaudioPresCtrlDiagInterfaceVersionStubDispatcher(&audioPresCtrlDiagStub::getInterfaceVersion, "uu");




/**
 * description: For diagnostic purpose to test one or multiple speakers 	(at)return
 *   eAudioPresErrors
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlDiagStub,
    std::tuple<uint16_t, std::string, float, uint16_t>,
    std::tuple<::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eAudioPresErrors>,
    std::tuple<CommonAPI::EmptyDeployment, CommonAPI::DBus::StringDeployment, CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment>,
    std::tuple<CommonAPI::EmptyDeployment>
    
    > audioPresCtrlDiagDBusStubAdapterInternal::testSpeakerOnStubDispatcher(
    &audioPresCtrlDiagStub::TestSpeakerOn, "i",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::DBus::StringDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
                	std::make_tuple(static_cast<CommonAPI::EmptyDeployment *>(nullptr)));

/**
 * description: For diagnostic purpose to turn OFF one or more speakers 	(at)return
 *   eAudioPresErrors
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlDiagStub,
    std::tuple<uint16_t>,
    std::tuple<::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eAudioPresErrors>,
    std::tuple<CommonAPI::EmptyDeployment>,
    std::tuple<CommonAPI::EmptyDeployment>
    
    > audioPresCtrlDiagDBusStubAdapterInternal::testMultiSpeakersOffStubDispatcher(
    &audioPresCtrlDiagStub::TestMultiSpeakersOff, "i",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
                	std::make_tuple(static_cast<CommonAPI::EmptyDeployment *>(nullptr)));

/**
 * description: This function is used to play a sine signal with sine generator with special
 *   parameters.     (at)return eAudioPresErrors
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlDiagStub,
    std::tuple<::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eSampleRateType, int16_t, int16_t, int16_t, int16_t>,
    std::tuple<::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eAudioPresErrors>,
    std::tuple<CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment>,
    std::tuple<CommonAPI::EmptyDeployment>
    
    > audioPresCtrlDiagDBusStubAdapterInternal::playSineToneStubDispatcher(
    &audioPresCtrlDiagStub::playSineTone, "i",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
                	std::make_tuple(static_cast<CommonAPI::EmptyDeployment *>(nullptr)));

/**
 * description: This function is used to stop playing sine tone for diagnostics purpose    
 *   (at)return eAudioPresErrors
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlDiagStub,
    std::tuple<>,
    std::tuple<::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eAudioPresErrors>,
    std::tuple<>,
    std::tuple<CommonAPI::EmptyDeployment>
    
    > audioPresCtrlDiagDBusStubAdapterInternal::stopSineToneStubDispatcher(
    &audioPresCtrlDiagStub::StopSineTone, "i",
					std::make_tuple(),
                	std::make_tuple(static_cast<CommonAPI::EmptyDeployment *>(nullptr)));





const audioPresCtrlDiagDBusStubAdapterHelper::StubDispatcherTable& audioPresCtrlDiagDBusStubAdapterInternal::getStubDispatcherTable() {
    return stubDispatcherTable_;
}

const CommonAPI::DBus::StubAttributeTable& audioPresCtrlDiagDBusStubAdapterInternal::getStubAttributeTable() {
    return stubAttributeTable_;
}

audioPresCtrlDiagDBusStubAdapterInternal::audioPresCtrlDiagDBusStubAdapterInternal(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub)
	: CommonAPI::DBus::DBusStubAdapter(_address, _connection,false),
      audioPresCtrlDiagDBusStubAdapterHelper(_address, _connection, std::dynamic_pointer_cast<audioPresCtrlDiagStub>(_stub), false),
      stubDispatcherTable_({
            /**
             * description: For diagnostic purpose to test one or multiple speakers 	(at)return
             *   eAudioPresErrors
             */
            { { "TestSpeakerOn", "qsdq" }, &com::harman::audio::audioPresCtrl::audioPresCtrlDiagDBusStubAdapterInternal::testSpeakerOnStubDispatcher },
            /**
             * description: For diagnostic purpose to turn OFF one or more speakers 	(at)return
             *   eAudioPresErrors
             */
            { { "TestMultiSpeakersOff", "q" }, &com::harman::audio::audioPresCtrl::audioPresCtrlDiagDBusStubAdapterInternal::testMultiSpeakersOffStubDispatcher },
            /**
             * description: This function is used to play a sine signal with sine generator with special
             *   parameters.     (at)return eAudioPresErrors
             */
            { { "playSineTone", "innnn" }, &com::harman::audio::audioPresCtrl::audioPresCtrlDiagDBusStubAdapterInternal::playSineToneStubDispatcher },
            /**
             * description: This function is used to stop playing sine tone for diagnostics purpose    
             *   (at)return eAudioPresErrors
             */
            { { "StopSineTone", "" }, &com::harman::audio::audioPresCtrl::audioPresCtrlDiagDBusStubAdapterInternal::stopSineToneStubDispatcher }
            }),
        stubAttributeTable_() {

    stubDispatcherTable_.insert({ { "getInterfaceVersion", "" }, &com::harman::audio::audioPresCtrl::audioPresCtrlDiagDBusStubAdapterInternal::getaudioPresCtrlDiagInterfaceVersionStubDispatcher });
}

bool audioPresCtrlDiagDBusStubAdapterInternal::hasFreedesktopProperties() {
    return false;
}

} // namespace audioPresCtrl
} // namespace audio
} // namespace harman
} // namespace com
} // namespace v1
