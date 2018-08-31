/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/
/**
 * author: MGEG_Tuner
 */
#ifndef V2_IVIRADIO_ADDITIONALSERVICE_Additional_Service_Types_Options_HPP_
#define V2_IVIRADIO_ADDITIONALSERVICE_Additional_Service_Types_Options_HPP_


#include <v2/IVIRadio/AdditionalService/AdditionalServiceTypes.hpp>
#include <v2/IVIRadio/Types/Types.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/Deployment.hpp>
#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <CommonAPI/Struct.hpp>
#include <CommonAPI/Types.hpp>
#include <CommonAPI/Variant.hpp>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v2 {
namespace IVIRadio {
namespace AdditionalService {

struct AdditionalServiceTypesOptions {
    /**
     * description: Structure for options which are selectable for all data services
     */
    struct UnifiedServiceOption : CommonAPI::Struct<::v2::IVIRadio::Types::Types::UpdateType, uint32_t> {
    	
    	UnifiedServiceOption() {
    	}
    	UnifiedServiceOption(const ::v2::IVIRadio::Types::Types::UpdateType &_requestType, const uint32_t &_objectID)
    	{
    		std::get<0>(values_) = _requestType;
    		std::get<1>(values_) = _objectID;
    	}
    	/**
    	 * description: Request type
    	 */
    	inline const ::v2::IVIRadio::Types::Types::UpdateType &getRequestType() const { return std::get<0>(values_); }
    	inline void setRequestType(const ::v2::IVIRadio::Types::Types::UpdateType &_value) { std::get<0>(values_) = _value; }
    	/**
    	 * description: Object ID.
    	 */
    	inline const uint32_t &getObjectID() const { return std::get<1>(values_); }
    	inline void setObjectID(const uint32_t &_value) { std::get<1>(values_) = _value; }
    	inline bool operator==(const UnifiedServiceOption& _other) const {
                return (getRequestType() == _other.getRequestType() && getObjectID() == _other.getObjectID());
        }
    	inline bool operator!=(const UnifiedServiceOption &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    typedef std::vector<AdditionalServiceTypesOptions::UnifiedServiceOption> UnifiedServiceOptions;
    /**
     * description: image options
     */
    struct Image_Options : CommonAPI::Struct<AdditionalServiceTypes::ImageType, AdditionalServiceTypes::ImageService, uint32_t, uint32_t> {
    	
    	Image_Options() {
    	}
    	Image_Options(const AdditionalServiceTypes::ImageType &_imageType, const AdditionalServiceTypes::ImageService &_imageService, const uint32_t &_width, const uint32_t &_heigth)
    	{
    		std::get<0>(values_) = _imageType;
    		std::get<1>(values_) = _imageService;
    		std::get<2>(values_) = _width;
    		std::get<3>(values_) = _heigth;
    	}
    	/**
    	 * description: describes the image type of the transmitted image
    	 */
    	inline const AdditionalServiceTypes::ImageType &getImageType() const { return std::get<0>(values_); }
    	inline void setImageType(const AdditionalServiceTypes::ImageType &_value) { std::get<0>(values_) = _value; }
    	/**
    	 * description: describes the data service of the transmitted servcie
    	 */
    	inline const AdditionalServiceTypes::ImageService &getImageService() const { return std::get<1>(values_); }
    	inline void setImageService(const AdditionalServiceTypes::ImageService &_value) { std::get<1>(values_) = _value; }
    	/**
    	 * description: describes the width of the requested image
    	 */
    	inline const uint32_t &getWidth() const { return std::get<2>(values_); }
    	inline void setWidth(const uint32_t &_value) { std::get<2>(values_) = _value; }
    	/**
    	 * description: type describes the height
    	 */
    	inline const uint32_t &getHeigth() const { return std::get<3>(values_); }
    	inline void setHeigth(const uint32_t &_value) { std::get<3>(values_) = _value; }
    	inline bool operator==(const Image_Options& _other) const {
                return (getImageType() == _other.getImageType() && getImageService() == _other.getImageService() && getWidth() == _other.getWidth() && getHeigth() == _other.getHeigth());
        }
    	inline bool operator!=(const Image_Options &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    /**
     * description: Default options
     */
    struct No_Options : CommonAPI::Struct<bool> {
    	
    	No_Options() {
    		std::get<0>(values_) = false;
    	}
    	No_Options(const bool &_dummy)
    	{
    		std::get<0>(values_) = _dummy;
    	}
    	inline const bool &getDummy() const { return std::get<0>(values_); }
    	inline void setDummy(const bool _value) { std::get<0>(values_) = _value; }
    	inline bool operator==(const No_Options& _other) const {
                return (getDummy() == _other.getDummy());
        }
    	inline bool operator!=(const No_Options &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    /**
     * description: Journaline options
     */
    struct Journaline_Options : CommonAPI::Struct<bool> {
    	
    	Journaline_Options() {
    		std::get<0>(values_) = false;
    	}
    	Journaline_Options(const bool &_Entry_Object)
    	{
    		std::get<0>(values_) = _Entry_Object;
    	}
    	/**
    	 * description: Entry object is requested
    	 */
    	inline const bool &getEntry_Object() const { return std::get<0>(values_); }
    	inline void setEntry_Object(const bool _value) { std::get<0>(values_) = _value; }
    	inline bool operator==(const Journaline_Options& _other) const {
                return (getEntry_Object() == _other.getEntry_Object());
        }
    	inline bool operator!=(const Journaline_Options &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    /**
     * description: Subtitle options
     */
    struct Subtitle_Options : CommonAPI::Struct<AdditionalServiceTypes::Languages> {
    	
    	Subtitle_Options() {
    	}
    	Subtitle_Options(const AdditionalServiceTypes::Languages &_Languages)
    	{
    		std::get<0>(values_) = _Languages;
    	}
    	/**
    	 * description: Possible/requested languages
    	 */
    	inline const AdditionalServiceTypes::Languages &getLanguages() const { return std::get<0>(values_); }
    	inline void setLanguages(const AdditionalServiceTypes::Languages &_value) { std::get<0>(values_) = _value; }
    	inline bool operator==(const Subtitle_Options& _other) const {
                return (getLanguages() == _other.getLanguages());
        }
    	inline bool operator!=(const Subtitle_Options &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    /**
     * description: Teletext options
     */
    struct Teletext_Options : CommonAPI::Struct<bool, uint32_t> {
    	
    	Teletext_Options() {
    		std::get<0>(values_) = false;
    	}
    	Teletext_Options(const bool &_Entry_Page, const uint32_t &_Sub_Page)
    	{
    		std::get<0>(values_) = _Entry_Page;
    		std::get<1>(values_) = _Sub_Page;
    	}
    	/**
    	 * description: Entry object is requested
    	 */
    	inline const bool &getEntry_Page() const { return std::get<0>(values_); }
    	inline void setEntry_Page(const bool _value) { std::get<0>(values_) = _value; }
    	/**
    	 * description: Sub page with number x is requested
    	 */
    	inline const uint32_t &getSub_Page() const { return std::get<1>(values_); }
    	inline void setSub_Page(const uint32_t &_value) { std::get<1>(values_) = _value; }
    	inline bool operator==(const Teletext_Options& _other) const {
                return (getEntry_Page() == _other.getEntry_Page() && getSub_Page() == _other.getSub_Page());
        }
    	inline bool operator!=(const Teletext_Options &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    /**
     * description: EWS options
     */
    struct EWS_Options : CommonAPI::Struct<AdditionalServiceTypes::EWSType, AdditionalServiceTypes::EWSAffectedArea> {
    	
    	EWS_Options() {
    	}
    	EWS_Options(const AdditionalServiceTypes::EWSType &_Type, const AdditionalServiceTypes::EWSAffectedArea &_Affected_Area)
    	{
    		std::get<0>(values_) = _Type;
    		std::get<1>(values_) = _Affected_Area;
    	}
    	/**
    	 * description: Type of the emergency warning.
    	 */
    	inline const AdditionalServiceTypes::EWSType &getType() const { return std::get<0>(values_); }
    	inline void setType(const AdditionalServiceTypes::EWSType &_value) { std::get<0>(values_) = _value; }
    	/**
    	 * description: Affected area of the emergency warning.
    	 */
    	inline const AdditionalServiceTypes::EWSAffectedArea &getAffected_Area() const { return std::get<1>(values_); }
    	inline void setAffected_Area(const AdditionalServiceTypes::EWSAffectedArea &_value) { std::get<1>(values_) = _value; }
    	inline bool operator==(const EWS_Options& _other) const {
                return (getType() == _other.getType() && getAffected_Area() == _other.getAffected_Area());
        }
    	inline bool operator!=(const EWS_Options &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    /**
     * description: EPG options
     */
    struct EPG_Options : CommonAPI::Struct<::v2::IVIRadio::Types::Types::DateTime, ::v2::IVIRadio::Types::Types::DateTime, std::string, uint32_t> {
    	
    	EPG_Options() {
    	}
    	EPG_Options(const ::v2::IVIRadio::Types::Types::DateTime &_Start_Date_Time, const ::v2::IVIRadio::Types::Types::DateTime &_End_Date_Time, const std::string &_Genre, const uint32_t &_Count_Events)
    	{
    		std::get<0>(values_) = _Start_Date_Time;
    		std::get<1>(values_) = _End_Date_Time;
    		std::get<2>(values_) = _Genre;
    		std::get<3>(values_) = _Count_Events;
    	}
    	/**
    	 * description: Start time to filter the epg data packet that is requested
    	 */
    	inline const ::v2::IVIRadio::Types::Types::DateTime &getStart_Date_Time() const { return std::get<0>(values_); }
    	inline void setStart_Date_Time(const ::v2::IVIRadio::Types::Types::DateTime &_value) { std::get<0>(values_) = _value; }
    	/**
    	 * description: End time to filter the returned epg data
    	 */
    	inline const ::v2::IVIRadio::Types::Types::DateTime &getEnd_Date_Time() const { return std::get<1>(values_); }
    	inline void setEnd_Date_Time(const ::v2::IVIRadio::Types::Types::DateTime &_value) { std::get<1>(values_) = _value; }
    	/**
    	 * description: Genre to filter the returned epg data
    	 */
    	inline const std::string &getGenre() const { return std::get<2>(values_); }
    	inline void setGenre(const std::string &_value) { std::get<2>(values_) = _value; }
    	/**
    	 * description: Count of events which are requested from a start time
    	 */
    	inline const uint32_t &getCount_Events() const { return std::get<3>(values_); }
    	inline void setCount_Events(const uint32_t &_value) { std::get<3>(values_) = _value; }
    	inline bool operator==(const EPG_Options& _other) const {
                return (getStart_Date_Time() == _other.getStart_Date_Time() && getEnd_Date_Time() == _other.getEnd_Date_Time() && getGenre() == _other.getGenre() && getCount_Events() == _other.getCount_Events());
        }
    	inline bool operator!=(const EPG_Options &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    /**
     * description: Options for announcements
     */
    struct Announcement_Options : CommonAPI::Struct<AdditionalServiceTypes::AnnouncementConfigurations> {
    	
    	Announcement_Options() {
    	}
    	Announcement_Options(const AdditionalServiceTypes::AnnouncementConfigurations &_Type_Configurations)
    	{
    		std::get<0>(values_) = _Type_Configurations;
    	}
    	/**
    	 * description: Announcement configuration
    	 */
    	inline const AdditionalServiceTypes::AnnouncementConfigurations &getType_Configurations() const { return std::get<0>(values_); }
    	inline void setType_Configurations(const AdditionalServiceTypes::AnnouncementConfigurations &_value) { std::get<0>(values_) = _value; }
    	inline bool operator==(const Announcement_Options& _other) const {
                return (getType_Configurations() == _other.getType_Configurations());
        }
    	inline bool operator!=(const Announcement_Options &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    /**
     * description: Union for the selection of a data service. Depending on the data service
     *   another structure is used.
     */
    typedef CommonAPI::Variant<No_Options, Subtitle_Options, Teletext_Options, EPG_Options, Journaline_Options, Announcement_Options, EWS_Options, Image_Options>  DataServiceOption;
    /**
     * description: Array for data service options
     */
    typedef std::vector<AdditionalServiceTypesOptions::DataServiceOption> DataServiceOptions;



static inline const char* getTypeCollectionName() {
    static const char* typeCollectionName = "IVIRadio.AdditionalService.AdditionalServiceTypesOptions";
    return typeCollectionName;
}

inline CommonAPI::Version getTypeCollectionVersion() {
    return CommonAPI::Version(2, 0);
}

}; // struct AdditionalServiceTypesOptions

} // namespace AdditionalService
} // namespace IVIRadio
} // namespace v2

namespace CommonAPI {
}


namespace std {
}


// Compatibility
namespace v2_0 = v2;

#endif // V2_IVIRADIO_ADDITIONALSERVICE_Additional_Service_Types_Options_HPP_