/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/
#ifndef V3_ORG_HARMAN_NAV_CTRL_MEMORY_Location_Memory_Types_HPP_
#define V3_ORG_HARMAN_NAV_CTRL_MEMORY_Location_Memory_Types_HPP_


#include <org/harman/nav/ctrl/common/list/ListTypes.hpp>
#include <v1/org/harman/nav/ctrl/di/POIServiceTypes.hpp>
#include <v2/org/harman/nav/ctrl/di/LocationInputTypes.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/ByteBuffer.hpp>
#include <CommonAPI/Deployment.hpp>
#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <CommonAPI/Struct.hpp>
#include <CommonAPI/Types.hpp>
#include <cstdint>
#include <string>
#include <unordered_map>
#include <vector>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v3 {
namespace org {
namespace harman {
namespace nav {
namespace ctrl {
namespace memory {

struct LocationMemoryTypes {
    
    struct LocationMemoryError : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            INVALID = 0,
            INVALID_LIST_ID = 1,
            INVALID_VIEW = 2,
            INVALID_PARAMETER = 3,
            SIZE_LIMIT_EXCEEDED = 4,
            OUT_OF_RESSOURCES = 5,
            OUT_OF_RANGE_POSITION = 6,
            POLICY_DENIED = 7,
            INVALID_PATH = 8,
            PATH_NOT_WRITABLE = 9,
            EMPTY_LIST = 10
        };
        
        LocationMemoryError() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::INVALID)) {}
        LocationMemoryError(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
        LocationMemoryError &operator=(const ::org::harman::nav::ctrl::common::list::ListTypes::ListError::Literal &_value) {
            value_ = static_cast<int32_t>(_value);
            return (*this);
        }
        LocationMemoryError &operator=(const ::org::harman::nav::ctrl::CommonTypes::BasicEnum::Literal &_value) {
            value_ = static_cast<int32_t>(_value);
            return (*this);
        }
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::INVALID):
                case static_cast<int32_t>(Literal::INVALID_LIST_ID):
                case static_cast<int32_t>(Literal::INVALID_VIEW):
                case static_cast<int32_t>(Literal::INVALID_PARAMETER):
                case static_cast<int32_t>(Literal::SIZE_LIMIT_EXCEEDED):
                case static_cast<int32_t>(Literal::OUT_OF_RESSOURCES):
                case static_cast<int32_t>(Literal::OUT_OF_RANGE_POSITION):
                case static_cast<int32_t>(Literal::POLICY_DENIED):
                case static_cast<int32_t>(Literal::INVALID_PATH):
                case static_cast<int32_t>(Literal::PATH_NOT_WRITABLE):
                case static_cast<int32_t>(Literal::EMPTY_LIST):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const LocationMemoryError &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const LocationMemoryError &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const LocationMemoryError &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const LocationMemoryError &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const LocationMemoryError &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const LocationMemoryError &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    
    struct EProvidedListTypes : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            E_LIST_RECENT = 0,
            E_LIST_FAVOURITES = 1,
            E_LIST_FIXED_FAVOURITES = 2,
            E_LIST_WEATHER = 3
        };
        
        EProvidedListTypes() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::E_LIST_RECENT)) {}
        EProvidedListTypes(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::E_LIST_RECENT):
                case static_cast<int32_t>(Literal::E_LIST_FAVOURITES):
                case static_cast<int32_t>(Literal::E_LIST_FIXED_FAVOURITES):
                case static_cast<int32_t>(Literal::E_LIST_WEATHER):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const EProvidedListTypes &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const EProvidedListTypes &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const EProvidedListTypes &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const EProvidedListTypes &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const EProvidedListTypes &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const EProvidedListTypes &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    /**
     * description: supported Location Memory Listsettings
     */
    struct ListSetting : CommonAPI::Struct<::org::harman::nav::ctrl::common::list::ListTypes::ListId, std::vector<::org::harman::nav::ctrl::common::list::ListTypes::SortOption>, ::org::harman::nav::ctrl::common::list::ListTypes::ModificationPolicy, uint32_t> {
    	
    	ListSetting() {
    	}
    	ListSetting(const ::org::harman::nav::ctrl::common::list::ListTypes::ListId &_listId, const std::vector<::org::harman::nav::ctrl::common::list::ListTypes::SortOption> &_availableSortings, const ::org::harman::nav::ctrl::common::list::ListTypes::ModificationPolicy &_policy, const uint32_t &_maxListSize)
    	{
    		std::get<0>(values_) = _listId;
    		std::get<1>(values_) = _availableSortings;
    		std::get<2>(values_) = _policy;
    		std::get<3>(values_) = _maxListSize;
    	}
    	inline const ::org::harman::nav::ctrl::common::list::ListTypes::ListId &getListId() const { return std::get<0>(values_); }
    	inline void setListId(const ::org::harman::nav::ctrl::common::list::ListTypes::ListId &_value) { std::get<0>(values_) = _value; }
    	inline const std::vector<::org::harman::nav::ctrl::common::list::ListTypes::SortOption> &getAvailableSortings() const { return std::get<1>(values_); }
    	inline void setAvailableSortings(const std::vector<::org::harman::nav::ctrl::common::list::ListTypes::SortOption> &_value) { std::get<1>(values_) = _value; }
    	inline const ::org::harman::nav::ctrl::common::list::ListTypes::ModificationPolicy &getPolicy() const { return std::get<2>(values_); }
    	inline void setPolicy(const ::org::harman::nav::ctrl::common::list::ListTypes::ModificationPolicy &_value) { std::get<2>(values_) = _value; }
    	inline const uint32_t &getMaxListSize() const { return std::get<3>(values_); }
    	inline void setMaxListSize(const uint32_t &_value) { std::get<3>(values_) = _value; }
    	inline bool operator==(const ListSetting& _other) const {
                return (getListId() == _other.getListId() && getAvailableSortings() == _other.getAvailableSortings() && getPolicy() == _other.getPolicy() && getMaxListSize() == _other.getMaxListSize());
        }
    	inline bool operator!=(const ListSetting &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    /**
     * description: Configuration settings
     */
    typedef std::unordered_map<::v3::org::harman::nav::ctrl::memory::LocationMemoryTypes::EProvidedListTypes, ::v3::org::harman::nav::ctrl::memory::LocationMemoryTypes::ListSetting, CommonAPI::EnumHasher<::v3::org::harman::nav::ctrl::memory::LocationMemoryTypes::EProvidedListTypes>> Configurations;
    
    struct EItemType : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            E_LM_TYPE_POI = 0,
            E_LM_TYPE_ADDRESS = 1,
            E_LM_TYPE_CONTACT = 2,
            E_LM_TYPE_TOUR = 3,
            E_LM_TYPE_EMPTY = 4
        };
        
        EItemType() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::E_LM_TYPE_POI)) {}
        EItemType(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::E_LM_TYPE_POI):
                case static_cast<int32_t>(Literal::E_LM_TYPE_ADDRESS):
                case static_cast<int32_t>(Literal::E_LM_TYPE_CONTACT):
                case static_cast<int32_t>(Literal::E_LM_TYPE_TOUR):
                case static_cast<int32_t>(Literal::E_LM_TYPE_EMPTY):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const EItemType &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const EItemType &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const EItemType &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const EItemType &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const EItemType &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const EItemType &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    
    struct EExternalSources : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            E_EXTERNAL_MEDIA = 0
        };
        
        EExternalSources() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::E_EXTERNAL_MEDIA)) {}
        EExternalSources(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::E_EXTERNAL_MEDIA):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const EExternalSources &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const EExternalSources &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const EExternalSources &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const EExternalSources &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const EExternalSources &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const EExternalSources &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    /**
     * description: Absolute unique (list independent) item ID, blackbox for the client
     */
    typedef CommonAPI::ByteBuffer UniqueItemId;
    /**
     * description: List of item ids
     */
    typedef std::vector<LocationMemoryTypes::UniqueItemId> UniqueItemIdList;
    /**
     * description: Unick
     */
    typedef uint16_t TItemId;
    typedef std::string TItemName;
    /**
     * description: shows on which lists an item is present
     */
    typedef std::vector<LocationMemoryTypes::EProvidedListTypes> TItemMembership;
    /**
     * description: short item data
     */
    struct Item : CommonAPI::Struct<TItemId, TItemName, EItemType, TItemMembership> {
    	
    	Item() {
    	}
    	Item(const TItemId &_id, const TItemName &_name, const EItemType &_type, const TItemMembership &_lists)
    	{
    		std::get<0>(values_) = _id;
    		std::get<1>(values_) = _name;
    		std::get<2>(values_) = _type;
    		std::get<3>(values_) = _lists;
    	}
    	inline const TItemId &getId() const { return std::get<0>(values_); }
    	inline void setId(const TItemId &_value) { std::get<0>(values_) = _value; }
    	inline const TItemName &getName() const { return std::get<1>(values_); }
    	inline void setName(const TItemName &_value) { std::get<1>(values_) = _value; }
    	inline const EItemType &getType() const { return std::get<2>(values_); }
    	inline void setType(const EItemType &_value) { std::get<2>(values_) = _value; }
    	inline const TItemMembership &getLists() const { return std::get<3>(values_); }
    	inline void setLists(const TItemMembership &_value) { std::get<3>(values_) = _value; }
    	inline bool operator==(const Item& _other) const {
                return (getId() == _other.getId() && getName() == _other.getName() && getType() == _other.getType() && getLists() == _other.getLists());
        }
    	inline bool operator!=(const Item &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    /**
     * description: Description of a single location enriched with a type.
     */
    struct Location : CommonAPI::Struct<EItemType, ::v2::org::harman::nav::ctrl::di::LocationInputTypes::Address, ::v1::org::harman::nav::ctrl::di::POIServiceTypes::SearchResultDetails> {
    	
    	Location() {
    	}
    	Location(const EItemType &_type, const ::v2::org::harman::nav::ctrl::di::LocationInputTypes::Address &_address, const ::v1::org::harman::nav::ctrl::di::POIServiceTypes::SearchResultDetails &_poiDetails)
    	{
    		std::get<0>(values_) = _type;
    		std::get<1>(values_) = _address;
    		std::get<2>(values_) = _poiDetails;
    	}
    	/**
    	 * description: Type as tour can consist of Poi,Contact,Address
    	 */
    	inline const EItemType &getType() const { return std::get<0>(values_); }
    	inline void setType(const EItemType &_value) { std::get<0>(values_) = _value; }
    	/**
    	 * description: Location from LocationInputTypes
    	 */
    	inline const ::v2::org::harman::nav::ctrl::di::LocationInputTypes::Address &getAddress() const { return std::get<1>(values_); }
    	inline void setAddress(const ::v2::org::harman::nav::ctrl::di::LocationInputTypes::Address &_value) { std::get<1>(values_) = _value; }
    	/**
    	 * description: details for POIs
    	 */
    	inline const ::v1::org::harman::nav::ctrl::di::POIServiceTypes::SearchResultDetails &getPoiDetails() const { return std::get<2>(values_); }
    	inline void setPoiDetails(const ::v1::org::harman::nav::ctrl::di::POIServiceTypes::SearchResultDetails &_value) { std::get<2>(values_) = _value; }
    	inline bool operator==(const Location& _other) const {
                return (getType() == _other.getType() && getAddress() == _other.getAddress() && getPoiDetails() == _other.getPoiDetails());
        }
    	inline bool operator!=(const Location &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    /**
     * description: List of destinations. 
            	A regular address will be a single entry, a
     *   contact can consist of
            	home and office address, a poi of postal and
     *   entry address, a tour
            	of several (concrete) destinations.
     */
    typedef std::vector<LocationMemoryTypes::Location> LocationList;
    /**
     * description: Definition of a dayslot. User must ensure that start is less than end
           
     *   				(Otherwise it would be undefined if previous/next day is meant)
     */
    struct Dayslot : CommonAPI::Struct<bool, uint16_t, uint16_t> {
    	
    	Dayslot() {
    		std::get<0>(values_) = false;
    	}
    	Dayslot(const bool &_active, const uint16_t &_start_min, const uint16_t &_end_min)
    	{
    		std::get<0>(values_) = _active;
    		std::get<1>(values_) = _start_min;
    		std::get<2>(values_) = _end_min;
    	}
    	/**
    	 * description: if slot is active
    	 */
    	inline const bool &getActive() const { return std::get<0>(values_); }
    	inline void setActive(const bool _value) { std::get<0>(values_) = _value; }
    	/**
    	 * description: start time in minutes since midnight, hour = start_min / 60 , min = start_min %
    	 *   60
    	 */
    	inline const uint16_t &getStart_min() const { return std::get<1>(values_); }
    	inline void setStart_min(const uint16_t &_value) { std::get<1>(values_) = _value; }
    	/**
    	 * description: end time in minutes since midnight
    	 */
    	inline const uint16_t &getEnd_min() const { return std::get<2>(values_); }
    	inline void setEnd_min(const uint16_t &_value) { std::get<2>(values_) = _value; }
    	inline bool operator==(const Dayslot& _other) const {
                return (getActive() == _other.getActive() && getStart_min() == _other.getStart_min() && getEnd_min() == _other.getEnd_min());
        }
    	inline bool operator!=(const Dayslot &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    /**
     * description: Array for the timeslot for each day, 7 slots starting with monday.
     */
    typedef std::vector<LocationMemoryTypes::Dayslot> DayslotList;
    /**
     * description: Definition of a timeslot
     */
    struct Timeslot : CommonAPI::Struct<bool, DayslotList> {
    	
    	Timeslot() {
    		std::get<0>(values_) = false;
    	}
    	Timeslot(const bool &_active, const DayslotList &_dayslots)
    	{
    		std::get<0>(values_) = _active;
    		std::get<1>(values_) = _dayslots;
    	}
    	/**
    	 * description: if timeslot is currently active
    	 */
    	inline const bool &getActive() const { return std::get<0>(values_); }
    	inline void setActive(const bool _value) { std::get<0>(values_) = _value; }
    	/**
    	 * description: slots for each day, 0 = Monday
    	 */
    	inline const DayslotList &getDayslots() const { return std::get<1>(values_); }
    	inline void setDayslots(const DayslotList &_value) { std::get<1>(values_) = _value; }
    	inline bool operator==(const Timeslot& _other) const {
                return (getActive() == _other.getActive() && getDayslots() == _other.getDayslots());
        }
    	inline bool operator!=(const Timeslot &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    /**
     * description: All data for a location
     */
    struct LocationItem : CommonAPI::Struct<EItemType, LocationList, Timeslot> {
    	
    	LocationItem() {
    	}
    	LocationItem(const EItemType &_type, const LocationList &_locations, const Timeslot &_time)
    	{
    		std::get<0>(values_) = _type;
    		std::get<1>(values_) = _locations;
    		std::get<2>(values_) = _time;
    	}
    	/**
    	 * description: type of location
    	 */
    	inline const EItemType &getType() const { return std::get<0>(values_); }
    	inline void setType(const EItemType &_value) { std::get<0>(values_) = _value; }
    	/**
    	 * description: list of locations
    	 */
    	inline const LocationList &getLocations() const { return std::get<1>(values_); }
    	inline void setLocations(const LocationList &_value) { std::get<1>(values_) = _value; }
    	/**
    	 * description: used timeslot, used only for fixed favorite list
    	 */
    	inline const Timeslot &getTime() const { return std::get<2>(values_); }
    	inline void setTime(const Timeslot &_value) { std::get<2>(values_) = _value; }
    	inline bool operator==(const LocationItem& _other) const {
                return (getType() == _other.getType() && getLocations() == _other.getLocations() && getTime() == _other.getTime());
        }
    	inline bool operator!=(const LocationItem &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    /**
     * description: List of LocationItem.
     */
    typedef std::vector<LocationMemoryTypes::LocationItem> LocationItemList;
    /**
     * description: List of Item.
     */
    typedef std::vector<LocationMemoryTypes::Item> ItemList;
    /**
     * description: List of Item.
     */
    typedef std::vector<::org::harman::nav::ctrl::common::list::ListTypes::ViewKey> ViewKeyList;
    /**
     * description: A tuple containing the user define name in the list. 
    		Example: location = POI
     *   "Pasing Arcaden" with address: Josef-Felder-Straße 53, 81241 München,
     *   Deutschland
    				 name = a user given name like "Mein Lieblingsplatz"
     */
    struct NameLocationItem : CommonAPI::Struct<TItemName, LocationItem> {
    	
    	NameLocationItem() {
    	}
    	NameLocationItem(const TItemName &_name, const LocationItem &_location)
    	{
    		std::get<0>(values_) = _name;
    		std::get<1>(values_) = _location;
    	}
    	/**
    	 * description: User given name for a location in the list
    	 */
    	inline const TItemName &getName() const { return std::get<0>(values_); }
    	inline void setName(const TItemName &_value) { std::get<0>(values_) = _value; }
    	/**
    	 * description: the location saved in the list
    	 */
    	inline const LocationItem &getLocation() const { return std::get<1>(values_); }
    	inline void setLocation(const LocationItem &_value) { std::get<1>(values_) = _value; }
    	inline bool operator==(const NameLocationItem& _other) const {
                return (getName() == _other.getName() && getLocation() == _other.getLocation());
        }
    	inline bool operator!=(const NameLocationItem &_other) const {
    		return !((*this) == _other);
    	}
    
    };



static inline const char* getTypeCollectionName() {
    static const char* typeCollectionName = "org.harman.nav.ctrl.memory.LocationMemoryTypes";
    return typeCollectionName;
}

inline CommonAPI::Version getTypeCollectionVersion() {
    return CommonAPI::Version(3, 4);
}

}; // struct LocationMemoryTypes

} // namespace memory
} // namespace ctrl
} // namespace nav
} // namespace harman
} // namespace org
} // namespace v3

namespace CommonAPI {
}


namespace std {
    //Hash for LocationMemoryError
    template<>
    struct hash<::v3::org::harman::nav::ctrl::memory::LocationMemoryTypes::LocationMemoryError> {
        inline size_t operator()(const ::v3::org::harman::nav::ctrl::memory::LocationMemoryTypes::LocationMemoryError& locationMemoryError) const {
            return static_cast<int32_t>(locationMemoryError);
        }
    };
    //Hash for EProvidedListTypes
    template<>
    struct hash<::v3::org::harman::nav::ctrl::memory::LocationMemoryTypes::EProvidedListTypes> {
        inline size_t operator()(const ::v3::org::harman::nav::ctrl::memory::LocationMemoryTypes::EProvidedListTypes& eProvidedListTypes) const {
            return static_cast<int32_t>(eProvidedListTypes);
        }
    };
    //Hash for EItemType
    template<>
    struct hash<::v3::org::harman::nav::ctrl::memory::LocationMemoryTypes::EItemType> {
        inline size_t operator()(const ::v3::org::harman::nav::ctrl::memory::LocationMemoryTypes::EItemType& eItemType) const {
            return static_cast<int32_t>(eItemType);
        }
    };
    //Hash for EExternalSources
    template<>
    struct hash<::v3::org::harman::nav::ctrl::memory::LocationMemoryTypes::EExternalSources> {
        inline size_t operator()(const ::v3::org::harman::nav::ctrl::memory::LocationMemoryTypes::EExternalSources& eExternalSources) const {
            return static_cast<int32_t>(eExternalSources);
        }
    };
}


// Compatibility
namespace v3_4 = v3;

#endif // V3_ORG_HARMAN_NAV_CTRL_MEMORY_Location_Memory_Types_HPP_