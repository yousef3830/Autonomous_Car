/*
 * DCMotor_Driver_Interface.h
 *
 * Created: 4/13/2024 2:45:45 PM
 *  Author: User
 */ 




#ifndef DCMOTOR_DRIVER_INTERFACE_H_
#define DCMOTOR_DRIVER_INTERFACE_H_
#include "DCMotor_Driver_config.h"

void DCMotor_INIT();
void DCMotor_Forward();
void DCMotor_Backword();
void DCMotor_Right();
void DCMotor_Left();
void DCMotor_Stop();


#endif /* DCMOTOR_DRIVER_INTERFACE_H_ */