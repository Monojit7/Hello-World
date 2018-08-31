/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Wed Oct 26 18:16:09 IST 2016
*/
/**
 * description: PlayerExt interface provide favorite/most played/recent played songs retrive
 *   and delete.
 */
#ifndef V1_COM_HARMAN_MEDIA_Player_Ext_PROXY_HPP_
#define V1_COM_HARMAN_MEDIA_Player_Ext_PROXY_HPP_

#include <v1/com/harman/media/PlayerExtProxyBase.hpp>


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif


#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace com {
namespace harman {
namespace media {

template <typename ... _AttributeExtensions>
class PlayerExtProxy
    : virtual public PlayerExt, 
      virtual public PlayerExtProxyBase,
      virtual public _AttributeExtensions... {
public:
    PlayerExtProxy(std::shared_ptr<CommonAPI::Proxy> delegate);
    ~PlayerExtProxy();

    typedef PlayerExt InterfaceType;




    /**
     * description: Retrieve the favorite songs of the given devices.
     * Calls getFavoriteList with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getFavoriteList(const std::vector<uint64_t> &_devices, const uint64_t &_offset, const uint64_t &_count, CommonAPI::CallStatus &_internalCallStatus, ::v1::org::genivi::mediamanager::MediaTypes::ResultMapList &_m, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getFavoriteList with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getFavoriteListAsync(const std::vector<uint64_t> &_devices, const uint64_t &_offset, const uint64_t &_count, GetFavoriteListAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Retrieve the count of favorite songs of the given devices.
     * Calls getFavoriteCount with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getFavoriteCount(const std::vector<uint64_t> &_devices, CommonAPI::CallStatus &_internalCallStatus, uint64_t &_count, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getFavoriteCount with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getFavoriteCountAsync(const std::vector<uint64_t> &_devices, GetFavoriteCountAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Add songs to favorite list.
     * Calls addToFavoriteList with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void addToFavoriteList(const std::vector<std::string> &_listToAdd, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls addToFavoriteList with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> addToFavoriteListAsync(const std::vector<std::string> &_listToAdd, AddToFavoriteListAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Delete songs from favorite list.
     * Calls deleteFromFavoriteList with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void deleteFromFavoriteList(const std::vector<std::string> &_listToDelete, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls deleteFromFavoriteList with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> deleteFromFavoriteListAsync(const std::vector<std::string> &_listToDelete, DeleteFromFavoriteListAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Check given song is favorite or not.
     * Calls isFavoriteSong with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void isFavoriteSong(const std::string &_uri, CommonAPI::CallStatus &_internalCallStatus, bool &_b, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls isFavoriteSong with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> isFavoriteSongAsync(const std::string &_uri, IsFavoriteSongAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Retrieve the most played songs of the given devices.
     * Calls getMostPlayedList with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getMostPlayedList(const std::vector<uint64_t> &_devices, const uint64_t &_offset, const uint64_t &_count, CommonAPI::CallStatus &_internalCallStatus, ::v1::org::genivi::mediamanager::MediaTypes::ResultMapList &_m, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getMostPlayedList with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getMostPlayedListAsync(const std::vector<uint64_t> &_devices, const uint64_t &_offset, const uint64_t &_count, GetMostPlayedListAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Retrieve the count of most played songs of the given devices.
     * Calls getMostPlayedCount with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getMostPlayedCount(const std::vector<uint64_t> &_devices, CommonAPI::CallStatus &_internalCallStatus, uint64_t &_count, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getMostPlayedCount with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getMostPlayedCountAsync(const std::vector<uint64_t> &_devices, GetMostPlayedCountAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Retrieve the recently played songs of the given devices.
     * Calls getRecentPlayedList with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getRecentPlayedList(const std::vector<uint64_t> &_devices, const uint64_t &_offset, const uint64_t &_count, CommonAPI::CallStatus &_internalCallStatus, ::v1::org::genivi::mediamanager::MediaTypes::ResultMapList &_m, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getRecentPlayedList with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getRecentPlayedListAsync(const std::vector<uint64_t> &_devices, const uint64_t &_offset, const uint64_t &_count, GetRecentPlayedListAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Retrieve the count of recently played songs of the given devices.
     * Calls getRecentPlayedCount with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getRecentPlayedCount(const std::vector<uint64_t> &_devices, CommonAPI::CallStatus &_internalCallStatus, uint64_t &_count, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getRecentPlayedCount with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getRecentPlayedCountAsync(const std::vector<uint64_t> &_devices, GetRecentPlayedCountAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);


    /**
     * Returns the CommonAPI address of the remote partner this proxy communicates with.
     */
    virtual const CommonAPI::Address &getAddress() const;

    /**
     * Returns true if the remote partner for this proxy is currently known to be available.
     */
    virtual bool isAvailable() const;

    /**
     * Returns true if the remote partner for this proxy is available.
     */
    virtual bool isAvailableBlocking() const;

    /**
     * Returns the wrapper class that is used to (de-)register for notifications about
     * the availability of the remote partner of this proxy.
     */
    virtual CommonAPI::ProxyStatusEvent& getProxyStatusEvent();

    /**
     * Returns the wrapper class that is used to access version information of the remote
     * partner of this proxy.
     */
    virtual CommonAPI::InterfaceVersionAttribute& getInterfaceVersionAttribute();

 private:
    std::shared_ptr<PlayerExtProxyBase> delegate_;
};

typedef PlayerExtProxy<> PlayerExtProxyDefault;


//
// PlayerExtProxy Implementation
//
template <typename ... _AttributeExtensions>
PlayerExtProxy<_AttributeExtensions...>::PlayerExtProxy(std::shared_ptr<CommonAPI::Proxy> delegate):
        _AttributeExtensions(*(std::dynamic_pointer_cast<PlayerExtProxyBase>(delegate)))...,
        delegate_(std::dynamic_pointer_cast<PlayerExtProxyBase>(delegate)) {
}

template <typename ... _AttributeExtensions>
PlayerExtProxy<_AttributeExtensions...>::~PlayerExtProxy() {
}

/**
 * description: Retrieve the favorite songs of the given devices.
 */
template <typename ... _AttributeExtensions>
void PlayerExtProxy<_AttributeExtensions...>::getFavoriteList(const std::vector<uint64_t> &_devices, const uint64_t &_offset, const uint64_t &_count, CommonAPI::CallStatus &_internalCallStatus, ::v1::org::genivi::mediamanager::MediaTypes::ResultMapList &_m, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info) {
    delegate_->getFavoriteList(_devices, _offset, _count, _internalCallStatus, _m, _e, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> PlayerExtProxy<_AttributeExtensions...>::getFavoriteListAsync(const std::vector<uint64_t> &_devices, const uint64_t &_offset, const uint64_t &_count, GetFavoriteListAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getFavoriteListAsync(_devices, _offset, _count, _callback, _info);
}
/**
 * description: Retrieve the count of favorite songs of the given devices.
 */
template <typename ... _AttributeExtensions>
void PlayerExtProxy<_AttributeExtensions...>::getFavoriteCount(const std::vector<uint64_t> &_devices, CommonAPI::CallStatus &_internalCallStatus, uint64_t &_count, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info) {
    delegate_->getFavoriteCount(_devices, _internalCallStatus, _count, _e, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> PlayerExtProxy<_AttributeExtensions...>::getFavoriteCountAsync(const std::vector<uint64_t> &_devices, GetFavoriteCountAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getFavoriteCountAsync(_devices, _callback, _info);
}
/**
 * description: Add songs to favorite list.
 */
template <typename ... _AttributeExtensions>
void PlayerExtProxy<_AttributeExtensions...>::addToFavoriteList(const std::vector<std::string> &_listToAdd, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info) {
    delegate_->addToFavoriteList(_listToAdd, _internalCallStatus, _e, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> PlayerExtProxy<_AttributeExtensions...>::addToFavoriteListAsync(const std::vector<std::string> &_listToAdd, AddToFavoriteListAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->addToFavoriteListAsync(_listToAdd, _callback, _info);
}
/**
 * description: Delete songs from favorite list.
 */
template <typename ... _AttributeExtensions>
void PlayerExtProxy<_AttributeExtensions...>::deleteFromFavoriteList(const std::vector<std::string> &_listToDelete, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info) {
    delegate_->deleteFromFavoriteList(_listToDelete, _internalCallStatus, _e, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> PlayerExtProxy<_AttributeExtensions...>::deleteFromFavoriteListAsync(const std::vector<std::string> &_listToDelete, DeleteFromFavoriteListAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->deleteFromFavoriteListAsync(_listToDelete, _callback, _info);
}
/**
 * description: Check given song is favorite or not.
 */
template <typename ... _AttributeExtensions>
void PlayerExtProxy<_AttributeExtensions...>::isFavoriteSong(const std::string &_uri, CommonAPI::CallStatus &_internalCallStatus, bool &_b, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info) {
    delegate_->isFavoriteSong(_uri, _internalCallStatus, _b, _e, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> PlayerExtProxy<_AttributeExtensions...>::isFavoriteSongAsync(const std::string &_uri, IsFavoriteSongAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->isFavoriteSongAsync(_uri, _callback, _info);
}
/**
 * description: Retrieve the most played songs of the given devices.
 */
template <typename ... _AttributeExtensions>
void PlayerExtProxy<_AttributeExtensions...>::getMostPlayedList(const std::vector<uint64_t> &_devices, const uint64_t &_offset, const uint64_t &_count, CommonAPI::CallStatus &_internalCallStatus, ::v1::org::genivi::mediamanager::MediaTypes::ResultMapList &_m, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info) {
    delegate_->getMostPlayedList(_devices, _offset, _count, _internalCallStatus, _m, _e, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> PlayerExtProxy<_AttributeExtensions...>::getMostPlayedListAsync(const std::vector<uint64_t> &_devices, const uint64_t &_offset, const uint64_t &_count, GetMostPlayedListAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getMostPlayedListAsync(_devices, _offset, _count, _callback, _info);
}
/**
 * description: Retrieve the count of most played songs of the given devices.
 */
template <typename ... _AttributeExtensions>
void PlayerExtProxy<_AttributeExtensions...>::getMostPlayedCount(const std::vector<uint64_t> &_devices, CommonAPI::CallStatus &_internalCallStatus, uint64_t &_count, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info) {
    delegate_->getMostPlayedCount(_devices, _internalCallStatus, _count, _e, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> PlayerExtProxy<_AttributeExtensions...>::getMostPlayedCountAsync(const std::vector<uint64_t> &_devices, GetMostPlayedCountAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getMostPlayedCountAsync(_devices, _callback, _info);
}
/**
 * description: Retrieve the recently played songs of the given devices.
 */
template <typename ... _AttributeExtensions>
void PlayerExtProxy<_AttributeExtensions...>::getRecentPlayedList(const std::vector<uint64_t> &_devices, const uint64_t &_offset, const uint64_t &_count, CommonAPI::CallStatus &_internalCallStatus, ::v1::org::genivi::mediamanager::MediaTypes::ResultMapList &_m, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info) {
    delegate_->getRecentPlayedList(_devices, _offset, _count, _internalCallStatus, _m, _e, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> PlayerExtProxy<_AttributeExtensions...>::getRecentPlayedListAsync(const std::vector<uint64_t> &_devices, const uint64_t &_offset, const uint64_t &_count, GetRecentPlayedListAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getRecentPlayedListAsync(_devices, _offset, _count, _callback, _info);
}
/**
 * description: Retrieve the count of recently played songs of the given devices.
 */
template <typename ... _AttributeExtensions>
void PlayerExtProxy<_AttributeExtensions...>::getRecentPlayedCount(const std::vector<uint64_t> &_devices, CommonAPI::CallStatus &_internalCallStatus, uint64_t &_count, ::v1::com::harman::media::BaseType::tBaseError &_e, const CommonAPI::CallInfo *_info) {
    delegate_->getRecentPlayedCount(_devices, _internalCallStatus, _count, _e, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> PlayerExtProxy<_AttributeExtensions...>::getRecentPlayedCountAsync(const std::vector<uint64_t> &_devices, GetRecentPlayedCountAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getRecentPlayedCountAsync(_devices, _callback, _info);
}

template <typename ... _AttributeExtensions>
const CommonAPI::Address &PlayerExtProxy<_AttributeExtensions...>::getAddress() const {
    return delegate_->getAddress();
}

template <typename ... _AttributeExtensions>
bool PlayerExtProxy<_AttributeExtensions...>::isAvailable() const {
    return delegate_->isAvailable();
}

template <typename ... _AttributeExtensions>
bool PlayerExtProxy<_AttributeExtensions...>::isAvailableBlocking() const {
    return delegate_->isAvailableBlocking();
}

template <typename ... _AttributeExtensions>
CommonAPI::ProxyStatusEvent& PlayerExtProxy<_AttributeExtensions...>::getProxyStatusEvent() {
    return delegate_->getProxyStatusEvent();
}

template <typename ... _AttributeExtensions>
CommonAPI::InterfaceVersionAttribute& PlayerExtProxy<_AttributeExtensions...>::getInterfaceVersionAttribute() {
    return delegate_->getInterfaceVersionAttribute();
}


} // namespace media
} // namespace harman
} // namespace com
} // namespace v1



// Compatibility
namespace v1_0 = v1;

#endif // V1_COM_HARMAN_MEDIA_Player_Ext_PROXY_HPP_