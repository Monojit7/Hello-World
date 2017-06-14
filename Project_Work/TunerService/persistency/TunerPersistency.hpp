#ifndef TUNER_SERVICE_PERSISTENCY_HPP_
#define TUNER_SERVICE_PERSISTENCY_HPP_

/**********************************************************************
 *  Project       JLR NLI
 *  (c) copyright 2013
 *  Company       Harman/Becker Automotive Systems GmbH
 *                All rights reserved
 * Secrecy Level STRICTLY CONFIDENTIAL
 **********************************************************************/

/**
 *  @file         TunerPersistency.hpp
 *  @brief
 *  @author
 *  @ingroup      Tuner Subsystem
 */

/*---------------------------------------------------------------------\
 * Preprocessor Includes
 * \*--------------------------------------------------------------------*/
#define PERSISTENCY_DBUS_NAME "com.harman.service.PersistentKeyValue"
#define PERSISTENCY_DBUS_OBJECT_PATH "/com/harman/service/PersistentKeyValue"

#include <inttypes.h>
#include <vector>
#include "jsoncpp/json.h"
#include <string>
#include "svcipc/svcipc.h"
#include "svcIpcEventHandling/CSvcClientBase.hpp"
#include "svcIpcEventHandling/CSvcImplBase.hpp"
#include "CTunerDataTypes.hpp"
#include <pthread.h>

class CHBTunerPersistency:public CSvcClientBase
{
   /*------------------------------------------------\
    * Public Members
   \*-----------------------------------------------*/
public:

	~CHBTunerPersistency(void){}
   static CHBTunerPersistency *getInstance();
   static void removeInstance();
  // int  writeToPersistency(std::string presets,unsigned int presetType);
   int  writeToPersistency();
   int readFromPersistency(_Uint32t idValue);
   int deleteFromPersistency(unsigned int presetType);

   void processSvcIpcResult( const _Uint32t & resultRegHndl, SVCIPC_tConstStr result, void* pUserData );
   void processSvcIpcError( const _Uint32t & resultRegHndl, SVCIPC_tErrorCode error, SVCIPC_tConstStr errMsg, SVCIPC_tConstStr errName );
   void processSvcIpcNameChange( const _Uint32t & nameChgRegHndl, const CSvcIpcNameChange* pNameChange, void* pUserData );

   static _Uint32t m_readPerDataHandle;
   bool mReadPresetsNotComplete;
   static UINT32 fmFrequency;
   static UINT32 amFrequency;
   static UINT32 count;
   static eInitProgressStatus meInitProgressStatus;
   pthread_mutex_t mAvailBandMSignalmutex;
   /*-----------------------------------------------\
    * Protected Members
   \*----------------------------------------------*/
protected:

   Json::FastWriter  msJsonWriter;
   Json::Reader   msJsonReader;
   SVCIPC_tError rc;
   SVCIPC_tResponse* m_resp; //response
   /*-----------------------------------------------\
    * Private Members
   \*----------------------------------------------*/
private:
   static CHBTunerPersistency *instance;
   static _Uint32t id;
   _Uint32t mValue;
   CHBTunerPersistency()
   {
	   mAvailBandMSignalmutex = PTHREAD_MUTEX_INITIALIZER;
	   mReadPresetsNotComplete = false;
	   m_resp=NULL;
   }



};



#endif /* TUNER_SERVICE_PERSISTENCY_HPP_ */

