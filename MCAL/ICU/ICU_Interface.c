/*
 * ICU_Config.c
 *
 * Created: 4/11/2024 11:17:22 PM
 *  Author: User
 */ 


#include "../../LIB/STD_Macros.h"
#include "../INT0/INT0_interface.h"
#include "../Timer0/Timer0_interface.h"


void ICU_INIT(){
	
	INT0_INIT();
	
	
}

ISR(INT0_vect){
	
	if (stage==0){
		Timer0_Normal_INIT();
		
		CLR_BIT(MCUCR,ISC00);             // make interrupt in falling edge
		SET_BIT(MCUCR,ISC01);
		
		stage+=1;
	}
	
	else if(stage==1){
		Thigh=(counter*256)+TCNT0;
		
		SET_BIT(MCUCR,ISC00);             // make interrupt in raising edge
		SET_BIT(MCUCR,ISC01);
		
		stage+=1;
		
	}
  else if (stage==2){
	  
	  Ttotal=(counter*256)+TCNT0;
	  
	   CLR_BIT(TCCR0,CS00);			// timer off
	   CLR_BIT(TCCR0,CS01);
	   CLR_BIT(TCCR0,CS02);
	   
	   CLR_BIT(GICR,INT0);          // interrupt off 
	   
	  stage=0;
	  TCNT0=0;
	  counter=0;
	  
	  freq=systemFreq/(Ttotal*prescaler);
	  dutyCycle=Thigh/Ttotal;
	  
  }	
  
  
}
