/*
 * dataProcess.h
 *
 *  Created on: Nov 19, 2020
 *      Author: frank
 */

#ifndef DATAPROCESS_H_
#define DATAPROCESS_H_




void *main_logic_thread(void* empty);

extern pthread_t dataProcessThread;

struct CAR_VALUES {
	   double fuelConsumption;
	   double engineSpeed;
	   double engineCoolantTemperature;
	   double currentGear;
	   double transmissionOilTemperature;
	   double vehicleSpeed;
	   double accelerationSpeedLongitudinal;
	   double indicationofbreakswitch;
};

extern struct CAR_VALUES VALUES;

#endif /* DATAPROCESS_H_ */
