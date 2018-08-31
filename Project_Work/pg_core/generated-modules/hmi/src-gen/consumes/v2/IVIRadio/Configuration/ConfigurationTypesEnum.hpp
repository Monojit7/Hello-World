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
#ifndef V2_IVIRADIO_CONFIGURATION_Configuration_Types_Enum_HPP_
#define V2_IVIRADIO_CONFIGURATION_Configuration_Types_Enum_HPP_



#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <CommonAPI/Types.hpp>
#include <cstdint>
#include <vector>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v2 {
namespace IVIRadio {
namespace Configuration {

struct ConfigurationTypesEnum {
    
    struct CountryVariant : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            CV_EUROPE = 0,
            CV_AUSTRALIA = 1,
            CV_HONGKONG = 2,
            CV_KOREA = 3,
            CV_CHINA = 4,
            CV_USA = 5,
            CV_OZEANIEN = 6,
            CV_JAPAN = 7,
            CV_EUROPE_ROW = 8
        };
        
        CountryVariant() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::CV_EUROPE)) {}
        CountryVariant(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::CV_EUROPE):
                case static_cast<int32_t>(Literal::CV_AUSTRALIA):
                case static_cast<int32_t>(Literal::CV_HONGKONG):
                case static_cast<int32_t>(Literal::CV_KOREA):
                case static_cast<int32_t>(Literal::CV_CHINA):
                case static_cast<int32_t>(Literal::CV_USA):
                case static_cast<int32_t>(Literal::CV_OZEANIEN):
                case static_cast<int32_t>(Literal::CV_JAPAN):
                case static_cast<int32_t>(Literal::CV_EUROPE_ROW):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const CountryVariant &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const CountryVariant &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const CountryVariant &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const CountryVariant &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const CountryVariant &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const CountryVariant &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    /**
     * description: vector of country variants
     */
    typedef std::vector<ConfigurationTypesEnum::CountryVariant> CountryVariants;
    
    struct FollowingType : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            FM_INTERNAL = 0,
            FM_DAB = 1,
            DAB_INTERNAL = 2,
            DAB_FM = 3,
            DVBT_INTERNAL = 4,
            DVBT_DAB = 5
        };
        
        FollowingType() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::FM_INTERNAL)) {}
        FollowingType(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::FM_INTERNAL):
                case static_cast<int32_t>(Literal::FM_DAB):
                case static_cast<int32_t>(Literal::DAB_INTERNAL):
                case static_cast<int32_t>(Literal::DAB_FM):
                case static_cast<int32_t>(Literal::DVBT_INTERNAL):
                case static_cast<int32_t>(Literal::DVBT_DAB):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const FollowingType &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const FollowingType &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const FollowingType &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const FollowingType &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const FollowingType &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const FollowingType &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    /**
     * description: vector of following types
     */
    typedef std::vector<ConfigurationTypesEnum::FollowingType> FollowingTypes;
    
    struct FunctionalityType : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            HD = 0,
            Following = 1,
            ParentalLock = 2,
            SmartFavorite = 3,
            CIModule = 4,
            AvailableBand = 5,
            CountryVariant = 6,
            Coding = 7,
            CoverageArea = 8,
            InterfaceVersion = 9,
            AMModi = 10,
            Regionalisation = 11,
            RT = 12,
            DLS = 13,
            RDS = 14,
            EPG = 15,
            TPEG = 16
        };
        
        FunctionalityType() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::HD)) {}
        FunctionalityType(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::HD):
                case static_cast<int32_t>(Literal::Following):
                case static_cast<int32_t>(Literal::ParentalLock):
                case static_cast<int32_t>(Literal::SmartFavorite):
                case static_cast<int32_t>(Literal::CIModule):
                case static_cast<int32_t>(Literal::AvailableBand):
                case static_cast<int32_t>(Literal::CountryVariant):
                case static_cast<int32_t>(Literal::Coding):
                case static_cast<int32_t>(Literal::CoverageArea):
                case static_cast<int32_t>(Literal::InterfaceVersion):
                case static_cast<int32_t>(Literal::AMModi):
                case static_cast<int32_t>(Literal::Regionalisation):
                case static_cast<int32_t>(Literal::RT):
                case static_cast<int32_t>(Literal::DLS):
                case static_cast<int32_t>(Literal::RDS):
                case static_cast<int32_t>(Literal::EPG):
                case static_cast<int32_t>(Literal::TPEG):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const FunctionalityType &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const FunctionalityType &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const FunctionalityType &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const FunctionalityType &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const FunctionalityType &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const FunctionalityType &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    /**
     * description: vector of functionality types
     */
    typedef std::vector<ConfigurationTypesEnum::FunctionalityType> FunctionalityTypes;
    
    struct AMMode : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            AM_ONLY_MW = 0,
            AM_ONLY_LW = 1,
            AM_MWLW = 2
        };
        
        AMMode() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::AM_ONLY_MW)) {}
        AMMode(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::AM_ONLY_MW):
                case static_cast<int32_t>(Literal::AM_ONLY_LW):
                case static_cast<int32_t>(Literal::AM_MWLW):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const AMMode &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const AMMode &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const AMMode &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const AMMode &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const AMMode &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const AMMode &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    
    struct TPEGRequestMode : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            RM_CURRENT_STATION = 0,
            RM_CURRENT_ENSEMBLE = 1,
            RM_ANY_ENSEMBLE = 2
        };
        
        TPEGRequestMode() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::RM_CURRENT_STATION)) {}
        TPEGRequestMode(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::RM_CURRENT_STATION):
                case static_cast<int32_t>(Literal::RM_CURRENT_ENSEMBLE):
                case static_cast<int32_t>(Literal::RM_ANY_ENSEMBLE):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const TPEGRequestMode &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const TPEGRequestMode &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const TPEGRequestMode &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const TPEGRequestMode &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const TPEGRequestMode &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const TPEGRequestMode &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    
    struct EPGCollectionMode : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            CM_NO_COLLECTION_MODE = 0,
            CM_ONLY_CURRENT_STATION = 1,
            CM_ALL_RECEIVABLE_STATIONS = 2
        };
        
        EPGCollectionMode() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::CM_NO_COLLECTION_MODE)) {}
        EPGCollectionMode(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::CM_NO_COLLECTION_MODE):
                case static_cast<int32_t>(Literal::CM_ONLY_CURRENT_STATION):
                case static_cast<int32_t>(Literal::CM_ALL_RECEIVABLE_STATIONS):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const EPGCollectionMode &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const EPGCollectionMode &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const EPGCollectionMode &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const EPGCollectionMode &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const EPGCollectionMode &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const EPGCollectionMode &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };



static inline const char* getTypeCollectionName() {
    static const char* typeCollectionName = "IVIRadio.Configuration.ConfigurationTypesEnum";
    return typeCollectionName;
}

inline CommonAPI::Version getTypeCollectionVersion() {
    return CommonAPI::Version(2, 0);
}

}; // struct ConfigurationTypesEnum

} // namespace Configuration
} // namespace IVIRadio
} // namespace v2

namespace CommonAPI {
}


namespace std {
    //Hash for FunctionalityType
    template<>
    struct hash<::v2::IVIRadio::Configuration::ConfigurationTypesEnum::FunctionalityType> {
        inline size_t operator()(const ::v2::IVIRadio::Configuration::ConfigurationTypesEnum::FunctionalityType& functionalityType) const {
            return static_cast<int32_t>(functionalityType);
        }
    };
    //Hash for AMMode
    template<>
    struct hash<::v2::IVIRadio::Configuration::ConfigurationTypesEnum::AMMode> {
        inline size_t operator()(const ::v2::IVIRadio::Configuration::ConfigurationTypesEnum::AMMode& aMMode) const {
            return static_cast<int32_t>(aMMode);
        }
    };
    //Hash for FollowingType
    template<>
    struct hash<::v2::IVIRadio::Configuration::ConfigurationTypesEnum::FollowingType> {
        inline size_t operator()(const ::v2::IVIRadio::Configuration::ConfigurationTypesEnum::FollowingType& followingType) const {
            return static_cast<int32_t>(followingType);
        }
    };
    //Hash for CountryVariant
    template<>
    struct hash<::v2::IVIRadio::Configuration::ConfigurationTypesEnum::CountryVariant> {
        inline size_t operator()(const ::v2::IVIRadio::Configuration::ConfigurationTypesEnum::CountryVariant& countryVariant) const {
            return static_cast<int32_t>(countryVariant);
        }
    };
    //Hash for TPEGRequestMode
    template<>
    struct hash<::v2::IVIRadio::Configuration::ConfigurationTypesEnum::TPEGRequestMode> {
        inline size_t operator()(const ::v2::IVIRadio::Configuration::ConfigurationTypesEnum::TPEGRequestMode& tPEGRequestMode) const {
            return static_cast<int32_t>(tPEGRequestMode);
        }
    };
    //Hash for EPGCollectionMode
    template<>
    struct hash<::v2::IVIRadio::Configuration::ConfigurationTypesEnum::EPGCollectionMode> {
        inline size_t operator()(const ::v2::IVIRadio::Configuration::ConfigurationTypesEnum::EPGCollectionMode& ePGCollectionMode) const {
            return static_cast<int32_t>(ePGCollectionMode);
        }
    };
}


// Compatibility
namespace v2_0 = v2;

#endif // V2_IVIRADIO_CONFIGURATION_Configuration_Types_Enum_HPP_