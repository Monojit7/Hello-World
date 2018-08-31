/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/
#ifndef V1_COM_HARMAN_CONNECTIVITY_Wifi_Service_PROXY_BASE_HPP_
#define V1_COM_HARMAN_CONNECTIVITY_Wifi_Service_PROXY_BASE_HPP_

#include <v1/com/harman/connectivity/WifiService.hpp>


#include <com/harman/connectivity/WifiTypedefs.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <cstdint>
#include <string>
#include <vector>

#include <CommonAPI/Event.hpp>
#include <CommonAPI/Proxy.hpp>
#include <functional>
#include <future>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace com {
namespace harman {
namespace connectivity {

class WifiServiceProxyBase
    : virtual public CommonAPI::Proxy {
public:
    typedef CommonAPI::Event<
        std::string, int32_t
    > ScanningForNetworksEvent;
    typedef CommonAPI::Event<
        ::com::harman::connectivity::WifiTypedefs::WiFiSvcNetworklist
    > ScanResultsEvent;
    typedef CommonAPI::Event<
        std::string, std::string, bool
    > JoinedNetworkEvent;
    typedef CommonAPI::Event<
        std::string, std::string, int32_t
    > LeftNetworkEvent;
    typedef CommonAPI::Event<
        std::string, bool
    > EnableClientUpdateEvent;
    typedef CommonAPI::Event<
        std::string, std::string
    > WPASuccessEvent;
    typedef CommonAPI::Event<
        std::string, std::string, int32_t
    > WPAFailureEvent;
    typedef CommonAPI::Event<
        std::string, std::string
    > ConnectionErrorEvent;
    typedef CommonAPI::Event<
        std::string, std::string
    > ConnectionEstablishedEvent;
    typedef CommonAPI::Event<
        std::string, std::string
    > ConnectionLostEvent;
    typedef CommonAPI::Event<
        std::string, ::com::harman::connectivity::WifiTypedefs::stringList
    > PasswordRequiredEvent;
    typedef CommonAPI::Event<
        std::string, int32_t
    > MaxNumberKnownNetworksReachedEvent;
    typedef CommonAPI::Event<
        std::string, bool
    > EnableAPUpdateEvent;
    typedef CommonAPI::Event<
        std::string, std::string
    > ClientJoinedEvent;
    typedef CommonAPI::Event<
        std::string, std::string, int32_t
    > ClientLeaveEvent;
    typedef CommonAPI::Event<
        std::string, std::string
    > ClientWPASuccessEvent;
    typedef CommonAPI::Event<
        std::string, int32_t
    > MaxClientSetEvent;
    typedef CommonAPI::Event<
        std::string, std::string
    > BandSetEvent;
    typedef CommonAPI::Event<
        ::com::harman::connectivity::WifiTypedefs::interfaceModeList
    > ModeListUpdateEvent;
    typedef CommonAPI::Event<
        std::string, std::string, std::string
    > IfCreatedEvent;
    typedef CommonAPI::Event<
        std::string, std::string, std::string
    > IfDestroyedEvent;
    typedef CommonAPI::Event<
        ::com::harman::connectivity::WifiTypedefs::stringList
    > RoleChangedEvent;
    typedef CommonAPI::Event<
        std::string, std::string, std::string
    > IfUpEvent;
    typedef CommonAPI::Event<
        std::string, int32_t
    > IfDownEvent;
    typedef CommonAPI::Event<
        std::string
    > WlanCrashEvent;
    typedef CommonAPI::Event<
        std::string
    > ServiceFailureEvent;

    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const std::string&, const int32_t&)> EnableClientAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const std::string&, const int32_t&)> DisableClientAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const int32_t&)> ScanNetworksAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const int32_t&)> StopScanNetworkAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const int32_t&, const std::string&)> JoinNetworkAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const int32_t&)> LeaveNetworkAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::com::harman::connectivity::WifiTypedefs::WiFiSvcNetworklist&, const std::string&, const int32_t&)> GetKnownNetworkListAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const int32_t&, const std::string&, const int32_t&)> GetKnownNetworksCountAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const int32_t&)> StoreAsKnownNetworkAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const int32_t&)> UpdateKnownNetworkPriorityAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const int32_t&)> DeleteKnownNetworkAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const int32_t&)> StartPeriodicScanningAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const int32_t&)> StopPeriodicScanningAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const int32_t&, const std::string&, const std::string&, const int32_t&, const std::string&, const int32_t&)> GetClientStatusAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const std::string&, const std::string&, const std::string&, const int32_t&)> GetClientAddressAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const int32_t&)> EnableAPAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const int32_t&)> DisableAPAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const int32_t&, const ::com::harman::connectivity::WifiTypedefs::stringList&, const std::string&, const std::string&, const int32_t&, const std::string&, const std::string&, const std::string&, const ::com::harman::connectivity::WifiTypedefs::stringList&, const bool&, const std::string&, const ::com::harman::connectivity::WifiTypedefs::stringList&, const std::string&, const int32_t&)> GetAccessPointPropertiesAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const ::com::harman::connectivity::WifiTypedefs::clientNodeList&, const std::string&, const int32_t&)> GetClientListAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const int32_t&)> SetMaxClientAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const int32_t&)> GetMaxClientAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const int32_t&)> SetRadioPowerAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const int32_t&)> SetBandAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const int32_t&)> GetBandAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const int32_t&)> SetOperationMode11acAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const int32_t&, const std::string&, const int32_t&)> GetOperationMode11acAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::com::harman::connectivity::WifiTypedefs::interfaceModeList&, const std::string&, const int32_t&)> SetModeAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::com::harman::connectivity::WifiTypedefs::interfaceModeList&, const std::string&, const int32_t&)> GetModeListAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::com::harman::connectivity::WifiTypedefs::stringList&, const std::string&, const int32_t&)> GetActiveRolesAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const std::string&, const int32_t&)> GetInterfaceByRoleAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const std::string&, const int32_t&)> GetRoleByInterfaceAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const std::string&, const std::string&, const int32_t&)> GetMacAddressAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::com::harman::connectivity::WifiTypedefs::ConnectionStatusList&, const std::string&, const int32_t&)> GetConnectionStatusAsyncCallback;


    virtual ScanningForNetworksEvent& getScanningForNetworksEvent() = 0;
    virtual ScanResultsEvent& getScanResultsEvent() = 0;
    virtual JoinedNetworkEvent& getJoinedNetworkEvent() = 0;
    virtual LeftNetworkEvent& getLeftNetworkEvent() = 0;
    virtual EnableClientUpdateEvent& getEnableClientUpdateEvent() = 0;
    virtual WPASuccessEvent& getWPASuccessEvent() = 0;
    virtual WPAFailureEvent& getWPAFailureEvent() = 0;
    virtual ConnectionErrorEvent& getConnectionErrorEvent() = 0;
    virtual ConnectionEstablishedEvent& getConnectionEstablishedEvent() = 0;
    virtual ConnectionLostEvent& getConnectionLostEvent() = 0;
    virtual PasswordRequiredEvent& getPasswordRequiredEvent() = 0;
    virtual MaxNumberKnownNetworksReachedEvent& getMaxNumberKnownNetworksReachedEvent() = 0;
    virtual EnableAPUpdateEvent& getEnableAPUpdateEvent() = 0;
    virtual ClientJoinedEvent& getClientJoinedEvent() = 0;
    virtual ClientLeaveEvent& getClientLeaveEvent() = 0;
    virtual ClientWPASuccessEvent& getClientWPASuccessEvent() = 0;
    virtual MaxClientSetEvent& getMaxClientSetEvent() = 0;
    virtual BandSetEvent& getBandSetEvent() = 0;
    virtual ModeListUpdateEvent& getModeListUpdateEvent() = 0;
    virtual IfCreatedEvent& getIfCreatedEvent() = 0;
    virtual IfDestroyedEvent& getIfDestroyedEvent() = 0;
    virtual RoleChangedEvent& getRoleChangedEvent() = 0;
    virtual IfUpEvent& getIfUpEvent() = 0;
    virtual IfDownEvent& getIfDownEvent() = 0;
    virtual WlanCrashEvent& getWlanCrashEvent() = 0;
    virtual ServiceFailureEvent& getServiceFailureEvent() = 0;

    virtual void enableClient(const std::string &_interfaceName, CommonAPI::CallStatus &_internalCallStatus, std::string &_interfaceName_out, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> enableClientAsync(const std::string &_interfaceName, EnableClientAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void disableClient(const std::string &_interfaceName, CommonAPI::CallStatus &_internalCallStatus, std::string &_interfaceName_out, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> disableClientAsync(const std::string &_interfaceName, DisableClientAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void scanNetworks(const int32_t &_scanTime, CommonAPI::CallStatus &_internalCallStatus, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> scanNetworksAsync(const int32_t &_scanTime, ScanNetworksAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void stopScanNetwork(const std::string &_interfaceName, CommonAPI::CallStatus &_internalCallStatus, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> stopScanNetworkAsync(const std::string &_interfaceName, StopScanNetworkAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void joinNetwork(const std::string &_ssid, const std::string &_password, const std::string &_hexKey, const ::com::harman::connectivity::WifiTypedefs::stringList &_security, const ::com::harman::connectivity::WifiTypedefs::stringList &_groupCipher, const ::com::harman::connectivity::WifiTypedefs::stringList &_pairwiseCipher, const ::com::harman::connectivity::WifiTypedefs::stringList &_authentication, const int32_t &_securityOption, const bool &_hidden, const std::string &_ipAddress, const std::string &_subnetMask, const bool &_saveNetwork, const bool &_highestPriority, CommonAPI::CallStatus &_internalCallStatus, std::string &_Result, int32_t &_Code, std::string &_Status, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> joinNetworkAsync(const std::string &_ssid, const std::string &_password, const std::string &_hexKey, const ::com::harman::connectivity::WifiTypedefs::stringList &_security, const ::com::harman::connectivity::WifiTypedefs::stringList &_groupCipher, const ::com::harman::connectivity::WifiTypedefs::stringList &_pairwiseCipher, const ::com::harman::connectivity::WifiTypedefs::stringList &_authentication, const int32_t &_securityOption, const bool &_hidden, const std::string &_ipAddress, const std::string &_subnetMask, const bool &_saveNetwork, const bool &_highestPriority, JoinNetworkAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void leaveNetwork(CommonAPI::CallStatus &_internalCallStatus, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> leaveNetworkAsync(LeaveNetworkAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void getKnownNetworkList(CommonAPI::CallStatus &_internalCallStatus, ::com::harman::connectivity::WifiTypedefs::WiFiSvcNetworklist &_list, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> getKnownNetworkListAsync(GetKnownNetworkListAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void getKnownNetworksCount(CommonAPI::CallStatus &_internalCallStatus, int32_t &_count, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> getKnownNetworksCountAsync(GetKnownNetworksCountAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void storeAsKnownNetwork(const std::string &_ssid, const std::string &_password, const std::string &_hexKey, const ::com::harman::connectivity::WifiTypedefs::stringList &_security, const ::com::harman::connectivity::WifiTypedefs::stringList &_groupCipher, const ::com::harman::connectivity::WifiTypedefs::stringList &_pairwiseCipher, const ::com::harman::connectivity::WifiTypedefs::stringList &_authentication, const int32_t &_securityOption, const bool &_hidden, const bool &_highestPriority, CommonAPI::CallStatus &_internalCallStatus, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> storeAsKnownNetworkAsync(const std::string &_ssid, const std::string &_password, const std::string &_hexKey, const ::com::harman::connectivity::WifiTypedefs::stringList &_security, const ::com::harman::connectivity::WifiTypedefs::stringList &_groupCipher, const ::com::harman::connectivity::WifiTypedefs::stringList &_pairwiseCipher, const ::com::harman::connectivity::WifiTypedefs::stringList &_authentication, const int32_t &_securityOption, const bool &_hidden, const bool &_highestPriority, StoreAsKnownNetworkAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void updateKnownNetworkPriority(const ::com::harman::connectivity::WifiTypedefs::knownNetworkList &_list, CommonAPI::CallStatus &_internalCallStatus, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> updateKnownNetworkPriorityAsync(const ::com::harman::connectivity::WifiTypedefs::knownNetworkList &_list, UpdateKnownNetworkPriorityAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void deleteKnownNetwork(const std::string &_ssid, const std::string &_bssid, CommonAPI::CallStatus &_internalCallStatus, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> deleteKnownNetworkAsync(const std::string &_ssid, const std::string &_bssid, DeleteKnownNetworkAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void startPeriodicScanning(const int32_t &_interval, const int32_t &_scantime, const bool &_autoconnect, const ::com::harman::connectivity::WifiTypedefs::stringList &_doNotAutoconnect, CommonAPI::CallStatus &_internalCallStatus, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> startPeriodicScanningAsync(const int32_t &_interval, const int32_t &_scantime, const bool &_autoconnect, const ::com::harman::connectivity::WifiTypedefs::stringList &_doNotAutoconnect, StartPeriodicScanningAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void stopPeriodicScanning(CommonAPI::CallStatus &_internalCallStatus, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> stopPeriodicScanningAsync(StopPeriodicScanningAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void getClientStatus(CommonAPI::CallStatus &_internalCallStatus, int32_t &_assocState, std::string &_bssid, std::string &_securityState, int32_t &_rssi, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> getClientStatusAsync(GetClientStatusAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void getClientAddress(CommonAPI::CallStatus &_internalCallStatus, std::string &_interfaceName, std::string &_ipAddress, std::string &_subnet, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> getClientAddressAsync(GetClientAddressAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void enableAP(const std::string &_interfaceName, const int32_t &_Keyindex, const ::com::harman::connectivity::WifiTypedefs::stringList &_Keylist, const std::string &_password, const std::string &_Encryption, const std::string &_Authentication, const int32_t &_Channel, const std::string &_opMode, const std::string &_CountryCode, const std::string &_ssid, const ::com::harman::connectivity::WifiTypedefs::stringList &_eWPSModeList, const bool &_broadcast_On, const std::string &_filter_Mode, const ::com::harman::connectivity::WifiTypedefs::stringList &_mac_list, CommonAPI::CallStatus &_internalCallStatus, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> enableAPAsync(const std::string &_interfaceName, const int32_t &_Keyindex, const ::com::harman::connectivity::WifiTypedefs::stringList &_Keylist, const std::string &_password, const std::string &_Encryption, const std::string &_Authentication, const int32_t &_Channel, const std::string &_opMode, const std::string &_CountryCode, const std::string &_ssid, const ::com::harman::connectivity::WifiTypedefs::stringList &_eWPSModeList, const bool &_broadcast_On, const std::string &_filter_Mode, const ::com::harman::connectivity::WifiTypedefs::stringList &_mac_list, EnableAPAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void disableAP(const std::string &_interfaceName, CommonAPI::CallStatus &_internalCallStatus, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> disableAPAsync(const std::string &_interfaceName, DisableAPAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void getAccessPointProperties(CommonAPI::CallStatus &_internalCallStatus, std::string &_interfaceName, int32_t &_Keyindex, ::com::harman::connectivity::WifiTypedefs::stringList &_Keylist, std::string &_Encryption, std::string &_Authentication, int32_t &_Channel, std::string &_opMode, std::string &_CountryCode, std::string &_ssid, ::com::harman::connectivity::WifiTypedefs::stringList &_eWPSModeList, bool &_broadcast_On, std::string &_filter_Mode, ::com::harman::connectivity::WifiTypedefs::stringList &_mac_list, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> getAccessPointPropertiesAsync(GetAccessPointPropertiesAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void getClientList(CommonAPI::CallStatus &_internalCallStatus, std::string &_interfaceName, ::com::harman::connectivity::WifiTypedefs::clientNodeList &_mClientList, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> getClientListAsync(GetClientListAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void setMaxClient(const int32_t &_maxClient, CommonAPI::CallStatus &_internalCallStatus, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> setMaxClientAsync(const int32_t &_maxClient, SetMaxClientAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void getMaxClient(CommonAPI::CallStatus &_internalCallStatus, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> getMaxClientAsync(GetMaxClientAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void setRadioPower(const bool &_RadioPower, CommonAPI::CallStatus &_internalCallStatus, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> setRadioPowerAsync(const bool &_RadioPower, SetRadioPowerAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void setBand(const std::string &_band, CommonAPI::CallStatus &_internalCallStatus, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> setBandAsync(const std::string &_band, SetBandAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void getBand(CommonAPI::CallStatus &_internalCallStatus, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> getBandAsync(GetBandAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void setOperationMode11ac(const int32_t &_enable, CommonAPI::CallStatus &_internalCallStatus, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> setOperationMode11acAsync(const int32_t &_enable, SetOperationMode11acAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void getOperationMode11ac(CommonAPI::CallStatus &_internalCallStatus, int32_t &_enable, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> getOperationMode11acAsync(GetOperationMode11acAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void setMode(const ::com::harman::connectivity::WifiTypedefs::interfaceModeList &_list, CommonAPI::CallStatus &_internalCallStatus, ::com::harman::connectivity::WifiTypedefs::interfaceModeList &_Interfaces_Created, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> setModeAsync(const ::com::harman::connectivity::WifiTypedefs::interfaceModeList &_list, SetModeAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void getModeList(CommonAPI::CallStatus &_internalCallStatus, ::com::harman::connectivity::WifiTypedefs::interfaceModeList &_list, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> getModeListAsync(GetModeListAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void getActiveRoles(CommonAPI::CallStatus &_internalCallStatus, ::com::harman::connectivity::WifiTypedefs::stringList &_roles, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> getActiveRolesAsync(GetActiveRolesAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void getInterfaceByRole(const std::string &_role, CommonAPI::CallStatus &_internalCallStatus, std::string &_interfaceName, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> getInterfaceByRoleAsync(const std::string &_role, GetInterfaceByRoleAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void getRoleByInterface(const std::string &_interfaceName, CommonAPI::CallStatus &_internalCallStatus, std::string &_role, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> getRoleByInterfaceAsync(const std::string &_interfaceName, GetRoleByInterfaceAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void getMacAddress(const std::string &_interfaceName, CommonAPI::CallStatus &_internalCallStatus, std::string &_macAddr, std::string &_role, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> getMacAddressAsync(const std::string &_interfaceName, GetMacAddressAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void getConnectionStatus(CommonAPI::CallStatus &_internalCallStatus, ::com::harman::connectivity::WifiTypedefs::ConnectionStatusList &_list, std::string &_Result, int32_t &_Code, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> getConnectionStatusAsync(GetConnectionStatusAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
};

} // namespace connectivity
} // namespace harman
} // namespace com
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_COM_HARMAN_CONNECTIVITY_Wifi_Service_PROXY_BASE_HPP_
