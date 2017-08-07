/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Mon Nov 14 16:54:17 IST 2016
*/
#include <v1/com/monojit/TriangleDBusProxy.hpp>

namespace v1 {
namespace com {
namespace monojit {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createTriangleDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection) {
	return std::make_shared<TriangleDBusProxy>(_address, _connection);
}

INITIALIZER(registerTriangleDBusProxy) {
     CommonAPI::DBus::Factory::get()->registerProxyCreateMethod(
		Triangle::getInterface(),
		&createTriangleDBusProxy);
}

TriangleDBusProxy::TriangleDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection)
	:	CommonAPI::DBus::DBusProxy(_address, _connection)
,		height_(*this, "onHeightAttributeChanged", "setHeightAttribute", "u", "getHeightAttribute", static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
		width_(*this, "onWidthAttributeChanged", "setWidthAttribute", "u", "getWidthAttribute", static_cast<CommonAPI::EmptyDeployment*>(nullptr))
,		areaResult_(*this, "AreaResult", "s", std::make_tuple(static_cast<CommonAPI::DBus::StringDeployment*>(nullptr)))
{
}

      TriangleDBusProxy::HeightAttribute& TriangleDBusProxy::getHeightAttribute() {
          return height_;
      }
      TriangleDBusProxy::WidthAttribute& TriangleDBusProxy::getWidthAttribute() {
          return width_;
      }

TriangleDBusProxy::AreaResultEvent& TriangleDBusProxy::getAreaResultEvent() {
    return areaResult_;
}
    
    /**
     * description: Example comment
     */
    void TriangleDBusProxy::Area(CommonAPI::CallStatus &_internalCallStatus, std::string &_output, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_output(static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<std::string,CommonAPI::DBus::StringDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "Area",
        "",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
_internalCallStatus,
deploy_output);
_output = deploy_output.getValue();
}
    std::future<CommonAPI::CallStatus> TriangleDBusProxy::AreaAsync(AreaAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_output(static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<std::string,CommonAPI::DBus::StringDeployment>
            >
        	>::callMethodAsync(
        *this,
        "Area",
        "",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> _output) {
        	if (_callback)
        		_callback(_internalCallStatus, _output.getValue());
        },
        std::make_tuple(deploy_output));
    }


void TriangleDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
          ownVersionMajor = 1;
          ownVersionMinor = 0;
      }

      } // namespace monojit
      } // namespace com
      } // namespace v1