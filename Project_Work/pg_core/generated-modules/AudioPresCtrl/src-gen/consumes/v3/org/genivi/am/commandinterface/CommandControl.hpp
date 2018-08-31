/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Oct 04 15:43:40 EDT 2016
*/
/**
 * description: The interface towards the Controlling Instance (e.g. HMI). It handles the
 *   communication towards the HMI and other system components who need to interact
 *   with the audio management. There are two rules that have to be kept in mind
 *   when implementing against this interface:
 * author: Christian Linke
 */
#ifndef V3_ORG_GENIVI_AM_COMMANDINTERFACE_COMMAND_CONTROL_HPP_
#define V3_ORG_GENIVI_AM_COMMANDINTERFACE_COMMAND_CONTROL_HPP_




#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/Types.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v3 {
namespace org {
namespace genivi {
namespace am {
namespace commandinterface {

class CommandControl {
public:
    virtual ~CommandControl() { }

    static inline const char* getInterface();
    static inline CommonAPI::Version getInterfaceVersion();
};

const char* CommandControl::getInterface() {
    return ("org.genivi.am.commandinterface.CommandControl");
}

CommonAPI::Version CommandControl::getInterfaceVersion() {
    return CommonAPI::Version(3, 1);
}


} // namespace commandinterface
} // namespace am
} // namespace genivi
} // namespace org
} // namespace v3

namespace CommonAPI {
}


// Compatibility
namespace v3_1 = v3;

#endif // V3_ORG_GENIVI_AM_COMMANDINTERFACE_COMMAND_CONTROL_HPP_
