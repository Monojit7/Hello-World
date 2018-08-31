/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/
#ifndef COM_HARMAN_CONNECTIVITY_Wifi_Typedefs_HPP_
#define COM_HARMAN_CONNECTIVITY_Wifi_Typedefs_HPP_



#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/Deployment.hpp>
#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <CommonAPI/Struct.hpp>
#include <CommonAPI/Types.hpp>
#include <cstdint>
#include <string>
#include <vector>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace com {
namespace harman {
namespace connectivity {

struct WifiTypedefs {
    typedef std::vector<std::string> stringList;
    struct WiFiSvcNetwork : CommonAPI::Struct<std::string, int32_t, std::string, int32_t, stringList, stringList, stringList, stringList, stringList, int32_t, stringList, int32_t, stringList, int32_t, std::string, bool, bool> {
    	
    	WiFiSvcNetwork() {
    		std::get<15>(values_) = false;
    		std::get<16>(values_) = false;
    	}
    	WiFiSvcNetwork(const std::string &_bssid, const int32_t &_channel, const std::string &_ssid, const int32_t &_rssi, const stringList &_security, const stringList &_groupCipher, const stringList &_pairwiseCipherWPA, const stringList &_pairwiseCipherWPA2, const stringList &_authenticationList, const int32_t &_securityOption, const stringList &_wirelessMode, const int32_t &_keyIndex, const stringList &_keyList, const int32_t &_priority, const std::string &_lastConnectTime, const bool &_favorite, const bool &_hidden)
    	{
    		std::get<0>(values_) = _bssid;
    		std::get<1>(values_) = _channel;
    		std::get<2>(values_) = _ssid;
    		std::get<3>(values_) = _rssi;
    		std::get<4>(values_) = _security;
    		std::get<5>(values_) = _groupCipher;
    		std::get<6>(values_) = _pairwiseCipherWPA;
    		std::get<7>(values_) = _pairwiseCipherWPA2;
    		std::get<8>(values_) = _authenticationList;
    		std::get<9>(values_) = _securityOption;
    		std::get<10>(values_) = _wirelessMode;
    		std::get<11>(values_) = _keyIndex;
    		std::get<12>(values_) = _keyList;
    		std::get<13>(values_) = _priority;
    		std::get<14>(values_) = _lastConnectTime;
    		std::get<15>(values_) = _favorite;
    		std::get<16>(values_) = _hidden;
    	}
    	inline const std::string &getBssid() const { return std::get<0>(values_); }
    	inline void setBssid(const std::string &_value) { std::get<0>(values_) = _value; }
    	inline const int32_t &getChannel() const { return std::get<1>(values_); }
    	inline void setChannel(const int32_t &_value) { std::get<1>(values_) = _value; }
    	inline const std::string &getSsid() const { return std::get<2>(values_); }
    	inline void setSsid(const std::string &_value) { std::get<2>(values_) = _value; }
    	inline const int32_t &getRssi() const { return std::get<3>(values_); }
    	inline void setRssi(const int32_t &_value) { std::get<3>(values_) = _value; }
    	inline const stringList &getSecurity() const { return std::get<4>(values_); }
    	inline void setSecurity(const stringList &_value) { std::get<4>(values_) = _value; }
    	inline const stringList &getGroupCipher() const { return std::get<5>(values_); }
    	inline void setGroupCipher(const stringList &_value) { std::get<5>(values_) = _value; }
    	inline const stringList &getPairwiseCipherWPA() const { return std::get<6>(values_); }
    	inline void setPairwiseCipherWPA(const stringList &_value) { std::get<6>(values_) = _value; }
    	inline const stringList &getPairwiseCipherWPA2() const { return std::get<7>(values_); }
    	inline void setPairwiseCipherWPA2(const stringList &_value) { std::get<7>(values_) = _value; }
    	inline const stringList &getAuthenticationList() const { return std::get<8>(values_); }
    	inline void setAuthenticationList(const stringList &_value) { std::get<8>(values_) = _value; }
    	inline const int32_t &getSecurityOption() const { return std::get<9>(values_); }
    	inline void setSecurityOption(const int32_t &_value) { std::get<9>(values_) = _value; }
    	inline const stringList &getWirelessMode() const { return std::get<10>(values_); }
    	inline void setWirelessMode(const stringList &_value) { std::get<10>(values_) = _value; }
    	inline const int32_t &getKeyIndex() const { return std::get<11>(values_); }
    	inline void setKeyIndex(const int32_t &_value) { std::get<11>(values_) = _value; }
    	inline const stringList &getKeyList() const { return std::get<12>(values_); }
    	inline void setKeyList(const stringList &_value) { std::get<12>(values_) = _value; }
    	inline const int32_t &getPriority() const { return std::get<13>(values_); }
    	inline void setPriority(const int32_t &_value) { std::get<13>(values_) = _value; }
    	inline const std::string &getLastConnectTime() const { return std::get<14>(values_); }
    	inline void setLastConnectTime(const std::string &_value) { std::get<14>(values_) = _value; }
    	inline const bool &getFavorite() const { return std::get<15>(values_); }
    	inline void setFavorite(const bool _value) { std::get<15>(values_) = _value; }
    	inline const bool &getHidden() const { return std::get<16>(values_); }
    	inline void setHidden(const bool _value) { std::get<16>(values_) = _value; }
    	inline bool operator==(const WiFiSvcNetwork& _other) const {
                return (getBssid() == _other.getBssid() && getChannel() == _other.getChannel() && getSsid() == _other.getSsid() && getRssi() == _other.getRssi() && getSecurity() == _other.getSecurity() && getGroupCipher() == _other.getGroupCipher() && getPairwiseCipherWPA() == _other.getPairwiseCipherWPA() && getPairwiseCipherWPA2() == _other.getPairwiseCipherWPA2() && getAuthenticationList() == _other.getAuthenticationList() && getSecurityOption() == _other.getSecurityOption() && getWirelessMode() == _other.getWirelessMode() && getKeyIndex() == _other.getKeyIndex() && getKeyList() == _other.getKeyList() && getPriority() == _other.getPriority() && getLastConnectTime() == _other.getLastConnectTime() && getFavorite() == _other.getFavorite() && getHidden() == _other.getHidden());
        }
    	inline bool operator!=(const WiFiSvcNetwork &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    struct interfaces : CommonAPI::Struct<std::string, std::string, std::string> {
    	
    	interfaces() {
    	}
    	interfaces(const std::string &_role, const std::string &_Interface, const std::string &_macAddr)
    	{
    		std::get<0>(values_) = _role;
    		std::get<1>(values_) = _Interface;
    		std::get<2>(values_) = _macAddr;
    	}
    	inline const std::string &getRole() const { return std::get<0>(values_); }
    	inline void setRole(const std::string &_value) { std::get<0>(values_) = _value; }
    	inline const std::string &getInterface() const { return std::get<1>(values_); }
    	inline void setInterface(const std::string &_value) { std::get<1>(values_) = _value; }
    	inline const std::string &getMacAddr() const { return std::get<2>(values_); }
    	inline void setMacAddr(const std::string &_value) { std::get<2>(values_) = _value; }
    	inline bool operator==(const interfaces& _other) const {
                return (getRole() == _other.getRole() && getInterface() == _other.getInterface() && getMacAddr() == _other.getMacAddr());
        }
    	inline bool operator!=(const interfaces &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    
    struct Role : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            eNoRole = 0,
            eClient = 1,
            eAP = 2,
            eAdHoc = 3,
            eDirect = 4,
            eInvalidRole = 5
        };
        
        Role() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::eNoRole)) {}
        Role(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::eNoRole):
                case static_cast<int32_t>(Literal::eClient):
                case static_cast<int32_t>(Literal::eAP):
                case static_cast<int32_t>(Literal::eAdHoc):
                case static_cast<int32_t>(Literal::eDirect):
                case static_cast<int32_t>(Literal::eInvalidRole):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const Role &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const Role &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const Role &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const Role &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const Role &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const Role &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    
    struct PairwiseCipher : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            eNoPairwiseCipher = 0,
            eAnyPairwiseCipher = 1,
            eWEP40_Cipher = 2,
            eWEP104_Cipher = 3,
            eTKIP_Cipher = 4,
            eCCMP_Cipher = 5
        };
        
        PairwiseCipher() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::eNoPairwiseCipher)) {}
        PairwiseCipher(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::eNoPairwiseCipher):
                case static_cast<int32_t>(Literal::eAnyPairwiseCipher):
                case static_cast<int32_t>(Literal::eWEP40_Cipher):
                case static_cast<int32_t>(Literal::eWEP104_Cipher):
                case static_cast<int32_t>(Literal::eTKIP_Cipher):
                case static_cast<int32_t>(Literal::eCCMP_Cipher):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const PairwiseCipher &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const PairwiseCipher &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const PairwiseCipher &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const PairwiseCipher &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const PairwiseCipher &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const PairwiseCipher &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    
    struct eWPSMode : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            WPS_MODE_OFF = 0,
            WPS_MODE_REGISTRAR = 1,
            WPS_MODE_ENROLLEE = 2,
            eWPSMode_DEFAULT = 0
        };
        
        eWPSMode() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::WPS_MODE_OFF)) {}
        eWPSMode(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::WPS_MODE_OFF):
                case static_cast<int32_t>(Literal::WPS_MODE_REGISTRAR):
                case static_cast<int32_t>(Literal::WPS_MODE_ENROLLEE):
                //case static_cast<int32_t>(Literal::eWPSMode_DEFAULT):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const eWPSMode &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const eWPSMode &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const eWPSMode &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const eWPSMode &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const eWPSMode &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const eWPSMode &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    struct ClientNode : CommonAPI::Struct<std::string, std::string, std::string> {
    	
    	ClientNode() {
    	}
    	ClientNode(const std::string &_macAddr, const std::string &_ipAddr, const std::string &_name)
    	{
    		std::get<0>(values_) = _macAddr;
    		std::get<1>(values_) = _ipAddr;
    		std::get<2>(values_) = _name;
    	}
    	inline const std::string &getMacAddr() const { return std::get<0>(values_); }
    	inline void setMacAddr(const std::string &_value) { std::get<0>(values_) = _value; }
    	inline const std::string &getIpAddr() const { return std::get<1>(values_); }
    	inline void setIpAddr(const std::string &_value) { std::get<1>(values_) = _value; }
    	inline const std::string &getName() const { return std::get<2>(values_); }
    	inline void setName(const std::string &_value) { std::get<2>(values_) = _value; }
    	inline bool operator==(const ClientNode& _other) const {
                return (getMacAddr() == _other.getMacAddr() && getIpAddr() == _other.getIpAddr() && getName() == _other.getName());
        }
    	inline bool operator!=(const ClientNode &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    
    struct eOpMode : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            WLAN_OFF = 0,
            WLAN_ACCESS_POINT = 1,
            WLAN_CLIENT = 2,
            WLAN_ADHOC = 3,
            WLAN_WIFI_DIRECT = 4,
            eMode_DEFAULT = 1
        };
        
        eOpMode() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::WLAN_OFF)) {}
        eOpMode(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::WLAN_OFF):
                case static_cast<int32_t>(Literal::WLAN_ACCESS_POINT):
                case static_cast<int32_t>(Literal::WLAN_CLIENT):
                case static_cast<int32_t>(Literal::WLAN_ADHOC):
                case static_cast<int32_t>(Literal::WLAN_WIFI_DIRECT):
                //case static_cast<int32_t>(Literal::eMode_DEFAULT):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const eOpMode &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const eOpMode &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const eOpMode &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const eOpMode &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const eOpMode &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const eOpMode &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    struct interfaceMode : CommonAPI::Struct<std::string, eOpMode, std::string> {
    	
    	interfaceMode() {
    	}
    	interfaceMode(const std::string &_interfaceName, const eOpMode &_mode, const std::string &_mac_addr)
    	{
    		std::get<0>(values_) = _interfaceName;
    		std::get<1>(values_) = _mode;
    		std::get<2>(values_) = _mac_addr;
    	}
    	inline const std::string &getInterfaceName() const { return std::get<0>(values_); }
    	inline void setInterfaceName(const std::string &_value) { std::get<0>(values_) = _value; }
    	inline const eOpMode &getMode() const { return std::get<1>(values_); }
    	inline void setMode(const eOpMode &_value) { std::get<1>(values_) = _value; }
    	inline const std::string &getMac_addr() const { return std::get<2>(values_); }
    	inline void setMac_addr(const std::string &_value) { std::get<2>(values_) = _value; }
    	inline bool operator==(const interfaceMode& _other) const {
                return (getInterfaceName() == _other.getInterfaceName() && getMode() == _other.getMode() && getMac_addr() == _other.getMac_addr());
        }
    	inline bool operator!=(const interfaceMode &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    struct knownNetwork : CommonAPI::Struct<std::string, int32_t> {
    	
    	knownNetwork() {
    	}
    	knownNetwork(const std::string &_ssid, const int32_t &_priority)
    	{
    		std::get<0>(values_) = _ssid;
    		std::get<1>(values_) = _priority;
    	}
    	inline const std::string &getSsid() const { return std::get<0>(values_); }
    	inline void setSsid(const std::string &_value) { std::get<0>(values_) = _value; }
    	inline const int32_t &getPriority() const { return std::get<1>(values_); }
    	inline void setPriority(const int32_t &_value) { std::get<1>(values_) = _value; }
    	inline bool operator==(const knownNetwork& _other) const {
                return (getSsid() == _other.getSsid() && getPriority() == _other.getPriority());
        }
    	inline bool operator!=(const knownNetwork &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    struct ConnectionStatus : CommonAPI::Struct<std::string, std::string, bool> {
    	
    	ConnectionStatus() {
    		std::get<2>(values_) = false;
    	}
    	ConnectionStatus(const std::string &_interfaceName, const std::string &_role, const bool &_connected)
    	{
    		std::get<0>(values_) = _interfaceName;
    		std::get<1>(values_) = _role;
    		std::get<2>(values_) = _connected;
    	}
    	inline const std::string &getInterfaceName() const { return std::get<0>(values_); }
    	inline void setInterfaceName(const std::string &_value) { std::get<0>(values_) = _value; }
    	inline const std::string &getRole() const { return std::get<1>(values_); }
    	inline void setRole(const std::string &_value) { std::get<1>(values_) = _value; }
    	inline const bool &getConnected() const { return std::get<2>(values_); }
    	inline void setConnected(const bool _value) { std::get<2>(values_) = _value; }
    	inline bool operator==(const ConnectionStatus& _other) const {
                return (getInterfaceName() == _other.getInterfaceName() && getRole() == _other.getRole() && getConnected() == _other.getConnected());
        }
    	inline bool operator!=(const ConnectionStatus &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    typedef std::vector<int32_t> integerList;
    typedef std::vector<WifiTypedefs::WiFiSvcNetwork> WiFiSvcNetworklist;
    typedef std::vector<WifiTypedefs::interfaces> interfacesList;
    typedef std::vector<WifiTypedefs::eWPSMode> eWPSModeList;
    typedef std::vector<WifiTypedefs::PairwiseCipher> PairwiseCipherList;
    typedef std::vector<WifiTypedefs::ClientNode> clientNodeList;
    typedef std::vector<WifiTypedefs::interfaceMode> interfaceModeList;
    typedef std::vector<WifiTypedefs::knownNetwork> knownNetworkList;
    typedef std::vector<WifiTypedefs::ConnectionStatus> ConnectionStatusList;



static inline const char* getTypeCollectionName() {
    static const char* typeCollectionName = "com.harman.connectivity.WifiTypedefs";
    return typeCollectionName;
}


}; // struct WifiTypedefs

} // namespace connectivity
} // namespace harman
} // namespace com

namespace CommonAPI {
}


namespace std {
    //Hash for Role
    template<>
    struct hash<::com::harman::connectivity::WifiTypedefs::Role> {
        inline size_t operator()(const ::com::harman::connectivity::WifiTypedefs::Role& role) const {
            return static_cast<int32_t>(role);
        }
    };
    //Hash for PairwiseCipher
    template<>
    struct hash<::com::harman::connectivity::WifiTypedefs::PairwiseCipher> {
        inline size_t operator()(const ::com::harman::connectivity::WifiTypedefs::PairwiseCipher& pairwiseCipher) const {
            return static_cast<int32_t>(pairwiseCipher);
        }
    };
    //Hash for eWPSMode
    template<>
    struct hash<::com::harman::connectivity::WifiTypedefs::eWPSMode> {
        inline size_t operator()(const ::com::harman::connectivity::WifiTypedefs::eWPSMode& eWPSMode) const {
            return static_cast<int32_t>(eWPSMode);
        }
    };
    //Hash for eOpMode
    template<>
    struct hash<::com::harman::connectivity::WifiTypedefs::eOpMode> {
        inline size_t operator()(const ::com::harman::connectivity::WifiTypedefs::eOpMode& eOpMode) const {
            return static_cast<int32_t>(eOpMode);
        }
    };
}



#endif // COM_HARMAN_CONNECTIVITY_Wifi_Typedefs_HPP_
