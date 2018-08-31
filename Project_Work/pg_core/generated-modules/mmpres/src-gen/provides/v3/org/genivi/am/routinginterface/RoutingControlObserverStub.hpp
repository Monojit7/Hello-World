/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Wed Oct 26 18:16:09 IST 2016
*/
/**
 * description: Routing Receive sendInterface description.
 * author: lian zhang
 */
#ifndef V3_ORG_GENIVI_AM_ROUTINGINTERFACE_Routing_Control_Observer_STUB_HPP_
#define V3_ORG_GENIVI_AM_ROUTINGINTERFACE_Routing_Control_Observer_STUB_HPP_

#include <functional>



#include <v3/org/genivi/am_t.hpp>

#include <v3/org/genivi/am/routinginterface/RoutingControlObserver.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/Deployment.hpp>
#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <CommonAPI/Struct.hpp>
#include <cstdint>
#include <string>
#include <vector>

#include <CommonAPI/Stub.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v3 {
namespace org {
namespace genivi {
namespace am {
namespace routinginterface {

/**
 * Receives messages from remote and handles all dispatching of deserialized calls
 * to a stub for the service RoutingControlObserver. Also provides means to send broadcasts
 * and attribute-changed-notifications of observable attributes as defined by this service.
 * An application developer should not need to bother with this class.
 */
class RoutingControlObserverStubAdapter
    : public virtual CommonAPI::StubAdapter, 
      public virtual RoutingControlObserver {
 public:
    ///Notifies all remote listeners about a change of value of the attribute routingReady.
    virtual void fireRoutingReadyAttributeChanged(const ::v3::org::genivi::am_t::am_RoutingReady_e& routingReady) = 0;



    virtual void deactivateManagedInstances() = 0;
protected:
    /**
     * Defines properties for storing the ClientIds of clients / proxies that have
     * subscribed to the selective broadcasts
     */
};

/**
 * Defines the necessary callbacks to handle remote set events related to the attributes
 * defined in the IDL description for RoutingControlObserver.
 * For each attribute two callbacks are defined:
 * - a verification callback that allows to verify the requested value and to prevent setting
 *   e.g. an invalid value ("onRemoteSet<AttributeName>").
 * - an action callback to do local work after the attribute value has been changed
 *   ("onRemote<AttributeName>Changed").
 *
 * This class and the one below are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class RoutingControlObserverStubRemoteEvent
{
public:
    virtual ~RoutingControlObserverStubRemoteEvent() { }

};

/**
 * Defines the interface that must be implemented by any class that should provide
 * the service RoutingControlObserver to remote clients.
 * This class and the one above are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class RoutingControlObserverStub
    : public virtual CommonAPI::Stub<RoutingControlObserverStubAdapter, RoutingControlObserverStubRemoteEvent>
{
public:
    typedef std::function<void (::v3::org::genivi::am_t::am_domainID_t _domainID, ::v3::org::genivi::am_t::am_Error_e _amError)>registerDomainReply_t;
    typedef std::function<void (::v3::org::genivi::am_t::am_Error_e _amError)>deregisterDomainReply_t;
    typedef std::function<void (::v3::org::genivi::am_t::am_domainID_t _domainID, ::v3::org::genivi::am_t::am_Error_e _amError)>peekDomainReply_t;
    typedef std::function<void (::v3::org::genivi::am_t::am_sinkID_t _sinkID, ::v3::org::genivi::am_t::am_Error_e _amError)>registerSinkReply_t;
    typedef std::function<void (::v3::org::genivi::am_t::am_Error_e _amError)>deregisterSinkReply_t;
    typedef std::function<void (::v3::org::genivi::am_t::am_sinkID_t _sinkID, ::v3::org::genivi::am_t::am_Error_e _amError)>peekSinkReply_t;
    typedef std::function<void (::v3::org::genivi::am_t::am_sinkClass_t _sinkClassID, ::v3::org::genivi::am_t::am_Error_e _amError)>peekSinkClassIDReply_t;
    typedef std::function<void (::v3::org::genivi::am_t::am_Error_e _amError)>updateSinkReply_t;
    typedef std::function<void (::v3::org::genivi::am_t::am_sourceID_t _sourceID, ::v3::org::genivi::am_t::am_Error_e _amError)>registerSourceReply_t;
    typedef std::function<void (::v3::org::genivi::am_t::am_Error_e _amError)>deregisterSourceReply_t;
    typedef std::function<void (::v3::org::genivi::am_t::am_sourceID_t _sourceID, ::v3::org::genivi::am_t::am_Error_e _amError)>peekSourceReply_t;
    typedef std::function<void (::v3::org::genivi::am_t::am_sourceClass_t _sourceClassID, ::v3::org::genivi::am_t::am_Error_e _amError)>peekSourceClassIDReply_t;
    typedef std::function<void (::v3::org::genivi::am_t::am_Error_e _amError)>updateSourceReply_t;
    typedef std::function<void ()>hookInterruptStatusChangeReply_t;
    typedef std::function<void ()>hookDomainRegistrationCompleteReply_t;
    typedef std::function<void ()>hookSinkAvailablityStatusChangeReply_t;
    typedef std::function<void ()>hookSourceAvailablityStatusChangeReply_t;
    typedef std::function<void ()>hookDomainStateChangeReply_t;
    typedef std::function<void ()>sendChangedDataReply_t;
    typedef std::function<void (::v3::org::genivi::am_t::am_Error_e _hqError)>sendLimiterReply_t;
    typedef std::function<void (::v3::org::genivi::am_t::am_Error_e _qhError)>sendEQFilterReply_t;
    typedef std::function<void (::v3::org::genivi::am_t::am_Error_e _qhError)>sendDelayTimeReply_t;
    typedef std::function<void (::v3::org::genivi::am_t::am_Error_e _qhError)>sendLoudnessReply_t;
    typedef std::function<void (::v3::org::genivi::am_t::am_Error_e _qhError)>sendChannelGainReply_t;
    typedef std::function<void (::v3::org::genivi::am_t::am_Error_e _qhError)>sendVolumeMaxReply_t;
    typedef std::function<void (::v3::org::genivi::am_t::am_Error_e _qhError)>sendVolumeMinReply_t;
    typedef std::function<void (::v3::org::genivi::am_t::am_Error_e _qhError)>sendVolumeAbsReply_t;
    typedef std::function<void (::v3::org::genivi::am_t::am_Error_e _qhError)>sendVolumeRatioReply_t;

    virtual ~RoutingControlObserverStub() {}
    virtual const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> clientId) = 0;

    /**
     * description: This attribute signals the current routing state to the clients.
    A client
     *   should notify himself to this attribute in order to know the current state and
     *   act accordingly.
     */
    /// Provides getter access to the attribute routingReady
    virtual const ::v3::org::genivi::am_t::am_RoutingReady_e &getRoutingReadyAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) = 0;

    /**
     * description: Registers a domain.
    (at)return E_OK on success, E_ALREADY_EXISTENT if already
     *   registered E_UNKNOWN on error
     */
    /// This is the method that will be called on remote calls on the method registerDomain.
    virtual void registerDomain(const std::shared_ptr<CommonAPI::ClientId> _client, ::v3::org::genivi::am_t::am_Domain_s _domainData, std::string _returnBusname, std::string _returnInterface, registerDomainReply_t _reply) = 0;
    /**
     * description: Deregisters a domain. All sources, sinks, gateways and crossfaders from that
     *   domain will be removed as well.
    (at)return E_OK on success, E_NON_EXISTENT if
     *   not found E_UNKNOWN on error
     */
    /// This is the method that will be called on remote calls on the method deregisterDomain.
    virtual void deregisterDomain(const std::shared_ptr<CommonAPI::ClientId> _client, ::v3::org::genivi::am_t::am_domainID_t _domainID, deregisterDomainReply_t _reply) = 0;
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
    /// This is the method that will be called on remote calls on the method peekDomain.
    virtual void peekDomain(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _name, peekDomainReply_t _reply) = 0;
    /**
     * description: Registers a sink. If the sink is part of a gateway, the list connection formats
     *   are copied to the gateway information
    (at)return E_OK on success,
     *   E_ALREADY_EXISTENT if already registered E_UNKNOWN on error
     */
    /// This is the method that will be called on remote calls on the method registerSink.
    virtual void registerSink(const std::shared_ptr<CommonAPI::ClientId> _client, ::v3::org::genivi::am_t::am_Sink_s _sinkData, registerSinkReply_t _reply) = 0;
    /**
     * description: Deregisters a sink.
    (at)return E_OK on success, E_NON_EXISTENT if not found
     *   E_UNKNOWN on error
     */
    /// This is the method that will be called on remote calls on the method deregisterSink.
    virtual void deregisterSink(const std::shared_ptr<CommonAPI::ClientId> _client, ::v3::org::genivi::am_t::am_sinkID_t _sinkID, deregisterSinkReply_t _reply) = 0;
    /**
     * description: This function returns the ID to the given sink name. If already a sink is
     *   registered with this name, it will return the corresponding ID, if not it will
     *   reserve an ID but not register the sink. The other parameters of the sink will
     *   be overwritten when the sink is registered.
    (at)return E_OK on success,
     *   E_UNKNOWN on error
     */
    /// This is the method that will be called on remote calls on the method peekSink.
    virtual void peekSink(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _name, peekSinkReply_t _reply) = 0;
    /**
     * description: This function peeks a sink class ID. It is used by the RoutingPlugins to
     *   determine the sink class IDs of a sink class.
    (at)return E_OK on success,
     *   E_DATABASE_ERROR on error
     */
    /// This is the method that will be called on remote calls on the method peekSinkClassID.
    virtual void peekSinkClassID(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _name, peekSinkClassIDReply_t _reply) = 0;
    /**
     * description: Updates data of a sink.
    (at)return E_OK on success, E_NON_EXISTENT if the sink
     *   ID is not valid.
     */
    /// This is the method that will be called on remote calls on the method updateSink.
    virtual void updateSink(const std::shared_ptr<CommonAPI::ClientId> _client, ::v3::org::genivi::am_t::am_sinkID_t _sinkID, ::v3::org::genivi::am_t::am_sinkClass_t _sinkClassID, ::v3::org::genivi::am_t::am_SoundProperty_L _listSoundProperties, ::v3::org::genivi::am_t::am_ConnectionFormat_L _listConnectionFormats, ::v3::org::genivi::am_t::am_MainSoundProperty_L _listMainSoundProperties, updateSinkReply_t _reply) = 0;
    /**
     * description: Registers a source.  If the source is part of a gateway, the list connection
     *   formats are copied to the gateway information
    (at)return E_OK on success,
     *   E_UNKNOWN on error, E_ALREADY_EXIST if either name or source ID already exists
     */
    /// This is the method that will be called on remote calls on the method registerSource.
    virtual void registerSource(const std::shared_ptr<CommonAPI::ClientId> _client, ::v3::org::genivi::am_t::am_Source_s _sourceData, registerSourceReply_t _reply) = 0;
    /**
     * description: Deregisters a source.
    (at)return E_OK on success, E_NON_EXISTENT if not found
     *   E_UNKNOWN on error
     */
    /// This is the method that will be called on remote calls on the method deregisterSource.
    virtual void deregisterSource(const std::shared_ptr<CommonAPI::ClientId> _client, ::v3::org::genivi::am_t::am_sourceID_t _sourceID, deregisterSourceReply_t _reply) = 0;
    /**
     * description: This function returns the ID to the given source name. If already a source is
     *   registered with this name, it will return the corresponding ID, if not it will
     *   reserve an ID but not register the source. The other parameters of the source
     *   will be overwritten when the source is registered.
    (at)return E_OK on success,
     *   E_UNKNOWN on error
     */
    /// This is the method that will be called on remote calls on the method peekSource.
    virtual void peekSource(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _name, peekSourceReply_t _reply) = 0;
    /**
     * description: Peeks a source class ID. It is used by the RoutingPlugins to determine the
     *   source class IDs of a source class.
    (at)return E_OK on success,
     *   E_DATABASE_ERROR on error
     */
    /// This is the method that will be called on remote calls on the method peekSourceClassID.
    virtual void peekSourceClassID(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _name, peekSourceClassIDReply_t _reply) = 0;
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
    /// This is the method that will be called on remote calls on the method updateSource.
    virtual void updateSource(const std::shared_ptr<CommonAPI::ClientId> _client, ::v3::org::genivi::am_t::am_sourceID_t _sourceID, ::v3::org::genivi::am_t::am_sourceClass_t _sourceClassID, ::v3::org::genivi::am_t::am_SoundProperty_L _listSoundProperties, ::v3::org::genivi::am_t::am_ConnectionFormat_L _listConnectionFormats, ::v3::org::genivi::am_t::am_MainSoundProperty_L _listMainSoundProperties, updateSourceReply_t _reply) = 0;
    /**
     * description: Is called when a low level interrupt changes it status.
     */
    /// This is the method that will be called on remote calls on the method hookInterruptStatusChange.
    virtual void hookInterruptStatusChange(const std::shared_ptr<CommonAPI::ClientId> _client, ::v3::org::genivi::am_t::am_sourceID_t _sourceID, ::v3::org::genivi::am_t::am_InterruptState_e _interruptState, hookInterruptStatusChangeReply_t _reply) = 0;
    /**
     * description: This hook is called when all elements from a domain are registered.
    Is used by
     *   the Controller to know when all expected domains are finally registered.
     */
    /// This is the method that will be called on remote calls on the method hookDomainRegistrationComplete.
    virtual void hookDomainRegistrationComplete(const std::shared_ptr<CommonAPI::ClientId> _client, ::v3::org::genivi::am_t::am_domainID_t _domainID, hookDomainRegistrationCompleteReply_t _reply) = 0;
    /**
     * description: Is called when a sink changes its availability.
     */
    /// This is the method that will be called on remote calls on the method hookSinkAvailablityStatusChange.
    virtual void hookSinkAvailablityStatusChange(const std::shared_ptr<CommonAPI::ClientId> _client, ::v3::org::genivi::am_t::am_sinkID_t _sinkID, ::v3::org::genivi::am_t::am_Availability_s _availability, hookSinkAvailablityStatusChangeReply_t _reply) = 0;
    /**
     * description: Is called when a source changes its availability.
     */
    /// This is the method that will be called on remote calls on the method hookSourceAvailablityStatusChange.
    virtual void hookSourceAvailablityStatusChange(const std::shared_ptr<CommonAPI::ClientId> _client, ::v3::org::genivi::am_t::am_sourceID_t _sourceID, ::v3::org::genivi::am_t::am_Availability_s _availability, hookSourceAvailablityStatusChangeReply_t _reply) = 0;
    /**
     * description: Is called when a domain changes its status. This used for early domains only.
     */
    /// This is the method that will be called on remote calls on the method hookDomainStateChange.
    virtual void hookDomainStateChange(const std::shared_ptr<CommonAPI::ClientId> _client, ::v3::org::genivi::am_t::am_domainID_t _domainID, ::v3::org::genivi::am_t::am_DomainState_e _domainState, hookDomainStateChangeReply_t _reply) = 0;
    /**
     * description: This function is used to send out all data that has been changed in an early
     *   state.
     */
    /// This is the method that will be called on remote calls on the method sendChangedData.
    virtual void sendChangedData(const std::shared_ptr<CommonAPI::ClientId> _client, ::v3::org::genivi::am_t::am_EarlyData_L _earlyData, sendChangedDataReply_t _reply) = 0;
    /**
     * description: This function send parameters of limiter. If there is no error it will return
     *   0. If not it will return -1.
     */
    /// This is the method that will be called on remote calls on the method sendLimiter.
    virtual void sendLimiter(const std::shared_ptr<CommonAPI::ClientId> _client, ::v3::org::genivi::am_t::hq_limiterStruct_param _limiter, sendLimiterReply_t _reply) = 0;
    /**
     * description: This function send parameters of EQ filter. If there is no error it will return
     *   0. If not it will return -1.
     */
    /// This is the method that will be called on remote calls on the method sendEQFilter.
    virtual void sendEQFilter(const std::shared_ptr<CommonAPI::ClientId> _client, ::v3::org::genivi::am_t::hq_eqFilterStruct_param _bsFilter, sendEQFilterReply_t _reply) = 0;
    /**
     * description: This function send parameters of delay time. If there is no error it will
     *   return 0. If not it will return -1.
     */
    /// This is the method that will be called on remote calls on the method sendDelayTime.
    virtual void sendDelayTime(const std::shared_ptr<CommonAPI::ClientId> _client, ::v3::org::genivi::am_t::hq_delayTimeStruct_param _delayTime, sendDelayTimeReply_t _reply) = 0;
    /**
     * description: This function send parameters of loudness. If there is no error it will return
     *   0. If not it will return -1.
     */
    /// This is the method that will be called on remote calls on the method sendLoudness.
    virtual void sendLoudness(const std::shared_ptr<CommonAPI::ClientId> _client, ::v3::org::genivi::am_t::hq_londnessStruct_param _bs, sendLoudnessReply_t _reply) = 0;
    /**
     * description: This function send parameters of channel gain. If there is no error it will
     *   return 0. If not it will return -1.
     */
    /// This is the method that will be called on remote calls on the method sendChannelGain.
    virtual void sendChannelGain(const std::shared_ptr<CommonAPI::ClientId> _client, ::v3::org::genivi::am_t::hq_channelGainStruct_param _bs, sendChannelGainReply_t _reply) = 0;
    /**
     * description: This function send parameters of maximum volume of source. If there is no error
     *   it will return 0. If not it will return -1.
     */
    /// This is the method that will be called on remote calls on the method sendVolumeMax.
    virtual void sendVolumeMax(const std::shared_ptr<CommonAPI::ClientId> _client, ::v3::org::genivi::am_t::hq_sourceID_t _sourceID, ::v3::org::genivi::am_t::hq_volume_t _volume, sendVolumeMaxReply_t _reply) = 0;
    /**
     * description: This function send parameters of minimum volume of source. If there is no error
     *   it will return 0. If not it will return -1.
     */
    /// This is the method that will be called on remote calls on the method sendVolumeMin.
    virtual void sendVolumeMin(const std::shared_ptr<CommonAPI::ClientId> _client, ::v3::org::genivi::am_t::hq_sourceID_t _sourceID, ::v3::org::genivi::am_t::hq_volume_t _volume, sendVolumeMinReply_t _reply) = 0;
    /**
     * description: This function send parameters of absolute volume of source. If there is no
     *   error it will return 0. If not it will return -1.
     */
    /// This is the method that will be called on remote calls on the method sendVolumeAbs.
    virtual void sendVolumeAbs(const std::shared_ptr<CommonAPI::ClientId> _client, ::v3::org::genivi::am_t::hq_sourceID_t _sourceID, ::v3::org::genivi::am_t::hq_volume_t _volume, sendVolumeAbsReply_t _reply) = 0;
    /**
     * description: This function send parameters of ratio volume of source. If there is no error
     *   it will return 0. If not it will return -1.
     */
    /// This is the method that will be called on remote calls on the method sendVolumeRatio.
    virtual void sendVolumeRatio(const std::shared_ptr<CommonAPI::ClientId> _client, ::v3::org::genivi::am_t::hq_sourceID_t _sourceID, ::v3::org::genivi::am_t::hq_volume_t _volume, sendVolumeRatioReply_t _reply) = 0;

    using CommonAPI::Stub<RoutingControlObserverStubAdapter, RoutingControlObserverStubRemoteEvent>::initStubAdapter;
    typedef CommonAPI::Stub<RoutingControlObserverStubAdapter, RoutingControlObserverStubRemoteEvent>::StubAdapterType StubAdapterType;
    typedef CommonAPI::Stub<RoutingControlObserverStubAdapter, RoutingControlObserverStubRemoteEvent>::RemoteEventHandlerType RemoteEventHandlerType;
    typedef RoutingControlObserverStubRemoteEvent RemoteEventType;
    typedef RoutingControlObserver StubInterface;
};

} // namespace routinginterface
} // namespace am
} // namespace genivi
} // namespace org
} // namespace v3


// Compatibility
namespace v3_5 = v3;

#endif // V3_ORG_GENIVI_AM_ROUTINGINTERFACE_Routing_Control_Observer_STUB_HPP_
