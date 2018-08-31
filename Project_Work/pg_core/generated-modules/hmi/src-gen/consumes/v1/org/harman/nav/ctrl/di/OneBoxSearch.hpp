/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/
#ifndef V1_ORG_HARMAN_NAV_CTRL_DI_ONE_BOX_SEARCH_HPP_
#define V1_ORG_HARMAN_NAV_CTRL_DI_ONE_BOX_SEARCH_HPP_




#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <CommonAPI/Types.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace org {
namespace harman {
namespace nav {
namespace ctrl {
namespace di {

class OneBoxSearch {
public:
    virtual ~OneBoxSearch() { }

    static inline const char* getInterface();
    static inline CommonAPI::Version getInterfaceVersion();
    /**
     * description: setSearchParameters = SetSearchParameters = configure if we want to search for
     *   addresses and/or pois.
    			configure if we want to search in the vicinity of
     *   the specified center.
            	configure if we want to search using
     *   fuzziness.
            	Default behaviour if no option is set we search everywhere
     */
    
    struct setSearchParametersError : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            HandleNotAvailable = 0
        };
        
        setSearchParametersError() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::HandleNotAvailable)) {}
        setSearchParametersError(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::HandleNotAvailable):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const setSearchParametersError &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const setSearchParametersError &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const setSearchParametersError &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const setSearchParametersError &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const setSearchParametersError &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const setSearchParametersError &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    /**
     * description: startOneBoxSearch = This method sends the search input for the search
     *   handle.
    						The search will start with the location.
     */
    
    struct startOneBoxSearchError : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            HandleNotAvailable = 0
        };
        
        startOneBoxSearchError() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::HandleNotAvailable)) {}
        startOneBoxSearchError(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::HandleNotAvailable):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const startOneBoxSearchError &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const startOneBoxSearchError &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const startOneBoxSearchError &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const startOneBoxSearchError &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const startOneBoxSearchError &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const startOneBoxSearchError &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    /**
     * description: setSearchCountry = This method sets the target country for the current search,
     *   If no country is set the current center position is used to determine the
     *   country
     */
    
    struct setSearchCountryError : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            HandleNotAvailable = 0
        };
        
        setSearchCountryError() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::HandleNotAvailable)) {}
        setSearchCountryError(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::HandleNotAvailable):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const setSearchCountryError &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const setSearchCountryError &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const setSearchCountryError &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const setSearchCountryError &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const setSearchCountryError &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const setSearchCountryError &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    /**
     * description: createOneBoxSearch = This method creates a new OneBoxSearch and retrieves a
     *   handle
     */
    
    struct createOneBoxSearchError : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            NoMoreOneBoxHandles = 0
        };
        
        createOneBoxSearchError() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::NoMoreOneBoxHandles)) {}
        createOneBoxSearchError(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::NoMoreOneBoxHandles):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const createOneBoxSearchError &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const createOneBoxSearchError &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const createOneBoxSearchError &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const createOneBoxSearchError &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const createOneBoxSearchError &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const createOneBoxSearchError &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    /**
     * description: setSearchLanguage = for the phonetic search algorithms the language and script
     *   are important
     */
    
    struct setSearchLanguageError : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            HandleNotAvailable = 0
        };
        
        setSearchLanguageError() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::HandleNotAvailable)) {}
        setSearchLanguageError(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::HandleNotAvailable):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const setSearchLanguageError &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const setSearchLanguageError &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const setSearchLanguageError &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const setSearchLanguageError &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const setSearchLanguageError &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const setSearchLanguageError &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    /**
     * description: cancelFtsSearch = This method cancels the search for the current session
     */
    
    struct cancelOneBoxSearchError : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            HandleNotAvailable = 0
        };
        
        cancelOneBoxSearchError() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::HandleNotAvailable)) {}
        cancelOneBoxSearchError(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::HandleNotAvailable):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const cancelOneBoxSearchError &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const cancelOneBoxSearchError &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const cancelOneBoxSearchError &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const cancelOneBoxSearchError &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const cancelOneBoxSearchError &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const cancelOneBoxSearchError &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
};

const char* OneBoxSearch::getInterface() {
    return ("org.harman.nav.ctrl.di.OneBoxSearch");
}

CommonAPI::Version OneBoxSearch::getInterfaceVersion() {
    return CommonAPI::Version(1, 0);
}


} // namespace di
} // namespace ctrl
} // namespace nav
} // namespace harman
} // namespace org
} // namespace v1

namespace CommonAPI {
}


// Compatibility
namespace v1_0 = v1;

#endif // V1_ORG_HARMAN_NAV_CTRL_DI_ONE_BOX_SEARCH_HPP_
