/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/
#ifndef ORG_HARMAN_NAV_CTRL_ICON_Icon_Provider_Types_HPP_
#define ORG_HARMAN_NAV_CTRL_ICON_Icon_Provider_Types_HPP_



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

#undef COMMONAPI_INTERNAL_COMPILATION

namespace org {
namespace harman {
namespace nav {
namespace ctrl {
namespace icon {

struct IconProviderTypes {
    typedef uint32_t IconResourceSetId;
    
    struct ImageEncoding : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            RAW_RGBA8888 = 0,
            PNG = 1
        };
        
        ImageEncoding() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::RAW_RGBA8888)) {}
        ImageEncoding(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::RAW_RGBA8888):
                case static_cast<int32_t>(Literal::PNG):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const ImageEncoding &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const ImageEncoding &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const ImageEncoding &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const ImageEncoding &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const ImageEncoding &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const ImageEncoding &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    
    struct IconDisplayRepresentation : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            DEFAULT = 0,
            MAP = 1,
            HMI = 2,
            GUIDANCE = 3,
            ICD = 4,
            HEAD_UP_DISPLAY = 5
        };
        
        IconDisplayRepresentation() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::DEFAULT)) {}
        IconDisplayRepresentation(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::DEFAULT):
                case static_cast<int32_t>(Literal::MAP):
                case static_cast<int32_t>(Literal::HMI):
                case static_cast<int32_t>(Literal::GUIDANCE):
                case static_cast<int32_t>(Literal::ICD):
                case static_cast<int32_t>(Literal::HEAD_UP_DISPLAY):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const IconDisplayRepresentation &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const IconDisplayRepresentation &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const IconDisplayRepresentation &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const IconDisplayRepresentation &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const IconDisplayRepresentation &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const IconDisplayRepresentation &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    
    struct IconDayNightRepresentation : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            DAY = 0,
            NIGHT = 1
        };
        
        IconDayNightRepresentation() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::DAY)) {}
        IconDayNightRepresentation(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::DAY):
                case static_cast<int32_t>(Literal::NIGHT):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const IconDayNightRepresentation &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const IconDayNightRepresentation &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const IconDayNightRepresentation &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const IconDayNightRepresentation &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const IconDayNightRepresentation &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const IconDayNightRepresentation &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    
    struct ErrorCode : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            NO_ERROR = 0,
            ERROR_UNSPECIFIED = 1,
            ERROR_ICONRESOURCE_NOT_AVAILABLE = 2,
            ERROR_ICON_FILE_PATH_INVALID = 3
        };
        
        ErrorCode() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::NO_ERROR)) {}
        ErrorCode(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::NO_ERROR):
                case static_cast<int32_t>(Literal::ERROR_UNSPECIFIED):
                case static_cast<int32_t>(Literal::ERROR_ICONRESOURCE_NOT_AVAILABLE):
                case static_cast<int32_t>(Literal::ERROR_ICON_FILE_PATH_INVALID):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const ErrorCode &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const ErrorCode &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const ErrorCode &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const ErrorCode &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const ErrorCode &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const ErrorCode &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    
    struct IconType : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            POI = 0,
            TRAFFIC_EVENT = 1,
            TRAFFIC_ROAD_NUMBER = 2,
            ROAD_SIGN = 3,
            SIGN_POST = 4,
            COUNTRY_FLAG = 5
        };
        
        IconType() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::POI)) {}
        IconType(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::POI):
                case static_cast<int32_t>(Literal::TRAFFIC_EVENT):
                case static_cast<int32_t>(Literal::TRAFFIC_ROAD_NUMBER):
                case static_cast<int32_t>(Literal::ROAD_SIGN):
                case static_cast<int32_t>(Literal::SIGN_POST):
                case static_cast<int32_t>(Literal::COUNTRY_FLAG):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const IconType &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const IconType &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const IconType &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const IconType &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const IconType &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const IconType &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    /**
     * description: describes the desired icon design
     */
    struct DesignParameters : CommonAPI::Struct<ImageEncoding, IconDisplayRepresentation, IconDayNightRepresentation, bool> {
    	
    	DesignParameters() {
    		std::get<3>(values_) = false;
    	}
    	DesignParameters(const ImageEncoding &_imageEncoding, const IconDisplayRepresentation &_displayRepresentation, const IconDayNightRepresentation &_dayNightRepresentation, const bool &_isHighlighted)
    	{
    		std::get<0>(values_) = _imageEncoding;
    		std::get<1>(values_) = _displayRepresentation;
    		std::get<2>(values_) = _dayNightRepresentation;
    		std::get<3>(values_) = _isHighlighted;
    	}
    	inline const ImageEncoding &getImageEncoding() const { return std::get<0>(values_); }
    	inline void setImageEncoding(const ImageEncoding &_value) { std::get<0>(values_) = _value; }
    	inline const IconDisplayRepresentation &getDisplayRepresentation() const { return std::get<1>(values_); }
    	inline void setDisplayRepresentation(const IconDisplayRepresentation &_value) { std::get<1>(values_) = _value; }
    	inline const IconDayNightRepresentation &getDayNightRepresentation() const { return std::get<2>(values_); }
    	inline void setDayNightRepresentation(const IconDayNightRepresentation &_value) { std::get<2>(values_) = _value; }
    	inline const bool &getIsHighlighted() const { return std::get<3>(values_); }
    	inline void setIsHighlighted(const bool _value) { std::get<3>(values_) = _value; }
    	inline bool operator==(const DesignParameters& _other) const {
                return (getImageEncoding() == _other.getImageEncoding() && getDisplayRepresentation() == _other.getDisplayRepresentation() && getDayNightRepresentation() == _other.getDayNightRepresentation() && getIsHighlighted() == _other.getIsHighlighted());
        }
    	inline bool operator!=(const DesignParameters &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    /**
     * description: contains icon response information
     */
    struct IconResponseData : CommonAPI::Struct<std::string, IconType, uint32_t, uint32_t, ErrorCode> {
    	
    	IconResponseData() {
    	}
    	IconResponseData(const std::string &_url, const IconType &_iconType, const uint32_t &_iconWidthInPixel, const uint32_t &_iconHeightInPixel, const ErrorCode &_errorCode)
    	{
    		std::get<0>(values_) = _url;
    		std::get<1>(values_) = _iconType;
    		std::get<2>(values_) = _iconWidthInPixel;
    		std::get<3>(values_) = _iconHeightInPixel;
    		std::get<4>(values_) = _errorCode;
    	}
    	inline const std::string &getUrl() const { return std::get<0>(values_); }
    	inline void setUrl(const std::string &_value) { std::get<0>(values_) = _value; }
    	inline const IconType &getIconType() const { return std::get<1>(values_); }
    	inline void setIconType(const IconType &_value) { std::get<1>(values_) = _value; }
    	inline const uint32_t &getIconWidthInPixel() const { return std::get<2>(values_); }
    	inline void setIconWidthInPixel(const uint32_t &_value) { std::get<2>(values_) = _value; }
    	inline const uint32_t &getIconHeightInPixel() const { return std::get<3>(values_); }
    	inline void setIconHeightInPixel(const uint32_t &_value) { std::get<3>(values_) = _value; }
    	inline const ErrorCode &getErrorCode() const { return std::get<4>(values_); }
    	inline void setErrorCode(const ErrorCode &_value) { std::get<4>(values_) = _value; }
    	inline bool operator==(const IconResponseData& _other) const {
                return (getUrl() == _other.getUrl() && getIconType() == _other.getIconType() && getIconWidthInPixel() == _other.getIconWidthInPixel() && getIconHeightInPixel() == _other.getIconHeightInPixel() && getErrorCode() == _other.getErrorCode());
        }
    	inline bool operator!=(const IconResponseData &_other) const {
    		return !((*this) == _other);
    	}
    
    };



static inline const char* getTypeCollectionName() {
    static const char* typeCollectionName = "org.harman.nav.ctrl.icon.IconProviderTypes";
    return typeCollectionName;
}


}; // struct IconProviderTypes

} // namespace icon
} // namespace ctrl
} // namespace nav
} // namespace harman
} // namespace org

namespace CommonAPI {
}


namespace std {
    //Hash for ImageEncoding
    template<>
    struct hash<::org::harman::nav::ctrl::icon::IconProviderTypes::ImageEncoding> {
        inline size_t operator()(const ::org::harman::nav::ctrl::icon::IconProviderTypes::ImageEncoding& imageEncoding) const {
            return static_cast<int32_t>(imageEncoding);
        }
    };
    //Hash for IconDisplayRepresentation
    template<>
    struct hash<::org::harman::nav::ctrl::icon::IconProviderTypes::IconDisplayRepresentation> {
        inline size_t operator()(const ::org::harman::nav::ctrl::icon::IconProviderTypes::IconDisplayRepresentation& iconDisplayRepresentation) const {
            return static_cast<int32_t>(iconDisplayRepresentation);
        }
    };
    //Hash for IconDayNightRepresentation
    template<>
    struct hash<::org::harman::nav::ctrl::icon::IconProviderTypes::IconDayNightRepresentation> {
        inline size_t operator()(const ::org::harman::nav::ctrl::icon::IconProviderTypes::IconDayNightRepresentation& iconDayNightRepresentation) const {
            return static_cast<int32_t>(iconDayNightRepresentation);
        }
    };
    //Hash for ErrorCode
    template<>
    struct hash<::org::harman::nav::ctrl::icon::IconProviderTypes::ErrorCode> {
        inline size_t operator()(const ::org::harman::nav::ctrl::icon::IconProviderTypes::ErrorCode& errorCode) const {
            return static_cast<int32_t>(errorCode);
        }
    };
    //Hash for IconType
    template<>
    struct hash<::org::harman::nav::ctrl::icon::IconProviderTypes::IconType> {
        inline size_t operator()(const ::org::harman::nav::ctrl::icon::IconProviderTypes::IconType& iconType) const {
            return static_cast<int32_t>(iconType);
        }
    };
}



#endif // ORG_HARMAN_NAV_CTRL_ICON_Icon_Provider_Types_HPP_