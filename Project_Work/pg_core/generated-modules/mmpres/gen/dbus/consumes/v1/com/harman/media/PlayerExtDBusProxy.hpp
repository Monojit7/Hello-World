/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Wed Oct 26 18:16:09 IST 2016
*/
/**
 * description: PlayerExt interface provide favorite/most played/recent played songs retrive
 *   and delete.
 */
#ifndef V1_COM_HARMAN_MEDIA_Player_Ext_DBUS_PROXY_HPP_
#define V1_COM_HARMAN_MEDIA_Player_Ext_DBUS_PROXY_HPP_

#include <v1/com/harman/media/PlayerExtProxyBase.hpp>
#include "v1/com/harman/media/PlayerExtDBusDeployment.hpp"

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
namespace com {
namespace harman {
namespace media {

class PlayerExtDBusProxy
    : virtual public PlayerExtProxyBase, 
      virtual public CommonAPI::DBus::DBusProxy {
public:
    PlayerExtDBusProxy(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection);

    virtual ~PlayerExtDBusProxy() { }



    /**
     * description: Retrieve the favorite songs of the given devices.
     */
    virtual void getFavoriteList(const std::vector<uint64_t> &_devices, const uint64_t &_offset, const uint64_t &_count, CommonAPI::CallStatus &_internalCallStatus, ::v1::org::genivi::mediamanager::MediaTypes::ResultMapList &_m, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getFavoriteListAsync(const std::vector<uint64_t> &_devices, const uint64_t &_offset, const uint64_t &_count, GetFavoriteListAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Retrieve the count of favorite songs of the given devices.
     */
    virtual void getFavoriteCount(const std::vector<uint64_t> &_devices, CommonAPI::CallStatus &_internalCallStatus, uint64_t &_count, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getFavoriteCountAsync(const std::vector<uint64_t> &_devices, GetFavoriteCountAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Add songs to favorite list.
     */
    virtual void addToFavoriteList(const std::vector<std::string> &_listToAdd, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> addToFavoriteListAsync(const std::vector<std::string> &_listToAdd, AddToFavoriteListAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Delete songs from favorite list.
     */
    virtual void deleteFromFavoriteList(const std::vector<std::string> &_listToDelete, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> deleteFromFavoriteListAsync(const std::vector<std::string> &_listToDelete, DeleteFromFavoriteListAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Check given song is favorite or not.
     */
    virtual void isFavoriteSong(const std::string &_uri, CommonAPI::CallStatus &_internalCallStatus, bool &_b, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> isFavoriteSongAsync(const std::string &_uri, IsFavoriteSongAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Retrieve the most played songs of the given devices.
     */
    virtual void getMostPlayedList(const std::vector<uint64_t> &_devices, const uint64_t &_offset, const uint64_t &_count, CommonAPI::CallStatus &_internalCallStatus, ::v1::org::genivi::mediamanager::MediaTypes::ResultMapList &_m, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getMostPlayedListAsync(const std::vector<uint64_t> &_devices, const uint64_t &_offset, const uint64_t &_count, GetMostPlayedListAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Retrieve the count of most played songs of the given devices.
     */
    virtual void getMostPlayedCount(const std::vector<uint64_t> &_devices, CommonAPI::CallStatus &_internalCallStatus, uint64_t &_count, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getMostPlayedCountAsync(const std::vector<uint64_t> &_devices, GetMostPlayedCountAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Retrieve the recently played songs of the given devices.
     */
    virtual void getRecentPlayedList(const std::vector<uint64_t> &_devices, const uint64_t &_offset, const uint64_t &_count, CommonAPI::CallStatus &_internalCallStatus, ::v1::org::genivi::mediamanager::MediaTypes::ResultMapList &_m, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getRecentPlayedListAsync(const std::vector<uint64_t> &_devices, const uint64_t &_offset, const uint64_t &_count, GetRecentPlayedListAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Retrieve the count of recently played songs of the given devices.
     */
    virtual void getRecentPlayedCount(const std::vector<uint64_t> &_devices, CommonAPI::CallStatus &_internalCallStatus, uint64_t &_count, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getRecentPlayedCountAsync(const std::vector<uint64_t> &_devices, GetRecentPlayedCountAsyncCallback _callback, const CommonAPI::CallInfo *_info);


    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

private:
   


};

} // namespace media
} // namespace harman
} // namespace com
} // namespace v1

#endif // V1_COM_HARMAN_MEDIA_Player_Ext_DBUS_PROXY_HPP_
