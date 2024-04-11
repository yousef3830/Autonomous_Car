/*
 * INT0_private.h
 *
 * Created: 4/11/2024 10:39:32 PM
 *  Author: youse
 */ 


#ifndef INT0_PRIVATE_H_
#define INT0_PRIVATE_H_

#define MCUCR *((volatile unsigned char*)0x55)
#define MCUCSR *((volatile unsigned char*)0x54)
#define GICR *((volatile unsigned char*)0x5B)
#define GIFR *((volatile unsigned char*)0x5A)



#endif /* INT0_PRIVATE_H_ */