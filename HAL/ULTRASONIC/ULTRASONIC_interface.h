/*
 * ----------------------------------------------------------------------------------
 * Filename     :	ULTRASONIC_interface.h
 *
 * Author       :	Abdelrhman Nasr
 * Version      :	v1.0
 * C Standard   :	C99
 * Compiler     :	AVR GCC
 * ----------------------------------------------------------------------------------
 *
 * ----------------------------------------------------------------------------------
 * Version		     Author		        Description
 * v1.0		    	Abdelrhman Nasr		Initial Creation
 * ----------------------------------------------------------------------------------
 */

#ifndef _ULTRASONIC_INT_H_
#define _ULTRASONIC_INT_H_

void HULTRASONIC_voidInit(void);
void HULTRASONIC_voidReadDistance(u32 *Local_pu32Distance);


#endif // _ULTRASONIC_CONFIG_H_
