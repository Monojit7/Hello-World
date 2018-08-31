/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/
/**
 * author: EGMG_Tuner
 */
#ifndef V2_IVIRADIO_CONFIGURATION_Configuration_PROXY_HPP_
#define V2_IVIRADIO_CONFIGURATION_Configuration_PROXY_HPP_

#include <v2/IVIRadio/Configuration/ConfigurationProxyBase.hpp>


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif


#undef COMMONAPI_INTERNAL_COMPILATION

namespace v2 {
namespace IVIRadio {
namespace Configuration {

template <typename ... _AttributeExtensions>
class ConfigurationProxy
    : virtual public Configuration, 
      virtual public ConfigurationProxyBase,
      virtual public _AttributeExtensions... {
public:
    ConfigurationProxy(std::shared_ptr<CommonAPI::Proxy> delegate);
    ~ConfigurationProxy();

    typedef Configuration InterfaceType;



    /**
     * description: broadcast to return the requested functionality configuration
     */
    /**
     * Returns the wrapper class that provides access to the broadcast functionalityConfiguration.
     */
    virtual FunctionalityConfigurationEvent& getFunctionalityConfigurationEvent() {
        return delegate_->getFunctionalityConfigurationEvent();
    }

    /**
     * description: change configuration of a basic functionalites like following or smart favorite
     *   options. it is possible to set more then one configuration at a time by adding
     *   multiple functionality types and configuration to the arrays
     * Calls changeFunctionalityConfiguration with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void changeFunctionalityConfiguration(const ::v2::IVIRadio::Configuration::ConfigurationTypesEnum::FunctionalityTypes &_functionalityTypes, const ::v2::IVIRadio::Configuration::ConfigurationOptions::FuntionalityOptions &_functionalityOptionsSet, const uint32_t &_handle, CommonAPI::CallStatus &_internalCallStatus, uint32_t &_handleOut, ::v2::IVIRadio::Types::Types::Feedback &_feedback, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls changeFunctionalityConfiguration with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> changeFunctionalityConfigurationAsync(const ::v2::IVIRadio::Configuration::ConfigurationTypesEnum::FunctionalityTypes &_functionalityTypes, const ::v2::IVIRadio::Configuration::ConfigurationOptions::FuntionalityOptions &_functionalityOptionsSet, const uint32_t &_handle, ChangeFunctionalityConfigurationAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: request configuration of basic functionalities like following or conditional
     *   access. it is possible to request more than one configuration at a time by
     *   adding multiple functionality types and get options to the arrays
     * Calls requestFunctionalityConfiguration with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void requestFunctionalityConfiguration(const ::v2::IVIRadio::Configuration::ConfigurationTypesEnum::FunctionalityTypes &_functionalityTypes, const ::v2::IVIRadio::Configuration::ConfigurationOptionsGetter::FuntionalityOptionsGet &_functionalityOptionsGet, const uint32_t &_handle, CommonAPI::CallStatus &_internalCallStatus, uint32_t &_handle_out, ::v2::IVIRadio::Types::Types::Feedback &_feedback, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls requestFunctionalityConfiguration with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> requestFunctionalityConfigurationAsync(const ::v2::IVIRadio::Configuration::ConfigurationTypesEnum::FunctionalityTypes &_functionalityTypes, const ::v2::IVIRadio::Configuration::ConfigurationOptionsGetter::FuntionalityOptionsGet &_functionalityOptionsGet, const uint32_t &_handle, RequestFunctionalityConfigurationAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);


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
    std::shared_ptr<ConfigurationProxyBase> delegate_;
};

typedef ConfigurationProxy<> ConfigurationProxyDefault;


//
// ConfigurationProxy Implementation
//
template <typename ... _AttributeExtensions>
ConfigurationProxy<_AttributeExtensions...>::ConfigurationProxy(std::shared_ptr<CommonAPI::Proxy> delegate):
        _AttributeExtensions(*(std::dynamic_pointer_cast<ConfigurationProxyBase>(delegate)))...,
        delegate_(std::dynamic_pointer_cast<ConfigurationProxyBase>(delegate)) {
}

template <typename ... _AttributeExtensions>
ConfigurationProxy<_AttributeExtensions...>::~ConfigurationProxy() {
}

/**
 * description: change configuration of a basic functionalites like following or smart favorite
 *   options. it is possible to set more then one configuration at a time by adding
 *   multiple functionality types and configuration to the arrays
 */
template <typename ... _AttributeExtensions>
void ConfigurationProxy<_AttributeExtensions...>::changeFunctionalityConfiguration(const ::v2::IVIRadio::Configuration::ConfigurationTypesEnum::FunctionalityTypes &_functionalityTypes, const ::v2::IVIRadio::Configuration::ConfigurationOptions::FuntionalityOptions &_functionalityOptionsSet, const uint32_t &_handle, CommonAPI::CallStatus &_internalCallStatus, uint32_t &_handleOut, ::v2::IVIRadio::Types::Types::Feedback &_feedback, const CommonAPI::CallInfo *_info) {
    delegate_->changeFunctionalityConfiguration(_functionalityTypes, _functionalityOptionsSet, _handle, _internalCallStatus, _handleOut, _feedback, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> ConfigurationProxy<_AttributeExtensions...>::changeFunctionalityConfigurationAsync(const ::v2::IVIRadio::Configuration::ConfigurationTypesEnum::FunctionalityTypes &_functionalityTypes, const ::v2::IVIRadio::Configuration::ConfigurationOptions::FuntionalityOptions &_functionalityOptionsSet, const uint32_t &_handle, ChangeFunctionalityConfigurationAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->changeFunctionalityConfigurationAsync(_functionalityTypes, _functionalityOptionsSet, _handle, _callback, _info);
}
/**
 * description: request configuration of basic functionalities like following or conditional
 *   access. it is possible to request more than one configuration at a time by
 *   adding multiple functionality types and get options to the arrays
 */
template <typename ... _AttributeExtensions>
void ConfigurationProxy<_AttributeExtensions...>::requestFunctionalityConfiguration(const ::v2::IVIRadio::Configuration::ConfigurationTypesEnum::FunctionalityTypes &_functionalityTypes, const ::v2::IVIRadio::Configuration::ConfigurationOptionsGetter::FuntionalityOptionsGet &_functionalityOptionsGet, const uint32_t &_handle, CommonAPI::CallStatus &_internalCallStatus, uint32_t &_handle_out, ::v2::IVIRadio::Types::Types::Feedback &_feedback, const CommonAPI::CallInfo *_info) {
    delegate_->requestFunctionalityConfiguration(_functionalityTypes, _functionalityOptionsGet, _handle, _internalCallStatus, _handle_out, _feedback, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> ConfigurationProxy<_AttributeExtensions...>::requestFunctionalityConfigurationAsync(const ::v2::IVIRadio::Configuration::ConfigurationTypesEnum::FunctionalityTypes &_functionalityTypes, const ::v2::IVIRadio::Configuration::ConfigurationOptionsGetter::FuntionalityOptionsGet &_functionalityOptionsGet, const uint32_t &_handle, RequestFunctionalityConfigurationAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->requestFunctionalityConfigurationAsync(_functionalityTypes, _functionalityOptionsGet, _handle, _callback, _info);
}

template <typename ... _AttributeExtensions>
const CommonAPI::Address &ConfigurationProxy<_AttributeExtensions...>::getAddress() const {
    return delegate_->getAddress();
}

template <typename ... _AttributeExtensions>
bool ConfigurationProxy<_AttributeExtensions...>::isAvailable() const {
    return delegate_->isAvailable();
}

template <typename ... _AttributeExtensions>
bool ConfigurationProxy<_AttributeExtensions...>::isAvailableBlocking() const {
    return delegate_->isAvailableBlocking();
}

template <typename ... _AttributeExtensions>
CommonAPI::ProxyStatusEvent& ConfigurationProxy<_AttributeExtensions...>::getProxyStatusEvent() {
    return delegate_->getProxyStatusEvent();
}

template <typename ... _AttributeExtensions>
CommonAPI::InterfaceVersionAttribute& ConfigurationProxy<_AttributeExtensions...>::getInterfaceVersionAttribute() {
    return delegate_->getInterfaceVersionAttribute();
}


} // namespace Configuration
} // namespace IVIRadio
} // namespace v2



// Compatibility
namespace v2_1 = v2;

#endif // V2_IVIRADIO_CONFIGURATION_Configuration_PROXY_HPP_