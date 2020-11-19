/* Y o u r   D e s c r i p t i o n                       */
/*                            AppBuilder Photon Code Lib */
/*                                         Version 2.03  */

/* Standard headers */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/* Local headers */
#include "ablibs.h"
#include "abimport.h"
#include "proto.h"


#include "dataProcess.h"

updateUI( PtWidget_t *widget, ApInfo_t *apinfo, PtCallbackInfo_t *cbinfo )

	{

	/* eliminate 'unreferenced' warnings */
	widget = widget, apinfo = apinfo, cbinfo = cbinfo;

	struct CAR_VALUES VALUES;

	PtWidget_t *barWid = ABW_Bar1;
	PtWidget_t *speedMeter = ABW_SpeedMeter;
	PtWidget_t *gearMeter = ABW_GearMeter;
	PtWidget_t *breakLight = ABW_BreakIndicator;

	//PtSetResource (speedMeter, Pt_ARG_METER_NEEDLE_POSITION,VALUES.vehicleSpeed, 0);


	//check the stuff in dataProcess and update all widgets

	return( Pt_CONTINUE );

	}

