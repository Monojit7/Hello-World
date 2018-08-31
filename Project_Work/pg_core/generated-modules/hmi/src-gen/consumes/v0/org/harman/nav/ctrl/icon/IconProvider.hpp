/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/
/**
 * description: this interface offers methods to provide icons (POI, Road, Traffic, so on) to
 *   any client
 */
#ifndef V0_ORG_HARMAN_NAV_CTRL_ICON_ICON_PROVIDER_HPP_
#define V0_ORG_HARMAN_NAV_CTRL_ICON_ICON_PROVIDER_HPP_




#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/Types.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v0 {
namespace org {
namespace harman {
namespace nav {
namespace ctrl {
namespace icon {

class IconProvider {
public:
    virtual ~IconProvider() { }

    static inline const char* getInterface();
    static inline CommonAPI::Version getInterfaceVersion();
};

const char* IconProvider::getInterface() {
    return ("org.harman.nav.ctrl.icon.IconProvider");
}

CommonAPI::Version IconProvider::getInterfaceVersion() {
    return CommonAPI::Version(0, 2);
}


} // namespace icon
} // namespace ctrl
} // namespace nav
} // namespace harman
} // namespace org
} // namespace v0

namespace CommonAPI {
}


// Compatibility
namespace v0_2 = v0;

#endif // V0_ORG_HARMAN_NAV_CTRL_ICON_ICON_PROVIDER_HPP_
