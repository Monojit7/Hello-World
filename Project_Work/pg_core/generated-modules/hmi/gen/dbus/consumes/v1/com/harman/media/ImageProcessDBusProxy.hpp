/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/
/**
 * description: ImageProcess provide image scale interfaces.
 */
#ifndef V1_COM_HARMAN_MEDIA_Image_Process_DBUS_PROXY_HPP_
#define V1_COM_HARMAN_MEDIA_Image_Process_DBUS_PROXY_HPP_

#include <v1/com/harman/media/ImageProcessProxyBase.hpp>
#include "v1/com/harman/media/ImageProcessDBusDeployment.hpp"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusAddress.hpp>
#include <CommonAPI/DBus/DBusFactory.hpp>
#include <CommonAPI/DBus/DBusProxy.hpp>
#include <CommonAPI/DBus/DBusAddressTranslator.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <string>

namespace v1 {
namespace com {
namespace harman {
namespace media {

class ImageProcessDBusProxy
    : virtual public ImageProcessProxyBase, 
      virtual public CommonAPI::DBus::DBusProxy {
public:
    ImageProcessDBusProxy(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection);

    virtual ~ImageProcessDBusProxy() { }



    /**
     * description: scale images to specified resolution(width x height),write output files into
     *   tmpfs.
    	      If width x height not honoring original aspect ratio,outWidth x
     *   OutHeight is the real resolution
    	      for output file.
     * author: daoyong,tang
     */
    virtual void scaleImage(const std::string &_inputfile, const uint32_t &_width, const uint32_t &_height, CommonAPI::CallStatus &_internalCallStatus, std::string &_outputfile, uint32_t &_outWidth, uint32_t &_OutHeight, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> scaleImageAsync(const std::string &_inputfile, const uint32_t &_width, const uint32_t &_height, ScaleImageAsyncCallback _callback, const CommonAPI::CallInfo *_info);


    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

private:
   


};

} // namespace media
} // namespace harman
} // namespace com
} // namespace v1

#endif // V1_COM_HARMAN_MEDIA_Image_Process_DBUS_PROXY_HPP_

