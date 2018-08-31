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
#ifndef V2_IVIRADIO_TYPES_Types_HPP_
#define V2_IVIRADIO_TYPES_Types_HPP_



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

namespace v2 {
namespace IVIRadio {
namespace Types {

struct Types {
    typedef std::vector<uint32_t> UInt32s;
    struct StationSelector : CommonAPI::Struct<uint32_t, UInt32s> {
    	
    	StationSelector() {
    	}
    	StationSelector(const uint32_t &_deviceType, const UInt32s &_id)
    	{
    		std::get<0>(values_) = _deviceType;
    		std::get<1>(values_) = _id;
    	}
    	/**
    	 * description: device the station is transmitted on
    	 */
    	inline const uint32_t &getDeviceType() const { return std::get<0>(values_); }
    	inline void setDeviceType(const uint32_t &_value) { std::get<0>(values_) = _value; }
    	/**
    	 * description: unique id to identify a station in the system
    	 */
    	inline const UInt32s &getId() const { return std::get<1>(values_); }
    	inline void setId(const UInt32s &_value) { std::get<1>(values_) = _value; }
    	inline bool operator==(const StationSelector& _other) const {
                return (getDeviceType() == _other.getDeviceType() && getId() == _other.getId());
        }
    	inline bool operator!=(const StationSelector &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    typedef std::vector<Types::StationSelector> StationSelectors;
    typedef std::vector<Types::StationSelectors> arrayStationSelectors;
    
    struct Activation : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            ACTIVE = 0,
            INACTIVE = 1
        };
        
        Activation() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::ACTIVE)) {}
        Activation(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::ACTIVE):
                case static_cast<int32_t>(Literal::INACTIVE):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const Activation &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const Activation &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const Activation &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const Activation &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const Activation &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const Activation &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    typedef std::vector<Types::Activation> Activations;
    
    struct DeviceType : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            UNDEF_DEVICE = 0,
            AMFM = 255,
            DAB = 16128,
            SDARS = 49152,
            TV = 196608
        };
        
        DeviceType() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::UNDEF_DEVICE)) {}
        DeviceType(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::UNDEF_DEVICE):
                case static_cast<int32_t>(Literal::AMFM):
                case static_cast<int32_t>(Literal::DAB):
                case static_cast<int32_t>(Literal::SDARS):
                case static_cast<int32_t>(Literal::TV):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const DeviceType &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const DeviceType &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const DeviceType &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const DeviceType &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const DeviceType &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const DeviceType &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    typedef std::vector<Types::DeviceType> DeviceTypes;
    
    struct SourceType : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            UNDEF_SOURCE = 0,
            AMFM_FM = 1,
            AMFM_MW = 2,
            AMFM_LW = 4,
            AMFM_SW = 8,
            AMFM_WB = 16,
            AMFM_TF = 32,
            AMFM_HD = 64,
            AMFM_DRM = 128,
            DAB_L = 256,
            DAB_III = 512,
            DAB_DAB = 1024,
            DAB_DAB_PLUS = 2048,
            DAB_DMBA = 4096,
            DAB_DMBV = 8192,
            SDARS_SIRIUS = 16384,
            SDARS_XM = 32768,
            TV_A = 65536,
            TV_AV = 131072
        };
        
        SourceType() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::UNDEF_SOURCE)) {}
        SourceType(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::UNDEF_SOURCE):
                case static_cast<int32_t>(Literal::AMFM_FM):
                case static_cast<int32_t>(Literal::AMFM_MW):
                case static_cast<int32_t>(Literal::AMFM_LW):
                case static_cast<int32_t>(Literal::AMFM_SW):
                case static_cast<int32_t>(Literal::AMFM_WB):
                case static_cast<int32_t>(Literal::AMFM_TF):
                case static_cast<int32_t>(Literal::AMFM_HD):
                case static_cast<int32_t>(Literal::AMFM_DRM):
                case static_cast<int32_t>(Literal::DAB_L):
                case static_cast<int32_t>(Literal::DAB_III):
                case static_cast<int32_t>(Literal::DAB_DAB):
                case static_cast<int32_t>(Literal::DAB_DAB_PLUS):
                case static_cast<int32_t>(Literal::DAB_DMBA):
                case static_cast<int32_t>(Literal::DAB_DMBV):
                case static_cast<int32_t>(Literal::SDARS_SIRIUS):
                case static_cast<int32_t>(Literal::SDARS_XM):
                case static_cast<int32_t>(Literal::TV_A):
                case static_cast<int32_t>(Literal::TV_AV):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const SourceType &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const SourceType &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const SourceType &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const SourceType &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const SourceType &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const SourceType &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    typedef std::vector<Types::SourceType> SourceTypes;
    typedef std::vector<bool> Booleans;
    typedef std::vector<std::string> Strings;
    typedef std::string DateTime;
    
    struct ErrorCodes : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            EC_NOTACTIVATED = 0,
            EC_NOTRECEIVABLE = 1,
            EC_OUTOFRESSOURCES = 2,
            EC_NOERROR = 3,
            EC_NOSTATIONACTIVE = 4,
            EC_INVALIDCOMPONENTID = 5,
            EC_NODATAAVAILABLE = 6,
            EC_NOTACTIVE = 7,
            EC_COMPONENTNOTSUPPORTED = 8,
            EC_FUNCTIONALITYNOTSUPPORTED = 9
        };
        
        ErrorCodes() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::EC_NOTACTIVATED)) {}
        ErrorCodes(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::EC_NOTACTIVATED):
                case static_cast<int32_t>(Literal::EC_NOTRECEIVABLE):
                case static_cast<int32_t>(Literal::EC_OUTOFRESSOURCES):
                case static_cast<int32_t>(Literal::EC_NOERROR):
                case static_cast<int32_t>(Literal::EC_NOSTATIONACTIVE):
                case static_cast<int32_t>(Literal::EC_INVALIDCOMPONENTID):
                case static_cast<int32_t>(Literal::EC_NODATAAVAILABLE):
                case static_cast<int32_t>(Literal::EC_NOTACTIVE):
                case static_cast<int32_t>(Literal::EC_COMPONENTNOTSUPPORTED):
                case static_cast<int32_t>(Literal::EC_FUNCTIONALITYNOTSUPPORTED):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const ErrorCodes &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const ErrorCodes &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const ErrorCodes &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const ErrorCodes &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const ErrorCodes &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const ErrorCodes &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    
    struct Feedback : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            DONE = 0,
            INTERRUPTED = 1,
            NOT_APPLICABLE = 2,
            ALREADY_SET = 3,
            FAILURE = 4,
            DELAYED = 5
        };
        
        Feedback() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::DONE)) {}
        Feedback(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::DONE):
                case static_cast<int32_t>(Literal::INTERRUPTED):
                case static_cast<int32_t>(Literal::NOT_APPLICABLE):
                case static_cast<int32_t>(Literal::ALREADY_SET):
                case static_cast<int32_t>(Literal::FAILURE):
                case static_cast<int32_t>(Literal::DELAYED):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const Feedback &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const Feedback &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const Feedback &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const Feedback &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const Feedback &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const Feedback &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    
    struct UpdateType : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            UT_NONE = 0,
            UT_ONCE = 1,
            UT_NOTIFICATION = 2
        };
        
        UpdateType() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::UT_NONE)) {}
        UpdateType(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::UT_NONE):
                case static_cast<int32_t>(Literal::UT_ONCE):
                case static_cast<int32_t>(Literal::UT_NOTIFICATION):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const UpdateType &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const UpdateType &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const UpdateType &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const UpdateType &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const UpdateType &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const UpdateType &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };



static inline const char* getTypeCollectionName() {
    static const char* typeCollectionName = "IVIRadio.Types.Types";
    return typeCollectionName;
}

inline CommonAPI::Version getTypeCollectionVersion() {
    return CommonAPI::Version(2, 1);
}

}; // struct Types

} // namespace Types
} // namespace IVIRadio
} // namespace v2

namespace CommonAPI {
}


namespace std {
    //Hash for Activation
    template<>
    struct hash<::v2::IVIRadio::Types::Types::Activation> {
        inline size_t operator()(const ::v2::IVIRadio::Types::Types::Activation& activation) const {
            return static_cast<int32_t>(activation);
        }
    };
    //Hash for ErrorCodes
    template<>
    struct hash<::v2::IVIRadio::Types::Types::ErrorCodes> {
        inline size_t operator()(const ::v2::IVIRadio::Types::Types::ErrorCodes& errorCodes) const {
            return static_cast<int32_t>(errorCodes);
        }
    };
    //Hash for Feedback
    template<>
    struct hash<::v2::IVIRadio::Types::Types::Feedback> {
        inline size_t operator()(const ::v2::IVIRadio::Types::Types::Feedback& feedback) const {
            return static_cast<int32_t>(feedback);
        }
    };
    //Hash for SourceType
    template<>
    struct hash<::v2::IVIRadio::Types::Types::SourceType> {
        inline size_t operator()(const ::v2::IVIRadio::Types::Types::SourceType& sourceType) const {
            return static_cast<int32_t>(sourceType);
        }
    };
    //Hash for DeviceType
    template<>
    struct hash<::v2::IVIRadio::Types::Types::DeviceType> {
        inline size_t operator()(const ::v2::IVIRadio::Types::Types::DeviceType& deviceType) const {
            return static_cast<int32_t>(deviceType);
        }
    };
    //Hash for UpdateType
    template<>
    struct hash<::v2::IVIRadio::Types::Types::UpdateType> {
        inline size_t operator()(const ::v2::IVIRadio::Types::Types::UpdateType& updateType) const {
            return static_cast<int32_t>(updateType);
        }
    };
}


// Compatibility
namespace v2_1 = v2;

#endif // V2_IVIRADIO_TYPES_Types_HPP_
