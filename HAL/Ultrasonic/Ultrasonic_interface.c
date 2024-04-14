
#include "Ultrasonic_interface.h"
#include "../../LIB/STD_Macros.h"
#include "Ultrasonic_config.h"
#include "Ultrasonic_private.h"
#include "../../MCAL/ICU/ICU_Interface.h"
#define F_CPU 1000000ul
#include <util/delay.h>
#define  prescaler 256



unsigned short Ultrasonic_distance(){
	ICU_INIT();
	SET_BIT(TRIG_DDR,TRIG_NUM);				// set trigger output
	SET_BIT(TRIG_PORT,TRIG_NUM);
	_delay_us(50);
	CLR_BIT(TRIG_PORT,TRIG_NUM);
	while (GetHighTime() ==0);
	short distance = GetHighTime() * (prescaler / (2*F_CPU)) * 344 * 100;
	return distance;
}

