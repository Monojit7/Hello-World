/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/
#ifndef V1_ORG_GENIVI_MEDIAMANAGER_Browser_Types_HPP_
#define V1_ORG_GENIVI_MEDIAMANAGER_Browser_Types_HPP_



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

namespace v1 {
namespace org {
namespace genivi {
namespace mediamanager {

struct BrowserTypes {
    
    struct SortOrder : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            ASCENDING = 0,
            DESCENDING = 1
        };
        
        SortOrder() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::ASCENDING)) {}
        SortOrder(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::ASCENDING):
                case static_cast<int32_t>(Literal::DESCENDING):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const SortOrder &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const SortOrder &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const SortOrder &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const SortOrder &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const SortOrder &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const SortOrder &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    struct SortKey : CommonAPI::Struct<SortOrder, std::string> {
    	
    	SortKey() {
    	}
    	SortKey(const SortOrder &_order, const std::string &_keyName)
    	{
    		std::get<0>(values_) = _order;
    		std::get<1>(values_) = _keyName;
    	}
    	inline const SortOrder &getOrder() const { return std::get<0>(values_); }
    	inline void setOrder(const SortOrder &_value) { std::get<0>(values_) = _value; }
    	inline const std::string &getKeyName() const { return std::get<1>(values_); }
    	inline void setKeyName(const std::string &_value) { std::get<1>(values_) = _value; }
    	inline bool operator==(const SortKey& _other) const {
                return (getOrder() == _other.getOrder() && getKeyName() == _other.getKeyName());
        }
    	inline bool operator!=(const SortKey &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    
    struct BrowserError : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            NO_ERROR = 0,
            NO_CONNECTION = 1,
            BAD_PATH = 2
        };
        
        BrowserError() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::NO_ERROR)) {}
        BrowserError(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::NO_ERROR):
                case static_cast<int32_t>(Literal::NO_CONNECTION):
                case static_cast<int32_t>(Literal::BAD_PATH):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const BrowserError &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const BrowserError &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const BrowserError &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const BrowserError &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const BrowserError &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const BrowserError &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };



static inline const char* getTypeCollectionName() {
    static const char* typeCollectionName = "org.genivi.mediamanager.BrowserTypes";
    return typeCollectionName;
}

inline CommonAPI::Version getTypeCollectionVersion() {
    return CommonAPI::Version(1, 0);
}

}; // struct BrowserTypes

} // namespace mediamanager
} // namespace genivi
} // namespace org
} // namespace v1

namespace CommonAPI {
}


namespace std {
    //Hash for SortOrder
    template<>
    struct hash<::v1::org::genivi::mediamanager::BrowserTypes::SortOrder> {
        inline size_t operator()(const ::v1::org::genivi::mediamanager::BrowserTypes::SortOrder& sortOrder) const {
            return static_cast<int32_t>(sortOrder);
        }
    };
    //Hash for BrowserError
    template<>
    struct hash<::v1::org::genivi::mediamanager::BrowserTypes::BrowserError> {
        inline size_t operator()(const ::v1::org::genivi::mediamanager::BrowserTypes::BrowserError& browserError) const {
            return static_cast<int32_t>(browserError);
        }
    };
}


// Compatibility
namespace v1_0 = v1;

#endif // V1_ORG_GENIVI_MEDIAMANAGER_Browser_Types_HPP_
