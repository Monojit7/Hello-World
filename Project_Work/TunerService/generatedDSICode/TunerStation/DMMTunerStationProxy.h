#ifndef DMMTUNERSTATIONPROXY_H
#define DMMTUNERSTATIONPROXY_H
/**********************************************************************
 *  Project       Harman Car Multimedia System
 *  (c) copyright 2015
 *  Company       Harman/Becker Automotive Systems GmbH
 *                All rights reserved
 **********************************************************************/

/*
 * Generated by DSI Generator version 2.0
 * Date: 20.5.2015
 */


#include "DMMTunerStation.h"

#ifndef TDMMTunerStationProxy
#   define TDMMTunerStationProxy struct _DMMTunerStationProxy
#endif

DSI_EXTERN_C_BEGIN

/*
 * Only the DSI framework is allowed to modify the attributes.
 * For the user of the proxy the attributes are constant!
 */
#ifndef DSICONST
#ifdef __cplusplus
   #define DSICONST
#else
   #define DSICONST const
#endif
#endif

/**
 * DSI Stub: DMMTunerStation
 *
 * Tuner generic and project independent station interface. This interface provides information about the current station, the available station lists, and gives the possibilty to tune or select the current station.
 */

typedef struct _DMMTunerStationProxy
{
   /* DSICONST */ DSIClient client ;




   /**
    * Information about the currently active station.
    */
   void (*fnInformationCurrentStation)( TDMMTunerStationProxy* proxy, const DMMTunerStation_Station* current,  unsigned int handle );

   /**
    * Station list information.
    */
   void (*fnInformationStationList)( TDMMTunerStationProxy* proxy, const DMMTunerStation_StationList* list,  unsigned int handle );

   /**
    * Seek information sent during an active search.
    */
   void (*fnInformationSeek)( TDMMTunerStationProxy* proxy, const DMMTunerStation_SeekData* seekData,  unsigned int handle );

   /**
    * Result of startTune request. This response is only sent if handle of startTune is not equal to zero (notifcation has to be set explicitly).
    */
   void (*fnResponseStartTune)( TDMMTunerStationProxy* proxy,  unsigned int handle,  DMMTunerTypes_Feedback feedback );

   /**
    * Result of abortTune request. This response is only sent if handle of abortTune is not equal to zero (notifcation has to be set explicitly).
    */
   void (*fnResponseAbortTune)( TDMMTunerStationProxy* proxy,  unsigned int handle,  DMMTunerTypes_Feedback feedback );

   /**
    * Result of controlSeek request. This response is only sent if handle of controlSeek is not equal to zero (notifcation has to be set explicitly).
    */
   void (*fnResponseControlSeek)( TDMMTunerStationProxy* proxy,  unsigned int handle,  DMMTunerTypes_Feedback feedback );

   /**
    * Result of makePersistent request. This response is only sent if handle of controlSeek is not equal to zero (notifcation has to be set explicitly).
    */
   void (*fnResponseMakePersistent)( TDMMTunerStationProxy* proxy,  unsigned int handle,  DMMTunerTypes_Feedback feedback );

   /**
    * DESCRIPTION MISSING
    */
   void (*fnResponseForceUpdate)( TDMMTunerStationProxy* proxy,  unsigned int handle,  DMMTunerTypes_Feedback feedback );

   /**
    * Request failure indicator for request @c DMMTunerStation_StartTune.
    * The @c DMMTunerStationSendError function was called on the stub side within a response handler with
    * a request id as argument.
    *
    * @param errType Can be either RESULT_REQUEST_ERROR or RESULT_REQUEST_BUSY.
    */
   void (*fnRequestStartTuneFailed)( TDMMTunerStationProxy* proxy, DSIResultType errType );

   /**
    * Request failure indicator for request @c DMMTunerStation_ControlSeek.
    * The @c DMMTunerStationSendError function was called on the stub side within a response handler with
    * a request id as argument.
    *
    * @param errType Can be either RESULT_REQUEST_ERROR or RESULT_REQUEST_BUSY.
    */
   void (*fnRequestControlSeekFailed)( TDMMTunerStationProxy* proxy, DSIResultType errType );

   /**
    * Request failure indicator for request @c DMMTunerStation_AbortTune.
    * The @c DMMTunerStationSendError function was called on the stub side within a response handler with
    * a request id as argument.
    *
    * @param errType Can be either RESULT_REQUEST_ERROR or RESULT_REQUEST_BUSY.
    */
   void (*fnRequestAbortTuneFailed)( TDMMTunerStationProxy* proxy, DSIResultType errType );

   /**
    * Request failure indicator for request @c DMMTunerStation_ForceUpdate.
    * The @c DMMTunerStationSendError function was called on the stub side within a response handler with
    * a request id as argument.
    *
    * @param errType Can be either RESULT_REQUEST_ERROR or RESULT_REQUEST_BUSY.
    */
   void (*fnRequestForceUpdateFailed)( TDMMTunerStationProxy* proxy, DSIResultType errType );

   /**
    * Request failure indicator for request @c DMMTunerStation_MakePersistent.
    * The @c DMMTunerStationSendError function was called on the stub side within a response handler with
    * a request id as argument.
    *
    * @param errType Can be either RESULT_REQUEST_ERROR or RESULT_REQUEST_BUSY.
    */
   void (*fnRequestMakePersistentFailed)( TDMMTunerStationProxy* proxy, DSIResultType errType );

   /**
    * The @c DMMTunerStationSendError function was called on the stub side within a response handler
    * with a response id as argument.
    *
    * @param id The element which caused the error.
    */
   void (*fnResponseInvalid)( TDMMTunerStationProxy* proxy, DMMTunerStation_UpdateIdEnum id );

   /**
    * Called when the server connected to the proxy
    */
   void (*fnComponentConnected)( TDMMTunerStationProxy* proxy );

   /**
    * Called when the server disconnects from the proxy
    */
   void (*fnComponentDisconnected)( TDMMTunerStationProxy* proxy );

   /**
    * Called when an update event occurs.
    */
   void (*fnProcessUpdateEvent) ( TDMMTunerStationProxy* proxy, DMMTunerStation_UpdateIdEnum updateId ) ;

   /**
    * Called when the proxy received an internal event
    */
   void (*fnProcessInternalEvent) ( TDMMTunerStationProxy* proxy, int id, void* data ) ;

   /**
    * Called right before the proxy thread ends
    */
   void (*fnCleanup) ( TDMMTunerStationProxy* proxy ) ;

} DMMTunerStationProxy ;

/**
 * Starts tuning a frequency or selecting a station.
 */
int DMMTunerStation_RequestStartTune( TDMMTunerStationProxy* proxy, const DMMTunerTypes_StationSelector* station,  unsigned int handle,  DMMTunerStation_SelectionMode selectionMode );



/**
 * Starts/Stops a seek process
 */
int DMMTunerStation_RequestControlSeek( TDMMTunerStationProxy* proxy,  DMMTunerTypes_DeviceType device,  DMMTunerStation_SeekMode seekMode,  unsigned int genre,  unsigned int flags,  unsigned int handle );



/**
 * Aborts a running tune or station selection process
 */
int DMMTunerStation_RequestAbortTune( TDMMTunerStationProxy* proxy,  DMMTunerTypes_DeviceType device,  unsigned int handle );



/**
 * Request explicit update of currentStation or stationList information. E.g. necessary after startup.
 */
int DMMTunerStation_RequestForceUpdate( TDMMTunerStationProxy* proxy,  unsigned int updateId,  unsigned int sourceType,  unsigned int stationType,  unsigned int handle );



/**
 * Note: Only relevant if a key/tag is part of the ID vector. 
 * Make selector mapping (tag/key -> frequency, IDs) persistent and available even if station is not available any more.
 */
int DMMTunerStation_RequestMakePersistent( TDMMTunerStationProxy* proxy, const DMMTunerTypes_StationSelector* station,  DSIBool persistent,  unsigned int handle );





/* -------------------------------------------------------------------------------
 *  notifications
 * ------------------------------------------------------------------------------- */

void DMMTunerStationProxy_SetNotification( TDMMTunerStationProxy* proxy, DMMTunerStation_UpdateIdEnum updateId );
void DMMTunerStationProxy_ClearNotification( TDMMTunerStationProxy* proxy, DMMTunerStation_UpdateIdEnum updateId );
void DMMTunerStationProxy_ClearAllNotifications( TDMMTunerStationProxy* proxy );


/* -------------------------------------------------------------------------------
 *  (de)initialization
 * ------------------------------------------------------------------------------- */

int DMMTunerStationProxy_Init( TDMMTunerStationProxy* proxy, const char* rolename );
void DMMTunerStationProxy_Free( TDMMTunerStationProxy* proxy  );

int DMMTunerStationProxy_Start( TDMMTunerStationProxy* proxy, const char* rolename );
int DMMTunerStationProxy_Stop( TDMMTunerStationProxy* proxy, int exitcode );

int DMMTunerStationProxy_PostInternalEvent( TDMMTunerStationProxy* proxy, int code, void* data );
int DMMTunerStationProxy_SendInternalEvent( TDMMTunerStationProxy* proxy, int code, void* data );


DSI_EXTERN_C_END

#endif // DMMTUNERSTATIONPROXY_H