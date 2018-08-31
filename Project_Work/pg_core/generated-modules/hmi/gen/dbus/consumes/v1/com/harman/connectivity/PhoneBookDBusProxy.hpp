/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Tue Jun 21 15:32:43 IST 2016
*/
#ifndef V1_COM_HARMAN_CONNECTIVITY_Phone_Book_DBUS_PROXY_HPP_
#define V1_COM_HARMAN_CONNECTIVITY_Phone_Book_DBUS_PROXY_HPP_

#include <v1/com/harman/connectivity/PhoneBookProxyBase.hpp>
#include "v1/com/harman/connectivity/PhoneBookDBusDeployment.hpp"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusAddress.hpp>
#include <CommonAPI/DBus/DBusFactory.hpp>
#include <CommonAPI/DBus/DBusProxy.hpp>
#include <CommonAPI/DBus/DBusAddressTranslator.hpp>
#include <CommonAPI/DBus/DBusEvent.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <string>

namespace v1 {
namespace com {
namespace harman {
namespace connectivity {

class PhoneBookDBusProxy
    : virtual public PhoneBookProxyBase, 
      virtual public CommonAPI::DBus::DBusProxy {
public:
    PhoneBookDBusProxy(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection);

    virtual ~PhoneBookDBusProxy() { }


    virtual PIMSYNCSTATUSEvent& getPIMSYNCSTATUSEvent();
    virtual PimObjectBackGndSyncInfoEvent& getPimObjectBackGndSyncInfoEvent();
    virtual DatabaseReadyEvent& getDatabaseReadyEvent();
    virtual DatabaseChangedEvent& getDatabaseChangedEvent();
    virtual UnreadMissedCallEvent& getUnreadMissedCallEvent();
    virtual NewCallListEvent& getNewCallListEvent();
    virtual ConnectedDeviceTableUpdatedEvent& getConnectedDeviceTableUpdatedEvent();
    virtual ConnectedBtDeviceEvent& getConnectedBtDeviceEvent();
    virtual NewSMSEvent& getNewSMSEvent();
    virtual SendSMSNotificationEvent& getSendSMSNotificationEvent();

    virtual void getProperties(const std::string &_bdAddr, const ::v2::com::harman::connectivity::BaseType::arString &_properties, CommonAPI::CallStatus &_internalCallStatus, int32_t &_errorCode, std::string &_Description, ::v2::com::harman::connectivity::BaseType::arString &_propertiesValue, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getPropertiesAsync(const std::string &_bdAddr, const ::v2::com::harman::connectivity::BaseType::arString &_properties, GetPropertiesAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void getItemsCount(const std::string &_bdAddr, const std::string &_databaseType, CommonAPI::CallStatus &_internalCallStatus, int32_t &_errorCode, std::string &_Description, int32_t &_contactsCount, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getItemsCountAsync(const std::string &_bdAddr, const std::string &_databaseType, GetItemsCountAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void getItems(const std::string &_bdAddr, const std::string &_databaseType, const ::v2::com::harman::connectivity::BaseType::arString &_fieldsList, const int32_t &_index, const int32_t &_count, const std::string &_sortCriteria, const std::string &_sortOrder, const std::string &_condition, const std::string &_filterCriteria, CommonAPI::CallStatus &_internalCallStatus, int32_t &_errorCode, std::string &_Description, ::v2::com::harman::connectivity::BaseType::arString &_resultPhonebook, int32_t &_outIndex, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getItemsAsync(const std::string &_bdAddr, const std::string &_databaseType, const ::v2::com::harman::connectivity::BaseType::arString &_fieldsList, const int32_t &_index, const int32_t &_count, const std::string &_sortCriteria, const std::string &_sortOrder, const std::string &_condition, const std::string &_filterCriteria, GetItemsAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void getItemsMoreInfo(const std::string &_bdAddr, const int32_t &_moreInfoByte, const int32_t &_contactsId, const std::string &_databaseType, CommonAPI::CallStatus &_internalCallStatus, int32_t &_errorCode, std::string &_Description, ::v2::com::harman::connectivity::BaseType::arString &_moreInfo, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getItemsMoreInfoAsync(const std::string &_bdAddr, const int32_t &_moreInfoByte, const int32_t &_contactsId, const std::string &_databaseType, GetItemsMoreInfoAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void manualSync(const std::string &_bdAddr, const std::string &_databaseType, CommonAPI::CallStatus &_internalCallStatus, int32_t &_errorCode, std::string &_Description, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> manualSyncAsync(const std::string &_bdAddr, const std::string &_databaseType, ManualSyncAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void refreshPhonebook(const std::string &_bdAddr, const std::string &_databaseType, CommonAPI::CallStatus &_internalCallStatus, int32_t &_errorCode, std::string &_refresh_status, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> refreshPhonebookAsync(const std::string &_bdAddr, const std::string &_databaseType, RefreshPhonebookAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void getCallStackCount(const std::string &_bdAddr, const std::string &_storageType, CommonAPI::CallStatus &_internalCallStatus, int32_t &_errorCode, std::string &_description, int32_t &_callStackCount, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getCallStackCountAsync(const std::string &_bdAddr, const std::string &_storageType, GetCallStackCountAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void getCallStackList(const std::string &_bdAddr, const std::string &_storageType, const int32_t &_startCallstacksFrom, const int32_t &_numCallstacks, CommonAPI::CallStatus &_internalCallStatus, int32_t &_errorCode, std::string &_Description, ::v2::com::harman::connectivity::BaseType::arString &_resultCallstacks, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getCallStackListAsync(const std::string &_bdAddr, const std::string &_storageType, const int32_t &_startCallstacksFrom, const int32_t &_numCallstacks, GetCallStackListAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void getAlphaJumpTable(const std::string &_bdAddr, const std::string &_database, CommonAPI::CallStatus &_internalCallStatus, int32_t &_errorCode, ::v2::com::harman::connectivity::BaseType::arAlphaTable &_alphaTable, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getAlphaJumpTableAsync(const std::string &_bdAddr, const std::string &_database, GetAlphaJumpTableAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void getNameByPhoneNum(const std::string &_bdAddr, const std::string &_database, const std::string &_phoneNumber, const std::string &_fieldList, CommonAPI::CallStatus &_internalCallStatus, int32_t &_errorCode, std::string &_get_status, ::v2::com::harman::connectivity::BaseType::arString &_result, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getNameByPhoneNumAsync(const std::string &_bdAddr, const std::string &_database, const std::string &_phoneNumber, const std::string &_fieldList, GetNameByPhoneNumAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void searchContactsByNumber(const std::string &_bdAddr, const std::string &_database, const std::string &_sortCriteria, const std::string &_condition, const std::string &_sortOrder, const int32_t &_startId, const int32_t &_count, const std::string &_filterCriteria, CommonAPI::CallStatus &_internalCallStatus, int32_t &_errorCode, std::string &_search_status, int32_t &_itemNumber, ::v2::com::harman::connectivity::BaseType::arString &_result, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> searchContactsByNumberAsync(const std::string &_bdAddr, const std::string &_database, const std::string &_sortCriteria, const std::string &_condition, const std::string &_sortOrder, const int32_t &_startId, const int32_t &_count, const std::string &_filterCriteria, SearchContactsByNumberAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void getNextValidCharacters(const std::string &_bdAddr, const std::string &_databaseType, const std::string &_inputName, const std::string &_sortCriteria, const std::string &_sortOrder, const std::string &_condition, CommonAPI::CallStatus &_internalCallStatus, int32_t &_errorCode, std::string &_get_char_status, int32_t &_contactsCount, int32_t &_index, std::string &_charactersMask, std::string &_firstMatch, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getNextValidCharactersAsync(const std::string &_bdAddr, const std::string &_databaseType, const std::string &_inputName, const std::string &_sortCriteria, const std::string &_sortOrder, const std::string &_condition, GetNextValidCharactersAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void setFormattedNameOrder(const std::string &_bdAddr, const std::string &_formattedNameOrder, CommonAPI::CallStatus &_internalCallStatus, int32_t &_errorCode, std::string &_Description, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> setFormattedNameOrderAsync(const std::string &_bdAddr, const std::string &_formattedNameOrder, SetFormattedNameOrderAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void getFormattedNameOrder(const std::string &_bdAddr, CommonAPI::CallStatus &_internalCallStatus, int32_t &_errorCode, std::string &_Description, std::string &_formattedNameOrder, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getFormattedNameOrderAsync(const std::string &_bdAddr, GetFormattedNameOrderAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void getSMS(const std::string &_bdAddr, const int32_t &_smsId, CommonAPI::CallStatus &_internalCallStatus, int32_t &_errorCode, ::v2::com::harman::connectivity::BaseType::smsentry &_sms, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getSMSAsync(const std::string &_bdAddr, const int32_t &_smsId, GetSMSAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void getSMSCount(const std::string &_bdAddr, const ::v2::com::harman::connectivity::BaseType::foldertype &_folder, CommonAPI::CallStatus &_internalCallStatus, int32_t &_errorCode, int32_t &_count, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getSMSCountAsync(const std::string &_bdAddr, const ::v2::com::harman::connectivity::BaseType::foldertype &_folder, GetSMSCountAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void getSMSList(const std::string &_bdAddr, const int32_t &_startSMSFrom, const ::v2::com::harman::connectivity::BaseType::foldertype &_folder, const int32_t &_numSMS, CommonAPI::CallStatus &_internalCallStatus, int32_t &_errorCode, ::v2::com::harman::connectivity::BaseType::arSMS &_smsList, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getSMSListAsync(const std::string &_bdAddr, const int32_t &_startSMSFrom, const ::v2::com::harman::connectivity::BaseType::foldertype &_folder, const int32_t &_numSMS, GetSMSListAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void getUnreadSMSCount(const std::string &_bdAddr, CommonAPI::CallStatus &_internalCallStatus, int32_t &_errorCode, int32_t &_count, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getUnreadSMSCountAsync(const std::string &_bdAddr, GetUnreadSMSCountAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void getUnreadSMSList(const std::string &_bdAddr, CommonAPI::CallStatus &_internalCallStatus, int32_t &_errorCode, ::v2::com::harman::connectivity::BaseType::arSMS &_smsList, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getUnreadSMSListAsync(const std::string &_bdAddr, GetUnreadSMSListAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void sendSMS(const std::string &_bdAddr, const std::string &_destinationNumber, const std::string &_smsBody, CommonAPI::CallStatus &_internalCallStatus, int32_t &_errorCode, std::string &_contactName, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> sendSMSAsync(const std::string &_bdAddr, const std::string &_destinationNumber, const std::string &_smsBody, SendSMSAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void setSMSReadStatus(const std::string &_bdAddr, const int32_t &_smsId, const std::string &_read_status, CommonAPI::CallStatus &_internalCallStatus, int32_t &_errorCode, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> setSMSReadStatusAsync(const std::string &_bdAddr, const int32_t &_smsId, const std::string &_read_status, SetSMSReadStatusAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void insertItem(const std::string &_bdAddr, const std::string &_database, const int32_t &_contactId, CommonAPI::CallStatus &_internalCallStatus, int32_t &_errorCode, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> insertItemAsync(const std::string &_bdAddr, const std::string &_database, const int32_t &_contactId, InsertItemAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void deleteItem(const std::string &_bdAddr, const std::string &_database, const int32_t &_contactId, CommonAPI::CallStatus &_internalCallStatus, int32_t &_errorCode, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> deleteItemAsync(const std::string &_bdAddr, const std::string &_database, const int32_t &_contactId, DeleteItemAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void deleteAllItems(const std::string &_bdAddr, const std::string &_database, CommonAPI::CallStatus &_internalCallStatus, int32_t &_errorCode, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> deleteAllItemsAsync(const std::string &_bdAddr, const std::string &_database, DeleteAllItemsAsyncCallback _callback, const CommonAPI::CallInfo *_info);


    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

private:
   

    CommonAPI::DBus::DBusEvent<PIMSYNCSTATUSEvent, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<int32_t, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>> pIMSYNCSTATUS_;
    CommonAPI::DBus::DBusEvent<PimObjectBackGndSyncInfoEvent, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<int32_t, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>> pimObjectBackGndSyncInfo_;
    CommonAPI::DBus::DBusEvent<DatabaseReadyEvent, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<int32_t, CommonAPI::EmptyDeployment>> databaseReady_;
    CommonAPI::DBus::DBusEvent<DatabaseChangedEvent, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<int32_t, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<int32_t, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>> databaseChanged_;
    CommonAPI::DBus::DBusEvent<UnreadMissedCallEvent, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<int32_t, CommonAPI::EmptyDeployment>> unreadMissedCall_;
    CommonAPI::DBus::DBusEvent<NewCallListEvent, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>> newCallList_;
    CommonAPI::DBus::DBusEvent<ConnectedDeviceTableUpdatedEvent, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<int32_t, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<int32_t, CommonAPI::EmptyDeployment>> connectedDeviceTableUpdated_;
    CommonAPI::DBus::DBusEvent<ConnectedBtDeviceEvent, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>> connectedBtDevice_;
    CommonAPI::DBus::DBusEvent<NewSMSEvent, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<int32_t, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<int32_t, CommonAPI::EmptyDeployment>> newSMS_;
    CommonAPI::DBus::DBusEvent<SendSMSNotificationEvent, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<int32_t, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<::v2::com::harman::connectivity::BaseType::smsnotification, CommonAPI::EmptyDeployment>> sendSMSNotification_;

};

} // namespace connectivity
} // namespace harman
} // namespace com
} // namespace v1

#endif // V1_COM_HARMAN_CONNECTIVITY_Phone_Book_DBUS_PROXY_HPP_

