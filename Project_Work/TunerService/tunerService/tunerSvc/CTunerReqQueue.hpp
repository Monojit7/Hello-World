#ifndef TUNERREQQUEUE_HPP_
#define TUNERREQQUEUE_HPP_
/*----------------------------------------------------------------------------------------------------------------------
*
* Project Harman Mid Systems - Tuner Service
* (c) copyright 2013
* Company Harman Internation
* All rights reserved
* Secrecy Level STRICTLY CONFIDENTIAL
*
*-----------------------------------------------------------------------------------------------------------------------
*
* @file CTunerServicePendingReqContextQ.hpp
* @ingroup Tunerservice
* @author
* Public API for the Tuner core service library.
*
*---------------------------------------------------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------------------------------------------------
 * Preprocessor Includes
----------------------------------------------------------------------------------------------------------------------*/
#include "CTunerDataTypes.hpp"
#include <sys/neutrino.h>
#include <sys/procmgr.h>
#include <pthread.h>
#include <errno.h>
#include <iostream>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <dirent.h>
#include "svcIpcEventHandling/CSvcIpcEventTypes.hpp"
#include <list>

/*----------------------------------------------------------------------------------------------------------------------
 * Preprocessor Defines
----------------------------------------------------------------------------------------------------------------------*/
using namespace std;

class CTunerReqData
{
public: /*Functions*/
   CTunerReqData();
   
   ~CTunerReqData()
   {

   }

public:
   SVCIPC_tReqContext   mContext;
   SVCIPC_tConstStr     mMethod;
   SVCIPC_tConstStr     mParms;
   SVCIPC_tBool         mNoReplyExpected;
   SVCIPC_tUserToken    mUserToken;
};



class CTunerResHandler
{

public:

	CTunerResHandler();
	~CTunerResHandler();

  static CTunerResHandler* GetInstance(void)
   {
   	  if(NULL == mpInst)
   	  {
   		 mpInst = new CTunerResHandler();
   	  }
   	  return mpInst;
   }

	//BOOL enQueueRequest(CTunerReqData *tunerRequest);
	//BOOL deQueueRequest(INT32 token);
	//BOOL isRequestValid(INT32 token);

     list<CTunerReqData*> tunerRequestQueue;
private:
	 static CTunerResHandler* mpInst;


};
#endif /*TUNERREQQUEUE_HPP_*/

/*--------------------------------- EOF --------------------------------------*/
