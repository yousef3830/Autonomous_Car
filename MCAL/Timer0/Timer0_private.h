/*
 * Timer0_private.h
 *
 * Created: 4/7/2024 4:47:58 PM
 *  Author: youse
 */ 


#ifndef TIMER0_PRIVATE_H_
#define TIMER0_PRIVATE_H_

#define TCCR0 *((volatile unsigned char*) 0x53)
#define TCNT0 *((volatile unsigned char*) 0x52)
#define OCR0 *((volatile unsigned char*) 0x5C)
#define TIMSK *((volatile unsigned char*) 0x59)
#define TIFR *((volatile unsigned char*) 0x58)





#endif /* TIMER0_PRIVATE_H_ */