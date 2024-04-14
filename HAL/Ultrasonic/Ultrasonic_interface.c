
#include "Ultrasonic_interface.h"

void Ultrasonic_distance(){
	ICU_INIT();
	SET_BIT(TRIG_DDR,TRIG_NUM);
	_delay_us(50);
	CLR_BIT(TRIG_DDR,TRIG_NUM);
	
	while (Thigh ==0);
	
	
}