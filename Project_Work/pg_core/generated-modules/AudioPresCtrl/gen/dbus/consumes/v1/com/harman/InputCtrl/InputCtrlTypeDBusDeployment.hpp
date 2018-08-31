/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Oct 04 15:43:40 EDT 2016
*/

#ifndef V1_COM_HARMAN_INPUTCTRL_INPUT_CTRL_TYPE_DBUS_DEPLOYMENT_HPP_
#define V1_COM_HARMAN_INPUTCTRL_INPUT_CTRL_TYPE_DBUS_DEPLOYMENT_HPP_

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif
#include <CommonAPI/DBus/DBusDeployment.hpp>
#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace com {
namespace harman {
namespace InputCtrl {
namespace InputCtrlType_ {

// typecollection-specific deployment types
typedef CommonAPI::EmptyDeployment eButtonStateDeployment_t;

typedef CommonAPI::EmptyDeployment eButtonSourceDeployment_t;

typedef CommonAPI::EmptyDeployment eRotationDirectionDeployment_t;

typedef CommonAPI::EmptyDeployment eKeysDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment
> ButtonInfoStructDeployment_t;

typedef CommonAPI::DBus::StructDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment
> RotaryInfoStructDeployment_t;


// typecollection-specific deployments

} // namespace InputCtrlType_
} // namespace InputCtrl
} // namespace harman
} // namespace com
} // namespace v1

#endif // V1_COM_HARMAN_INPUTCTRL_INPUT_CTRL_TYPE_DBUS_DEPLOYMENT_HPP_