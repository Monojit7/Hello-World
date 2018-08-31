/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Wed Jul 05 14:50:50 IST 2017
*/
#ifndef V1_COM_HARMAN_PRES_keypres_DBUS_PROXY_HPP_
#define V1_COM_HARMAN_PRES_keypres_DBUS_PROXY_HPP_

#include <v1/com/harman/pres/keypresProxyBase.hpp>
#include "v1/com/harman/pres/keypresDBusDeployment.hpp"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusAddress.hpp>
#include <CommonAPI/DBus/DBusFactory.hpp>
#include <CommonAPI/DBus/DBusProxy.hpp>
#include <CommonAPI/DBus/DBusAddressTranslator.hpp>
#include <CommonAPI/DBus/DBusEvent.hpp>
#include <CommonAPI/Types.hpp>
#include <CommonAPI/DBus/DBusSelectiveEvent.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <string>

namespace v1 {
namespace com {
namespace harman {
namespace pres {

class keypresDBusProxy
    : virtual public keypresProxyBase, 
      virtual public CommonAPI::DBus::DBusProxy {
public:
    keypresDBusProxy(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection);

    virtual ~keypresDBusProxy() { }


    virtual KeyEventSelectiveEvent& getKeyEventSelectiveEvent();

    /**
     * description: method to subscribe to keys and some states of the same 		Client can provide a
     *   list of tKeyStates which contains ids and corresponding states 		To subsribe
     *   to all states , pass an empty array to tKeyStates::keyStates 		Subscibing to
     *   only interested states is strongly recommended 		Note: In case client wants
     *   states of all available buttons , pass an empty array of tKeyStates
     */
    virtual void subscribeKeys(const std::vector<::v1::com::harman::pres::keyprestypes::tKeyStates> &_keys, CommonAPI::CallStatus &_internalCallStatus);
    /**
     * description: method to subscribe to keys and some states of the same with a priority
     *   		Client can provide a list of tKeyStates which contains ids and corresponding
     *   states 		To subsribe to all states , pass an empty array to
     *   tKeyStates::keyStates 		Subscibing to only interested states is strongly
     *   recommended 		Project team should first decide on a priority matrix and enable
     *   the same in cfg  		Note: In case client wants states of all available buttons
     *   , pass an empty array of tKeyStates
     */
    virtual void subscribeKeys(const std::vector<::v1::com::harman::pres::keyprestypes::tKeyPriority> &_keys, CommonAPI::CallStatus &_internalCallStatus);
    /**
     * description: method to unsubscribe to some or all keys 		To unsubscribe few keys , mention
     *   the key ids 		To unsubscribe to all keys , pass on an empty list, Pres will
     *   remove the client id for  		previously subscribed keys by the client
     */
    virtual void unSubscribeKeys(const std::vector<uint16_t> &_keyIds, CommonAPI::CallStatus &_internalCallStatus);
    /**
     * description: method to get/release exclusive focus to the keys 		keyIds - array of key ids
     *   		focus - exclusive client if true 				key events (subscribed states) will be
     *   published only to the requesting client  				broadcast to self and other
     *   clients already registered if false 		NOTE : If a client is not previously
     *   registered as a subscriber to a keyid and yet a keyid is passed here , 		then
     *   request for the particular keyid will be ignored , other key requests will be
     *   honored
     */
    virtual void setExclusiveFocus(const std::vector<uint16_t> &_keyIds, const bool &_focus, CommonAPI::CallStatus &_internalCallStatus);
    /**
     * description: method to get/release exclusive focus to the keys along with states 		This
     *   interface doesnt require a client to first register to a key unlike the above
     *   API 		keyStates - array of key states 		focus - exclusive client if true
     *   				key events (subscribed states) will be published only to the requesting
     *   client  				broadcast to self and other clients already registered if false
     */
    virtual void setExclusiveFocus(const std::vector<::v1::com::harman::pres::keyprestypes::tKeyStates> &_keyStates, const bool &_focus, CommonAPI::CallStatus &_internalCallStatus);


    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

private:
   

    CommonAPI::DBus::DBusSelectiveEvent<KeyEventSelectiveEvent, CommonAPI::Deployable<std::shared_ptr<::v1::com::harman::pres::keyprestypes::tKey>, ::v1::com::harman::pres::keyprestypes_::tKeyDeployment_t>> keyEventSelective_;

};

} // namespace pres
} // namespace harman
} // namespace com
} // namespace v1

#endif // V1_COM_HARMAN_PRES_keypres_DBUS_PROXY_HPP_
