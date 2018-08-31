/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Wed Oct 26 18:16:09 IST 2016
*/
/**
 * description: Indexer control interface. Allows administerial tasks for
                  the
 *   indexer backend, such as starting, stopping and requesting
                 
 *   status of the indexer.
                  For querying the database, please
 *   see
                  org.genivi.mediamanager.Browser
 */
#include <v1/org/genivi/mediamanager/IndexerDBusProxy.hpp>

namespace v1 {
namespace org {
namespace genivi {
namespace mediamanager {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createIndexerDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection) {
	return std::make_shared<IndexerDBusProxy>(_address, _connection);
}

INITIALIZER(registerIndexerDBusProxy) {
     CommonAPI::DBus::Factory::get()->registerProxyCreateMethod(
		Indexer::getInterface(),
		&createIndexerDBusProxy);
}

IndexerDBusProxy::IndexerDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection)
	:	CommonAPI::DBus::DBusProxy(_address, _connection)
,		indexerStatus_(*this, "onIndexerStatusAttributeChanged", "i", "getIndexerStatusAttribute", static_cast<CommonAPI::EmptyDeployment*>(nullptr))
{
}

      IndexerDBusProxy::IndexerStatusAttribute& IndexerDBusProxy::getIndexerStatusAttribute() {
          return indexerStatus_;
      }

    
    /**
     * description: Get the path to the database file in the host file system.
                        
     *    This is the database file used by LMS to store metadata
     * param: output: Path to database file in host file system
     * deprecated: This is only used for testing purposes and will be removed
     */
    COMMONAPI_DEPRECATED void IndexerDBusProxy::getDatabasePath(CommonAPI::CallStatus &_internalCallStatus, std::string &_output, Indexer::IndexerError &_e, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_output(static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::Deployable<Indexer::IndexerError, CommonAPI::EmptyDeployment> deploy_e(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<std::string,CommonAPI::DBus::StringDeployment>,
            CommonAPI::Deployable<Indexer::IndexerError,CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "getDatabasePath",
        "",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
_internalCallStatus,
deploy_output, deploy_e);
_output = deploy_output.getValue();
_e = deploy_e.getValue();
}
    std::future<CommonAPI::CallStatus> IndexerDBusProxy::getDatabasePathAsync(GetDatabasePathAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_output(static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::Deployable<Indexer::IndexerError, CommonAPI::EmptyDeployment> deploy_e(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<std::string,CommonAPI::DBus::StringDeployment>,
            CommonAPI::Deployable<Indexer::IndexerError,CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "getDatabasePath",
        "",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> _output, CommonAPI::Deployable<Indexer::IndexerError, CommonAPI::EmptyDeployment> _e) {
        	if (_callback)
        		_callback(_internalCallStatus, _output.getValue(), _e.getValue());
        },
        std::make_tuple(deploy_output, deploy_e));
    }
    /**
     * description: If the indexer is currently IDLE or RUNNING
                          (see
     *   IndexerStatus), stop indexing and set IndexerStatus
                          to
     *   STOPPED.
                          If indexer is currently STOPPED, no action is
     *   taken
     */
    void IndexerDBusProxy::stopIndexing(CommonAPI::CallStatus &_internalCallStatus, Indexer::IndexerError &_e, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<Indexer::IndexerError, CommonAPI::EmptyDeployment> deploy_e(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<Indexer::IndexerError,CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "stopIndexing",
        "",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
_internalCallStatus,
deploy_e);
_e = deploy_e.getValue();
}
    std::future<CommonAPI::CallStatus> IndexerDBusProxy::stopIndexingAsync(StopIndexingAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<Indexer::IndexerError, CommonAPI::EmptyDeployment> deploy_e(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<Indexer::IndexerError,CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "stopIndexing",
        "",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<Indexer::IndexerError, CommonAPI::EmptyDeployment> _e) {
        	if (_callback)
        		_callback(_internalCallStatus, _e.getValue());
        },
        std::make_tuple(deploy_e));
    }
    /**
     * description: If indexer is currently STOPPED (see IndexerStatus),
                         
     *   status is changed to RUNNING and indexing is RUNNING. If
                         
     *   the status is IDLE or RUNNING, no action is taken.
                          Note
     *   that the status may go from RUNNING to IDLE directly
                         
     *   after issuing this call, if no files are to be indexed
     */
    void IndexerDBusProxy::startIndexing(CommonAPI::CallStatus &_internalCallStatus, Indexer::IndexerError &_e, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<Indexer::IndexerError, CommonAPI::EmptyDeployment> deploy_e(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<Indexer::IndexerError,CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "startIndexing",
        "",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
_internalCallStatus,
deploy_e);
_e = deploy_e.getValue();
}
    std::future<CommonAPI::CallStatus> IndexerDBusProxy::startIndexingAsync(StartIndexingAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<Indexer::IndexerError, CommonAPI::EmptyDeployment> deploy_e(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<Indexer::IndexerError,CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "startIndexing",
        "",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<Indexer::IndexerError, CommonAPI::EmptyDeployment> _e) {
        	if (_callback)
        		_callback(_internalCallStatus, _e.getValue());
        },
        std::make_tuple(deploy_e));
    }
    /**
     * description: re-indexing a device, 
        				  all the device indices will be deleted and
     *   start indexing
        			      from fresh.
     */
    void IndexerDBusProxy::reIndexing(const uint32_t &_id, CommonAPI::CallStatus &_internalCallStatus, Indexer::IndexerError &_e, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_id(_id, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<Indexer::IndexerError, CommonAPI::EmptyDeployment> deploy_e(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<Indexer::IndexerError,CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "reIndexing",
        "u",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_id,
_internalCallStatus,
deploy_e);
_e = deploy_e.getValue();
}
    std::future<CommonAPI::CallStatus> IndexerDBusProxy::reIndexingAsync(const uint32_t &_id, ReIndexingAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment> deploy_id(_id, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<Indexer::IndexerError, CommonAPI::EmptyDeployment> deploy_e(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<uint32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<Indexer::IndexerError,CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "reIndexing",
        "u",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_id,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<Indexer::IndexerError, CommonAPI::EmptyDeployment> _e) {
        	if (_callback)
        		_callback(_internalCallStatus, _e.getValue());
        },
        std::make_tuple(deploy_e));
    }


void IndexerDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
          ownVersionMajor = 1;
          ownVersionMinor = 0;
      }

      } // namespace mediamanager
      } // namespace genivi
      } // namespace org
      } // namespace v1
