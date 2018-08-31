/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/
/**
 * author: Rico Schuster
 * description: Configuration interface which extends the ConfigurationBase interface to be
 *   able to set several configuration values.
    Note: Usually Franca supports
 *   the extension of Interface via "extends" keyword. But Mocca is not able to
 *   handle the inheritance of Interfaces.
    Therefore all Methods of
 *   ConfigurationBase are also part of the Configuration Interface.
 * see: org.harman.nav.ctrl.configuration.ConfigurationBase.fidl
 * see: ConfigurationBase
 */
#ifndef V1_ORG_HARMAN_NAV_CTRL_CONFIGURATION_Configuration_PROXY_HPP_
#define V1_ORG_HARMAN_NAV_CTRL_CONFIGURATION_Configuration_PROXY_HPP_

#include <v1/org/harman/nav/ctrl/configuration/ConfigurationProxyBase.hpp>


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif


#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace org {
namespace harman {
namespace nav {
namespace ctrl {
namespace configuration {

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
     * description: This signals there was a change is configuration.
     */
    /**
     * Returns the wrapper class that provides access to the broadcast configurationChanges.
     */
    virtual ConfigurationChangesEvent& getConfigurationChangesEvent() {
        return delegate_->getConfigurationChangesEvent();
    }

    /**
     * description: Methode for getting version of Navigation Controller.
     * Calls getNavigationVersion with synchronous semantics.
     * 
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getNavigationVersion(CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::GetVersionError &_error, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::NavigationVersion &_navigationVersion, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getNavigationVersion with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getNavigationVersionAsync(GetNavigationVersionAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Methode for setting units of measurements.
     * Calls setUnitsOfMeasurement with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void setUnitsOfMeasurement(const ::org::harman::nav::ctrl::configuration::ConfigurationTypes::UnitsOfMeasurement &_unitsOfMeasurement, CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::SetUnitsOfMeasurementError &_error, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setUnitsOfMeasurement with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> setUnitsOfMeasurementAsync(const ::org::harman::nav::ctrl::configuration::ConfigurationTypes::UnitsOfMeasurement &_unitsOfMeasurement, SetUnitsOfMeasurementAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Methode for setting time format.
     * Calls setTimeFormat with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void setTimeFormat(const ::org::harman::nav::ctrl::configuration::ConfigurationTypes::TimeFormat &_timeFormat, CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::SetTimeFormatError &_error, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setTimeFormat with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> setTimeFormatAsync(const ::org::harman::nav::ctrl::configuration::ConfigurationTypes::TimeFormat &_timeFormat, SetTimeFormatAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Methode for getting supported time formats.
     * Calls getSupportedTimeFormats with synchronous semantics.
     * 
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getSupportedTimeFormats(CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::GetSupportedTimeFormatsError &_error, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::TimeFormats &_timeFormats, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getSupportedTimeFormats with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getSupportedTimeFormatsAsync(GetSupportedTimeFormatsAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Methode for setting coordinates format.
     * Calls setCoordinatesFormat with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void setCoordinatesFormat(const ::org::harman::nav::ctrl::configuration::ConfigurationTypes::CoordinatesFormat &_coordinatesFormat, CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::SetCoordinatesFormatError &_error, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setCoordinatesFormat with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> setCoordinatesFormatAsync(const ::org::harman::nav::ctrl::configuration::ConfigurationTypes::CoordinatesFormat &_coordinatesFormat, SetCoordinatesFormatAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Methode for setting locale.
     * Calls setLocale with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void setLocale(const ::org::harman::nav::ctrl::configuration::ConfigurationTypes::Locale &_locale, CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::SetLocaleError &_error, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setLocale with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> setLocaleAsync(const ::org::harman::nav::ctrl::configuration::ConfigurationTypes::Locale &_locale, SetLocaleAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Methode for getting supported units of measurements.
     * Calls getSupportedUnitsOfMeasurement with synchronous semantics.
     * 
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getSupportedUnitsOfMeasurement(CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::GetSupportedUnitsOfMeasurementError &_error, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::UnitsOfMeasurement &_unitsOfMeasurement, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getSupportedUnitsOfMeasurement with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getSupportedUnitsOfMeasurementAsync(GetSupportedUnitsOfMeasurementAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Methode for getting units of measurements.
     * Calls getUnitsOfMeasurement with synchronous semantics.
     * 
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getUnitsOfMeasurement(CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::GetUnitsOfMeasurementError &_error, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::UnitsOfMeasurement &_unitsOfMeasurement, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getUnitsOfMeasurement with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getUnitsOfMeasurementAsync(GetUnitsOfMeasurementAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Methode for getting time format.
     * Calls getTimeFormat with synchronous semantics.
     * 
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getTimeFormat(CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::GetTimeFormatError &_error, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::TimeFormat &_timeFormat, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getTimeFormat with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getTimeFormatAsync(GetTimeFormatAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Methode for getting coordinates format.
     * Calls getCoordinatesFormat with synchronous semantics.
     * 
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getCoordinatesFormat(CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::GetCoordinatesFormatError &_error, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::CoordinatesFormat &_coordinatesFormat, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getCoordinatesFormat with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getCoordinatesFormatAsync(GetCoordinatesFormatAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Methode for getting supported coordinates format.
     * Calls getSupportedCoordinatesFormats with synchronous semantics.
     * 
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getSupportedCoordinatesFormats(CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::GetSupportedCoordinatesFormatsError &_error, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::CoordinatesFormats &_coordinatesFormats, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getSupportedCoordinatesFormats with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getSupportedCoordinatesFormatsAsync(GetSupportedCoordinatesFormatsAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Methode for getting locale.
     * Calls getLocale with synchronous semantics.
     * 
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getLocale(CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::GetLocaleError &_error, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::Locale &_locale, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getLocale with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getLocaleAsync(GetLocaleAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Methode for getting supported locales.
     * Calls getSupportedLocales with synchronous semantics.
     * 
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getSupportedLocales(CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::GetLocalesError &_error, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::Locales &_locales, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getSupportedLocales with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getSupportedLocalesAsync(GetSupportedLocalesAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Methode for setting style for theme.
     * Calls setStyleTheme with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void setStyleTheme(const ::org::harman::nav::ctrl::configuration::ConfigurationTypes::StyleTheme &_style, CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::SetStyleThemeError &_error, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setStyleTheme with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> setStyleThemeAsync(const ::org::harman::nav::ctrl::configuration::ConfigurationTypes::StyleTheme &_style, SetStyleThemeAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);


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
 * description: Methode for getting version of Navigation Controller.
 */
template <typename ... _AttributeExtensions>
void ConfigurationProxy<_AttributeExtensions...>::getNavigationVersion(CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::GetVersionError &_error, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::NavigationVersion &_navigationVersion, const CommonAPI::CallInfo *_info) {
    delegate_->getNavigationVersion(_internalCallStatus, _error, _navigationVersion, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> ConfigurationProxy<_AttributeExtensions...>::getNavigationVersionAsync(GetNavigationVersionAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getNavigationVersionAsync(_callback, _info);
}
/**
 * description: Methode for setting units of measurements.
 */
template <typename ... _AttributeExtensions>
void ConfigurationProxy<_AttributeExtensions...>::setUnitsOfMeasurement(const ::org::harman::nav::ctrl::configuration::ConfigurationTypes::UnitsOfMeasurement &_unitsOfMeasurement, CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::SetUnitsOfMeasurementError &_error, const CommonAPI::CallInfo *_info) {
    delegate_->setUnitsOfMeasurement(_unitsOfMeasurement, _internalCallStatus, _error, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> ConfigurationProxy<_AttributeExtensions...>::setUnitsOfMeasurementAsync(const ::org::harman::nav::ctrl::configuration::ConfigurationTypes::UnitsOfMeasurement &_unitsOfMeasurement, SetUnitsOfMeasurementAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->setUnitsOfMeasurementAsync(_unitsOfMeasurement, _callback, _info);
}
/**
 * description: Methode for setting time format.
 */
template <typename ... _AttributeExtensions>
void ConfigurationProxy<_AttributeExtensions...>::setTimeFormat(const ::org::harman::nav::ctrl::configuration::ConfigurationTypes::TimeFormat &_timeFormat, CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::SetTimeFormatError &_error, const CommonAPI::CallInfo *_info) {
    if (!_timeFormat.validate()) {
        _internalCallStatus = CommonAPI::CallStatus::INVALID_VALUE;
        return;
    }
    delegate_->setTimeFormat(_timeFormat, _internalCallStatus, _error, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> ConfigurationProxy<_AttributeExtensions...>::setTimeFormatAsync(const ::org::harman::nav::ctrl::configuration::ConfigurationTypes::TimeFormat &_timeFormat, SetTimeFormatAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    if (!_timeFormat.validate()) {
        ::org::harman::nav::ctrl::configuration::ConfigurationTypes::SetTimeFormatError error;
        _callback(CommonAPI::CallStatus::INVALID_VALUE, error);
        std::promise<CommonAPI::CallStatus> promise;
        promise.set_value(CommonAPI::CallStatus::INVALID_VALUE);
        return promise.get_future();
    }
    return delegate_->setTimeFormatAsync(_timeFormat, _callback, _info);
}
/**
 * description: Methode for getting supported time formats.
 */
template <typename ... _AttributeExtensions>
void ConfigurationProxy<_AttributeExtensions...>::getSupportedTimeFormats(CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::GetSupportedTimeFormatsError &_error, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::TimeFormats &_timeFormats, const CommonAPI::CallInfo *_info) {
    delegate_->getSupportedTimeFormats(_internalCallStatus, _error, _timeFormats, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> ConfigurationProxy<_AttributeExtensions...>::getSupportedTimeFormatsAsync(GetSupportedTimeFormatsAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getSupportedTimeFormatsAsync(_callback, _info);
}
/**
 * description: Methode for setting coordinates format.
 */
template <typename ... _AttributeExtensions>
void ConfigurationProxy<_AttributeExtensions...>::setCoordinatesFormat(const ::org::harman::nav::ctrl::configuration::ConfigurationTypes::CoordinatesFormat &_coordinatesFormat, CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::SetCoordinatesFormatError &_error, const CommonAPI::CallInfo *_info) {
    if (!_coordinatesFormat.validate()) {
        _internalCallStatus = CommonAPI::CallStatus::INVALID_VALUE;
        return;
    }
    delegate_->setCoordinatesFormat(_coordinatesFormat, _internalCallStatus, _error, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> ConfigurationProxy<_AttributeExtensions...>::setCoordinatesFormatAsync(const ::org::harman::nav::ctrl::configuration::ConfigurationTypes::CoordinatesFormat &_coordinatesFormat, SetCoordinatesFormatAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    if (!_coordinatesFormat.validate()) {
        ::org::harman::nav::ctrl::configuration::ConfigurationTypes::SetCoordinatesFormatError error;
        _callback(CommonAPI::CallStatus::INVALID_VALUE, error);
        std::promise<CommonAPI::CallStatus> promise;
        promise.set_value(CommonAPI::CallStatus::INVALID_VALUE);
        return promise.get_future();
    }
    return delegate_->setCoordinatesFormatAsync(_coordinatesFormat, _callback, _info);
}
/**
 * description: Methode for setting locale.
 */
template <typename ... _AttributeExtensions>
void ConfigurationProxy<_AttributeExtensions...>::setLocale(const ::org::harman::nav::ctrl::configuration::ConfigurationTypes::Locale &_locale, CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::SetLocaleError &_error, const CommonAPI::CallInfo *_info) {
    delegate_->setLocale(_locale, _internalCallStatus, _error, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> ConfigurationProxy<_AttributeExtensions...>::setLocaleAsync(const ::org::harman::nav::ctrl::configuration::ConfigurationTypes::Locale &_locale, SetLocaleAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->setLocaleAsync(_locale, _callback, _info);
}
/**
 * description: Methode for getting supported units of measurements.
 */
template <typename ... _AttributeExtensions>
void ConfigurationProxy<_AttributeExtensions...>::getSupportedUnitsOfMeasurement(CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::GetSupportedUnitsOfMeasurementError &_error, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::UnitsOfMeasurement &_unitsOfMeasurement, const CommonAPI::CallInfo *_info) {
    delegate_->getSupportedUnitsOfMeasurement(_internalCallStatus, _error, _unitsOfMeasurement, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> ConfigurationProxy<_AttributeExtensions...>::getSupportedUnitsOfMeasurementAsync(GetSupportedUnitsOfMeasurementAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getSupportedUnitsOfMeasurementAsync(_callback, _info);
}
/**
 * description: Methode for getting units of measurements.
 */
template <typename ... _AttributeExtensions>
void ConfigurationProxy<_AttributeExtensions...>::getUnitsOfMeasurement(CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::GetUnitsOfMeasurementError &_error, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::UnitsOfMeasurement &_unitsOfMeasurement, const CommonAPI::CallInfo *_info) {
    delegate_->getUnitsOfMeasurement(_internalCallStatus, _error, _unitsOfMeasurement, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> ConfigurationProxy<_AttributeExtensions...>::getUnitsOfMeasurementAsync(GetUnitsOfMeasurementAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getUnitsOfMeasurementAsync(_callback, _info);
}
/**
 * description: Methode for getting time format.
 */
template <typename ... _AttributeExtensions>
void ConfigurationProxy<_AttributeExtensions...>::getTimeFormat(CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::GetTimeFormatError &_error, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::TimeFormat &_timeFormat, const CommonAPI::CallInfo *_info) {
    delegate_->getTimeFormat(_internalCallStatus, _error, _timeFormat, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> ConfigurationProxy<_AttributeExtensions...>::getTimeFormatAsync(GetTimeFormatAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getTimeFormatAsync(_callback, _info);
}
/**
 * description: Methode for getting coordinates format.
 */
template <typename ... _AttributeExtensions>
void ConfigurationProxy<_AttributeExtensions...>::getCoordinatesFormat(CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::GetCoordinatesFormatError &_error, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::CoordinatesFormat &_coordinatesFormat, const CommonAPI::CallInfo *_info) {
    delegate_->getCoordinatesFormat(_internalCallStatus, _error, _coordinatesFormat, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> ConfigurationProxy<_AttributeExtensions...>::getCoordinatesFormatAsync(GetCoordinatesFormatAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getCoordinatesFormatAsync(_callback, _info);
}
/**
 * description: Methode for getting supported coordinates format.
 */
template <typename ... _AttributeExtensions>
void ConfigurationProxy<_AttributeExtensions...>::getSupportedCoordinatesFormats(CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::GetSupportedCoordinatesFormatsError &_error, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::CoordinatesFormats &_coordinatesFormats, const CommonAPI::CallInfo *_info) {
    delegate_->getSupportedCoordinatesFormats(_internalCallStatus, _error, _coordinatesFormats, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> ConfigurationProxy<_AttributeExtensions...>::getSupportedCoordinatesFormatsAsync(GetSupportedCoordinatesFormatsAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getSupportedCoordinatesFormatsAsync(_callback, _info);
}
/**
 * description: Methode for getting locale.
 */
template <typename ... _AttributeExtensions>
void ConfigurationProxy<_AttributeExtensions...>::getLocale(CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::GetLocaleError &_error, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::Locale &_locale, const CommonAPI::CallInfo *_info) {
    delegate_->getLocale(_internalCallStatus, _error, _locale, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> ConfigurationProxy<_AttributeExtensions...>::getLocaleAsync(GetLocaleAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getLocaleAsync(_callback, _info);
}
/**
 * description: Methode for getting supported locales.
 */
template <typename ... _AttributeExtensions>
void ConfigurationProxy<_AttributeExtensions...>::getSupportedLocales(CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::GetLocalesError &_error, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::Locales &_locales, const CommonAPI::CallInfo *_info) {
    delegate_->getSupportedLocales(_internalCallStatus, _error, _locales, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> ConfigurationProxy<_AttributeExtensions...>::getSupportedLocalesAsync(GetSupportedLocalesAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getSupportedLocalesAsync(_callback, _info);
}
/**
 * description: Methode for setting style for theme.
 */
template <typename ... _AttributeExtensions>
void ConfigurationProxy<_AttributeExtensions...>::setStyleTheme(const ::org::harman::nav::ctrl::configuration::ConfigurationTypes::StyleTheme &_style, CommonAPI::CallStatus &_internalCallStatus, ::org::harman::nav::ctrl::configuration::ConfigurationTypes::SetStyleThemeError &_error, const CommonAPI::CallInfo *_info) {
    if (!_style.validate()) {
        _internalCallStatus = CommonAPI::CallStatus::INVALID_VALUE;
        return;
    }
    delegate_->setStyleTheme(_style, _internalCallStatus, _error, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> ConfigurationProxy<_AttributeExtensions...>::setStyleThemeAsync(const ::org::harman::nav::ctrl::configuration::ConfigurationTypes::StyleTheme &_style, SetStyleThemeAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    if (!_style.validate()) {
        ::org::harman::nav::ctrl::configuration::ConfigurationTypes::SetStyleThemeError error;
        _callback(CommonAPI::CallStatus::INVALID_VALUE, error);
        std::promise<CommonAPI::CallStatus> promise;
        promise.set_value(CommonAPI::CallStatus::INVALID_VALUE);
        return promise.get_future();
    }
    return delegate_->setStyleThemeAsync(_style, _callback, _info);
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


} // namespace configuration
} // namespace ctrl
} // namespace nav
} // namespace harman
} // namespace org
} // namespace v1



// Compatibility
namespace v1_0 = v1;

#endif // V1_ORG_HARMAN_NAV_CTRL_CONFIGURATION_Configuration_PROXY_HPP_
