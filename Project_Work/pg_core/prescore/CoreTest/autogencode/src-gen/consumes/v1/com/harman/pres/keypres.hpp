/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Wed Jul 05 14:50:50 IST 2017
*/
#ifndef V1_COM_HARMAN_PRES_KEYPRES_HPP_
#define V1_COM_HARMAN_PRES_KEYPRES_HPP_




#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/Types.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace com {
namespace harman {
namespace pres {

class keypres {
public:
    virtual ~keypres() { }

    static inline const char* getInterface();
    static inline CommonAPI::Version getInterfaceVersion();
};

const char* keypres::getInterface() {
    return ("com.harman.pres.keypres");
}

CommonAPI::Version keypres::getInterfaceVersion() {
    return CommonAPI::Version(1, 1);
}


} // namespace pres
} // namespace harman
} // namespace com
} // namespace v1

namespace CommonAPI {
}


// Compatibility
namespace v1_1 = v1;

#endif // V1_COM_HARMAN_PRES_KEYPRES_HPP_
