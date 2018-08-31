/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/
#ifndef ORG_HARMAN_NAV_CTRL_DI_One_Box_Search_Types_HPP_
#define ORG_HARMAN_NAV_CTRL_DI_One_Box_Search_Types_HPP_


#include <org/harman/nav/ctrl/CommonTypes.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <CommonAPI/Types.hpp>
#include <cstdint>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace org {
namespace harman {
namespace nav {
namespace ctrl {
namespace di {

struct OneBoxSearchTypes {
    
    struct FtsOptions : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            INVALID = 0,
            ONEBOX_SEARCH_BITMASK_ADDRESSES = 1,
            ONEBOX_SEARCH_BITMASK_POIS = 2,
            ONEBOX_SEARCH_BITMASK_VICINITY = 3,
            ONEBOX_SEARCH_BITMASK_FUZZINESS = 4,
            ONEBOX_SEARCH_BITMASK_RECENT = 5,
            ONEBOX_SEARCH_BITMASK_FAVORITES = 6,
            ONEBOX_SEARCH_BITMASK_CONTACTS = 7
        };
        
        FtsOptions() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::INVALID)) {}
        FtsOptions(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
        FtsOptions &operator=(const ::org::harman::nav::ctrl::CommonTypes::BasicEnum::Literal &_value) {
            value_ = static_cast<int32_t>(_value);
            return (*this);
        }
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::INVALID):
                case static_cast<int32_t>(Literal::ONEBOX_SEARCH_BITMASK_ADDRESSES):
                case static_cast<int32_t>(Literal::ONEBOX_SEARCH_BITMASK_POIS):
                case static_cast<int32_t>(Literal::ONEBOX_SEARCH_BITMASK_VICINITY):
                case static_cast<int32_t>(Literal::ONEBOX_SEARCH_BITMASK_FUZZINESS):
                case static_cast<int32_t>(Literal::ONEBOX_SEARCH_BITMASK_RECENT):
                case static_cast<int32_t>(Literal::ONEBOX_SEARCH_BITMASK_FAVORITES):
                case static_cast<int32_t>(Literal::ONEBOX_SEARCH_BITMASK_CONTACTS):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const FtsOptions &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const FtsOptions &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const FtsOptions &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const FtsOptions &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const FtsOptions &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const FtsOptions &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };



static inline const char* getTypeCollectionName() {
    static const char* typeCollectionName = "org.harman.nav.ctrl.di.OneBoxSearchTypes";
    return typeCollectionName;
}


}; // struct OneBoxSearchTypes

} // namespace di
} // namespace ctrl
} // namespace nav
} // namespace harman
} // namespace org

namespace CommonAPI {
}


namespace std {
    //Hash for FtsOptions
    template<>
    struct hash<::org::harman::nav::ctrl::di::OneBoxSearchTypes::FtsOptions> {
        inline size_t operator()(const ::org::harman::nav::ctrl::di::OneBoxSearchTypes::FtsOptions& ftsOptions) const {
            return static_cast<int32_t>(ftsOptions);
        }
    };
}



#endif // ORG_HARMAN_NAV_CTRL_DI_One_Box_Search_Types_HPP_
