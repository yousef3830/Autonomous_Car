/*
 * DCMotor_Driver_Interface.c
 *
 * Created: 4/13/2024 2:45:36 PM
 *  Author: User
 */ 

#include "../../LIB/STD_Macros.h"
#include "DCMotor_Driver_Interface.h"
#include "DCMotor_Driver_private.h"
#include "DCMotor_Driver_config.h"

void DCMotor_INIT(){
	
	SET_BIT(IN1_DDR,IN1_NUM);       //make motor driver pins output
	SET_BIT(IN2_DDR,IN2_NUM);
	SET_BIT(IN3_DDR,IN3_NUM);
	SET_BIT(IN4_DDR,IN4_NUM);
	
}


void DCMotor_Forward(){
	
	SET_BIT(IN1_PORT,IN1_NUM);
	CLR_BIT(IN2_PORT,IN2_NUM);
	
	SET_BIT(IN3_PORT,IN3_NUM);
	CLR_BIT(IN4_PORT,IN4_NUM);
	
}

void DCMotor_Backword(){
	
	CLR_BIT(IN1_PORT,IN1_NUM);
	SET_BIT(IN2_PORT,IN2_NUM);
	
	CLR_BIT(IN3_PORT,IN3_NUM);
	SET_BIT(IN4_PORT,IN4_NUM);
	
}


void DCMotor_Right(){
	
	SET_BIT(IN1_PORT,IN1_NUM);
	CLR_BIT(IN2_PORT,IN2_NUM);
	
	CLR_BIT(IN3_PORT,IN3_NUM);
	CLR_BIT(IN4_PORT,IN4_NUM);
	
}

void DCMotor_Left(){
	
	CLR_BIT(IN1_PORT,IN1_NUM);
	CLR_BIT(IN2_PORT,IN2_NUM);
	
	SET_BIT(IN3_PORT,IN3_NUM);
	CLR_BIT(IN4_PORT,IN4_NUM);
	
}

void DCMotor_Stop(){
	
	CLR_BIT(IN1_PORT,IN1_NUM);
	CLR_BIT(IN2_PORT,IN2_NUM);
	
	CLR_BIT(IN3_PORT,IN3_NUM);
	CLR_BIT(IN4_PORT,IN4_NUM);
	
}

