/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Thu Sep 22 00:23:23 IST 2016
*/
#include <v1/com/harman/btpres/ConnectionManagerStubDefault.hpp>
#include <assert.h>

namespace v1 {
namespace com {
namespace harman {
namespace btpres {

ConnectionManagerStubDefault::ConnectionManagerStubDefault():
        remoteEventHandler_(this),
        interfaceVersion_(ConnectionManager::getInterfaceVersion()) {
}

const CommonAPI::Version& ConnectionManagerStubDefault::getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return interfaceVersion_;
}

ConnectionManagerStubRemoteEvent* ConnectionManagerStubDefault::initStubAdapter(const std::shared_ptr<ConnectionManagerStubAdapter> &_adapter) {
    CommonAPI::Stub<ConnectionManagerStubAdapter, ConnectionManagerStubRemoteEvent>::stubAdapter_ = _adapter;
    return &remoteEventHandler_;
}

const ::v1::com::harman::btpres::BTPresTypes::eBluetoothStatus& ConnectionManagerStubDefault::getBtStateAttribute() {
    return btStateAttributeValue_;
}

const ::v1::com::harman::btpres::BTPresTypes::eBluetoothStatus& ConnectionManagerStubDefault::getBtStateAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return getBtStateAttribute();
}

void ConnectionManagerStubDefault::setBtStateAttribute(::v1::com::harman::btpres::BTPresTypes::eBluetoothStatus _value) {
    const bool valueChanged = trySetBtStateAttribute(std::move(_value));
    if (valueChanged) {
        auto stubAdapter = CommonAPI::Stub<ConnectionManagerStubAdapter, ConnectionManagerStubRemoteEvent>::stubAdapter_.lock();
        if (stubAdapter)
            stubAdapter->fireBtStateAttributeChanged(btStateAttributeValue_);
    }
}

bool ConnectionManagerStubDefault::trySetBtStateAttribute(::v1::com::harman::btpres::BTPresTypes::eBluetoothStatus _value) {
    if (!validateBtStateAttributeRequestedValue(_value))
        return false;

    const bool valueChanged = (btStateAttributeValue_ != _value);
    btStateAttributeValue_ = std::move(_value);
    return valueChanged;
}

bool ConnectionManagerStubDefault::validateBtStateAttributeRequestedValue(const ::v1::com::harman::btpres::BTPresTypes::eBluetoothStatus &_value) {
    (void)_value;
	return _value.validate();
}


const std::string& ConnectionManagerStubDefault::getLocalDevAddrAttribute() {
    return localDevAddrAttributeValue_;
}

const std::string& ConnectionManagerStubDefault::getLocalDevAddrAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return getLocalDevAddrAttribute();
}

void ConnectionManagerStubDefault::setLocalDevAddrAttribute(std::string _value) {
    const bool valueChanged = trySetLocalDevAddrAttribute(std::move(_value));
    if (valueChanged) {
        auto stubAdapter = CommonAPI::Stub<ConnectionManagerStubAdapter, ConnectionManagerStubRemoteEvent>::stubAdapter_.lock();
        if (stubAdapter)
            stubAdapter->fireLocalDevAddrAttributeChanged(localDevAddrAttributeValue_);
    }
}

bool ConnectionManagerStubDefault::trySetLocalDevAddrAttribute(std::string _value) {
    if (!validateLocalDevAddrAttributeRequestedValue(_value))
        return false;

    const bool valueChanged = (localDevAddrAttributeValue_ != _value);
    localDevAddrAttributeValue_ = std::move(_value);
    return valueChanged;
}

bool ConnectionManagerStubDefault::validateLocalDevAddrAttributeRequestedValue(const std::string &_value) {
    (void)_value;
	return true;
}


const std::string& ConnectionManagerStubDefault::getLocalDevNameAttribute() {
    return localDevNameAttributeValue_;
}

const std::string& ConnectionManagerStubDefault::getLocalDevNameAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return getLocalDevNameAttribute();
}

void ConnectionManagerStubDefault::setLocalDevNameAttribute(std::string _value) {
    const bool valueChanged = trySetLocalDevNameAttribute(std::move(_value));
    if (valueChanged) {
        auto stubAdapter = CommonAPI::Stub<ConnectionManagerStubAdapter, ConnectionManagerStubRemoteEvent>::stubAdapter_.lock();
        if (stubAdapter)
            stubAdapter->fireLocalDevNameAttributeChanged(localDevNameAttributeValue_);
    }
}

bool ConnectionManagerStubDefault::trySetLocalDevNameAttribute(std::string _value) {
    if (!validateLocalDevNameAttributeRequestedValue(_value))
        return false;

    const bool valueChanged = (localDevNameAttributeValue_ != _value);
    localDevNameAttributeValue_ = std::move(_value);
    return valueChanged;
}

bool ConnectionManagerStubDefault::validateLocalDevNameAttributeRequestedValue(const std::string &_value) {
    (void)_value;
	return true;
}


const std::string& ConnectionManagerStubDefault::getPassKeyPinAttribute() {
    return passKeyPinAttributeValue_;
}

const std::string& ConnectionManagerStubDefault::getPassKeyPinAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return getPassKeyPinAttribute();
}

void ConnectionManagerStubDefault::setPassKeyPinAttribute(std::string _value) {
    const bool valueChanged = trySetPassKeyPinAttribute(std::move(_value));
    if (valueChanged) {
        auto stubAdapter = CommonAPI::Stub<ConnectionManagerStubAdapter, ConnectionManagerStubRemoteEvent>::stubAdapter_.lock();
        if (stubAdapter)
            stubAdapter->firePassKeyPinAttributeChanged(passKeyPinAttributeValue_);
    }
}

bool ConnectionManagerStubDefault::trySetPassKeyPinAttribute(std::string _value) {
    if (!validatePassKeyPinAttributeRequestedValue(_value))
        return false;

    const bool valueChanged = (passKeyPinAttributeValue_ != _value);
    passKeyPinAttributeValue_ = std::move(_value);
    return valueChanged;
}

bool ConnectionManagerStubDefault::validatePassKeyPinAttributeRequestedValue(const std::string &_value) {
    (void)_value;
	return true;
}


const bool& ConnectionManagerStubDefault::getDeviceSearchStatusAttribute() {
    return deviceSearchStatusAttributeValue_;
}

const bool& ConnectionManagerStubDefault::getDeviceSearchStatusAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return getDeviceSearchStatusAttribute();
}

void ConnectionManagerStubDefault::setDeviceSearchStatusAttribute(bool _value) {
    const bool valueChanged = trySetDeviceSearchStatusAttribute(std::move(_value));
    if (valueChanged) {
        auto stubAdapter = CommonAPI::Stub<ConnectionManagerStubAdapter, ConnectionManagerStubRemoteEvent>::stubAdapter_.lock();
        if (stubAdapter)
            stubAdapter->fireDeviceSearchStatusAttributeChanged(deviceSearchStatusAttributeValue_);
    }
}

bool ConnectionManagerStubDefault::trySetDeviceSearchStatusAttribute(bool _value) {
    if (!validateDeviceSearchStatusAttributeRequestedValue(_value))
        return false;

    const bool valueChanged = (deviceSearchStatusAttributeValue_ != _value);
    deviceSearchStatusAttributeValue_ = std::move(_value);
    return valueChanged;
}

bool ConnectionManagerStubDefault::validateDeviceSearchStatusAttributeRequestedValue(const bool &_value) {
    (void)_value;
	return true;
}


const bool& ConnectionManagerStubDefault::getDiscoverableStatusAttribute() {
    return discoverableStatusAttributeValue_;
}

const bool& ConnectionManagerStubDefault::getDiscoverableStatusAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return getDiscoverableStatusAttribute();
}

void ConnectionManagerStubDefault::setDiscoverableStatusAttribute(bool _value) {
    const bool valueChanged = trySetDiscoverableStatusAttribute(std::move(_value));
    if (valueChanged) {
        auto stubAdapter = CommonAPI::Stub<ConnectionManagerStubAdapter, ConnectionManagerStubRemoteEvent>::stubAdapter_.lock();
        if (stubAdapter)
            stubAdapter->fireDiscoverableStatusAttributeChanged(discoverableStatusAttributeValue_);
    }
}

bool ConnectionManagerStubDefault::trySetDiscoverableStatusAttribute(bool _value) {
    if (!validateDiscoverableStatusAttributeRequestedValue(_value))
        return false;

    const bool valueChanged = (discoverableStatusAttributeValue_ != _value);
    discoverableStatusAttributeValue_ = std::move(_value);
    return valueChanged;
}

bool ConnectionManagerStubDefault::validateDiscoverableStatusAttributeRequestedValue(const bool &_value) {
    (void)_value;
	return true;
}


const uint16_t& ConnectionManagerStubDefault::getDiscoveryTimeoutAttribute() {
    return discoveryTimeoutAttributeValue_;
}

const uint16_t& ConnectionManagerStubDefault::getDiscoveryTimeoutAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return getDiscoveryTimeoutAttribute();
}

void ConnectionManagerStubDefault::setDiscoveryTimeoutAttribute(uint16_t _value) {
    const bool valueChanged = trySetDiscoveryTimeoutAttribute(std::move(_value));
    if (valueChanged) {
        auto stubAdapter = CommonAPI::Stub<ConnectionManagerStubAdapter, ConnectionManagerStubRemoteEvent>::stubAdapter_.lock();
        if (stubAdapter)
            stubAdapter->fireDiscoveryTimeoutAttributeChanged(discoveryTimeoutAttributeValue_);
    }
}

bool ConnectionManagerStubDefault::trySetDiscoveryTimeoutAttribute(uint16_t _value) {
    if (!validateDiscoveryTimeoutAttributeRequestedValue(_value))
        return false;

    const bool valueChanged = (discoveryTimeoutAttributeValue_ != _value);
    discoveryTimeoutAttributeValue_ = std::move(_value);
    return valueChanged;
}

bool ConnectionManagerStubDefault::validateDiscoveryTimeoutAttributeRequestedValue(const uint16_t &_value) {
    (void)_value;
	return true;
}


const ::v1::com::harman::btpres::BTPresTypes::tDeviceSearchEntryList& ConnectionManagerStubDefault::getDevSearchResultsAttribute() {
    return devSearchResultsAttributeValue_;
}

const ::v1::com::harman::btpres::BTPresTypes::tDeviceSearchEntryList& ConnectionManagerStubDefault::getDevSearchResultsAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return getDevSearchResultsAttribute();
}

void ConnectionManagerStubDefault::setDevSearchResultsAttribute(::v1::com::harman::btpres::BTPresTypes::tDeviceSearchEntryList _value) {
    const bool valueChanged = trySetDevSearchResultsAttribute(std::move(_value));
    if (valueChanged) {
        auto stubAdapter = CommonAPI::Stub<ConnectionManagerStubAdapter, ConnectionManagerStubRemoteEvent>::stubAdapter_.lock();
        if (stubAdapter)
            stubAdapter->fireDevSearchResultsAttributeChanged(devSearchResultsAttributeValue_);
    }
}

bool ConnectionManagerStubDefault::trySetDevSearchResultsAttribute(::v1::com::harman::btpres::BTPresTypes::tDeviceSearchEntryList _value) {
    if (!validateDevSearchResultsAttributeRequestedValue(_value))
        return false;

    const bool valueChanged = (devSearchResultsAttributeValue_ != _value);
    devSearchResultsAttributeValue_ = std::move(_value);
    return valueChanged;
}

bool ConnectionManagerStubDefault::validateDevSearchResultsAttributeRequestedValue(const ::v1::com::harman::btpres::BTPresTypes::tDeviceSearchEntryList &_value) {
    (void)_value;
	return true;
}


const ::v1::com::harman::btpres::BTPresTypes::bondedDevList& ConnectionManagerStubDefault::getDevListAttribute() {
    return devListAttributeValue_;
}

const ::v1::com::harman::btpres::BTPresTypes::bondedDevList& ConnectionManagerStubDefault::getDevListAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return getDevListAttribute();
}

void ConnectionManagerStubDefault::setDevListAttribute(::v1::com::harman::btpres::BTPresTypes::bondedDevList _value) {
    const bool valueChanged = trySetDevListAttribute(std::move(_value));
    if (valueChanged) {
        auto stubAdapter = CommonAPI::Stub<ConnectionManagerStubAdapter, ConnectionManagerStubRemoteEvent>::stubAdapter_.lock();
        if (stubAdapter)
            stubAdapter->fireDevListAttributeChanged(devListAttributeValue_);
    }
}

bool ConnectionManagerStubDefault::trySetDevListAttribute(::v1::com::harman::btpres::BTPresTypes::bondedDevList _value) {
    if (!validateDevListAttributeRequestedValue(_value))
        return false;

    const bool valueChanged = (devListAttributeValue_ != _value);
    devListAttributeValue_ = std::move(_value);
    return valueChanged;
}

bool ConnectionManagerStubDefault::validateDevListAttributeRequestedValue(const ::v1::com::harman::btpres::BTPresTypes::bondedDevList &_value) {
    (void)_value;
	return true;
}


const ::v1::com::harman::btpres::BTPresTypes::networkIfStatus& ConnectionManagerStubDefault::getNetIfStatusAttribute() {
    return netIfStatusAttributeValue_;
}

const ::v1::com::harman::btpres::BTPresTypes::networkIfStatus& ConnectionManagerStubDefault::getNetIfStatusAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return getNetIfStatusAttribute();
}

void ConnectionManagerStubDefault::setNetIfStatusAttribute(::v1::com::harman::btpres::BTPresTypes::networkIfStatus _value) {
    const bool valueChanged = trySetNetIfStatusAttribute(std::move(_value));
    if (valueChanged) {
        auto stubAdapter = CommonAPI::Stub<ConnectionManagerStubAdapter, ConnectionManagerStubRemoteEvent>::stubAdapter_.lock();
        if (stubAdapter)
            stubAdapter->fireNetIfStatusAttributeChanged(netIfStatusAttributeValue_);
    }
}

bool ConnectionManagerStubDefault::trySetNetIfStatusAttribute(::v1::com::harman::btpres::BTPresTypes::networkIfStatus _value) {
    if (!validateNetIfStatusAttributeRequestedValue(_value))
        return false;

    const bool valueChanged = (netIfStatusAttributeValue_ != _value);
    netIfStatusAttributeValue_ = std::move(_value);
    return valueChanged;
}

bool ConnectionManagerStubDefault::validateNetIfStatusAttributeRequestedValue(const ::v1::com::harman::btpres::BTPresTypes::networkIfStatus &_value) {
    (void)_value;
	return true;
}


const ::v1::com::harman::btpres::BTPresTypes::unstableDeviceInfoList& ConnectionManagerStubDefault::getUnstableDevsAttribute() {
    return unstableDevsAttributeValue_;
}

const ::v1::com::harman::btpres::BTPresTypes::unstableDeviceInfoList& ConnectionManagerStubDefault::getUnstableDevsAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return getUnstableDevsAttribute();
}

void ConnectionManagerStubDefault::setUnstableDevsAttribute(::v1::com::harman::btpres::BTPresTypes::unstableDeviceInfoList _value) {
    const bool valueChanged = trySetUnstableDevsAttribute(std::move(_value));
    if (valueChanged) {
        auto stubAdapter = CommonAPI::Stub<ConnectionManagerStubAdapter, ConnectionManagerStubRemoteEvent>::stubAdapter_.lock();
        if (stubAdapter)
            stubAdapter->fireUnstableDevsAttributeChanged(unstableDevsAttributeValue_);
    }
}

bool ConnectionManagerStubDefault::trySetUnstableDevsAttribute(::v1::com::harman::btpres::BTPresTypes::unstableDeviceInfoList _value) {
    if (!validateUnstableDevsAttributeRequestedValue(_value))
        return false;

    const bool valueChanged = (unstableDevsAttributeValue_ != _value);
    unstableDevsAttributeValue_ = std::move(_value);
    return valueChanged;
}

bool ConnectionManagerStubDefault::validateUnstableDevsAttributeRequestedValue(const ::v1::com::harman::btpres::BTPresTypes::unstableDeviceInfoList &_value) {
    (void)_value;
	return true;
}


const std::string& ConnectionManagerStubDefault::getPrimaryDeviceAttribute() {
    return primaryDeviceAttributeValue_;
}

const std::string& ConnectionManagerStubDefault::getPrimaryDeviceAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return getPrimaryDeviceAttribute();
}

void ConnectionManagerStubDefault::setPrimaryDeviceAttribute(std::string _value) {
    const bool valueChanged = trySetPrimaryDeviceAttribute(std::move(_value));
    if (valueChanged) {
        auto stubAdapter = CommonAPI::Stub<ConnectionManagerStubAdapter, ConnectionManagerStubRemoteEvent>::stubAdapter_.lock();
        if (stubAdapter)
            stubAdapter->firePrimaryDeviceAttributeChanged(primaryDeviceAttributeValue_);
    }
}

bool ConnectionManagerStubDefault::trySetPrimaryDeviceAttribute(std::string _value) {
    if (!validatePrimaryDeviceAttributeRequestedValue(_value))
        return false;

    const bool valueChanged = (primaryDeviceAttributeValue_ != _value);
    primaryDeviceAttributeValue_ = std::move(_value);
    return valueChanged;
}

bool ConnectionManagerStubDefault::validatePrimaryDeviceAttributeRequestedValue(const std::string &_value) {
    (void)_value;
	return true;
}



/**
 * description: Used to start device search on head unit
 * param: maxDevice (UInt32)       : max limit for found devices
 * param: timeout (UInt32)         : time limit for device search operation

       
 *   returns: errorCode (eErrorType) : error code
 */
void ConnectionManagerStubDefault::startDeviceSearch(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _maxDevice, uint32_t _timeout, startDeviceSearchReply_t _reply) {
    (void)_client;
    (void) _maxDevice;
    (void) _timeout;
    ::v1::com::harman::btpres::BTPresTypes::eErrorType errorCode = ::v1::com::harman::btpres::BTPresTypes::eErrorType::ERROR_TYPE_SUCCESS;
    if (!errorCode.validate()) {
        return;
    }
    _reply(errorCode);
}

/**
 * description: Used to stop device search on head unit
 * param: none

        returns: error code (eErrorType) : error code
 */
void ConnectionManagerStubDefault::stopDeviceSearch(const std::shared_ptr<CommonAPI::ClientId> _client, stopDeviceSearchReply_t _reply) {
    (void)_client;
    ::v1::com::harman::btpres::BTPresTypes::eErrorType errorCode = ::v1::com::harman::btpres::BTPresTypes::eErrorType::ERROR_TYPE_SUCCESS;
    if (!errorCode.validate()) {
        return;
    }
    _reply(errorCode);
}

/**
 * description: Used to send secure Bonding reply
 * param: inAddress (string)       : phone BT address
 * param: accept (boolean)         : accepting authentication request
 * param: trusted (boolean)        : making device trusted means service won't send
 *   connection request for each connect attempt
 * param: type (eBondingType)      : Bonding type, standard or secure bonding

       
 *   returns: errorCode (eErrorType) : error code
 */
void ConnectionManagerStubDefault::bondingReply(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _inAddress, bool _accept, bool _trusted, ::v1::com::harman::btpres::BTPresTypes::eBondingType _type, bondingReplyReply_t _reply) {
    (void)_client;
    (void) _inAddress;
    (void) _accept;
    (void) _trusted;
    (void) _type;
    ::v1::com::harman::btpres::BTPresTypes::eErrorType errorCode = ::v1::com::harman::btpres::BTPresTypes::eErrorType::ERROR_TYPE_SUCCESS;
    if (!errorCode.validate()) {
        return;
    }
    _reply(errorCode);
}

/**
 * description: Used to delete device from paired device list
 * param: inAddress (string)      : phone BT address

        returns: errorCode
 *   (eErrorType): error code
 */
void ConnectionManagerStubDefault::deleteDevice(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _inAddress, deleteDeviceReply_t _reply) {
    (void)_client;
    (void) _inAddress;
    ::v1::com::harman::btpres::BTPresTypes::eErrorType errorCode = ::v1::com::harman::btpres::BTPresTypes::eErrorType::ERROR_TYPE_SUCCESS;
    if (!errorCode.validate()) {
        return;
    }
    _reply(errorCode);
}

/**
 * description: Used to delete all device in paired device list
 * param: none

        returns: errorCode (eErrorType) : error code
 */
void ConnectionManagerStubDefault::deleteAllDevices(const std::shared_ptr<CommonAPI::ClientId> _client, deleteAllDevicesReply_t _reply) {
    (void)_client;
    ::v1::com::harman::btpres::BTPresTypes::eErrorType errorCode = ::v1::com::harman::btpres::BTPresTypes::eErrorType::ERROR_TYPE_SUCCESS;
    if (!errorCode.validate()) {
        return;
    }
    _reply(errorCode);
}

/**
 * description: Used to initate profile connection with device
 * param: inAddress (string)       : phone BT address
 * param: service (eSupportedProfile) : profile name
 * param: instanceName (string)    : containing the phone instance
 * param: replaceAddr (string)     : containing the replacement address for which the
 *   connection will be replaced

        returns: errorCode (eErrorType) : error
 *   code
 */
void ConnectionManagerStubDefault::startServiceConnection(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _inAddress, ::v1::com::harman::btpres::BTPresTypes::eSupportedProfile _service, std::string _instanceName, std::string _replaceAddr, startServiceConnectionReply_t _reply) {
    (void)_client;
    (void) _inAddress;
    (void) _service;
    (void) _instanceName;
    (void) _replaceAddr;
    ::v1::com::harman::btpres::BTPresTypes::eErrorType errorCode = ::v1::com::harman::btpres::BTPresTypes::eErrorType::ERROR_TYPE_SUCCESS;
    if (!errorCode.validate()) {
        return;
    }
    _reply(errorCode);
}

/**
 * description: Used to allows the existance of the service connection to this device and
 *   service.
 * param: inAddress (string)           : phone BT address
 * param: service (eSupportedProfile)  : profile name
 * param: allow (Boolean)              : containing the value true for allow, or false
 *   for reject

        returns: errorCode (eErrorType)      : error code
 */
void ConnectionManagerStubDefault::allowServiceConnection(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _inAddress, ::v1::com::harman::btpres::BTPresTypes::eSupportedProfile _service, bool _allow, allowServiceConnectionReply_t _reply) {
    (void)_client;
    (void) _inAddress;
    (void) _service;
    (void) _allow;
    ::v1::com::harman::btpres::BTPresTypes::eErrorType errorCode = ::v1::com::harman::btpres::BTPresTypes::eErrorType::ERROR_TYPE_SUCCESS;
    if (!errorCode.validate()) {
        return;
    }
    _reply(errorCode);
}

/**
 * description: Used to initate the disconnection with connected service i.e. HFP and A2DP
 * param: inAddress (string)                  : phone BT address
 * param: service (eSupportedProfile)         : profile name

        returns: errorCode
 *   error code (eErrorType)  : error code
 */
void ConnectionManagerStubDefault::startServiceDisconnection(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _inAddress, ::v1::com::harman::btpres::BTPresTypes::eSupportedProfile _service, startServiceDisconnectionReply_t _reply) {
    (void)_client;
    (void) _inAddress;
    (void) _service;
    ::v1::com::harman::btpres::BTPresTypes::eErrorType errorCode = ::v1::com::harman::btpres::BTPresTypes::eErrorType::ERROR_TYPE_SUCCESS;
    if (!errorCode.validate()) {
        return;
    }
    _reply(errorCode);
}

/**
 * description: This method should be called by clients in order to reply to the incoming
 *   service 
                       connection request from a remote device as
 *   indicated by the signal 'serviceConnectionRequest'. 
                      
 *   The reply can be to accept or reject incoming service connection request.
 * param: inAddress (string)              : phone BT address
 * param: service (eSupportedProfile)     : profile name
 * param: accept (boolean)                : containing the value true for allow, or false
 *   for reject
 * param: instanceName (string)           : containing the instance name of the device

 
 *         returns: errorCode (eErrorType)         : error code
 */
void ConnectionManagerStubDefault::serviceConnectionReply(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _inAddress, ::v1::com::harman::btpres::BTPresTypes::eSupportedProfile _service, bool _accept, std::string _instanceName, serviceConnectionReplyReply_t _reply) {
    (void)_client;
    (void) _inAddress;
    (void) _service;
    (void) _accept;
    (void) _instanceName;
    ::v1::com::harman::btpres::BTPresTypes::eErrorType errorCode = ::v1::com::harman::btpres::BTPresTypes::eErrorType::ERROR_TYPE_SUCCESS;
    if (!errorCode.validate()) {
        return;
    }
    _reply(errorCode);
}

/**
 * description: Used to initiate the reconnection to previously connected device
 * param: None

        returns: errorCode error code (eErrorType) : error code
 */
void ConnectionManagerStubDefault::startReconnect(const std::shared_ptr<CommonAPI::ClientId> _client, startReconnectReply_t _reply) {
    (void)_client;
    ::v1::com::harman::btpres::BTPresTypes::eErrorType errorCode = ::v1::com::harman::btpres::BTPresTypes::eErrorType::ERROR_TYPE_SUCCESS;
    if (!errorCode.validate()) {
        return;
    }
    _reply(errorCode);
}

/**
 * description: This method should be called to get oldest connected device
 * param: None

        returns: oldestDevInfo (oldestDevInfo)     : Oldest device name
 *   and address
        returns: errorCode error code (eErrorType) : error code
 */
void ConnectionManagerStubDefault::getOldestConnectedDev(const std::shared_ptr<CommonAPI::ClientId> _client, getOldestConnectedDevReply_t _reply) {
    (void)_client;
    ::v1::com::harman::btpres::BTPresTypes::deviceInfo oldestDevInfo = {};
    ::v1::com::harman::btpres::BTPresTypes::eErrorType errorCode = ::v1::com::harman::btpres::BTPresTypes::eErrorType::ERROR_TYPE_SUCCESS;
    if (!errorCode.validate()) {
        return;
    }
    _reply(oldestDevInfo, errorCode);
}

/**
 * description: This method used to change name of bonded device.
 * param: inAddress  (string)     : contains the BD address.
 * param: name (string)           : Device name

        returns: errorCode(eErrorType) 
 *   : error code
 */
void ConnectionManagerStubDefault::renameBondedDevice(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _inAddress, std::string _name, renameBondedDeviceReply_t _reply) {
    (void)_client;
    (void) _inAddress;
    (void) _name;
    ::v1::com::harman::btpres::BTPresTypes::eErrorType errorCode = ::v1::com::harman::btpres::BTPresTypes::eErrorType::ERROR_TYPE_SUCCESS;
    if (!errorCode.validate()) {
        return;
    }
    _reply(errorCode);
}

/**
 * description: This method used to change local name of head unit.
 * param: name (string)           : Device name

        returns: errorCode(eErrorType) 
 *   : error code
 */
void ConnectionManagerStubDefault::renameLocalDevice(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _name, renameLocalDeviceReply_t _reply) {
    (void)_client;
    (void) _name;
    ::v1::com::harman::btpres::BTPresTypes::eErrorType errorCode = ::v1::com::harman::btpres::BTPresTypes::eErrorType::ERROR_TYPE_SUCCESS;
    if (!errorCode.validate()) {
        return;
    }
    _reply(errorCode);
}

/**
 * description: Used to set bluetooth on or off
 * param: status (boolean)       : set true or false

        returns: error
 *   code(eErrorType) : error code
 */
void ConnectionManagerStubDefault::setBluetoothStatus(const std::shared_ptr<CommonAPI::ClientId> _client, bool _status, setBluetoothStatusReply_t _reply) {
    (void)_client;
    (void) _status;
    ::v1::com::harman::btpres::BTPresTypes::eErrorType errorCode = ::v1::com::harman::btpres::BTPresTypes::eErrorType::ERROR_TYPE_SUCCESS;
    if (!errorCode.validate()) {
        return;
    }
    _reply(errorCode);
}

/**
 * description: Used to enable or disable discoverable mode
 * param: enabled (boolean)       : set true or false

        returns: errorCode
 *   (eErrorType) : error code
 */
void ConnectionManagerStubDefault::setDiscoverableMode(const std::shared_ptr<CommonAPI::ClientId> _client, bool _enabled, setDiscoverableModeReply_t _reply) {
    (void)_client;
    (void) _enabled;
    ::v1::com::harman::btpres::BTPresTypes::eErrorType errorCode = ::v1::com::harman::btpres::BTPresTypes::eErrorType::ERROR_TYPE_SUCCESS;
    if (!errorCode.validate()) {
        return;
    }
    _reply(errorCode);
}

/**
 * description: This method used to pin information for head unit.
 * param: passkey (string)          : set the default pin for legacy devices

       
 *   returns:  error code (eErrorType) : error code
 */
void ConnectionManagerStubDefault::setPin(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _passkey, setPinReply_t _reply) {
    (void)_client;
    (void) _passkey;
    ::v1::com::harman::btpres::BTPresTypes::eErrorType errorCode = ::v1::com::harman::btpres::BTPresTypes::eErrorType::ERROR_TYPE_SUCCESS;
    if (!errorCode.validate()) {
        return;
    }
    _reply(errorCode);
}

/**
 * description: It will set a device as primary
 * param: inAddress  (string)     : contains the BD address.

        returns:  error
 *   code (eErrorType) : error code
 */
void ConnectionManagerStubDefault::setPrimaryDevice(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _inAddress, setPrimaryDeviceReply_t _reply) {
    (void)_client;
    (void) _inAddress;
    ::v1::com::harman::btpres::BTPresTypes::eErrorType errorCode = ::v1::com::harman::btpres::BTPresTypes::eErrorType::ERROR_TYPE_SUCCESS;
    if (!errorCode.validate()) {
        return;
    }
    _reply(errorCode);
}


/**
 * description: It will broadcast standard bonding Request to registered clients
 * param: outAddress (string)     : Bt address of phone
 * param: deviceName (string)     : Device name
 * param: type (eBondingType)     : Bonding type
 * param: pin (string) : pass key pin
 */
void ConnectionManagerStubDefault::fireBondingRequestEvent(const std::string &_outAddress, const std::string &_deviceName, const ::v1::com::harman::btpres::BTPresTypes::eBondingType &_type, const std::string &_pin) {
    if (!_type.validate()) {
        return;
    }
    assert((CommonAPI::Stub<ConnectionManagerStubAdapter, ConnectionManagerStubRemoteEvent>::stubAdapter_.lock()) !=NULL);
    auto stubAdapter = CommonAPI::Stub<ConnectionManagerStubAdapter, ConnectionManagerStubRemoteEvent>::stubAdapter_.lock();
   	if (stubAdapter)
        stubAdapter->fireBondingRequestEvent(_outAddress, _deviceName, _type, _pin);
}
/**
 * description: It will broadcast service connection request to registered clients
 * param: outAddress (string)         : Bt address of phone
 * param: name (string)               : Device name
 * param: service (eSupportedProfile) : supported profile list
 */
void ConnectionManagerStubDefault::fireServiceConnectionRequestEvent(const std::string &_outAddress, const std::string &_name, const ::v1::com::harman::btpres::BTPresTypes::eSupportedProfile &_service) {
    if (!_service.validate()) {
        return;
    }
    assert((CommonAPI::Stub<ConnectionManagerStubAdapter, ConnectionManagerStubRemoteEvent>::stubAdapter_.lock()) !=NULL);
    auto stubAdapter = CommonAPI::Stub<ConnectionManagerStubAdapter, ConnectionManagerStubRemoteEvent>::stubAdapter_.lock();
   	if (stubAdapter)
        stubAdapter->fireServiceConnectionRequestEvent(_outAddress, _name, _service);
}
/**
 * description: It will broadcast service connection status signal to registered clients
 * param: outAddress (string)         : Bt address of phone
 * param: name (string)               : Device name
 * param: service (eSupportedProfile) : supported profile list
 * param: status (eConnectionStatus)  : Connected or disconnected status
 * param: reason (eServiceConnectDisconnectReason) : reason for connection or
 *   disconnection
 */
void ConnectionManagerStubDefault::fireServiceConnectionStatusEvent(const std::string &_outAddress, const std::string &_name, const ::v1::com::harman::btpres::BTPresTypes::eSupportedProfile &_service, const ::v1::com::harman::btpres::BTPresTypes::eConnectionStatus &_status, const ::v1::com::harman::btpres::BTPresTypes::eServiceConnectDisconnectReason &_reason) {
    if (!_service.validate()) {
        return;
    }
    if (!_status.validate()) {
        return;
    }
    if (!_reason.validate()) {
        return;
    }
    assert((CommonAPI::Stub<ConnectionManagerStubAdapter, ConnectionManagerStubRemoteEvent>::stubAdapter_.lock()) !=NULL);
    auto stubAdapter = CommonAPI::Stub<ConnectionManagerStubAdapter, ConnectionManagerStubRemoteEvent>::stubAdapter_.lock();
   	if (stubAdapter)
        stubAdapter->fireServiceConnectionStatusEvent(_outAddress, _name, _service, _status, _reason);
}
/**
 * description: This signal is sent when device has been deleted from Head Unit to registered
 *   clients
 * param: outAddress (string)     : Bt address of phone
 * param: deviceName (string )    : device name
 */
void ConnectionManagerStubDefault::fireDeviceDeletedEvent(const std::string &_outAddress, const std::string &_deviceName) {
    assert((CommonAPI::Stub<ConnectionManagerStubAdapter, ConnectionManagerStubRemoteEvent>::stubAdapter_.lock()) !=NULL);
    auto stubAdapter = CommonAPI::Stub<ConnectionManagerStubAdapter, ConnectionManagerStubRemoteEvent>::stubAdapter_.lock();
   	if (stubAdapter)
        stubAdapter->fireDeviceDeletedEvent(_outAddress, _deviceName);
}
/**
 * description: This signal is used to update the pairing status to registered clients
 * param: outAddress (string)         : Bt address of phone
 * param: deviceName (string)         : device name
 * param: pairStatus (ePairingStatus) : Pairing status i.e. successful Or failure
 */
void ConnectionManagerStubDefault::fireBondingStatusEvent(const std::string &_outAddress, const std::string &_deviceName, const ::v1::com::harman::btpres::BTPresTypes::ePairingStatus &_pairStatus) {
    if (!_pairStatus.validate()) {
        return;
    }
    assert((CommonAPI::Stub<ConnectionManagerStubAdapter, ConnectionManagerStubRemoteEvent>::stubAdapter_.lock()) !=NULL);
    auto stubAdapter = CommonAPI::Stub<ConnectionManagerStubAdapter, ConnectionManagerStubRemoteEvent>::stubAdapter_.lock();
   	if (stubAdapter)
        stubAdapter->fireBondingStatusEvent(_outAddress, _deviceName, _pairStatus);
}


ConnectionManagerStubDefault::RemoteEventHandler::RemoteEventHandler(ConnectionManagerStubDefault *_defaultStub)
    : 
      defaultStub_(_defaultStub) {
}

} // namespace btpres
} // namespace harman
} // namespace com
} // namespace v1