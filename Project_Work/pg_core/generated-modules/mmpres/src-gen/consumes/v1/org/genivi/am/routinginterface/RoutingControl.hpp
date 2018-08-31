/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Wed Oct 26 18:16:09 IST 2016
*/
/**
 * description: This class implements everything from Audiomanager -&gt; RoutingAdapter
 * author: lian zhang
 */
#ifndef V1_ORG_GENIVI_AM_ROUTINGINTERFACE_ROUTING_CONTROL_HPP_
#define V1_ORG_GENIVI_AM_ROUTINGINTERFACE_ROUTING_CONTROL_HPP_




#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/Types.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace org {
namespace genivi {
namespace am {
namespace routinginterface {

class RoutingControl {
public:
    virtual ~RoutingControl() { }

    static inline const char* getInterface();
    static inline CommonAPI::Version getInterfaceVersion();
};

const char* RoutingControl::getInterface() {
    return ("org.genivi.am.routinginterface.RoutingControl");
}

CommonAPI::Version RoutingControl::getInterfaceVersion() {
    return CommonAPI::Version(1, 1);
}


} // namespace routinginterface
} // namespace am
} // namespace genivi
} // namespace org
} // namespace v1

namespace CommonAPI {
}


// Compatibility
namespace v1_1 = v1;

#endif // V1_ORG_GENIVI_AM_ROUTINGINTERFACE_ROUTING_CONTROL_HPP_
