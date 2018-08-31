/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/
#ifndef V1_ORG_HARMAN_NAV_CTRL_DI_One_Box_Search_DBUS_PROXY_HPP_
#define V1_ORG_HARMAN_NAV_CTRL_DI_One_Box_Search_DBUS_PROXY_HPP_

#include <v1/org/harman/nav/ctrl/di/OneBoxSearchProxyBase.hpp>
#include "v1/org/harman/nav/ctrl/di/OneBoxSearchDBusDeployment.hpp"

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
namespace org {
namespace harman {
namespace nav {
namespace ctrl {
namespace di {

class OneBoxSearchDBusProxy
    : virtual public OneBoxSearchProxyBase, 
      virtual public CommonAPI::DBus::DBusProxy {
public:
    OneBoxSearchDBusProxy(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection);

    virtual ~OneBoxSearchDBusProxy() { }


    virtual SearchStatusEvent& getSearchStatusEvent();
    virtual SearchResultListEvent& getSearchResultListEvent();
    virtual SearchResultListSizeChangedEvent& getSearchResultListSizeChangedEvent();

    /**
     * description: getVersion = This method returns the API version implemented by the server
     *   application
     */
    virtual void getVersion(CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::CommonTypes::Version &_version, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getVersionAsync(GetVersionAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: createOneBoxSearch = This method creates a new OneBoxSearch and retrieves a
     *   handle
     */
    virtual void createOneBoxSearch(CommonAPI::CallStatus &_internalCallStatus, OneBoxSearch::createOneBoxSearchError &_error, ::org::harman::nav::ctrl::CommonTypes::Handle &_oneBoxSearchHandle, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> createOneBoxSearchAsync(CreateOneBoxSearchAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: deleteLocationInput = This method deletes a location input and its associated
     *   resources
     */
    virtual void deleteOneBoxSearch(const ::org::harman::nav::ctrl::CommonTypes::Handle &_oneBoxSearchHandle, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> deleteOneBoxSearchAsync(const ::org::harman::nav::ctrl::CommonTypes::Handle &_oneBoxSearchHandle, DeleteOneBoxSearchAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: setSearchCountry = This method sets the target country for the current search,
     *   If no country is set the current center position is used to determine the
     *   country
     */
    virtual void setSearchCountry(const ::org::harman::nav::ctrl::CommonTypes::Handle &_oneBoxSearchHandle, const std::string &_country, CommonAPI::CallStatus &_internalCallStatus, OneBoxSearch::setSearchCountryError &_error, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> setSearchCountryAsync(const ::org::harman::nav::ctrl::CommonTypes::Handle &_oneBoxSearchHandle, const std::string &_country, SetSearchCountryAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: setSearchLanguage = for the phonetic search algorithms the language and script
     *   are important
     */
    virtual void setSearchLanguage(const ::org::harman::nav::ctrl::CommonTypes::Handle &_ftsSearchHandle, const std::string &_language, const std::string &_script, CommonAPI::CallStatus &_internalCallStatus, OneBoxSearch::setSearchLanguageError &_error, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> setSearchLanguageAsync(const ::org::harman::nav::ctrl::CommonTypes::Handle &_ftsSearchHandle, const std::string &_language, const std::string &_script, SetSearchLanguageAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: setSearchParameters = SetSearchParameters = configure if we want to search for
     *   addresses and/or pois.
    			configure if we want to search in the vicinity of
     *   the specified center.
            	configure if we want to search using
     *   fuzziness.
            	Default behaviour if no option is set we search everywhere
     */
    virtual void setSearchParameters(const ::org::harman::nav::ctrl::CommonTypes::Handle &_oneBoxSearchHandle, const uint16_t &_searchOptions, CommonAPI::CallStatus &_internalCallStatus, OneBoxSearch::setSearchParametersError &_error, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> setSearchParametersAsync(const ::org::harman::nav::ctrl::CommonTypes::Handle &_oneBoxSearchHandle, const uint16_t &_searchOptions, SetSearchParametersAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: startOneBoxSearch = This method sends the search input for the search
     *   handle.
    						The search will start with the location.
     */
    virtual void startOneBoxSearch(const ::org::harman::nav::ctrl::CommonTypes::Handle &_oneBoxSearchHandle, const std::string &_inputString, CommonAPI::CallStatus &_internalCallStatus, OneBoxSearch::startOneBoxSearchError &_error, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> startOneBoxSearchAsync(const ::org::harman::nav::ctrl::CommonTypes::Handle &_oneBoxSearchHandle, const std::string &_inputString, StartOneBoxSearchAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: cancelFtsSearch = This method cancels the search for the current session
     */
    virtual void cancelOneBoxSearch(const ::org::harman::nav::ctrl::CommonTypes::Handle &_oneBoxSearchHandle, CommonAPI::CallStatus &_internalCallStatus, OneBoxSearch::cancelOneBoxSearchError &_error, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> cancelOneBoxSearchAsync(const ::org::harman::nav::ctrl::CommonTypes::Handle &_oneBoxSearchHandle, CancelOneBoxSearchAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: requestListUpdate = This method sends a request for more list elements for the
     *   current session
     */
    virtual void requestResultList(const ::org::harman::nav::ctrl::CommonTypes::Handle &_oneBoxSearchHandle, const uint16_t &_offset, const uint16_t &_maxWindowSize, CommonAPI::CallStatus &_internalCallStatus, uint16_t &_statusValue, uint16_t &_resultListSize, ::v3::org::harman::nav::ctrl::memory::LocationMemoryTypes::LocationList &_locations, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> requestResultListAsync(const ::org::harman::nav::ctrl::CommonTypes::Handle &_oneBoxSearchHandle, const uint16_t &_offset, const uint16_t &_maxWindowSize, RequestResultListAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: selectEntry = This method triggers selection of a result list entry by index
     */
    virtual void selectEntry(const ::org::harman::nav::ctrl::CommonTypes::Handle &_oneBoxSearchHandle, const uint16_t &_index, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> selectEntryAsync(const ::org::harman::nav::ctrl::CommonTypes::Handle &_oneBoxSearchHandle, const uint16_t &_index, SelectEntryAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: getEntry = This method synchronously gets the address for the given result list
     *   entry
     */
    virtual void getEntry(const ::org::harman::nav::ctrl::CommonTypes::Handle &_oneBoxSearchHandle, const uint16_t &_index, CommonAPI::CallStatus &_internalCallStatus, ::v3::org::harman::nav::ctrl::memory::LocationMemoryTypes::Location &_locItem, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getEntryAsync(const ::org::harman::nav::ctrl::CommonTypes::Handle &_oneBoxSearchHandle, const uint16_t &_index, GetEntryAsyncCallback _callback, const CommonAPI::CallInfo *_info);


    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

private:
   

    CommonAPI::DBus::DBusEvent<SearchStatusEvent, CommonAPI::Deployable<::org::harman::nav::ctrl::CommonTypes::Handle, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<::v2::org::harman::nav::ctrl::di::LocationInputTypes::SearchStatus, CommonAPI::EmptyDeployment>> searchStatus_;
    CommonAPI::DBus::DBusEvent<SearchResultListEvent, CommonAPI::Deployable<::org::harman::nav::ctrl::CommonTypes::Handle, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<uint16_t, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<uint16_t, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<uint16_t, CommonAPI::EmptyDeployment>> searchResultList_;
    CommonAPI::DBus::DBusEvent<SearchResultListSizeChangedEvent, CommonAPI::Deployable<::org::harman::nav::ctrl::CommonTypes::Handle, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<uint16_t, CommonAPI::EmptyDeployment>> searchResultListSizeChanged_;

};

} // namespace di
} // namespace ctrl
} // namespace nav
} // namespace harman
} // namespace org
} // namespace v1

#endif // V1_ORG_HARMAN_NAV_CTRL_DI_One_Box_Search_DBUS_PROXY_HPP_
