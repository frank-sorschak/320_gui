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


int
test123( PtWidget_t *widget, ApInfo_t *apinfo, PtCallbackInfo_t *cbinfo )

	{

	/* eliminate 'unreferenced' warnings */
	widget = widget, apinfo = apinfo, cbinfo = cbinfo;

	PtSetResource (widget, Pt_ARG_FILL_COLOR,Pg_RED , 0);

	PtWidget_t *barWid = ABW_Bar1;
	PtWidget_t *speedMeter = ABW_SpeedMeter;
	PtWidget_t *gearMeter = ABW_GearMeter;
	PtWidget_t *breakLight = ABW_BreakIndicator;

	PgColor_t   bar_colours[5] = {Pg_RED, Pg_BLUE, Pg_CELIDON,
	                              Pg_GREEN, Pg_YELLOW };

	PtSetResource (barWid, Pt_ARG_BARGRAPH_COLOR, bar_colours, 5);

	short bar_values[5] = {20, 450, 399, 22, 500};

	PtSetResource (barWid, Pt_ARG_BARGRAPH_DATA, bar_values, 5);

	//lets give the meters dummy values
	PtSetResource (gearMeter, Pt_ARG_METER_NEEDLE_POSITION, 3, 0);
	PtSetResource (speedMeter, Pt_ARG_METER_NEEDLE_POSITION,77, 0);
	//lets turn the light red
	PtSetResource (breakLight, Pt_ARG_FILL_COLOR, Pg_RED , 0);



	return( Pt_CONTINUE );

	}

