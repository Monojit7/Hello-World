/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Wed Oct 26 18:16:09 IST 2016
*/
#include <v1/com/harman/mmpres/MediaManagerStubDefault.hpp>
#include <assert.h>

namespace v1 {
namespace com {
namespace harman {
namespace mmpres {

MediaManagerStubDefault::MediaManagerStubDefault():
        remoteEventHandler_(this),
        interfaceVersion_(MediaManager::getInterfaceVersion()) {
}

const CommonAPI::Version& MediaManagerStubDefault::getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return interfaceVersion_;
}

MediaManagerStubRemoteEvent* MediaManagerStubDefault::initStubAdapter(const std::shared_ptr<MediaManagerStubAdapter> &_adapter) {
    CommonAPI::Stub<MediaManagerStubAdapter, MediaManagerStubRemoteEvent>::stubAdapter_ = _adapter;
    return &remoteEventHandler_;
}


/**
 * description: Gets details for all the configured slots in the pres ctrl. Whichever slots are
 *   configured in the Presentation Controller config will be returned here, with
 *   the 
					  current status. 
	 		     
         returns:	  tSlotList:	Slot data
 */
void MediaManagerStubDefault::getSlots(const std::shared_ptr<CommonAPI::ClientId> _client, getSlotsReply_t _reply) {
    (void)_client;
    ::v1::com::harman::mmpres::MMPresTypes::tSlotList list = {};
    _reply(list);
}


/**
 * description: Emitted if there is a state change for any slot. 
	 		     
         returns:	 
 *   slot:	Slot data
 */
void MediaManagerStubDefault::fireSlotUpdateEvent(const ::v1::com::harman::mmpres::MMPresTypes::tSlot &_slot) {
    assert((CommonAPI::Stub<MediaManagerStubAdapter, MediaManagerStubRemoteEvent>::stubAdapter_.lock()) !=NULL);
    auto stubAdapter = CommonAPI::Stub<MediaManagerStubAdapter, MediaManagerStubRemoteEvent>::stubAdapter_.lock();
   	if (stubAdapter)
        stubAdapter->fireSlotUpdateEvent(_slot);
}


MediaManagerStubDefault::RemoteEventHandler::RemoteEventHandler(MediaManagerStubDefault *_defaultStub)
    : 
      defaultStub_(_defaultStub) {
}

} // namespace mmpres
} // namespace harman
} // namespace com
} // namespace v1