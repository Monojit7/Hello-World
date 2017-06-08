/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core .
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V0_ORG_HARMAN_FORD_navi_types_HPP_
#define V0_ORG_HARMAN_FORD_navi_types_HPP_



#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/Deployment.hpp>
#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <CommonAPI/Struct.hpp>
#include <CommonAPI/Types.hpp>
#include <cstdint>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v0 {
namespace org {
namespace harman {
namespace ford {

struct navi_types {
    
    struct GPS_Track_D_Rq_enum : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            En_Unused = 3,
            En_NewGPSTrack = 2,
            En_GPSTrackActive = 1,
            En_Inactive = 0
        };
        
        GPS_Track_D_Rq_enum() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::En_Unused)) {}
        GPS_Track_D_Rq_enum(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::En_Unused):
                case static_cast<int32_t>(Literal::En_NewGPSTrack):
                case static_cast<int32_t>(Literal::En_GPSTrackActive):
                case static_cast<int32_t>(Literal::En_Inactive):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const GPS_Track_D_Rq_enum &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const GPS_Track_D_Rq_enum &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const GPS_Track_D_Rq_enum &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const GPS_Track_D_Rq_enum &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const GPS_Track_D_Rq_enum &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const GPS_Track_D_Rq_enum &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    
    struct APIM_SwPartNo_D_Rq_enum : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            En_Unused = 3,
            En_Request = 2,
            En_NoRequest = 1,
            En_Inactive = 0
        };
        
        APIM_SwPartNo_D_Rq_enum() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::En_Unused)) {}
        APIM_SwPartNo_D_Rq_enum(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::En_Unused):
                case static_cast<int32_t>(Literal::En_Request):
                case static_cast<int32_t>(Literal::En_NoRequest):
                case static_cast<int32_t>(Literal::En_Inactive):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const APIM_SwPartNo_D_Rq_enum &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const APIM_SwPartNo_D_Rq_enum &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const APIM_SwPartNo_D_Rq_enum &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const APIM_SwPartNo_D_Rq_enum &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const APIM_SwPartNo_D_Rq_enum &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const APIM_SwPartNo_D_Rq_enum &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    
    struct TCU_Init_Actvtn_Rq_enum : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            En_InitialActivateRequest = 2,
            En_NoRequest = 1,
            En_Inactive = 0
        };
        
        TCU_Init_Actvtn_Rq_enum() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::En_InitialActivateRequest)) {}
        TCU_Init_Actvtn_Rq_enum(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::En_InitialActivateRequest):
                case static_cast<int32_t>(Literal::En_NoRequest):
                case static_cast<int32_t>(Literal::En_Inactive):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const TCU_Init_Actvtn_Rq_enum &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const TCU_Init_Actvtn_Rq_enum &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const TCU_Init_Actvtn_Rq_enum &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const TCU_Init_Actvtn_Rq_enum &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const TCU_Init_Actvtn_Rq_enum &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const TCU_Init_Actvtn_Rq_enum &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    
    struct TCU_Final_Actvtn_Rq_enum : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            En_FinalActivateRequest = 2,
            En_NoRequest = 1,
            En_Inactive = 0
        };
        
        TCU_Final_Actvtn_Rq_enum() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::En_FinalActivateRequest)) {}
        TCU_Final_Actvtn_Rq_enum(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::En_FinalActivateRequest):
                case static_cast<int32_t>(Literal::En_NoRequest):
                case static_cast<int32_t>(Literal::En_Inactive):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const TCU_Final_Actvtn_Rq_enum &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const TCU_Final_Actvtn_Rq_enum &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const TCU_Final_Actvtn_Rq_enum &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const TCU_Final_Actvtn_Rq_enum &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const TCU_Final_Actvtn_Rq_enum &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const TCU_Final_Actvtn_Rq_enum &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    struct TCU_Request_Signals_2_struct : CommonAPI::Struct<GPS_Track_D_Rq_enum, APIM_SwPartNo_D_Rq_enum, TCU_Init_Actvtn_Rq_enum, TCU_Final_Actvtn_Rq_enum> {
    	
    	TCU_Request_Signals_2_struct() {
    	}
    	TCU_Request_Signals_2_struct(const GPS_Track_D_Rq_enum &_gPS_Track_D_Rq_enum, const APIM_SwPartNo_D_Rq_enum &_aPIM_SwPartNo_D_Rq_enum, const TCU_Init_Actvtn_Rq_enum &_tCU_Init_Actvtn_Rq_enum, const TCU_Final_Actvtn_Rq_enum &_tCU_Final_Actvtn_Rq_enum)
    	{
    		std::get<0>(values_) = _gPS_Track_D_Rq_enum;
    		std::get<1>(values_) = _aPIM_SwPartNo_D_Rq_enum;
    		std::get<2>(values_) = _tCU_Init_Actvtn_Rq_enum;
    		std::get<3>(values_) = _tCU_Final_Actvtn_Rq_enum;
    	}
    	inline const GPS_Track_D_Rq_enum &getGPS_Track_D_Rq_enum() const { return std::get<0>(values_); }
    	inline void setGPS_Track_D_Rq_enum(const GPS_Track_D_Rq_enum &_value) { std::get<0>(values_) = _value; }
    	inline const APIM_SwPartNo_D_Rq_enum &getAPIM_SwPartNo_D_Rq_enum() const { return std::get<1>(values_); }
    	inline void setAPIM_SwPartNo_D_Rq_enum(const APIM_SwPartNo_D_Rq_enum &_value) { std::get<1>(values_) = _value; }
    	inline const TCU_Init_Actvtn_Rq_enum &getTCU_Init_Actvtn_Rq_enum() const { return std::get<2>(values_); }
    	inline void setTCU_Init_Actvtn_Rq_enum(const TCU_Init_Actvtn_Rq_enum &_value) { std::get<2>(values_) = _value; }
    	inline const TCU_Final_Actvtn_Rq_enum &getTCU_Final_Actvtn_Rq_enum() const { return std::get<3>(values_); }
    	inline void setTCU_Final_Actvtn_Rq_enum(const TCU_Final_Actvtn_Rq_enum &_value) { std::get<3>(values_) = _value; }
    	inline bool operator==(const TCU_Request_Signals_2_struct& _other) const {
                return (getGPS_Track_D_Rq_enum() == _other.getGPS_Track_D_Rq_enum() && getAPIM_SwPartNo_D_Rq_enum() == _other.getAPIM_SwPartNo_D_Rq_enum() && getTCU_Init_Actvtn_Rq_enum() == _other.getTCU_Init_Actvtn_Rq_enum() && getTCU_Final_Actvtn_Rq_enum() == _other.getTCU_Final_Actvtn_Rq_enum());
        }
    	inline bool operator!=(const TCU_Request_Signals_2_struct &_other) const {
    		return !((*this) == _other);
    	}
    
    };



static inline const char* getTypeCollectionName() {
    static const char* typeCollectionName = "org.harman.ford.navi_types";
    return typeCollectionName;
}

inline CommonAPI::Version getTypeCollectionVersion() {
    return CommonAPI::Version(0, 1);
}

}; // struct navi_types

} // namespace ford
} // namespace harman
} // namespace org
} // namespace v0

namespace CommonAPI {
}


namespace std {
    //Hash for GPS_Track_D_Rq_enum
    template<>
    struct hash<::v0::org::harman::ford::navi_types::GPS_Track_D_Rq_enum> {
        inline size_t operator()(const ::v0::org::harman::ford::navi_types::GPS_Track_D_Rq_enum& gPS_Track_D_Rq_enum) const {
            return static_cast<int32_t>(gPS_Track_D_Rq_enum);
        }
    };
    //Hash for APIM_SwPartNo_D_Rq_enum
    template<>
    struct hash<::v0::org::harman::ford::navi_types::APIM_SwPartNo_D_Rq_enum> {
        inline size_t operator()(const ::v0::org::harman::ford::navi_types::APIM_SwPartNo_D_Rq_enum& aPIM_SwPartNo_D_Rq_enum) const {
            return static_cast<int32_t>(aPIM_SwPartNo_D_Rq_enum);
        }
    };
    //Hash for TCU_Init_Actvtn_Rq_enum
    template<>
    struct hash<::v0::org::harman::ford::navi_types::TCU_Init_Actvtn_Rq_enum> {
        inline size_t operator()(const ::v0::org::harman::ford::navi_types::TCU_Init_Actvtn_Rq_enum& tCU_Init_Actvtn_Rq_enum) const {
            return static_cast<int32_t>(tCU_Init_Actvtn_Rq_enum);
        }
    };
    //Hash for TCU_Final_Actvtn_Rq_enum
    template<>
    struct hash<::v0::org::harman::ford::navi_types::TCU_Final_Actvtn_Rq_enum> {
        inline size_t operator()(const ::v0::org::harman::ford::navi_types::TCU_Final_Actvtn_Rq_enum& tCU_Final_Actvtn_Rq_enum) const {
            return static_cast<int32_t>(tCU_Final_Actvtn_Rq_enum);
        }
    };
}


// Compatibility
namespace v0_1 = v0;

#endif // V0_ORG_HARMAN_FORD_navi_types_HPP_