/*
 * Timer0_interface.h
 *
 * Created: 4/7/2024 4:47:23 PM
 *  Author: youse
 */ 


#ifndef TIMER0_INTERFACE_H_
#define TIMER0_INTERFACE_H_

void Timer0_Normal_INIT();
void Timer0_CTC_INIT();
void Timer0_FASTPWM_INIT();
void Timer0_SetDC(float DutyCycle);

#endif /* TIMER0_INTERFACE_H_ */