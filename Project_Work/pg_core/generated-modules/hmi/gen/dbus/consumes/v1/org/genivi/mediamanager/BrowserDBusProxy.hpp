/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/
#ifndef V1_ORG_GENIVI_MEDIAMANAGER_Browser_DBUS_PROXY_HPP_
#define V1_ORG_GENIVI_MEDIAMANAGER_Browser_DBUS_PROXY_HPP_

#include <v1/org/genivi/mediamanager/BrowserProxyBase.hpp>
#include "v1/org/genivi/mediamanager/BrowserDBusDeployment.hpp"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusAddress.hpp>
#include <CommonAPI/DBus/DBusFactory.hpp>
#include <CommonAPI/DBus/DBusProxy.hpp>
#include <CommonAPI/DBus/DBusAddressTranslator.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <string>

namespace v1 {
namespace org {
namespace genivi {
namespace mediamanager {

class BrowserDBusProxy
    : virtual public BrowserProxyBase, 
      virtual public CommonAPI::DBus::DBusProxy {
public:
    BrowserDBusProxy(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection);

    virtual ~BrowserDBusProxy() { }



    /**
     * description: Return a list of all media manager identifiers. These are
             used to
     *   indicate which media manager we should interact with.
             returns: A list
     *   of all media managers found
     */
    virtual void discoverMediaManagers(CommonAPI::CallStatus &_internalCallStatus, std::vector<std::string> &_identifiers, ::v1::org::genivi::mediamanager::BrowserTypes::BrowserError &_e, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> discoverMediaManagersAsync(DiscoverMediaManagersAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: List all containers below the given path.
             returns: ResultMapList of
     *   all containers with the given path as parent.
             	   	  See
     *   MediaTypes.fidl for a list of allowed keys.
             errors: NO_CONNECTION if
     *   no connection can be established to underlying
                     browsing
     *   engine
                     BAD_PATH if path parameter is invalid
     * param: path The path to search for containers. The format of the path
                   
     *   depends on the underlying browsing backend
     * param: offset: The offset to use for indexing the results list
     * param: count: The number of results to return, starting from offset
     * param: filter: Array of keys to include in resulting ResultMapList
     */
    virtual void listContainers(const std::string &_path, const uint64_t &_offset, const uint64_t &_count, const std::vector<std::string> &_filter, CommonAPI::CallStatus &_internalCallStatus, ::v1::org::genivi::mediamanager::MediaTypes::ResultMapList &_m, ::v1::org::genivi::mediamanager::BrowserTypes::BrowserError &_e, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> listContainersAsync(const std::string &_path, const uint64_t &_offset, const uint64_t &_count, const std::vector<std::string> &_filter, ListContainersAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Extends ListContainers with sorting capabilities
     * param: sortKey Key to sort ResultMapList on
     */
    virtual void listContainersEx(const std::string &_path, const uint64_t &_offset, const uint64_t &_count, const std::vector<std::string> &_filter, const ::v1::org::genivi::mediamanager::BrowserTypes::SortKey &_sortKey, CommonAPI::CallStatus &_internalCallStatus, ::v1::org::genivi::mediamanager::MediaTypes::ResultMapList &_m, ::v1::org::genivi::mediamanager::BrowserTypes::BrowserError &_e, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> listContainersExAsync(const std::string &_path, const uint64_t &_offset, const uint64_t &_count, const std::vector<std::string> &_filter, const ::v1::org::genivi::mediamanager::BrowserTypes::SortKey &_sortKey, ListContainersExAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: List all items in the given container
             returns: A ResultMapList of all
     *   items with the given container as parent.
             		  See MediaTypes.fidl for
     *   a list of allowed keys.
             errors: NO_CONNECTION if no connection can be
     *   established to underlying
                     browsing engine
                    
     *   BAD_PATH if path parameter is invalid
     * param: path The path of the container to search for items.
                    The format
     *   of the path depends on the underlying browsing
                    backend
     * param: offset: The offset to use for indexing the results list
     * param: count: The number of results to return, starting from offset
     * param: filter: Array of keys to include in resulting ResultMapList
     */
    virtual void listItems(const std::string &_path, const uint64_t &_offset, const uint64_t &_count, const std::vector<std::string> &_filter, CommonAPI::CallStatus &_internalCallStatus, ::v1::org::genivi::mediamanager::MediaTypes::ResultMapList &_m, ::v1::org::genivi::mediamanager::BrowserTypes::BrowserError &_e, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> listItemsAsync(const std::string &_path, const uint64_t &_offset, const uint64_t &_count, const std::vector<std::string> &_filter, ListItemsAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Extends ListItems with sorting capabilities
     * param: sortKey Key to sort ResultMapList
     */
    virtual void listItemsEx(const std::string &_path, const uint64_t &_offset, const uint64_t &_count, const std::vector<std::string> &_filter, const ::v1::org::genivi::mediamanager::BrowserTypes::SortKey &_sortKey, CommonAPI::CallStatus &_internalCallStatus, ::v1::org::genivi::mediamanager::MediaTypes::ResultMapList &_m, ::v1::org::genivi::mediamanager::BrowserTypes::BrowserError &_e, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> listItemsExAsync(const std::string &_path, const uint64_t &_offset, const uint64_t &_count, const std::vector<std::string> &_filter, const ::v1::org::genivi::mediamanager::BrowserTypes::SortKey &_sortKey, ListItemsExAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: List all children in the given container
             returns: A ResultMapList of
     *   all children with the given container as parent.
             		  See
     *   MediaTypes.fidl for a list of allowed keys.
             errors: NO_CONNECTION if
     *   no connection can be established to underlying
                      browsing
     *   engine
                      BAD_PATH if path parameter is invalid
     * param: path The path of the container to search for children.
                    The
     *   format of the path depends on the underlying browsing
                    backend
     * param: offset: The offset to use for indexing the results list
     * param: count: The number of results to return, starting from offset
     * param: filter: Array of keys to include in resulting ResultMapList
     */
    virtual void listChildren(const std::string &_path, const uint64_t &_offset, const uint64_t &_count, const std::vector<std::string> &_filter, CommonAPI::CallStatus &_internalCallStatus, ::v1::org::genivi::mediamanager::MediaTypes::ResultMapList &_m, ::v1::org::genivi::mediamanager::BrowserTypes::BrowserError &_e, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> listChildrenAsync(const std::string &_path, const uint64_t &_offset, const uint64_t &_count, const std::vector<std::string> &_filter, ListChildrenAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Extends ListChildren with sorting capabilities
     * param: sortKey Key to sort ResultMapList on
     */
    virtual void listChildrenEx(const std::string &_path, const uint64_t &_offset, const uint64_t &_count, const std::vector<std::string> &_filter, const ::v1::org::genivi::mediamanager::BrowserTypes::SortKey &_sortKey, CommonAPI::CallStatus &_internalCallStatus, ::v1::org::genivi::mediamanager::MediaTypes::ResultMapList &_m, ::v1::org::genivi::mediamanager::BrowserTypes::BrowserError &_e, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> listChildrenExAsync(const std::string &_path, const uint64_t &_offset, const uint64_t &_count, const std::vector<std::string> &_filter, const ::v1::org::genivi::mediamanager::BrowserTypes::SortKey &_sortKey, ListChildrenExAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Retrieve the count of searching objects in the given container
            
     *   returns:     count of searching objects
             errors:      S_OK if no
     *   error. otherwise, error occurred.
     * param: path The path of the container to search for children.
                    The
     *   format of the path depends on the underlying browsing
                    backend
     * param: query Search query to match children against. The format of the
                   
     *   query depends on the underlying browsing backend
     */
    virtual void getSearchObjectsCount(const std::string &_path, const std::string &_query, CommonAPI::CallStatus &_internalCallStatus, uint64_t &_count, ::v1::org::genivi::mediamanager::BrowserTypes::BrowserError &_e, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getSearchObjectsCountAsync(const std::string &_path, const std::string &_query, GetSearchObjectsCountAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Search for children in the given container
             returns: A ResultMapList of
     *   all children matching the search criteria with
                       the given
     *   container as parent.See MediaTypes.fidl for a list of
                      
     *   allowed keys.
             errors: NO_CONNECTION if no connection can be
     *   established to underlying
                     browsing engine
                    
     *   BAD_PATH if path parameter is invalid
     * param: path The path of the container to search for children.
                    The
     *   format of the path depends on the underlying browsing
                    backend
     * param: query Search query to match children against. The format of the
                   
     *   query depends on the underlying browsing backend
     * param: offset: The offset to use for indexing the results list
     * param: count: The number of results to return, starting from offset
     * param: filter: Array of keys to include in resulting ResultMapList
     */
    virtual void searchObjects(const std::string &_path, const std::string &_query, const uint64_t &_offset, const uint64_t &_count, const std::vector<std::string> &_filter, CommonAPI::CallStatus &_internalCallStatus, ::v1::org::genivi::mediamanager::MediaTypes::ResultMapList &_m, ::v1::org::genivi::mediamanager::BrowserTypes::BrowserError &_e, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> searchObjectsAsync(const std::string &_path, const std::string &_query, const uint64_t &_offset, const uint64_t &_count, const std::vector<std::string> &_filter, SearchObjectsAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Extends SearchObjects with sorting capabilities
     * param: sortKey Key to sort ResultMapList on
     */
    virtual void searchObjectsEx(const std::string &_path, const std::string &_query, const uint64_t &_offset, const uint64_t &_count, const std::vector<std::string> &_filter, const ::v1::org::genivi::mediamanager::BrowserTypes::SortKey &_sortKey, CommonAPI::CallStatus &_internalCallStatus, ::v1::org::genivi::mediamanager::MediaTypes::ResultMapList &_m, ::v1::org::genivi::mediamanager::BrowserTypes::BrowserError &_e, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> searchObjectsExAsync(const std::string &_path, const std::string &_query, const uint64_t &_offset, const uint64_t &_count, const std::vector<std::string> &_filter, const ::v1::org::genivi::mediamanager::BrowserTypes::SortKey &_sortKey, SearchObjectsExAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Get a list of all initial letters and their index in the
                         
     *   given container
             returns: A list of tuples of initial letters and
     *   their first
                       observed position when sorting according to
     *   sortKey
             errors: NO_CONNECTION if no connection can be established to
     *   underlying
                     browsing engine
                     BAD_PATH if path
     *   parameter is invalid
     * param: container: Container to build index list for
     * param: count: How many (unsorted) items should be traversed to build
                     
     *          index
     * param: filter: List of initial letters to include
     * param: sortKey: Key to sort on when building index list
     */
    virtual void listIndexes(const std::string &_container, const uint64_t &_count, const std::vector<std::string> &_filter, const ::v1::org::genivi::mediamanager::BrowserTypes::SortKey &_sortKey, CommonAPI::CallStatus &_internalCallStatus, std::string &_indexes, ::v1::org::genivi::mediamanager::BrowserTypes::BrowserError &_e, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> listIndexesAsync(const std::string &_container, const uint64_t &_count, const std::vector<std::string> &_filter, const ::v1::org::genivi::mediamanager::BrowserTypes::SortKey &_sortKey, ListIndexesAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Create a new empty container with path used as root
             returns: Path
     *   identifier for the newly created container
             errors: NO_CONNECTION if
     *   no connection can be established to underlying
                      browsing
     *   engine
                      BAD_PATH if path parameter is invalid
     * param: path: Path to place the newly created container in
     * param: displayName: Display name for the new container
     * param: childTypes: Array of allowed types on children in new container
     */
    virtual void createContainer(const std::string &_path, const std::string &_displayName, const std::vector<std::string> &_childTypes, CommonAPI::CallStatus &_internalCallStatus, std::string &_pathIdentifier, ::v1::org::genivi::mediamanager::BrowserTypes::BrowserError &_e, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> createContainerAsync(const std::string &_path, const std::string &_displayName, const std::vector<std::string> &_childTypes, CreateContainerAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Place a reference in a container, pointing to an object
             returns: Path
     *   identifier for the container containing the reference
             errors:
     *   NO_CONNECTION if no connection can be established to underlying
                  
     *      browsing engine
                      BAD_PATH if path parameter is invalid
     * param: path: Path to place the newly created container in
     * param: objectPath: Path to object to create reference to
     */
    virtual void createReference(const std::string &_path, const std::string &_objectPath, CommonAPI::CallStatus &_internalCallStatus, std::string &_pathIdentifier, ::v1::org::genivi::mediamanager::BrowserTypes::BrowserError &_e, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> createReferenceAsync(const std::string &_path, const std::string &_objectPath, CreateReferenceAsyncCallback _callback, const CommonAPI::CallInfo *_info);


    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

private:
   


};

} // namespace mediamanager
} // namespace genivi
} // namespace org
} // namespace v1

#endif // V1_ORG_GENIVI_MEDIAMANAGER_Browser_DBUS_PROXY_HPP_
