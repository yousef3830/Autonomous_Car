#include "Timer0_private.h"
#include "../../LIB/STD_Macros.h"
#include <avr/interrupt.h>


#define F_CPU 16000000ul

int counter = 0;

void Timer0_Normal_INIT(){
	
	
	CLR_BIT(TCCR0,WGM01);			//choose normal mode
	CLR_BIT(TCCR0,WGM00);
	
	CLR_BIT(TCCR0,COM00);			// OC0 disconnect
	CLR_BIT(TCCR0,COM01);
	
	CLR_BIT(TCCR0,CS00);			// clock Selection
	CLR_BIT(TCCR0,CS01);
	SET_BIT(TCCR0,CS02);
	
	 TCNT0 = 190;					//Preload
	 
	 sei();							// Global interrupt
	 
	 SET_BIT(TIMSK,TOIE0);			// normal mode Timer0 interrupt enable
}


void Timer0_CTC_INIT(){
	
	CLR_BIT(TCCR0,WGM00);       //compare(CTC mode) mode
	SET_BIT(TCCR0,WGM01);

	SET_BIT(TCCR0,COM00);      //toggle OC0
	CLR_BIT(TCCR0,COM01);

	SET_BIT(TCCR0,CS00);      //clock select
	SET_BIT(TCCR0,CS01);
	CLR_BIT(TCCR0,CS02);

	sei();                     //Global interrupt

	SET_BIT(TIMSK,OCIE0);      //compare mode Timer0 interrupt enable

	OCR0=125;

}



ISR(TIMER0_OVF_vect){
	counter +=1;
	
	if(counter == 16){
		counter = 0;
		TCNT0 = 190;
		
		TOG_BIT(PORTB,7);
	}
}


ISR(TIMER0_COMP_vect){
	counter+=1;
	
	if(counter==125){
		counter=0;
		
		TOG_BIT(PORTB,7);
	}
    
	
}