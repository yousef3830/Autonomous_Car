 
#include "../../LIB/STD_Macros.h"
#include <avr/interrupt.h>
#include "INT0_interface.h"
#include "INT0_config.h"


void INT0_INIT(){
	sei();							// global interrupt enable
	
	SET_BIT(GICR,INT0);					// enable interrupt 0
	
	SET_BIT(MCUCR,ISC00);			// interrupt on rising edge
	SET_BIT(MCUCR,ISC01);
	
	CLR_BIT(DDRD,2);					// make INT0 pin input
	
}

