/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Wed Oct 26 18:16:09 IST 2016
*/
#ifndef V1_COM_HARMAN_MEDIA_Base_Type_HPP_
#define V1_COM_HARMAN_MEDIA_Base_Type_HPP_



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

namespace v1 {
namespace com {
namespace harman {
namespace media {

struct BaseType {
    
    struct tMediumType : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            MT_UNKNOWN = 0,
            MT_HDD = 1,
            MT_DISCSINGLE = 2,
            MT_DISCCHANGER = 3,
            MT_UMASS = 4,
            MT_IPOD = 5,
            MT_MTP = 6,
            MT_BLUETOOTH = 7,
            MT_CARPLAY = 8,
            MT_GAL = 9,
            MT_SHADOW = 10,
            MT_CD = 11,
            MT_MIRROLINK = 12
        };
        
        tMediumType() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::MT_UNKNOWN)) {}
        tMediumType(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::MT_UNKNOWN):
                case static_cast<int32_t>(Literal::MT_HDD):
                case static_cast<int32_t>(Literal::MT_DISCSINGLE):
                case static_cast<int32_t>(Literal::MT_DISCCHANGER):
                case static_cast<int32_t>(Literal::MT_UMASS):
                case static_cast<int32_t>(Literal::MT_IPOD):
                case static_cast<int32_t>(Literal::MT_MTP):
                case static_cast<int32_t>(Literal::MT_BLUETOOTH):
                case static_cast<int32_t>(Literal::MT_CARPLAY):
                case static_cast<int32_t>(Literal::MT_GAL):
                case static_cast<int32_t>(Literal::MT_SHADOW):
                case static_cast<int32_t>(Literal::MT_CD):
                case static_cast<int32_t>(Literal::MT_MIRROLINK):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const tMediumType &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const tMediumType &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const tMediumType &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const tMediumType &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const tMediumType &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const tMediumType &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    
    struct tContentType : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            CT_UNKNOWN = 0,
            CT_FS = 1,
            CT_CDDA = 2,
            CT_DVD = 3,
            CT_BD = 4,
            CT_STREAM = 5
        };
        
        tContentType() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::CT_UNKNOWN)) {}
        tContentType(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::CT_UNKNOWN):
                case static_cast<int32_t>(Literal::CT_FS):
                case static_cast<int32_t>(Literal::CT_CDDA):
                case static_cast<int32_t>(Literal::CT_DVD):
                case static_cast<int32_t>(Literal::CT_BD):
                case static_cast<int32_t>(Literal::CT_STREAM):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const tContentType &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const tContentType &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const tContentType &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const tContentType &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const tContentType &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const tContentType &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    
    struct tMediumState : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            MS_UNKNOWN = 0,
            MS_UNAVAILABLE = 1,
            MS_AVAILABLE = 2,
            MS_ACTIVE = 3,
            MS_READY_TO_PLAY = 4,
            MS_FIRST_PASS_FIN = 5,
            MS_SECOND_PASS_FIN = 6
        };
        
        tMediumState() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::MS_UNKNOWN)) {}
        tMediumState(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::MS_UNKNOWN):
                case static_cast<int32_t>(Literal::MS_UNAVAILABLE):
                case static_cast<int32_t>(Literal::MS_AVAILABLE):
                case static_cast<int32_t>(Literal::MS_ACTIVE):
                case static_cast<int32_t>(Literal::MS_READY_TO_PLAY):
                case static_cast<int32_t>(Literal::MS_FIRST_PASS_FIN):
                case static_cast<int32_t>(Literal::MS_SECOND_PASS_FIN):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const tMediumState &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const tMediumState &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const tMediumState &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const tMediumState &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const tMediumState &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const tMediumState &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    /**
     * description: Medium information.
     */
    struct tMediumInfo : CommonAPI::Struct<uint32_t, uint32_t, std::string, tMediumType, tContentType, tMediumState, std::string, std::string, std::string, bool, std::string, std::string> {
    	
    	tMediumInfo() {
    		std::get<9>(values_) = false;
    	}
    	tMediumInfo(const uint32_t &_mMediumId, const uint32_t &_mHandleId, const std::string &_mMediumName, const tMediumType &_mMediumType, const tContentType &_mContentType, const tMediumState &_mMediumState, const std::string &_mMountPath, const std::string &_mDeviceUri, const std::string &_mDeviceBrowsePath, const bool &_mBrowseAble, const std::string &_mDeviceNode, const std::string &_mNativeUrl)
    	{
    		std::get<0>(values_) = _mMediumId;
    		std::get<1>(values_) = _mHandleId;
    		std::get<2>(values_) = _mMediumName;
    		std::get<3>(values_) = _mMediumType;
    		std::get<4>(values_) = _mContentType;
    		std::get<5>(values_) = _mMediumState;
    		std::get<6>(values_) = _mMountPath;
    		std::get<7>(values_) = _mDeviceUri;
    		std::get<8>(values_) = _mDeviceBrowsePath;
    		std::get<9>(values_) = _mBrowseAble;
    		std::get<10>(values_) = _mDeviceNode;
    		std::get<11>(values_) = _mNativeUrl;
    	}
    	/**
    	 * description: unique medium id across ignition cycle.
    	 */
    	inline const uint32_t &getMMediumId() const { return std::get<0>(values_); }
    	inline void setMMediumId(const uint32_t &_value) { std::get<0>(values_) = _value; }
    	/**
    	 * description: shadow device handle id.
    	 */
    	inline const uint32_t &getMHandleId() const { return std::get<1>(values_); }
    	inline void setMHandleId(const uint32_t &_value) { std::get<1>(values_) = _value; }
    	/**
    	 * description: user friend medium name.
    	 */
    	inline const std::string &getMMediumName() const { return std::get<2>(values_); }
    	inline void setMMediumName(const std::string &_value) { std::get<2>(values_) = _value; }
    	/**
    	 * description: medium type.
    	 */
    	inline const tMediumType &getMMediumType() const { return std::get<3>(values_); }
    	inline void setMMediumType(const tMediumType &_value) { std::get<3>(values_) = _value; }
    	/**
    	 * description: content type.
    	 */
    	inline const tContentType &getMContentType() const { return std::get<4>(values_); }
    	inline void setMContentType(const tContentType &_value) { std::get<4>(values_) = _value; }
    	/**
    	 * description: medium state.
    	 */
    	inline const tMediumState &getMMediumState() const { return std::get<5>(values_); }
    	inline void setMMediumState(const tMediumState &_value) { std::get<5>(values_) = _value; }
    	/**
    	 * description: medium mount path.
    	 */
    	inline const std::string &getMMountPath() const { return std::get<6>(values_); }
    	inline void setMMountPath(const std::string &_value) { std::get<6>(values_) = _value; }
    	/**
    	 * description: medium uri, can be used by openUri to start auto playback.
    	 */
    	inline const std::string &getMDeviceUri() const { return std::get<7>(values_); }
    	inline void setMDeviceUri(const std::string &_value) { std::get<7>(values_) = _value; }
    	/**
    	 * description: medium browse path, can be used by listChildren.
    	 */
    	inline const std::string &getMDeviceBrowsePath() const { return std::get<8>(values_); }
    	inline void setMDeviceBrowsePath(const std::string &_value) { std::get<8>(values_) = _value; }
    	/**
    	 * description: whether the medium support browsing operation, true: support, false: not
    	 *   support.
    	 */
    	inline const bool &getMBrowseAble() const { return std::get<9>(values_); }
    	inline void setMBrowseAble(const bool _value) { std::get<9>(values_) = _value; }
    	/**
    	 * description: device node in system.
    	 */
    	inline const std::string &getMDeviceNode() const { return std::get<10>(values_); }
    	inline void setMDeviceNode(const std::string &_value) { std::get<10>(values_) = _value; }
    	/**
    	 * description: native device url which can be used by the backend. eg: cinemo's ddpUrl
    	 */
    	inline const std::string &getMNativeUrl() const { return std::get<11>(values_); }
    	inline void setMNativeUrl(const std::string &_value) { std::get<11>(values_) = _value; }
    	inline bool operator==(const tMediumInfo& _other) const {
                return (getMMediumId() == _other.getMMediumId() && getMHandleId() == _other.getMHandleId() && getMMediumName() == _other.getMMediumName() && getMMediumType() == _other.getMMediumType() && getMContentType() == _other.getMContentType() && getMMediumState() == _other.getMMediumState() && getMMountPath() == _other.getMMountPath() && getMDeviceUri() == _other.getMDeviceUri() && getMDeviceBrowsePath() == _other.getMDeviceBrowsePath() && getMBrowseAble() == _other.getMBrowseAble() && getMDeviceNode() == _other.getMDeviceNode() && getMNativeUrl() == _other.getMNativeUrl());
        }
    	inline bool operator!=(const tMediumInfo &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    typedef std::vector<BaseType::tMediumInfo> tMediumInfoList;
    /**
     * description: device items information.
     */
    struct tItemsInfo : CommonAPI::Struct<uint32_t, uint32_t, uint32_t> {
    	
    	tItemsInfo() {
    	}
    	tItemsInfo(const uint32_t &_totalAudioItems, const uint32_t &_totalVideoItems, const uint32_t &_totalImageItems)
    	{
    		std::get<0>(values_) = _totalAudioItems;
    		std::get<1>(values_) = _totalVideoItems;
    		std::get<2>(values_) = _totalImageItems;
    	}
    	inline const uint32_t &getTotalAudioItems() const { return std::get<0>(values_); }
    	inline void setTotalAudioItems(const uint32_t &_value) { std::get<0>(values_) = _value; }
    	inline const uint32_t &getTotalVideoItems() const { return std::get<1>(values_); }
    	inline void setTotalVideoItems(const uint32_t &_value) { std::get<1>(values_) = _value; }
    	inline const uint32_t &getTotalImageItems() const { return std::get<2>(values_); }
    	inline void setTotalImageItems(const uint32_t &_value) { std::get<2>(values_) = _value; }
    	inline bool operator==(const tItemsInfo& _other) const {
                return (getTotalAudioItems() == _other.getTotalAudioItems() && getTotalVideoItems() == _other.getTotalVideoItems() && getTotalImageItems() == _other.getTotalImageItems());
        }
    	inline bool operator!=(const tItemsInfo &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    /**
     * description: remote player capability.
     */
    struct tRemotePlayerCapability : CommonAPI::Struct<bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool> {
    	
    	tRemotePlayerCapability() {
    		std::get<0>(values_) = false;
    		std::get<1>(values_) = false;
    		std::get<2>(values_) = false;
    		std::get<3>(values_) = false;
    		std::get<4>(values_) = false;
    		std::get<5>(values_) = false;
    		std::get<6>(values_) = false;
    		std::get<7>(values_) = false;
    		std::get<8>(values_) = false;
    		std::get<9>(values_) = false;
    		std::get<10>(values_) = false;
    		std::get<11>(values_) = false;
    	}
    	tRemotePlayerCapability(const bool &_supportPlay, const bool &_supportPause, const bool &_supportNext, const bool &_sSupportPrevious, const bool &_supportFastForward, const bool &_supportFastRewind, const bool &_supportRepeatOff, const bool &_supportRepeatSingle, const bool &_supportRepeatAll, const bool &_supportShuffle, const bool &_supportUnShuffle, const bool &_supportBrowsing)
    	{
    		std::get<0>(values_) = _supportPlay;
    		std::get<1>(values_) = _supportPause;
    		std::get<2>(values_) = _supportNext;
    		std::get<3>(values_) = _sSupportPrevious;
    		std::get<4>(values_) = _supportFastForward;
    		std::get<5>(values_) = _supportFastRewind;
    		std::get<6>(values_) = _supportRepeatOff;
    		std::get<7>(values_) = _supportRepeatSingle;
    		std::get<8>(values_) = _supportRepeatAll;
    		std::get<9>(values_) = _supportShuffle;
    		std::get<10>(values_) = _supportUnShuffle;
    		std::get<11>(values_) = _supportBrowsing;
    	}
    	/**
    	 * description: whether the remote player support seek operation.
    	 */
    	inline const bool &getSupportPlay() const { return std::get<0>(values_); }
    	inline void setSupportPlay(const bool _value) { std::get<0>(values_) = _value; }
    	/**
    	 * description: whether the remote player support seek operation.
    	 */
    	inline const bool &getSupportPause() const { return std::get<1>(values_); }
    	inline void setSupportPause(const bool _value) { std::get<1>(values_) = _value; }
    	/**
    	 * description: whether the remote player support seek operation.
    	 */
    	inline const bool &getSupportNext() const { return std::get<2>(values_); }
    	inline void setSupportNext(const bool _value) { std::get<2>(values_) = _value; }
    	/**
    	 * description: whether the remote player support seek operation.
    	 */
    	inline const bool &getSSupportPrevious() const { return std::get<3>(values_); }
    	inline void setSSupportPrevious(const bool _value) { std::get<3>(values_) = _value; }
    	/**
    	 * description: whether the remote player support fast forward operation.
    	 */
    	inline const bool &getSupportFastForward() const { return std::get<4>(values_); }
    	inline void setSupportFastForward(const bool _value) { std::get<4>(values_) = _value; }
    	/**
    	 * description: whether the remote player support fast rewind operation.
    	 */
    	inline const bool &getSupportFastRewind() const { return std::get<5>(values_); }
    	inline void setSupportFastRewind(const bool _value) { std::get<5>(values_) = _value; }
    	/**
    	 * description: whether the remote player support repeat off operation.
    	 */
    	inline const bool &getSupportRepeatOff() const { return std::get<6>(values_); }
    	inline void setSupportRepeatOff(const bool _value) { std::get<6>(values_) = _value; }
    	/**
    	 * description: whether the remote player support repeat single operation.
    	 */
    	inline const bool &getSupportRepeatSingle() const { return std::get<7>(values_); }
    	inline void setSupportRepeatSingle(const bool _value) { std::get<7>(values_) = _value; }
    	/**
    	 * description: whether the remote player support repeat all operation.
    	 */
    	inline const bool &getSupportRepeatAll() const { return std::get<8>(values_); }
    	inline void setSupportRepeatAll(const bool _value) { std::get<8>(values_) = _value; }
    	/**
    	 * description: whether the remote player support shuffle on operation.
    	 */
    	inline const bool &getSupportShuffle() const { return std::get<9>(values_); }
    	inline void setSupportShuffle(const bool _value) { std::get<9>(values_) = _value; }
    	/**
    	 * description: whether the remote player support shuffle off operation.
    	 */
    	inline const bool &getSupportUnShuffle() const { return std::get<10>(values_); }
    	inline void setSupportUnShuffle(const bool _value) { std::get<10>(values_) = _value; }
    	/**
    	 * description: whether the remote player support browsing operation.
    	 */
    	inline const bool &getSupportBrowsing() const { return std::get<11>(values_); }
    	inline void setSupportBrowsing(const bool _value) { std::get<11>(values_) = _value; }
    	inline bool operator==(const tRemotePlayerCapability& _other) const {
                return (getSupportPlay() == _other.getSupportPlay() && getSupportPause() == _other.getSupportPause() && getSupportNext() == _other.getSupportNext() && getSSupportPrevious() == _other.getSSupportPrevious() && getSupportFastForward() == _other.getSupportFastForward() && getSupportFastRewind() == _other.getSupportFastRewind() && getSupportRepeatOff() == _other.getSupportRepeatOff() && getSupportRepeatSingle() == _other.getSupportRepeatSingle() && getSupportRepeatAll() == _other.getSupportRepeatAll() && getSupportShuffle() == _other.getSupportShuffle() && getSupportUnShuffle() == _other.getSupportUnShuffle() && getSupportBrowsing() == _other.getSupportBrowsing());
        }
    	inline bool operator!=(const tRemotePlayerCapability &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    /**
     * description: device firmware information.
     */
    struct tFirmwareInfo : CommonAPI::Struct<std::string, std::string, std::string> {
    	
    	tFirmwareInfo() {
    	}
    	tFirmwareInfo(const std::string &_firmware, const std::string &_protocol, const std::string &_modelNumber)
    	{
    		std::get<0>(values_) = _firmware;
    		std::get<1>(values_) = _protocol;
    		std::get<2>(values_) = _modelNumber;
    	}
    	/**
    	 * description: device firmware version.
    	 */
    	inline const std::string &getFirmware() const { return std::get<0>(values_); }
    	inline void setFirmware(const std::string &_value) { std::get<0>(values_) = _value; }
    	/**
    	 * description: device protocol version.
    	 */
    	inline const std::string &getProtocol() const { return std::get<1>(values_); }
    	inline void setProtocol(const std::string &_value) { std::get<1>(values_) = _value; }
    	/**
    	 * description: device model number.
    	 */
    	inline const std::string &getModelNumber() const { return std::get<2>(values_); }
    	inline void setModelNumber(const std::string &_value) { std::get<2>(values_) = _value; }
    	inline bool operator==(const tFirmwareInfo& _other) const {
                return (getFirmware() == _other.getFirmware() && getProtocol() == _other.getProtocol() && getModelNumber() == _other.getModelNumber());
        }
    	inline bool operator!=(const tFirmwareInfo &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    /**
     * description: device hardware information.
     */
    struct tHardwareInfo : CommonAPI::Struct<std::string, std::string, std::string, std::string, std::string, std::string, std::string> {
    	
    	tHardwareInfo() {
    	}
    	tHardwareInfo(const std::string &_productName, const std::string &_serialNumber, const std::string &_versionNumber, const std::string &_vendorId, const std::string &_productId, const std::string &_manufacturer, const std::string &_MAC)
    	{
    		std::get<0>(values_) = _productName;
    		std::get<1>(values_) = _serialNumber;
    		std::get<2>(values_) = _versionNumber;
    		std::get<3>(values_) = _vendorId;
    		std::get<4>(values_) = _productId;
    		std::get<5>(values_) = _manufacturer;
    		std::get<6>(values_) = _MAC;
    	}
    	/**
    	 * description: user friend product name.
    	 */
    	inline const std::string &getProductName() const { return std::get<0>(values_); }
    	inline void setProductName(const std::string &_value) { std::get<0>(values_) = _value; }
    	/**
    	 * description: device serial number.
    	 */
    	inline const std::string &getSerialNumber() const { return std::get<1>(values_); }
    	inline void setSerialNumber(const std::string &_value) { std::get<1>(values_) = _value; }
    	/**
    	 * description: device version number.
    	 */
    	inline const std::string &getVersionNumber() const { return std::get<2>(values_); }
    	inline void setVersionNumber(const std::string &_value) { std::get<2>(values_) = _value; }
    	/**
    	 * description: device vendor id.
    	 */
    	inline const std::string &getVendorId() const { return std::get<3>(values_); }
    	inline void setVendorId(const std::string &_value) { std::get<3>(values_) = _value; }
    	/**
    	 * description: device productId id.
    	 */
    	inline const std::string &getProductId() const { return std::get<4>(values_); }
    	inline void setProductId(const std::string &_value) { std::get<4>(values_) = _value; }
    	/**
    	 * description: device manufacturer.
    	 */
    	inline const std::string &getManufacturer() const { return std::get<5>(values_); }
    	inline void setManufacturer(const std::string &_value) { std::get<5>(values_) = _value; }
    	/**
    	 * description: device MAC address if exist.
    	 */
    	inline const std::string &getMAC() const { return std::get<6>(values_); }
    	inline void setMAC(const std::string &_value) { std::get<6>(values_) = _value; }
    	inline bool operator==(const tHardwareInfo& _other) const {
                return (getProductName() == _other.getProductName() && getSerialNumber() == _other.getSerialNumber() && getVersionNumber() == _other.getVersionNumber() && getVendorId() == _other.getVendorId() && getProductId() == _other.getProductId() && getManufacturer() == _other.getManufacturer() && getMAC() == _other.getMAC());
        }
    	inline bool operator!=(const tHardwareInfo &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    
    struct tBaseError : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            S_OK = 0,
            E_UNKNOWN = 1,
            E_UNSUPPORTED = 2,
            E_BUSY = 3,
            E_NOMEM = 4,
            E_INVALIDPARAMATERS = 5,
            E_WRONGSTATE = 6,
            E_FSUNSUPPORTED = 7,
            E_FILES_SKIPPED = 8
        };
        
        tBaseError() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::S_OK)) {}
        tBaseError(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::S_OK):
                case static_cast<int32_t>(Literal::E_UNKNOWN):
                case static_cast<int32_t>(Literal::E_UNSUPPORTED):
                case static_cast<int32_t>(Literal::E_BUSY):
                case static_cast<int32_t>(Literal::E_NOMEM):
                case static_cast<int32_t>(Literal::E_INVALIDPARAMATERS):
                case static_cast<int32_t>(Literal::E_WRONGSTATE):
                case static_cast<int32_t>(Literal::E_FSUNSUPPORTED):
                case static_cast<int32_t>(Literal::E_FILES_SKIPPED):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const tBaseError &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const tBaseError &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const tBaseError &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const tBaseError &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const tBaseError &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const tBaseError &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    
    struct tAudioObjectType : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            PODCAST = 0,
            AUDIOBOOK = 1
        };
        
        tAudioObjectType() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::PODCAST)) {}
        tAudioObjectType(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::PODCAST):
                case static_cast<int32_t>(Literal::AUDIOBOOK):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const tAudioObjectType &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const tAudioObjectType &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const tAudioObjectType &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const tAudioObjectType &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const tAudioObjectType &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const tAudioObjectType &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };



static inline const char* getTypeCollectionName() {
    static const char* typeCollectionName = "com.harman.media.BaseType";
    return typeCollectionName;
}

inline CommonAPI::Version getTypeCollectionVersion() {
    return CommonAPI::Version(1, 0);
}

}; // struct BaseType

} // namespace media
} // namespace harman
} // namespace com
} // namespace v1

namespace CommonAPI {
}


namespace std {
    //Hash for tMediumType
    template<>
    struct hash<::v1::com::harman::media::BaseType::tMediumType> {
        inline size_t operator()(const ::v1::com::harman::media::BaseType::tMediumType& tMediumType) const {
            return static_cast<int32_t>(tMediumType);
        }
    };
    //Hash for tContentType
    template<>
    struct hash<::v1::com::harman::media::BaseType::tContentType> {
        inline size_t operator()(const ::v1::com::harman::media::BaseType::tContentType& tContentType) const {
            return static_cast<int32_t>(tContentType);
        }
    };
    //Hash for tMediumState
    template<>
    struct hash<::v1::com::harman::media::BaseType::tMediumState> {
        inline size_t operator()(const ::v1::com::harman::media::BaseType::tMediumState& tMediumState) const {
            return static_cast<int32_t>(tMediumState);
        }
    };
    //Hash for tBaseError
    template<>
    struct hash<::v1::com::harman::media::BaseType::tBaseError> {
        inline size_t operator()(const ::v1::com::harman::media::BaseType::tBaseError& tBaseError) const {
            return static_cast<int32_t>(tBaseError);
        }
    };
    //Hash for tAudioObjectType
    template<>
    struct hash<::v1::com::harman::media::BaseType::tAudioObjectType> {
        inline size_t operator()(const ::v1::com::harman::media::BaseType::tAudioObjectType& tAudioObjectType) const {
            return static_cast<int32_t>(tAudioObjectType);
        }
    };
}


// Compatibility
namespace v1_0 = v1;

#endif // V1_COM_HARMAN_MEDIA_Base_Type_HPP_