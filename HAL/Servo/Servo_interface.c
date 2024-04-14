
#include "../../MCAL/Timer0/Timer0_interface.h"


void Servo_INIT(){
	
	Timer0_FASTPWM_INIT();
	Servo_Home();
	
}



void Servo_Home(){
	
	Timer0_SetDC(1.5/20);
		
}

void Servo_Angle(float angle){
	
	if(angle>80.0)             {	angle=80.0;}
	else if(angle<-80.0)             {	angle=-80.0;}	
	float dutyCycle=(0.5/90)*angle+1.5;
		Timer0_SetDC(dutyCycle);
		
	}