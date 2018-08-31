/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Thu Sep 22 00:23:23 IST 2016
*/
#ifndef V1_COM_HARMAN_BTPRES_Connection_Manager_PROXY_BASE_HPP_
#define V1_COM_HARMAN_BTPRES_Connection_Manager_PROXY_BASE_HPP_

#include <v1/com/harman/btpres/ConnectionManager.hpp>


#include <v1/com/harman/btpres/BTPresTypes.hpp>

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

#include <CommonAPI/Attribute.hpp>
#include <CommonAPI/Event.hpp>
#include <CommonAPI/Proxy.hpp>
#include <functional>
#include <future>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace com {
namespace harman {
namespace btpres {

class ConnectionManagerProxyBase
    : virtual public CommonAPI::Proxy {
public:
    typedef CommonAPI::ObservableReadonlyAttribute<::v1::com::harman::btpres::BTPresTypes::eBluetoothStatus> BtStateAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<std::string> LocalDevAddrAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<std::string> LocalDevNameAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<std::string> PassKeyPinAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<bool> DeviceSearchStatusAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<bool> DiscoverableStatusAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<uint16_t> DiscoveryTimeoutAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<::v1::com::harman::btpres::BTPresTypes::tDeviceSearchEntryList> DevSearchResultsAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<::v1::com::harman::btpres::BTPresTypes::bondedDevList> DevListAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<::v1::com::harman::btpres::BTPresTypes::networkIfStatus> NetIfStatusAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<::v1::com::harman::btpres::BTPresTypes::unstableDeviceInfoList> UnstableDevsAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<std::string> PrimaryDeviceAttribute;
    typedef CommonAPI::Event<
        std::string, std::string, ::v1::com::harman::btpres::BTPresTypes::eBondingType, std::string
    > BondingRequestEvent;
    typedef CommonAPI::Event<
        std::string, std::string, ::v1::com::harman::btpres::BTPresTypes::eSupportedProfile
    > ServiceConnectionRequestEvent;
    typedef CommonAPI::Event<
        std::string, std::string, ::v1::com::harman::btpres::BTPresTypes::eSupportedProfile, ::v1::com::harman::btpres::BTPresTypes::eConnectionStatus, ::v1::com::harman::btpres::BTPresTypes::eServiceConnectDisconnectReason
    > ServiceConnectionStatusEvent;
    typedef CommonAPI::Event<
        std::string, std::string
    > DeviceDeletedEvent;
    typedef CommonAPI::Event<
        std::string, std::string, ::v1::com::harman::btpres::BTPresTypes::ePairingStatus
    > BondingStatusEvent;

    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::btpres::BTPresTypes::eErrorType&)> StartDeviceSearchAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::btpres::BTPresTypes::eErrorType&)> StopDeviceSearchAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::btpres::BTPresTypes::eErrorType&)> BondingReplyAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::btpres::BTPresTypes::eErrorType&)> DeleteDeviceAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::btpres::BTPresTypes::eErrorType&)> DeleteAllDevicesAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::btpres::BTPresTypes::eErrorType&)> StartServiceConnectionAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::btpres::BTPresTypes::eErrorType&)> AllowServiceConnectionAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::btpres::BTPresTypes::eErrorType&)> StartServiceDisconnectionAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::btpres::BTPresTypes::eErrorType&)> ServiceConnectionReplyAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::btpres::BTPresTypes::eErrorType&)> StartReconnectAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::btpres::BTPresTypes::deviceInfo&, const ::v1::com::harman::btpres::BTPresTypes::eErrorType&)> GetOldestConnectedDevAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::btpres::BTPresTypes::eErrorType&)> RenameBondedDeviceAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::btpres::BTPresTypes::eErrorType&)> RenameLocalDeviceAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::btpres::BTPresTypes::eErrorType&)> SetBluetoothStatusAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::btpres::BTPresTypes::eErrorType&)> SetDiscoverableModeAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::btpres::BTPresTypes::eErrorType&)> SetPinAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::btpres::BTPresTypes::eErrorType&)> SetPrimaryDeviceAsyncCallback;

    /**
     * description: It will reflect the current bluetooth status to registered clients
     */
    virtual BtStateAttribute& getBtStateAttribute() = 0;
    /**
     * description: It will reflect local device address to registered clients
     */
    virtual LocalDevAddrAttribute& getLocalDevAddrAttribute() = 0;
    /**
     * description: It will reflect local device name to registered clients
     */
    virtual LocalDevNameAttribute& getLocalDevNameAttribute() = 0;
    /**
     * description: It will broadcast stored pass key to registered clients
     */
    virtual PassKeyPinAttribute& getPassKeyPinAttribute() = 0;
    /**
     * description: It will broadcast device search status to registered client
     */
    virtual DeviceSearchStatusAttribute& getDeviceSearchStatusAttribute() = 0;
    /**
     * description: It will broadcast discoverability status to registered clients
     */
    virtual DiscoverableStatusAttribute& getDiscoverableStatusAttribute() = 0;
    /**
     * description: It will broadcast discoverability timeout to registered clients
     */
    virtual DiscoveryTimeoutAttribute& getDiscoveryTimeoutAttribute() = 0;
    /**
     * description: It will broadcast device search results to registered clients
     */
    virtual DevSearchResultsAttribute& getDevSearchResultsAttribute() = 0;
    /**
     * description: It will broadcast bonded device list to registered clients
     */
    virtual DevListAttribute& getDevListAttribute() = 0;
    /**
     * description: It will broadcast network status to registered clients
     */
    virtual NetIfStatusAttribute& getNetIfStatusAttribute() = 0;
    /**
     * description: It will braodcast unstable device info to registered clients
     */
    virtual UnstableDevsAttribute& getUnstableDevsAttribute() = 0;
    /**
     * description: It will braodcast primary device address
     */
    virtual PrimaryDeviceAttribute& getPrimaryDeviceAttribute() = 0;

    /**
     * description: It will broadcast standard bonding Request to registered clients
     * param: outAddress (string)     : Bt address of phone
     * param: deviceName (string)     : Device name
     * param: type (eBondingType)     : Bonding type
     * param: pin (string) : pass key pin
     */
    virtual BondingRequestEvent& getBondingRequestEvent() = 0;
    /**
     * description: It will broadcast service connection request to registered clients
     * param: outAddress (string)         : Bt address of phone
     * param: name (string)               : Device name
     * param: service (eSupportedProfile) : supported profile list
     */
    virtual ServiceConnectionRequestEvent& getServiceConnectionRequestEvent() = 0;
    /**
     * description: It will broadcast service connection status signal to registered clients
     * param: outAddress (string)         : Bt address of phone
     * param: name (string)               : Device name
     * param: service (eSupportedProfile) : supported profile list
     * param: status (eConnectionStatus)  : Connected or disconnected status
     * param: reason (eServiceConnectDisconnectReason) : reason for connection or
     *   disconnection
     */
    virtual ServiceConnectionStatusEvent& getServiceConnectionStatusEvent() = 0;
    /**
     * description: This signal is sent when device has been deleted from Head Unit to registered
     *   clients
     * param: outAddress (string)     : Bt address of phone
     * param: deviceName (string )    : device name
     */
    virtual DeviceDeletedEvent& getDeviceDeletedEvent() = 0;
    /**
     * description: This signal is used to update the pairing status to registered clients
     * param: outAddress (string)         : Bt address of phone
     * param: deviceName (string)         : device name
     * param: pairStatus (ePairingStatus) : Pairing status i.e. successful Or failure
     */
    virtual BondingStatusEvent& getBondingStatusEvent() = 0;

    /**
     * description: Used to start device search on head unit
     * param: maxDevice (UInt32)       : max limit for found devices
     * param: timeout (UInt32)         : time limit for device search operation
    
           
     *   returns: errorCode (eErrorType) : error code
     */
    virtual void startDeviceSearch(const uint32_t &_maxDevice, const uint32_t &_timeout, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::btpres::BTPresTypes::eErrorType &_errorCode, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> startDeviceSearchAsync(const uint32_t &_maxDevice, const uint32_t &_timeout, StartDeviceSearchAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: Used to stop device search on head unit
     * param: none
    
            returns: error code (eErrorType) : error code
     */
    virtual void stopDeviceSearch(CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::btpres::BTPresTypes::eErrorType &_errorCode, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> stopDeviceSearchAsync(StopDeviceSearchAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: Used to send secure Bonding reply
     * param: inAddress (string)       : phone BT address
     * param: accept (boolean)         : accepting authentication request
     * param: trusted (boolean)        : making device trusted means service won't send
     *   connection request for each connect attempt
     * param: type (eBondingType)      : Bonding type, standard or secure bonding
    
           
     *   returns: errorCode (eErrorType) : error code
     */
    virtual void bondingReply(const std::string &_inAddress, const bool &_accept, const bool &_trusted, const ::v1::com::harman::btpres::BTPresTypes::eBondingType &_type, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::btpres::BTPresTypes::eErrorType &_errorCode, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> bondingReplyAsync(const std::string &_inAddress, const bool &_accept, const bool &_trusted, const ::v1::com::harman::btpres::BTPresTypes::eBondingType &_type, BondingReplyAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: Used to delete device from paired device list
     * param: inAddress (string)      : phone BT address
    
            returns: errorCode
     *   (eErrorType): error code
     */
    virtual void deleteDevice(const std::string &_inAddress, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::btpres::BTPresTypes::eErrorType &_errorCode, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> deleteDeviceAsync(const std::string &_inAddress, DeleteDeviceAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: Used to delete all device in paired device list
     * param: none
    
            returns: errorCode (eErrorType) : error code
     */
    virtual void deleteAllDevices(CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::btpres::BTPresTypes::eErrorType &_errorCode, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> deleteAllDevicesAsync(DeleteAllDevicesAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
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
    virtual void startServiceConnection(const std::string &_inAddress, const ::v1::com::harman::btpres::BTPresTypes::eSupportedProfile &_service, const std::string &_instanceName, const std::string &_replaceAddr, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::btpres::BTPresTypes::eErrorType &_errorCode, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> startServiceConnectionAsync(const std::string &_inAddress, const ::v1::com::harman::btpres::BTPresTypes::eSupportedProfile &_service, const std::string &_instanceName, const std::string &_replaceAddr, StartServiceConnectionAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: Used to allows the existance of the service connection to this device and
     *   service.
     * param: inAddress (string)           : phone BT address
     * param: service (eSupportedProfile)  : profile name
     * param: allow (Boolean)              : containing the value true for allow, or false
     *   for reject
    
            returns: errorCode (eErrorType)      : error code
     */
    virtual void allowServiceConnection(const std::string &_inAddress, const ::v1::com::harman::btpres::BTPresTypes::eSupportedProfile &_service, const bool &_allow, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::btpres::BTPresTypes::eErrorType &_errorCode, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> allowServiceConnectionAsync(const std::string &_inAddress, const ::v1::com::harman::btpres::BTPresTypes::eSupportedProfile &_service, const bool &_allow, AllowServiceConnectionAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: Used to initate the disconnection with connected service i.e. HFP and A2DP
     * param: inAddress (string)                  : phone BT address
     * param: service (eSupportedProfile)         : profile name
    
            returns: errorCode
     *   error code (eErrorType)  : error code
     */
    virtual void startServiceDisconnection(const std::string &_inAddress, const ::v1::com::harman::btpres::BTPresTypes::eSupportedProfile &_service, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::btpres::BTPresTypes::eErrorType &_errorCode, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> startServiceDisconnectionAsync(const std::string &_inAddress, const ::v1::com::harman::btpres::BTPresTypes::eSupportedProfile &_service, StartServiceDisconnectionAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
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
    virtual void serviceConnectionReply(const std::string &_inAddress, const ::v1::com::harman::btpres::BTPresTypes::eSupportedProfile &_service, const bool &_accept, const std::string &_instanceName, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::btpres::BTPresTypes::eErrorType &_errorCode, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> serviceConnectionReplyAsync(const std::string &_inAddress, const ::v1::com::harman::btpres::BTPresTypes::eSupportedProfile &_service, const bool &_accept, const std::string &_instanceName, ServiceConnectionReplyAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: Used to initiate the reconnection to previously connected device
     * param: None
    
            returns: errorCode error code (eErrorType) : error code
     */
    virtual void startReconnect(CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::btpres::BTPresTypes::eErrorType &_errorCode, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> startReconnectAsync(StartReconnectAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: This method should be called to get oldest connected device
     * param: None
    
            returns: oldestDevInfo (oldestDevInfo)     : Oldest device name
     *   and address
            returns: errorCode error code (eErrorType) : error code
     */
    virtual void getOldestConnectedDev(CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::btpres::BTPresTypes::deviceInfo &_oldestDevInfo, ::v1::com::harman::btpres::BTPresTypes::eErrorType &_errorCode, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> getOldestConnectedDevAsync(GetOldestConnectedDevAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: This method used to change name of bonded device.
     * param: inAddress  (string)     : contains the BD address.
     * param: name (string)           : Device name
    
            returns: errorCode(eErrorType) 
     *   : error code
     */
    virtual void renameBondedDevice(const std::string &_inAddress, const std::string &_name, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::btpres::BTPresTypes::eErrorType &_errorCode, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> renameBondedDeviceAsync(const std::string &_inAddress, const std::string &_name, RenameBondedDeviceAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: This method used to change local name of head unit.
     * param: name (string)           : Device name
    
            returns: errorCode(eErrorType) 
     *   : error code
     */
    virtual void renameLocalDevice(const std::string &_name, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::btpres::BTPresTypes::eErrorType &_errorCode, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> renameLocalDeviceAsync(const std::string &_name, RenameLocalDeviceAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: Used to set bluetooth on or off
     * param: status (boolean)       : set true or false
    
            returns: error
     *   code(eErrorType) : error code
     */
    virtual void setBluetoothStatus(const bool &_status, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::btpres::BTPresTypes::eErrorType &_errorCode, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> setBluetoothStatusAsync(const bool &_status, SetBluetoothStatusAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: Used to enable or disable discoverable mode
     * param: enabled (boolean)       : set true or false
    
            returns: errorCode
     *   (eErrorType) : error code
     */
    virtual void setDiscoverableMode(const bool &_enabled, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::btpres::BTPresTypes::eErrorType &_errorCode, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> setDiscoverableModeAsync(const bool &_enabled, SetDiscoverableModeAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: This method used to pin information for head unit.
     * param: passkey (string)          : set the default pin for legacy devices
    
           
     *   returns:  error code (eErrorType) : error code
     */
    virtual void setPin(const std::string &_passkey, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::btpres::BTPresTypes::eErrorType &_errorCode, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> setPinAsync(const std::string &_passkey, SetPinAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: It will set a device as primary
     * param: inAddress  (string)     : contains the BD address.
    
            returns:  error
     *   code (eErrorType) : error code
     */
    virtual void setPrimaryDevice(const std::string &_inAddress, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::btpres::BTPresTypes::eErrorType &_errorCode, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> setPrimaryDeviceAsync(const std::string &_inAddress, SetPrimaryDeviceAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
};

} // namespace btpres
} // namespace harman
} // namespace com
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_COM_HARMAN_BTPRES_Connection_Manager_PROXY_BASE_HPP_
