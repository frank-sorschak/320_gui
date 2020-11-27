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

	//fetch values from file then update widgets

	char buffer[128];

	//check if i can open the file, if lock exists wait
	while( access( "/home/lock.txt", F_OK ) != -1 ) {}

	FILE* consumer = fopen("/home/currentData.csv", "r");
	double data[9]; //time, fuelCon, engSp, CoolTemp,gear,oilTemp,vSpeed,accel,break
	fgets(buffer,128, consumer);
	fclose(consumer);

	//get the time
	char* token = strtok(buffer, ",");
	if(token != NULL){
		data[0] = atoi(token);
	}

	int i = 1;
	while (i < 9){
		token = strtok(NULL, ",");
		if(token != NULL){
			data[i] = atof(token);
		}
		i++;
	}


	PtWidget_t *barTempsWid = ABW_PtBarGraph_Temps;
	PtWidget_t *barSpeedWid = ABW_PtBarGraph_Fuel_Speed;
	PtWidget_t *laccel = ABW_PtText_Laccel;
	PtWidget_t *speedMeter = ABW_SpeedMeter;
	PtWidget_t *gearMeter = ABW_GearMeter;
	PtWidget_t *breakLight = ABW_BreakIndicator;


	//set all the vals;
	short bar_values_temps[2] = {data[3], data[5]};
	short bar_values_f_s[2] = {data[1], data[2]};

	PgColor_t   bar_colours_temps[2] = {Pg_GREEN, Pg_YELLOW };
	PgColor_t   bar_colours_f_s[2] = {Pg_RED, Pg_BLUE };

	//set the other vals

	//breaks
	PgColor_t breakColor = Pg_WHITE;
	if(data[8] == 2){
		breakColor = Pg_RED;
	}

	//laccel
	char result[10];
	sprintf(result, "%f", data[7]);

	PtSetResource (barTempsWid, Pt_ARG_BARGRAPH_COLOR, bar_colours_temps, 2);
	PtSetResource (barTempsWid, Pt_ARG_BARGRAPH_DATA, bar_values_temps, 2);

	PtSetResource (barSpeedWid, Pt_ARG_BARGRAPH_COLOR, bar_colours_f_s, 2);
	PtSetResource (barSpeedWid, Pt_ARG_BARGRAPH_DATA, bar_values_f_s, 2);


	PtSetResource (laccel, Pt_ARG_TEXT_STRING,result, 0);
	PtSetResource (gearMeter, Pt_ARG_METER_NEEDLE_POSITION,data[4], 0);
	PtSetResource (speedMeter, Pt_ARG_METER_NEEDLE_POSITION, data[6], 0);
	PtSetResource (breakLight, Pt_ARG_FILL_COLOR, breakColor , 0);

	return( Pt_CONTINUE );

	}
