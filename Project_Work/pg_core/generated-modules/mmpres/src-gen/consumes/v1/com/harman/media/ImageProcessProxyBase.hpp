/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Wed Oct 26 18:16:09 IST 2016
*/
/**
 * description: ImageProcess provide image scale interfaces.
 */
#ifndef V1_COM_HARMAN_MEDIA_Image_Process_PROXY_BASE_HPP_
#define V1_COM_HARMAN_MEDIA_Image_Process_PROXY_BASE_HPP_

#include <v1/com/harman/media/ImageProcess.hpp>



#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <vector>

#include <CommonAPI/Proxy.hpp>
#include <functional>
#include <future>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace com {
namespace harman {
namespace media {

class ImageProcessProxyBase
    : virtual public CommonAPI::Proxy {
public:

    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const uint32_t&, const uint32_t&)> ScaleImageAsyncCallback;



    /**
     * description: scale images to specified resolution(width x height),write output files into
     *   tmpfs.
    	      If width x height not honoring original aspect ratio,outWidth x
     *   OutHeight is the real resolution
    	      for output file.
     * author: daoyong,tang
     */
    virtual void scaleImage(const std::string &_inputfile, const uint32_t &_width, const uint32_t &_height, CommonAPI::CallStatus &_internalCallStatus, std::string &_outputfile, uint32_t &_outWidth, uint32_t &_OutHeight, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> scaleImageAsync(const std::string &_inputfile, const uint32_t &_width, const uint32_t &_height, ScaleImageAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
};

} // namespace media
} // namespace harman
} // namespace com
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_COM_HARMAN_MEDIA_Image_Process_PROXY_BASE_HPP_
