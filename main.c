/*
 * ATmega32_Drivers.c
 *
 * Created: 4/8/2024 11:19:46 AM
 * Author : youse
 */ 

#include <avr/io.h>
#include "MCAL/Timer0/Timer0_interface.h"
#include "LIB/STD_Macros.h"

int main(void)
{
	int x = 0;
	
	SET_BIT(DDRB,3);
	Timer0_CTC_INIT();
	
	
    /* Replace with your application code */
    while (1) 
    {
    }
}

