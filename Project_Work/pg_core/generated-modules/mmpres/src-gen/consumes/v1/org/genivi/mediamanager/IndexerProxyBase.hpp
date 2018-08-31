/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
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
#ifndef V1_ORG_GENIVI_MEDIAMANAGER_Indexer_PROXY_BASE_HPP_
#define V1_ORG_GENIVI_MEDIAMANAGER_Indexer_PROXY_BASE_HPP_

#include <v1/org/genivi/mediamanager/Indexer.hpp>


#include <v1/org/genivi/mediamanager/MediaTypes.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <cstdint>
#include <vector>

#include <CommonAPI/Attribute.hpp>
#include <CommonAPI/Proxy.hpp>
#include <functional>
#include <future>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace org {
namespace genivi {
namespace mediamanager {

class IndexerProxyBase
    : virtual public CommonAPI::Proxy {
public:
    typedef CommonAPI::ObservableReadonlyAttribute<::v1::org::genivi::mediamanager::Indexer::IndexerStatus> IndexerStatusAttribute;

    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const Indexer::IndexerError&)> GetDatabasePathAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const Indexer::IndexerError&)> StopIndexingAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const Indexer::IndexerError&)> StartIndexingAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const Indexer::IndexerError&)> ReIndexingAsyncCallback;

    /**
     * description: Get the current status of the indexer.
     */
    virtual IndexerStatusAttribute& getIndexerStatusAttribute() = 0;


    /**
     * description: Get the path to the database file in the host file system.
                        
     *    This is the database file used by LMS to store metadata
     * param: output: Path to database file in host file system
     * deprecated: This is only used for testing purposes and will be removed
     */
    virtual COMMONAPI_DEPRECATED void getDatabasePath(CommonAPI::CallStatus &_internalCallStatus, std::string &_output, Indexer::IndexerError &_e, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> getDatabasePathAsync(GetDatabasePathAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: If the indexer is currently IDLE or RUNNING
                          (see
     *   IndexerStatus), stop indexing and set IndexerStatus
                          to
     *   STOPPED.
                          If indexer is currently STOPPED, no action is
     *   taken
     */
    virtual void stopIndexing(CommonAPI::CallStatus &_internalCallStatus, Indexer::IndexerError &_e, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> stopIndexingAsync(StopIndexingAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: If indexer is currently STOPPED (see IndexerStatus),
                         
     *   status is changed to RUNNING and indexing is RUNNING. If
                         
     *   the status is IDLE or RUNNING, no action is taken.
                          Note
     *   that the status may go from RUNNING to IDLE directly
                         
     *   after issuing this call, if no files are to be indexed
     */
    virtual void startIndexing(CommonAPI::CallStatus &_internalCallStatus, Indexer::IndexerError &_e, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> startIndexingAsync(StartIndexingAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: re-indexing a device, 
        				  all the device indices will be deleted and
     *   start indexing
        			      from fresh.
     */
    virtual void reIndexing(const uint32_t &_id, CommonAPI::CallStatus &_internalCallStatus, Indexer::IndexerError &_e, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> reIndexingAsync(const uint32_t &_id, ReIndexingAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
};

} // namespace mediamanager
} // namespace genivi
} // namespace org
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_ORG_GENIVI_MEDIAMANAGER_Indexer_PROXY_BASE_HPP_
