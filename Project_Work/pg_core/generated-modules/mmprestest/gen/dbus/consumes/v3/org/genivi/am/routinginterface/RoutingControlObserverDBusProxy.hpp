/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Wed Oct 26 18:16:09 IST 2016
*/
/**
 * description: Routing Receive sendInterface description.
 * author: lian zhang
 */
#ifndef V3_ORG_GENIVI_AM_ROUTINGINTERFACE_Routing_Control_Observer_DBUS_PROXY_HPP_
#define V3_ORG_GENIVI_AM_ROUTINGINTERFACE_Routing_Control_Observer_DBUS_PROXY_HPP_

#include <v3/org/genivi/am/routinginterface/RoutingControlObserverProxyBase.hpp>
#include "v3/org/genivi/am/routinginterface/RoutingControlObserverDBusDeployment.hpp"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusAddress.hpp>
#include <CommonAPI/DBus/DBusFactory.hpp>
#include <CommonAPI/DBus/DBusProxy.hpp>
#include <CommonAPI/DBus/DBusAddressTranslator.hpp>
#include <CommonAPI/DBus/DBusAttribute.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <string>

namespace v3 {
namespace org {
namespace genivi {
namespace am {
namespace routinginterface {

class RoutingControlObserverDBusProxy
    : virtual public RoutingControlObserverProxyBase, 
      virtual public CommonAPI::DBus::DBusProxy {
public:
    RoutingControlObserverDBusProxy(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection);

    virtual ~RoutingControlObserverDBusProxy() { }

    virtual RoutingReadyAttribute& getRoutingReadyAttribute();


    /**
     * description: Registers a domain.
    (at)return E_OK on success, E_ALREADY_EXISTENT if already
     *   registered E_UNKNOWN on error
     */
    virtual void registerDomain(const ::v3::org::genivi::am_t::am_Domain_s &_domainData, const std::string &_returnBusname, const std::string &_returnInterface, CommonAPI::CallStatus &_internalCallStatus, ::v3::org::genivi::am_t::am_domainID_t &_domainID, ::v3::org::genivi::am_t::am_Error_e &_amError, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> registerDomainAsync(const ::v3::org::genivi::am_t::am_Domain_s &_domainData, const std::string &_returnBusname, const std::string &_returnInterface, RegisterDomainAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Deregisters a domain. All sources, sinks, gateways and crossfaders from that
     *   domain will be removed as well.
    (at)return E_OK on success, E_NON_EXISTENT if
     *   not found E_UNKNOWN on error
     */
    virtual void deregisterDomain(const ::v3::org::genivi::am_t::am_domainID_t &_domainID, CommonAPI::CallStatus &_internalCallStatus, ::v3::org::genivi::am_t::am_Error_e &_amError, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> deregisterDomainAsync(const ::v3::org::genivi::am_t::am_domainID_t &_domainID, DeregisterDomainAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: This function returns the ID to the given domain name. If already a domain is
     *   registered with this name, it will return the corresponding ID, if not it will
     *   reserve an ID but not register the domain. The other parameters of the domain
     *   will be overwritten when the domain is registered.
    (at)return E_OK on success,
     *   E_UNKNOWN on error
        please use pulseAudio as the name to peek domainID. now
     *   all the sources and sinks are defined in domain pulseAudio.
     */
    virtual void peekDomain(const std::string &_name, CommonAPI::CallStatus &_internalCallStatus, ::v3::org::genivi::am_t::am_domainID_t &_domainID, ::v3::org::genivi::am_t::am_Error_e &_amError, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> peekDomainAsync(const std::string &_name, PeekDomainAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Registers a sink. If the sink is part of a gateway, the list connection formats
     *   are copied to the gateway information
    (at)return E_OK on success,
     *   E_ALREADY_EXISTENT if already registered E_UNKNOWN on error
     */
    virtual void registerSink(const ::v3::org::genivi::am_t::am_Sink_s &_sinkData, CommonAPI::CallStatus &_internalCallStatus, ::v3::org::genivi::am_t::am_sinkID_t &_sinkID, ::v3::org::genivi::am_t::am_Error_e &_amError, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> registerSinkAsync(const ::v3::org::genivi::am_t::am_Sink_s &_sinkData, RegisterSinkAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Deregisters a sink.
    (at)return E_OK on success, E_NON_EXISTENT if not found
     *   E_UNKNOWN on error
     */
    virtual void deregisterSink(const ::v3::org::genivi::am_t::am_sinkID_t &_sinkID, CommonAPI::CallStatus &_internalCallStatus, ::v3::org::genivi::am_t::am_Error_e &_amError, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> deregisterSinkAsync(const ::v3::org::genivi::am_t::am_sinkID_t &_sinkID, DeregisterSinkAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: This function returns the ID to the given sink name. If already a sink is
     *   registered with this name, it will return the corresponding ID, if not it will
     *   reserve an ID but not register the sink. The other parameters of the sink will
     *   be overwritten when the sink is registered.
    (at)return E_OK on success,
     *   E_UNKNOWN on error
     */
    virtual void peekSink(const std::string &_name, CommonAPI::CallStatus &_internalCallStatus, ::v3::org::genivi::am_t::am_sinkID_t &_sinkID, ::v3::org::genivi::am_t::am_Error_e &_amError, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> peekSinkAsync(const std::string &_name, PeekSinkAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: This function peeks a sink class ID. It is used by the RoutingPlugins to
     *   determine the sink class IDs of a sink class.
    (at)return E_OK on success,
     *   E_DATABASE_ERROR on error
     */
    virtual void peekSinkClassID(const std::string &_name, CommonAPI::CallStatus &_internalCallStatus, ::v3::org::genivi::am_t::am_sinkClass_t &_sinkClassID, ::v3::org::genivi::am_t::am_Error_e &_amError, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> peekSinkClassIDAsync(const std::string &_name, PeekSinkClassIDAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Updates data of a sink.
    (at)return E_OK on success, E_NON_EXISTENT if the sink
     *   ID is not valid.
     */
    virtual void updateSink(const ::v3::org::genivi::am_t::am_sinkID_t &_sinkID, const ::v3::org::genivi::am_t::am_sinkClass_t &_sinkClassID, const ::v3::org::genivi::am_t::am_SoundProperty_L &_listSoundProperties, const ::v3::org::genivi::am_t::am_ConnectionFormat_L &_listConnectionFormats, const ::v3::org::genivi::am_t::am_MainSoundProperty_L &_listMainSoundProperties, CommonAPI::CallStatus &_internalCallStatus, ::v3::org::genivi::am_t::am_Error_e &_amError, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> updateSinkAsync(const ::v3::org::genivi::am_t::am_sinkID_t &_sinkID, const ::v3::org::genivi::am_t::am_sinkClass_t &_sinkClassID, const ::v3::org::genivi::am_t::am_SoundProperty_L &_listSoundProperties, const ::v3::org::genivi::am_t::am_ConnectionFormat_L &_listConnectionFormats, const ::v3::org::genivi::am_t::am_MainSoundProperty_L &_listMainSoundProperties, UpdateSinkAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Registers a source.  If the source is part of a gateway, the list connection
     *   formats are copied to the gateway information
    (at)return E_OK on success,
     *   E_UNKNOWN on error, E_ALREADY_EXIST if either name or source ID already exists
     */
    virtual void registerSource(const ::v3::org::genivi::am_t::am_Source_s &_sourceData, CommonAPI::CallStatus &_internalCallStatus, ::v3::org::genivi::am_t::am_sourceID_t &_sourceID, ::v3::org::genivi::am_t::am_Error_e &_amError, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> registerSourceAsync(const ::v3::org::genivi::am_t::am_Source_s &_sourceData, RegisterSourceAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Deregisters a source.
    (at)return E_OK on success, E_NON_EXISTENT if not found
     *   E_UNKNOWN on error
     */
    virtual void deregisterSource(const ::v3::org::genivi::am_t::am_sourceID_t &_sourceID, CommonAPI::CallStatus &_internalCallStatus, ::v3::org::genivi::am_t::am_Error_e &_amError, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> deregisterSourceAsync(const ::v3::org::genivi::am_t::am_sourceID_t &_sourceID, DeregisterSourceAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: This function returns the ID to the given source name. If already a source is
     *   registered with this name, it will return the corresponding ID, if not it will
     *   reserve an ID but not register the source. The other parameters of the source
     *   will be overwritten when the source is registered.
    (at)return E_OK on success,
     *   E_UNKNOWN on error
     */
    virtual void peekSource(const std::string &_name, CommonAPI::CallStatus &_internalCallStatus, ::v3::org::genivi::am_t::am_sourceID_t &_sourceID, ::v3::org::genivi::am_t::am_Error_e &_amError, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> peekSourceAsync(const std::string &_name, PeekSourceAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Peeks a source class ID. It is used by the RoutingPlugins to determine the
     *   source class IDs of a source class.
    (at)return E_OK on success,
     *   E_DATABASE_ERROR on error
     */
    virtual void peekSourceClassID(const std::string &_name, CommonAPI::CallStatus &_internalCallStatus, ::v3::org::genivi::am_t::am_sourceClass_t &_sourceClassID, ::v3::org::genivi::am_t::am_Error_e &_amError, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> peekSourceClassIDAsync(const std::string &_name, PeekSourceClassIDAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Updates data of a source.
    (at)return E_OK on success, E_NON_EXISTENT if the
     *   source ID in the struct is not valid. 
    Please note that only the following
     *   data out of am_Source_s have effect when they are
     *   changed:
    sourceClassID,
    listSoundProperties,
    listConnectionFormats,
    listMainSou
     *  ndProperties
     */
    virtual void updateSource(const ::v3::org::genivi::am_t::am_sourceID_t &_sourceID, const ::v3::org::genivi::am_t::am_sourceClass_t &_sourceClassID, const ::v3::org::genivi::am_t::am_SoundProperty_L &_listSoundProperties, const ::v3::org::genivi::am_t::am_ConnectionFormat_L &_listConnectionFormats, const ::v3::org::genivi::am_t::am_MainSoundProperty_L &_listMainSoundProperties, CommonAPI::CallStatus &_internalCallStatus, ::v3::org::genivi::am_t::am_Error_e &_amError, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> updateSourceAsync(const ::v3::org::genivi::am_t::am_sourceID_t &_sourceID, const ::v3::org::genivi::am_t::am_sourceClass_t &_sourceClassID, const ::v3::org::genivi::am_t::am_SoundProperty_L &_listSoundProperties, const ::v3::org::genivi::am_t::am_ConnectionFormat_L &_listConnectionFormats, const ::v3::org::genivi::am_t::am_MainSoundProperty_L &_listMainSoundProperties, UpdateSourceAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Is called when a low level interrupt changes it status.
     */
    virtual void hookInterruptStatusChange(const ::v3::org::genivi::am_t::am_sourceID_t &_sourceID, const ::v3::org::genivi::am_t::am_InterruptState_e &_interruptState, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> hookInterruptStatusChangeAsync(const ::v3::org::genivi::am_t::am_sourceID_t &_sourceID, const ::v3::org::genivi::am_t::am_InterruptState_e &_interruptState, HookInterruptStatusChangeAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: This hook is called when all elements from a domain are registered.
    Is used by
     *   the Controller to know when all expected domains are finally registered.
     */
    virtual void hookDomainRegistrationComplete(const ::v3::org::genivi::am_t::am_domainID_t &_domainID, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> hookDomainRegistrationCompleteAsync(const ::v3::org::genivi::am_t::am_domainID_t &_domainID, HookDomainRegistrationCompleteAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Is called when a sink changes its availability.
     */
    virtual void hookSinkAvailablityStatusChange(const ::v3::org::genivi::am_t::am_sinkID_t &_sinkID, const ::v3::org::genivi::am_t::am_Availability_s &_availability, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> hookSinkAvailablityStatusChangeAsync(const ::v3::org::genivi::am_t::am_sinkID_t &_sinkID, const ::v3::org::genivi::am_t::am_Availability_s &_availability, HookSinkAvailablityStatusChangeAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Is called when a source changes its availability.
     */
    virtual void hookSourceAvailablityStatusChange(const ::v3::org::genivi::am_t::am_sourceID_t &_sourceID, const ::v3::org::genivi::am_t::am_Availability_s &_availability, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> hookSourceAvailablityStatusChangeAsync(const ::v3::org::genivi::am_t::am_sourceID_t &_sourceID, const ::v3::org::genivi::am_t::am_Availability_s &_availability, HookSourceAvailablityStatusChangeAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Is called when a domain changes its status. This used for early domains only.
     */
    virtual void hookDomainStateChange(const ::v3::org::genivi::am_t::am_domainID_t &_domainID, const ::v3::org::genivi::am_t::am_DomainState_e &_domainState, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> hookDomainStateChangeAsync(const ::v3::org::genivi::am_t::am_domainID_t &_domainID, const ::v3::org::genivi::am_t::am_DomainState_e &_domainState, HookDomainStateChangeAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: This function is used to send out all data that has been changed in an early
     *   state.
     */
    virtual void sendChangedData(const ::v3::org::genivi::am_t::am_EarlyData_L &_earlyData, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> sendChangedDataAsync(const ::v3::org::genivi::am_t::am_EarlyData_L &_earlyData, SendChangedDataAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: This function send parameters of limiter. If there is no error it will return
     *   0. If not it will return -1.
     */
    virtual void sendLimiter(const ::v3::org::genivi::am_t::hq_limiterStruct_param &_limiter, CommonAPI::CallStatus &_internalCallStatus, ::v3::org::genivi::am_t::am_Error_e &_hqError, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> sendLimiterAsync(const ::v3::org::genivi::am_t::hq_limiterStruct_param &_limiter, SendLimiterAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: This function send parameters of EQ filter. If there is no error it will return
     *   0. If not it will return -1.
     */
    virtual void sendEQFilter(const ::v3::org::genivi::am_t::hq_eqFilterStruct_param &_bsFilter, CommonAPI::CallStatus &_internalCallStatus, ::v3::org::genivi::am_t::am_Error_e &_qhError, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> sendEQFilterAsync(const ::v3::org::genivi::am_t::hq_eqFilterStruct_param &_bsFilter, SendEQFilterAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: This function send parameters of delay time. If there is no error it will
     *   return 0. If not it will return -1.
     */
    virtual void sendDelayTime(const ::v3::org::genivi::am_t::hq_delayTimeStruct_param &_delayTime, CommonAPI::CallStatus &_internalCallStatus, ::v3::org::genivi::am_t::am_Error_e &_qhError, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> sendDelayTimeAsync(const ::v3::org::genivi::am_t::hq_delayTimeStruct_param &_delayTime, SendDelayTimeAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: This function send parameters of loudness. If there is no error it will return
     *   0. If not it will return -1.
     */
    virtual void sendLoudness(const ::v3::org::genivi::am_t::hq_londnessStruct_param &_bs, CommonAPI::CallStatus &_internalCallStatus, ::v3::org::genivi::am_t::am_Error_e &_qhError, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> sendLoudnessAsync(const ::v3::org::genivi::am_t::hq_londnessStruct_param &_bs, SendLoudnessAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: This function send parameters of channel gain. If there is no error it will
     *   return 0. If not it will return -1.
     */
    virtual void sendChannelGain(const ::v3::org::genivi::am_t::hq_channelGainStruct_param &_bs, CommonAPI::CallStatus &_internalCallStatus, ::v3::org::genivi::am_t::am_Error_e &_qhError, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> sendChannelGainAsync(const ::v3::org::genivi::am_t::hq_channelGainStruct_param &_bs, SendChannelGainAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: This function send parameters of maximum volume of source. If there is no error
     *   it will return 0. If not it will return -1.
     */
    virtual void sendVolumeMax(const ::v3::org::genivi::am_t::hq_sourceID_t &_sourceID, const ::v3::org::genivi::am_t::hq_volume_t &_volume, CommonAPI::CallStatus &_internalCallStatus, ::v3::org::genivi::am_t::am_Error_e &_qhError, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> sendVolumeMaxAsync(const ::v3::org::genivi::am_t::hq_sourceID_t &_sourceID, const ::v3::org::genivi::am_t::hq_volume_t &_volume, SendVolumeMaxAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: This function send parameters of minimum volume of source. If there is no error
     *   it will return 0. If not it will return -1.
     */
    virtual void sendVolumeMin(const ::v3::org::genivi::am_t::hq_sourceID_t &_sourceID, const ::v3::org::genivi::am_t::hq_volume_t &_volume, CommonAPI::CallStatus &_internalCallStatus, ::v3::org::genivi::am_t::am_Error_e &_qhError, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> sendVolumeMinAsync(const ::v3::org::genivi::am_t::hq_sourceID_t &_sourceID, const ::v3::org::genivi::am_t::hq_volume_t &_volume, SendVolumeMinAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: This function send parameters of absolute volume of source. If there is no
     *   error it will return 0. If not it will return -1.
     */
    virtual void sendVolumeAbs(const ::v3::org::genivi::am_t::hq_sourceID_t &_sourceID, const ::v3::org::genivi::am_t::hq_volume_t &_volume, CommonAPI::CallStatus &_internalCallStatus, ::v3::org::genivi::am_t::am_Error_e &_qhError, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> sendVolumeAbsAsync(const ::v3::org::genivi::am_t::hq_sourceID_t &_sourceID, const ::v3::org::genivi::am_t::hq_volume_t &_volume, SendVolumeAbsAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: This function send parameters of ratio volume of source. If there is no error
     *   it will return 0. If not it will return -1.
     */
    virtual void sendVolumeRatio(const ::v3::org::genivi::am_t::hq_sourceID_t &_sourceID, const ::v3::org::genivi::am_t::hq_volume_t &_volume, CommonAPI::CallStatus &_internalCallStatus, ::v3::org::genivi::am_t::am_Error_e &_qhError, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> sendVolumeRatioAsync(const ::v3::org::genivi::am_t::hq_sourceID_t &_sourceID, const ::v3::org::genivi::am_t::hq_volume_t &_volume, SendVolumeRatioAsyncCallback _callback, const CommonAPI::CallInfo *_info);


    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

private:
   
    class DBusroutingReady_Attribute : public CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<RoutingReadyAttribute>> {
    public:
    template <typename... _A>
    	DBusroutingReady_Attribute(DBusProxy &_proxy,
    		_A ... arguments)
    		: CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<RoutingReadyAttribute>>(
    			_proxy, arguments...) {}
    };
    DBusroutingReady_Attribute routingReady_;


};

} // namespace routinginterface
} // namespace am
} // namespace genivi
} // namespace org
} // namespace v3

#endif // V3_ORG_GENIVI_AM_ROUTINGINTERFACE_Routing_Control_Observer_DBUS_PROXY_HPP_

