/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Wed Oct 26 18:16:09 IST 2016
*/
#include <v1/com/harman/mmpres/MediaManager.hpp>
#include <v1/com/harman/mmpres/MediaManagerDBusStubAdapter.hpp>

namespace v1 {
namespace com {
namespace harman {
namespace mmpres {

std::shared_ptr<CommonAPI::DBus::DBusStubAdapter> createMediaManagerDBusStubAdapter(
                   const CommonAPI::DBus::DBusAddress &_address,
                   const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
                   const std::shared_ptr<CommonAPI::StubBase> &_stub) {
    return std::make_shared<MediaManagerDBusStubAdapter>(_address, _connection, _stub);
}

INITIALIZER(registerMediaManagerDBusStubAdapter) {
    CommonAPI::DBus::Factory::get()->registerStubAdapterCreateMethod(
    	MediaManager::getInterface(), &createMediaManagerDBusStubAdapter);
}

MediaManagerDBusStubAdapterInternal::~MediaManagerDBusStubAdapterInternal() {
    deactivateManagedInstances();
    MediaManagerDBusStubAdapterHelper::deinit();
}

void MediaManagerDBusStubAdapterInternal::deactivateManagedInstances() {

}

const char* MediaManagerDBusStubAdapterInternal::getMethodsDBusIntrospectionXmlData() const {
    static const std::string introspectionData =
        "<method name=\"getInterfaceVersion\">\n"
            "<arg name=\"value\" type=\"uu\" direction=\"out\" />"
        "</method>\n"
        /**
         * description: Emitted if there is a state change for any slot. 
        	 		     
                 returns:	 
         *   slot:	Slot data
         */
        "<signal name=\"slotUpdate\">\n"
            "<arg name=\"slot\" type=\"(yii(tiiuuussua{it}))\" />\n"
        "</signal>\n"
        /**
         * description: Gets details for all the configured slots in the pres ctrl. Whichever slots are
         *   configured in the Presentation Controller config will be returned here, with
         *   the 
        					  current status. 
        	 		     
                 returns:	  tSlotList:	Slot data
         */
        "<method name=\"getSlots\">\n"
            "<arg name=\"_list\" type=\"a(yii(tiiuuussua{it}))\" direction=\"out\" />\n"
        "</method>\n"

    ;
    return introspectionData.c_str();
}

CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::harman::mmpres::MediaManagerStub,
        CommonAPI::Version
        > MediaManagerDBusStubAdapterInternal::getMediaManagerInterfaceVersionStubDispatcher(&MediaManagerStub::getInterfaceVersion, "uu");




/**
 * description: Gets details for all the configured slots in the pres ctrl. Whichever slots are
 *   configured in the Presentation Controller config will be returned here, with
 *   the 
					  current status. 
	 		     
         returns:	  tSlotList:	Slot data
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v1::com::harman::mmpres::MediaManagerStub,
    std::tuple<>,
    std::tuple<::v1::com::harman::mmpres::MMPresTypes::tSlotList>,
    std::tuple<>,
    std::tuple<::v1::com::harman::mmpres::MMPresTypes_::tSlotListDeployment_t>
    
    > MediaManagerDBusStubAdapterInternal::getSlotsStubDispatcher(
    &MediaManagerStub::getSlots, "a(yii(tiiuuussua{it}))",
					std::make_tuple(),
                	std::make_tuple(static_cast<::v1::com::harman::mmpres::MMPresTypes_::tSlotListDeployment_t*>(nullptr)));



/**
 * description: Emitted if there is a state change for any slot. 
	 		     
         returns:	 
 *   slot:	Slot data
 */
void MediaManagerDBusStubAdapterInternal::fireSlotUpdateEvent(const ::v1::com::harman::mmpres::MMPresTypes::tSlot& slot) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    CommonAPI::Deployable<::v1::com::harman::mmpres::MMPresTypes::tSlot, ::v1::com::harman::mmpres::MMPresTypes_::tSlotDeployment_t>
    >>::sendSignal(
            *this,
            "slotUpdate",
            "(yii(tiiuuussua{it}))",
    CommonAPI::Deployable<::v1::com::harman::mmpres::MMPresTypes::tSlot, ::v1::com::harman::mmpres::MMPresTypes_::tSlotDeployment_t>(slot, static_cast<::v1::com::harman::mmpres::MMPresTypes_::tSlotDeployment_t*>(nullptr))
    );
}


const MediaManagerDBusStubAdapterHelper::StubDispatcherTable& MediaManagerDBusStubAdapterInternal::getStubDispatcherTable() {
    return stubDispatcherTable_;
}

const CommonAPI::DBus::StubAttributeTable& MediaManagerDBusStubAdapterInternal::getStubAttributeTable() {
    return stubAttributeTable_;
}

MediaManagerDBusStubAdapterInternal::MediaManagerDBusStubAdapterInternal(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub)
	: CommonAPI::DBus::DBusStubAdapter(_address, _connection,false),
      MediaManagerDBusStubAdapterHelper(_address, _connection, std::dynamic_pointer_cast<MediaManagerStub>(_stub), false),
      stubDispatcherTable_({
            /**
             * description: Gets details for all the configured slots in the pres ctrl. Whichever slots are
             *   configured in the Presentation Controller config will be returned here, with
             *   the 
            					  current status. 
            	 		     
                     returns:	  tSlotList:	Slot data
             */
            { { "getSlots", "" }, &com::harman::mmpres::MediaManagerDBusStubAdapterInternal::getSlotsStubDispatcher }
            }),
        stubAttributeTable_() {

    stubDispatcherTable_.insert({ { "getInterfaceVersion", "" }, &com::harman::mmpres::MediaManagerDBusStubAdapterInternal::getMediaManagerInterfaceVersionStubDispatcher });
}

bool MediaManagerDBusStubAdapterInternal::hasFreedesktopProperties() {
    return false;
}

} // namespace mmpres
} // namespace harman
} // namespace com
} // namespace v1