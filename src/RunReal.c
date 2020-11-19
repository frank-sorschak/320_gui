/* Y o u r   D e s c r i p t i o n                       */
/*                            AppBuilder Photon Code Lib */
/*                                         Version 2.03  */

/* Standard headers */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include <sys/neutrino.h>
#include <pthread.h>
#include <sched.h>
#include <unistd.h>

/* Local headers */
#include "ablibs.h"
#include "abimport.h"
#include "proto.h"

#include "dataProcess.h"

pthread_t dataProcessThread;


int
RunReal( PtWidget_t *widget, ApInfo_t *apinfo, PtCallbackInfo_t *cbinfo )

	{

	/* eliminate 'unreferenced' warnings */
	widget = widget, apinfo = apinfo, cbinfo = cbinfo;

	int milisToRefresh = 1000;

	//start thread here, then initialize the timer
	//the threads

	pthread_create(&dataProcessThread, NULL, &main_logic_thread, NULL);



	//then need to have the timer trigger
//	PtWidget_t *timer = ABW_UpdateTimer;
//
//	PtSetResource(timer, Pt_ARG_TIMER_INITIAL, milisToRefresh, 0);
//	PtSetResource(timer, Pt_ARG_TIMER_REPEAT, milisToRefresh, 0);


	return( Pt_CONTINUE );

	}



