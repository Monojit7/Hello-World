/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
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
#ifndef V1_ORG_GENIVI_MEDIAMANAGER_INDEXER_HPP_
#define V1_ORG_GENIVI_MEDIAMANAGER_INDEXER_HPP_


#include <v1/org/genivi/mediamanager/MediaTypes.hpp>


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <CommonAPI/Types.hpp>
#include <cstdint>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace org {
namespace genivi {
namespace mediamanager {

class Indexer {
public:
    virtual ~Indexer() { }

    static inline const char* getInterface();
    static inline CommonAPI::Version getInterfaceVersion();
    
    struct IndexerStatus : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            RUNNING = 0,
            STOPPED = 1,
            IDLE = 2
        };
        
        IndexerStatus() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::RUNNING)) {}
        IndexerStatus(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::RUNNING):
                case static_cast<int32_t>(Literal::STOPPED):
                case static_cast<int32_t>(Literal::IDLE):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const IndexerStatus &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const IndexerStatus &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const IndexerStatus &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const IndexerStatus &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const IndexerStatus &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const IndexerStatus &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    typedef ::v1::org::genivi::mediamanager::MediaTypes::BackendError IndexerError;
};

const char* Indexer::getInterface() {
    return ("org.genivi.mediamanager.Indexer");
}

CommonAPI::Version Indexer::getInterfaceVersion() {
    return CommonAPI::Version(1, 0);
}

/**
 * description: RUNNING: The indexer is currently traversing files and/or
                     
 *            extracting metadata
                      STOPPED: The indexer has
 *   been stopped and will not start
                                 indexing by
 *   itself
                      IDLE:    The indexer has finished, and is waiting
 *   for new
                                 files to index
 */

} // namespace mediamanager
} // namespace genivi
} // namespace org
} // namespace v1

namespace CommonAPI {
}


// Compatibility
namespace v1_0 = v1;

#endif // V1_ORG_GENIVI_MEDIAMANAGER_INDEXER_HPP_
