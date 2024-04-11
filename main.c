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
	
	Timer0_FASTPWM_INIT();
    Timer0_SetDC(0.3);
	
    /* Replace with your application code */
    while (1) 
    {
    }
}

