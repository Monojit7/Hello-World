/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Fri Jun 23 13:08:16 IST 2017
*/
#ifndef V1_COMMONAPI_EXAMPLES_E04_Phone_Book_STUB_HPP_
#define V1_COMMONAPI_EXAMPLES_E04_Phone_Book_STUB_HPP_

#include <functional>




#include <v1/commonapi/examples/E04PhoneBook.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/Deployment.hpp>
#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <CommonAPI/Struct.hpp>
#include <cstdint>
#include <string>
#include <unordered_map>
#include <vector>

#include <CommonAPI/Stub.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace commonapi {
namespace examples {

/**
 * Receives messages from remote and handles all dispatching of deserialized calls
 * to a stub for the service E04PhoneBook. Also provides means to send broadcasts
 * and attribute-changed-notifications of observable attributes as defined by this service.
 * An application developer should not need to bother with this class.
 */
class E04PhoneBookStubAdapter
    : public virtual CommonAPI::StubAdapter, 
      public virtual E04PhoneBook {
 public:
    ///Notifies all remote listeners about a change of value of the attribute phoneBook.
    virtual void firePhoneBookAttributeChanged(const std::vector<::v1::commonapi::examples::E04PhoneBook::phoneBookStruct>& phoneBook) = 0;

    /**
     * Sends a selective broadcast event for phoneBookDataSet. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void firePhoneBookDataSetSelective(const std::shared_ptr<CommonAPI::ClientId> _client, const std::vector<::v1::commonapi::examples::E04PhoneBook::phoneBookDataElementMap> &_phoneBookDataSet) = 0;
    virtual void sendPhoneBookDataSetSelective(const std::vector<::v1::commonapi::examples::E04PhoneBook::phoneBookDataElementMap> &_phoneBookDataSet, const std::shared_ptr<CommonAPI::ClientIdList> _receivers = nullptr) = 0;
    virtual void subscribeForphoneBookDataSetSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, bool& success) = 0;
    virtual void unsubscribeFromphoneBookDataSetSelective(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForPhoneBookDataSetSelective() = 0;


    virtual void deactivateManagedInstances() = 0;
protected:
    /**
     * Defines properties for storing the ClientIds of clients / proxies that have
     * subscribed to the selective broadcasts
     */
    std::shared_ptr<CommonAPI::ClientIdList> subscribersForPhoneBookDataSetSelective_;
};

/**
 * Defines the necessary callbacks to handle remote set events related to the attributes
 * defined in the IDL description for E04PhoneBook.
 * For each attribute two callbacks are defined:
 * - a verification callback that allows to verify the requested value and to prevent setting
 *   e.g. an invalid value ("onRemoteSet<AttributeName>").
 * - an action callback to do local work after the attribute value has been changed
 *   ("onRemote<AttributeName>Changed").
 *
 * This class and the one below are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class E04PhoneBookStubRemoteEvent
{
public:
    virtual ~E04PhoneBookStubRemoteEvent() { }

};

/**
 * Defines the interface that must be implemented by any class that should provide
 * the service E04PhoneBook to remote clients.
 * This class and the one above are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class E04PhoneBookStub
    : public virtual CommonAPI::Stub<E04PhoneBookStubAdapter, E04PhoneBookStubRemoteEvent>
{
public:
    typedef std::function<void ()>setPhoneBookDataFilterReply_t;

    virtual ~E04PhoneBookStub() {}
    virtual const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> clientId) = 0;

    /**
     * description: the phone book itself
     */
    /// Provides getter access to the attribute phoneBook
    virtual const std::vector<::v1::commonapi::examples::E04PhoneBook::phoneBookStruct> &getPhoneBookAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) = 0;

    /**
     * description: filter operations
     */
    /// This is the method that will be called on remote calls on the method setPhoneBookDataFilter.
    virtual void setPhoneBookDataFilter(const std::shared_ptr<CommonAPI::ClientId> _client, E04PhoneBook::elementFilterStruct _elementFilter, std::vector<E04PhoneBook::contentFilterStruct> _contentFilter, setPhoneBookDataFilterReply_t _reply) = 0;
    /**
     * description: filter result
     */
    /**
     * Sends a selective broadcast event for phoneBookDataSet to the given ClientIds.
     * The ClientIds must all be out of the set of subscribed clients.
     * If no ClientIds are given, the selective broadcast is sent to all subscribed clients.
     */
    virtual void firePhoneBookDataSetSelective(const std::vector<::v1::commonapi::examples::E04PhoneBook::phoneBookDataElementMap> &_phoneBookDataSet, const std::shared_ptr<CommonAPI::ClientIdList> _receivers = nullptr) = 0;
    /// retreives the list of all subscribed clients for phoneBookDataSet
    virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForPhoneBookDataSetSelective() = 0;
    /// Hook method for reacting on new subscriptions or removed subscriptions respectively for selective broadcasts.
    virtual void onPhoneBookDataSetSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> _client, const CommonAPI::SelectiveBroadcastSubscriptionEvent _event) = 0;
    /// Hook method for reacting accepting or denying new subscriptions 
    virtual bool onPhoneBookDataSetSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> _client) = 0;

    using CommonAPI::Stub<E04PhoneBookStubAdapter, E04PhoneBookStubRemoteEvent>::initStubAdapter;
    typedef CommonAPI::Stub<E04PhoneBookStubAdapter, E04PhoneBookStubRemoteEvent>::StubAdapterType StubAdapterType;
    typedef CommonAPI::Stub<E04PhoneBookStubAdapter, E04PhoneBookStubRemoteEvent>::RemoteEventHandlerType RemoteEventHandlerType;
    typedef E04PhoneBookStubRemoteEvent RemoteEventType;
    typedef E04PhoneBook StubInterface;
};

} // namespace examples
} // namespace commonapi
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_COMMONAPI_EXAMPLES_E04_Phone_Book_STUB_HPP_
