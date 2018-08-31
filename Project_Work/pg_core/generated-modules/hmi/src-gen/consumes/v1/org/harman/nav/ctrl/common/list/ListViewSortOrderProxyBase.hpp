/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/
/**
 * description: This interface provides functionality to specify the sort order to views.
   
 *   Any interfaces using this interface building block must provide specification
 *   on which parts of list elements shall be used for sorting.
    The number of
 *   sort orders may be extended by inheritance of data type Order as well if
 *   needed.
 */
#ifndef V1_ORG_HARMAN_NAV_CTRL_COMMON_LIST_List_View_Sort_Order_PROXY_BASE_HPP_
#define V1_ORG_HARMAN_NAV_CTRL_COMMON_LIST_List_View_Sort_Order_PROXY_BASE_HPP_

#include <v1/org/harman/nav/ctrl/common/list/ListViewSortOrder.hpp>
#include <v1/org/harman/nav/ctrl/common/list/ListViewBaseProxyBase.hpp>


#include <org/harman/nav/ctrl/CommonTypes.hpp>
#include <org/harman/nav/ctrl/common/list/ListTypes.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/Deployment.hpp>
#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <CommonAPI/Struct.hpp>
#include <cstdint>
#include <string>
#include <vector>

#include <CommonAPI/Proxy.hpp>
#include <functional>
#include <future>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace org {
namespace harman {
namespace nav {
namespace ctrl {
namespace common {
namespace list {

class ListViewSortOrderProxyBase
    : virtual public ListViewBaseProxyBase {
public:

    typedef std::function<void(const CommonAPI::CallStatus&, const ::org::harman::nav::ctrl::CommonTypes::Version&)> GetVersionAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::org::harman::nav::ctrl::common::list::ListTypes::ListError&)> SetSortOrderAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::org::harman::nav::ctrl::common::list::ListTypes::ListError&, const ::org::harman::nav::ctrl::common::list::ListTypes::SortOption&)> GetSortOrderAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::org::harman::nav::ctrl::common::list::ListTypes::ListError&)> RemoveAllAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::org::harman::nav::ctrl::common::list::ListTypes::ListError&)> RemoveItemAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::org::harman::nav::ctrl::common::list::ListTypes::ListError&)> AddItemAsyncCallback;



    /**
     * description: getVersion = This method returns the API version implemented by the server
     *   application
     */
    virtual void getVersion(CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::CommonTypes::Version &_version, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> getVersionAsync(GetVersionAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: configure the sort order of a view instance. Changing the sort order of a view
     *   may trigger a view update.
     */
    virtual void setSortOrder(const ::org::harman::nav::ctrl::common::list::ListTypes::ViewId &_view, const ::org::harman::nav::ctrl::common::list::ListTypes::SortOption &_order, CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::common::list::ListTypes::ListError &_error, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> setSortOrderAsync(const ::org::harman::nav::ctrl::common::list::ListTypes::ViewId &_view, const ::org::harman::nav::ctrl::common::list::ListTypes::SortOption &_order, SetSortOrderAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: retrieve the sort order of a view instance
     */
    virtual void getSortOrder(const ::org::harman::nav::ctrl::common::list::ListTypes::ViewId &_view, CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::common::list::ListTypes::ListError &_error, ::org::harman::nav::ctrl::common::list::ListTypes::SortOption &_order, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> getSortOrderAsync(const ::org::harman::nav::ctrl::common::list::ListTypes::ViewId &_view, GetSortOrderAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: remove all items which are related to the given List id.
     */
    virtual void removeAll(const ::org::harman::nav::ctrl::common::list::ListTypes::ListId &_list, CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::common::list::ListTypes::ListError &_error, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> removeAllAsync(const ::org::harman::nav::ctrl::common::list::ListTypes::ListId &_list, RemoveAllAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: remove an item from a list
     * param: ListTypes.ViewId sourceViewId source view id, which is where this item is known
     *   from
     * param: ListTypes.ViewKey source item key, which identifies the item which shall be
     *   removed
     * param: ListTypes.destinationListId the list from which the item shall be removed
     */
    virtual void removeItem(const ::org::harman::nav::ctrl::common::list::ListTypes::ViewId &_sourceViewId, const ::org::harman::nav::ctrl::common::list::ListTypes::ViewKey &_sourceItemKey, const ::org::harman::nav::ctrl::common::list::ListTypes::ListId &_destination, CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::common::list::ListTypes::ListError &_error, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> removeItemAsync(const ::org::harman::nav::ctrl::common::list::ListTypes::ViewId &_sourceViewId, const ::org::harman::nav::ctrl::common::list::ListTypes::ViewKey &_sourceItemKey, const ::org::harman::nav::ctrl::common::list::ListTypes::ListId &_destination, RemoveItemAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: add a exsisting item to another list.
     * param: ListTypes.ViewId sourceViewId, the source viewid of the to be added item
     * param: ListTypes.ViewKey sourceItemKey, the key within the given view of the to be
     *   added item
     * param: ListTypes.ListId destinationListId, the list where the item should be added.
     */
    virtual void addItem(const ::org::harman::nav::ctrl::common::list::ListTypes::ViewId &_sourceViewId, const ::org::harman::nav::ctrl::common::list::ListTypes::ViewKey &_sourceItemKey, const ::org::harman::nav::ctrl::common::list::ListTypes::ListId &_destinationListId, CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::common::list::ListTypes::ListError &_error, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> addItemAsync(const ::org::harman::nav::ctrl::common::list::ListTypes::ViewId &_sourceViewId, const ::org::harman::nav::ctrl::common::list::ListTypes::ViewKey &_sourceItemKey, const ::org::harman::nav::ctrl::common::list::ListTypes::ListId &_destinationListId, AddItemAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
};

} // namespace list
} // namespace common
} // namespace ctrl
} // namespace nav
} // namespace harman
} // namespace org
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_ORG_HARMAN_NAV_CTRL_COMMON_LIST_List_View_Sort_Order_PROXY_BASE_HPP_