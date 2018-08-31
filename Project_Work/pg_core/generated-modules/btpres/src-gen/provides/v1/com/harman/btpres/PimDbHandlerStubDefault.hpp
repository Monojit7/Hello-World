/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Thu Sep 22 00:23:23 IST 2016
*/
#ifndef V1_COM_HARMAN_BTPRES_Pim_Db_Handler_STUB_DEFAULT_HPP_
#define V1_COM_HARMAN_BTPRES_Pim_Db_Handler_STUB_DEFAULT_HPP_


#include <v1/com/harman/btpres/PimDbHandlerStub.hpp>
#include <sstream>

namespace v1 {
namespace com {
namespace harman {
namespace btpres {

/**
 * Provides a default implementation for PimDbHandlerStubRemoteEvent and
 * PimDbHandlerStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class PimDbHandlerStubDefault
    : public virtual PimDbHandlerStub {
public:
    PimDbHandlerStubDefault();

    PimDbHandlerStubRemoteEvent* initStubAdapter(const std::shared_ptr<PimDbHandlerStubAdapter> &_adapter);

    const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client);

    virtual const ::v1::com::harman::btpres::BTPresTypes::eContactNameOredr& getContactNameOrderAttribute();
    virtual const ::v1::com::harman::btpres::BTPresTypes::eContactNameOredr& getContactNameOrderAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setContactNameOrderAttribute(::v1::com::harman::btpres::BTPresTypes::eContactNameOredr _value);
    virtual const ::v1::com::harman::btpres::BTPresTypes::pimPropertiesList& getDeviceListAttribute();
    virtual const ::v1::com::harman::btpres::BTPresTypes::pimPropertiesList& getDeviceListAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setDeviceListAttribute(::v1::com::harman::btpres::BTPresTypes::pimPropertiesList _value);

    /**
     * description: Opens a session for the client communication. This session will be used
     *   internally to uniquely identify a client, and to maintain client specific
     *   caches.
                         The client need not create a new session for
     *   every request, this is rather used to identify different instances of clients.
     *     
                         
           returns: sessionID: Session identifier
     *   allocated to the client.
     */
    virtual void openSession(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _inAddress, openSessionReply_t _reply);
    /**
     * description: Close a client session and release all associated resources.
     * param: sessionID: The Session ID to close.
     */
    virtual void closeSession(const std::shared_ptr<CommonAPI::ClientId> _client, uint8_t _sessionID, closeSessionReply_t _reply);
    /**
     * description: Sets a session query. This api handles all requests to fetch Phonebook results,
     *   database searches, etc. 
                         As an example. If the HMI wanted
     *   to fetch a list of all contacts. The filterID's' and filter's' will be empty,
     *   and the result type would be set to Required field list.
     * param: filterIDs: The previously communicated numeric identifiers of the different
     *   filter categories.
     * param: filters: The string filters which should be applied to the result.
     * param: resultType: The data which is expected from the query.
     * param: sessionID: Session ID obtained from OpenSession.
     * param: databaseType: Related database for this sessionquery.
     * param: RequiredField: List of required field , if default is set browsing item will be
     *   sent with default avlues based on config
     * param: resetPrevious: Whether to use old history or not.If true treat this as a new
     *   session query, do not use any old selection history.
     * param: AutoUpdateEnabled: This is applicable for result sets which might update
     *   dynamically,Call stack or Fav list
              							 
           returns:
     *   numResults: The number of records matching the search criteria.
          
     *   returns: SessionQueryID:The sessionQueryID allotted.This uniquely identifies a
     *   particular session query/filter for retrieving data in a session and it has to
     *   be passed 
                                    for furthur setting the
     *   sessionQuery window and retrieving the contents of that window.
     */
    virtual void setSessionQuery(const std::shared_ptr<CommonAPI::ClientId> _client, uint8_t _sessionID, ::v1::com::harman::btpres::BTPresTypes::eDatabaseType _databaseType, ::v1::com::harman::btpres::BTPresTypes::phonebookResultMap _filterIDs, ::v1::com::harman::btpres::BTPresTypes::filterMap _filters, ::v1::com::harman::btpres::BTPresTypes::requiredFieldMap _RequiredField, bool _resetPrevious, bool _AutoUpdateEnabled, bool _AlphaJumpTable, setSessionQueryReply_t _reply);
    /**
     * description: Essentially re-initializes a session and stops all background tasks.
     * param: sessionID: The Session ID alloted.
     */
    virtual void cancelSessionQuery(const std::shared_ptr<CommonAPI::ClientId> _client, uint8_t _sessionID, cancelSessionQueryReply_t _reply);
    /**
     * description: Ask presentation control to fetch the desired set of entries for a particular
     *   session query. This call does not block for the result to complete, and will
     *   override
                         the last request given to Pres Ctrl.
     * param: sessionID: The Session ID alloted.
     * param: sessionQueryID: The sessionQueryID allotted.This uniquely identifies a
     *   particular session query/filter for retrieving data in a session and it has to
     *   be passed 
                                   for furthur setting the sessionQuery
     *   window and retrieving the contents of that window.
     * param: startIndex: The index to start fetching.
     * param: numItems: The number of items to fetch.     
             
           returns:
     *   windowID: A unique identifier for the client to track data responses to the
     *   queries.
     */
    virtual void setSessionQueryWindow(const std::shared_ptr<CommonAPI::ClientId> _client, uint8_t _sessionID, uint8_t _sessionQueryID, uint16_t _startIndex, uint8_t _numItems, setSessionQueryWindowReply_t _reply);
    /**
     * description: This method is used for inserting contacts to Favourite list 
                     
     *      Hence the only acceptable value for "database" parameter is "ab".
     * param: inAddress: BD Address of Device
     * param: databaseType: Different database of Pim, Only Fav is allowed
     * param: requestID: Different type of user initiated DB operation
     * param: itemDetails: This list is a union of contactID list, NewPhonebook entry,
     *   SMSTemplateID list, SMStemplate
    	 		     
           returns: This method returns
     *   errorcode
     */
    virtual void dbOperation(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _inAddress, ::v1::com::harman::btpres::BTPresTypes::eDatabaseType _databaseType, ::v1::com::harman::btpres::BTPresTypes::eDbOperationId _requestID, ::v1::com::harman::btpres::BTPresTypes::InsertItems _itemDetails, dbOperationReply_t _reply);
    /**
     * description: This API can be used to get Contact Name by contactID
     * param: inAddress: BD Address of Device
     * param: databaseType: Different database of Pim.Currently only available for "pb" or
     *   "ab"
     * param: contactID: contactID for which contact details should be extracted
     * param: fieldList: Required filedlist using bit masking ()
    	 		     
           returns:	  
     *    phonebookEntry which will contain all the field
     */
    virtual void getContactsByID(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _inAddress, ::v1::com::harman::btpres::BTPresTypes::eDatabaseType _databaseType, uint16_t _contactID, ::v1::com::harman::btpres::BTPresTypes::phonebookResultMap _FieldList, getContactsByIDReply_t _reply);
    /**
     * description: This API is used to get the full details of the SMS; this takes a unique id as
     *   input, which is received from the signal
     * param: inAddress: BD Address of Device
     * param: smsId: Unique id for SMS that is returned as part of the signal (multiple uid�s
     *   can be sent, separated)
    	 		     
           returns: This method returns SMS entry
     */
    virtual void getSMSById(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _inAddress, int64_t _smsId, getSMSByIdReply_t _reply);
    /**
     * description: This API can be used to get the following details on either phonebook 
            
     *               1.	The next valid characters mask that match the input string.
       
     *                    2.	The count of the names that matched the input string.
        
     *                   3.	The index of the first match of the input string sorted by
     *   givenName column. (This index can be used in getItems API to query for the
     *   details but the same sort criteria need to be applied).
     * param: inAddress: BD Address of Device
     * param: databaseType: Different database of Pim. Currently only available for Pb or ab
     * param: inputName: String to be searched
     * param: sortOrder: ascending or descending
     * param: condition: either or all based on notnullcolumnList 
           	 		     
          
     *   returns:      contactsCount:The count of the names that matched the input
     *   string.
           returns:      index:The index of the first match of the input
     *   string sorted by formattedName column.
           returns:      charactersMask:The
     *   next valid characters mask that match the input string.
           returns:     
     *   firstMatch:The �formattedName� of the first matched contact
     */
    virtual void getNextValidCharacters(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _inAddress, ::v1::com::harman::btpres::BTPresTypes::eDatabaseType _databaseType, std::string _inputName, std::string _sortOrder, std::string _condition, getNextValidCharactersReply_t _reply);
    /**
     * description: This API is used to send the SMS to the destined number.
     * param: inAddress: BD Address of Device
     * param: destinationNumber: This indicates destination number of the SMS
     * param: smsBody: Describes the body of SMS to be sent
    	 		     
           returns:	This
     *   methods return success or failure
           returns: contactName: Contact Name to
     *   which SMS is sent
     */
    virtual void sendSMSByTemplateID(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _inAddress, std::string _destinationNumber, uint8_t _TemplateID, std::string _smsBody, sendSMSByTemplateIDReply_t _reply);
    /**
     * description: This API is used to set the status of a sms (as READ/UNREAD).
     * param: inAddress: BD Address of Device
     * param: smsId: Unique sms identifier
     * param: read_status: The status value that needs to be set. The valid values are �READ�
     *   or �UNREAD�
    	 		     
           returns: This method returns errorcode
     */
    virtual void setSMSReadStatus(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _inAddress, int64_t _smsId, bool _sms_read_status, setSMSReadStatusReply_t _reply);
    /**
     * description: This method is used to set the sorted name order.
     * param: inAddress: BD Address of Device (Considered only if project support device
     *   specific sorting order)
     * param: contact Name order
     */
    virtual void setFormattedNameOrder(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _inAddress, ::v1::com::harman::btpres::BTPresTypes::eContactNameOredr _contactNameOrder, setFormattedNameOrderReply_t _reply);

/**
 * description: Will only be posted to the respective listeners if the session query parameters
 *   have changed. 
                     For example, for  Calllist and SMS can be
 *   changed dynamically based on new SMS or new Call Stack.  Will be published 
  
 *                     only if auto update was enabled when setting the query.
 * param: sessionID: The Session ID alloted.
 * param: sessionQueryID: Allocated session queruy ID
 * param: numResults: Total number of result
 * param: unreadCount: This will be sent updated for unread SMS count and unread missed
 *   call count
 */
virtual void fireSessionQueryUpdateSelective(const uint8_t &_sessionID, const uint8_t &_sessionQueryID, const uint16_t &_numResults, const uint8_t &_unreadCount, const ::v1::com::harman::btpres::BTPresTypes::alphaJumpList &_alphaList, const std::shared_ptr<CommonAPI::ClientIdList> _receivers = nullptr);
virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForSessionQueryUpdateSelective();
/// Hook method for reacting on new subscriptions or removed subscriptions respectively for selective broadcasts.
virtual void onSessionQueryUpdateSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> _client, const CommonAPI::SelectiveBroadcastSubscriptionEvent _event);
/// Hook method for reacting accepting or denying new subscriptions 
virtual bool onSessionQueryUpdateSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> _client);
/**
 * description: Publishes the query status to all clients. The client can get the data once the
 *   query is "finished"
 */
virtual void fireSessionQueryWindowUpdateSelective(const uint8_t &_sessionID, const uint8_t &_sessionQueryID, const uint16_t &_startIndex, const uint8_t &_numItems, const ::v1::com::harman::btpres::BTPresTypes::phonebook &_phonebookList, const std::shared_ptr<CommonAPI::ClientIdList> _receivers = nullptr);
virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForSessionQueryWindowUpdateSelective();
/// Hook method for reacting on new subscriptions or removed subscriptions respectively for selective broadcasts.
virtual void onSessionQueryWindowUpdateSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> _client, const CommonAPI::SelectiveBroadcastSubscriptionEvent _event);
/// Hook method for reacting accepting or denying new subscriptions 
virtual bool onSessionQueryWindowUpdateSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> _client);
/**
 * description: Publishes only when session is closed due to device disconnect or client request
 */
virtual void fireSessionClosedSelective(const uint8_t &_sessionID, const uint8_t &_sessionQueryID, const ::v1::com::harman::btpres::BTPresTypes::eErrorType &_errorCode, const std::shared_ptr<CommonAPI::ClientIdList> _receivers = nullptr);
virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForSessionClosedSelective();
/// Hook method for reacting on new subscriptions or removed subscriptions respectively for selective broadcasts.
virtual void onSessionClosedSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> _client, const CommonAPI::SelectiveBroadcastSubscriptionEvent _event);
/// Hook method for reacting accepting or denying new subscriptions 
virtual bool onSessionClosedSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> _client);
/**
 * description: This signal will be sent when a new missed call notification is received (after
 *   the phone is connected to Head Unit).
 * param: inAddress: BD Address of Device
 * param: number: Missed call number of latest missed call
 * param: name: formatted Name of the contact
 * param: unreadCount: This is the current count of unread-missed call.
 */
virtual void fireUnreadMissedCallEvent(const std::string &_inAddress, const std::string &_number, const std::string &_name, const uint8_t &_unreadCount);
/**
 * description: This signal will be sent when a newCallList is available, after a call.
 * param: inAddress: BD Address of Device
 * param: newCallStackEntry : New call stack entry
 */
virtual void fireNewCallListEvent(const std::string &_inAddress, const ::v1::com::harman::btpres::BTPresTypes::callstackEntry &_newCallStackEntry);
/**
 * description: This signal will be emitted , when send sms is invoked : sent & delivered
 *   (success or failure)
 * param: inAddress: BD Address of Device
 * param: smsId: smsID of the sent SMS
 * param: notification: Status of the sent SMS
 */
virtual void fireSMSNotificationEvent(const std::string &_inAddress, const int64_t &_smsId, const ::v1::com::harman::btpres::BTPresTypes::eMsgNotification &_notification);


protected:
    /**
     * description: formattedNameOrder is sorted name order, which can be set from HMI
     */
    virtual bool trySetContactNameOrderAttribute(::v1::com::harman::btpres::BTPresTypes::eContactNameOredr _value);
    virtual bool validateContactNameOrderAttributeRequestedValue(const ::v1::com::harman::btpres::BTPresTypes::eContactNameOredr &_value);
    /**
     * description: DeviceList will contain list of paired device and their syncstatus
     */
    virtual bool trySetDeviceListAttribute(::v1::com::harman::btpres::BTPresTypes::pimPropertiesList _value);
    virtual bool validateDeviceListAttributeRequestedValue(const ::v1::com::harman::btpres::BTPresTypes::pimPropertiesList &_value);
    class RemoteEventHandler: public virtual PimDbHandlerStubRemoteEvent {
    public:
        RemoteEventHandler(PimDbHandlerStubDefault *_defaultStub);

        /**
         * description: formattedNameOrder is sorted name order, which can be set from HMI
         */

        /**
         * description: DeviceList will contain list of paired device and their syncstatus
         */


    private:
        PimDbHandlerStubDefault *defaultStub_;
    };
private:
    PimDbHandlerStubDefault::RemoteEventHandler remoteEventHandler_;

    /**
     * description: formattedNameOrder is sorted name order, which can be set from HMI
     */
    ::v1::com::harman::btpres::BTPresTypes::eContactNameOredr contactNameOrderAttributeValue_ {};
    /**
     * description: DeviceList will contain list of paired device and their syncstatus
     */
    ::v1::com::harman::btpres::BTPresTypes::pimPropertiesList deviceListAttributeValue_ {};

    CommonAPI::Version interfaceVersion_;
};

} // namespace btpres
} // namespace harman
} // namespace com
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_COM_HARMAN_BTPRES_Pim_Db_Handler_STUB_DEFAULT
