/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Fri Jun 23 13:08:16 IST 2017
*/
#ifndef V1_COMMONAPI_EXAMPLES_E04_Phone_Book_STUB_DEFAULT_HPP_
#define V1_COMMONAPI_EXAMPLES_E04_Phone_Book_STUB_DEFAULT_HPP_


#include <v1/commonapi/examples/E04PhoneBookStub.hpp>
#include <sstream>

namespace v1 {
namespace commonapi {
namespace examples {

/**
 * Provides a default implementation for E04PhoneBookStubRemoteEvent and
 * E04PhoneBookStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class E04PhoneBookStubDefault
    : public virtual E04PhoneBookStub {
public:
    E04PhoneBookStubDefault();

    E04PhoneBookStubRemoteEvent* initStubAdapter(const std::shared_ptr<E04PhoneBookStubAdapter> &_adapter);

    const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client);

    virtual const std::vector<::v1::commonapi::examples::E04PhoneBook::phoneBookStruct>& getPhoneBookAttribute();
    virtual const std::vector<::v1::commonapi::examples::E04PhoneBook::phoneBookStruct>& getPhoneBookAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setPhoneBookAttribute(std::vector<::v1::commonapi::examples::E04PhoneBook::phoneBookStruct> _value);

    /**
     * description: filter operations
     */
    virtual void setPhoneBookDataFilter(const std::shared_ptr<CommonAPI::ClientId> _client, E04PhoneBook::elementFilterStruct _elementFilter, std::vector<E04PhoneBook::contentFilterStruct> _contentFilter, setPhoneBookDataFilterReply_t _reply);

/**
 * description: filter result
 */
virtual void firePhoneBookDataSetSelective(const std::vector<::v1::commonapi::examples::E04PhoneBook::phoneBookDataElementMap> &_phoneBookDataSet, const std::shared_ptr<CommonAPI::ClientIdList> _receivers = nullptr);
virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForPhoneBookDataSetSelective();
/// Hook method for reacting on new subscriptions or removed subscriptions respectively for selective broadcasts.
virtual void onPhoneBookDataSetSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> _client, const CommonAPI::SelectiveBroadcastSubscriptionEvent _event);
/// Hook method for reacting accepting or denying new subscriptions 
virtual bool onPhoneBookDataSetSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> _client);


protected:
    /**
     * description: the phone book itself
     */
    virtual bool trySetPhoneBookAttribute(std::vector<::v1::commonapi::examples::E04PhoneBook::phoneBookStruct> _value);
    virtual bool validatePhoneBookAttributeRequestedValue(const std::vector<::v1::commonapi::examples::E04PhoneBook::phoneBookStruct> &_value);
    class RemoteEventHandler: public virtual E04PhoneBookStubRemoteEvent {
    public:
        RemoteEventHandler(E04PhoneBookStubDefault *_defaultStub);

        /**
         * description: the phone book itself
         */


    private:
        E04PhoneBookStubDefault *defaultStub_;
    };
private:
    E04PhoneBookStubDefault::RemoteEventHandler remoteEventHandler_;

    /**
     * description: the phone book itself
     */
    std::vector<::v1::commonapi::examples::E04PhoneBook::phoneBookStruct> phoneBookAttributeValue_ {};

    CommonAPI::Version interfaceVersion_;
};

} // namespace examples
} // namespace commonapi
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_COMMONAPI_EXAMPLES_E04_Phone_Book_STUB_DEFAULT
