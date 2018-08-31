/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/
/**
 * description: this interface offers methods to provide icons (POI, Road, Traffic, so on) to
 *   any client
 */
#ifndef V0_ORG_HARMAN_NAV_CTRL_ICON_Icon_Provider_PROXY_HPP_
#define V0_ORG_HARMAN_NAV_CTRL_ICON_Icon_Provider_PROXY_HPP_

#include <v0/org/harman/nav/ctrl/icon/IconProviderProxyBase.hpp>


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif


#undef COMMONAPI_INTERNAL_COMPILATION

namespace v0 {
namespace org {
namespace harman {
namespace nav {
namespace ctrl {
namespace icon {

template <typename ... _AttributeExtensions>
class IconProviderProxy
    : virtual public IconProvider, 
      virtual public IconProviderProxyBase,
      virtual public _AttributeExtensions... {
public:
    IconProviderProxy(std::shared_ptr<CommonAPI::Proxy> delegate);
    ~IconProviderProxy();

    typedef IconProvider InterfaceType;




    /**
     * description: initialize an icon session. Prerequiste and mandatory to any other IconProvider
     *   call.
    	The client need to specify an iconFilePath, where all requested
     *   resources can be copied to.
     * Calls createSession with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void createSession(const std::string &_iconFilePath, CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::CommonTypes::Handle &_iconSessionHandle, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls createSession with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> createSessionAsync(const std::string &_iconFilePath, CreateSessionAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: deletes an icon session and all assiociated resources which were requested
     * Calls deleteSession with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void deleteSession(const ::org::harman::nav::ctrl::CommonTypes::Handle &_iconSessionHandle, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls deleteSession with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> deleteSessionAsync(const ::org::harman::nav::ctrl::CommonTypes::Handle &_iconSessionHandle, DeleteSessionAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: generic icon request call to get a navigation based icon
     * Calls getIconResource with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getIconResource(const ::org::harman::nav::ctrl::CommonTypes::Handle &_iconSessionHandle, const ::org::harman::nav::ctrl::icon::IconProviderTypes::IconResourceSetId &_iconResourceId, const ::org::harman::nav::ctrl::icon::IconProviderTypes::DesignParameters &_iconDesign, CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::icon::IconProviderTypes::IconResponseData &_icon, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getIconResource with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getIconResourceAsync(const ::org::harman::nav::ctrl::CommonTypes::Handle &_iconSessionHandle, const ::org::harman::nav::ctrl::icon::IconProviderTypes::IconResourceSetId &_iconResourceId, const ::org::harman::nav::ctrl::icon::IconProviderTypes::DesignParameters &_iconDesign, GetIconResourceAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);


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
    std::shared_ptr<IconProviderProxyBase> delegate_;
};

typedef IconProviderProxy<> IconProviderProxyDefault;


//
// IconProviderProxy Implementation
//
template <typename ... _AttributeExtensions>
IconProviderProxy<_AttributeExtensions...>::IconProviderProxy(std::shared_ptr<CommonAPI::Proxy> delegate):
        _AttributeExtensions(*(std::dynamic_pointer_cast<IconProviderProxyBase>(delegate)))...,
        delegate_(std::dynamic_pointer_cast<IconProviderProxyBase>(delegate)) {
}

template <typename ... _AttributeExtensions>
IconProviderProxy<_AttributeExtensions...>::~IconProviderProxy() {
}

/**
 * description: initialize an icon session. Prerequiste and mandatory to any other IconProvider
 *   call.
	The client need to specify an iconFilePath, where all requested
 *   resources can be copied to.
 */
template <typename ... _AttributeExtensions>
void IconProviderProxy<_AttributeExtensions...>::createSession(const std::string &_iconFilePath, CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::CommonTypes::Handle &_iconSessionHandle, const CommonAPI::CallInfo *_info) {
    delegate_->createSession(_iconFilePath, _internalCallStatus, _iconSessionHandle, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> IconProviderProxy<_AttributeExtensions...>::createSessionAsync(const std::string &_iconFilePath, CreateSessionAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->createSessionAsync(_iconFilePath, _callback, _info);
}
/**
 * description: deletes an icon session and all assiociated resources which were requested
 */
template <typename ... _AttributeExtensions>
void IconProviderProxy<_AttributeExtensions...>::deleteSession(const ::org::harman::nav::ctrl::CommonTypes::Handle &_iconSessionHandle, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
    delegate_->deleteSession(_iconSessionHandle, _internalCallStatus, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> IconProviderProxy<_AttributeExtensions...>::deleteSessionAsync(const ::org::harman::nav::ctrl::CommonTypes::Handle &_iconSessionHandle, DeleteSessionAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->deleteSessionAsync(_iconSessionHandle, _callback, _info);
}
/**
 * description: generic icon request call to get a navigation based icon
 */
template <typename ... _AttributeExtensions>
void IconProviderProxy<_AttributeExtensions...>::getIconResource(const ::org::harman::nav::ctrl::CommonTypes::Handle &_iconSessionHandle, const ::org::harman::nav::ctrl::icon::IconProviderTypes::IconResourceSetId &_iconResourceId, const ::org::harman::nav::ctrl::icon::IconProviderTypes::DesignParameters &_iconDesign, CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::icon::IconProviderTypes::IconResponseData &_icon, const CommonAPI::CallInfo *_info) {
    delegate_->getIconResource(_iconSessionHandle, _iconResourceId, _iconDesign, _internalCallStatus, _icon, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> IconProviderProxy<_AttributeExtensions...>::getIconResourceAsync(const ::org::harman::nav::ctrl::CommonTypes::Handle &_iconSessionHandle, const ::org::harman::nav::ctrl::icon::IconProviderTypes::IconResourceSetId &_iconResourceId, const ::org::harman::nav::ctrl::icon::IconProviderTypes::DesignParameters &_iconDesign, GetIconResourceAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getIconResourceAsync(_iconSessionHandle, _iconResourceId, _iconDesign, _callback, _info);
}

template <typename ... _AttributeExtensions>
const CommonAPI::Address &IconProviderProxy<_AttributeExtensions...>::getAddress() const {
    return delegate_->getAddress();
}

template <typename ... _AttributeExtensions>
bool IconProviderProxy<_AttributeExtensions...>::isAvailable() const {
    return delegate_->isAvailable();
}

template <typename ... _AttributeExtensions>
bool IconProviderProxy<_AttributeExtensions...>::isAvailableBlocking() const {
    return delegate_->isAvailableBlocking();
}

template <typename ... _AttributeExtensions>
CommonAPI::ProxyStatusEvent& IconProviderProxy<_AttributeExtensions...>::getProxyStatusEvent() {
    return delegate_->getProxyStatusEvent();
}

template <typename ... _AttributeExtensions>
CommonAPI::InterfaceVersionAttribute& IconProviderProxy<_AttributeExtensions...>::getInterfaceVersionAttribute() {
    return delegate_->getInterfaceVersionAttribute();
}


} // namespace icon
} // namespace ctrl
} // namespace nav
} // namespace harman
} // namespace org
} // namespace v0



// Compatibility
namespace v0_2 = v0;

#endif // V0_ORG_HARMAN_NAV_CTRL_ICON_Icon_Provider_PROXY_HPP_