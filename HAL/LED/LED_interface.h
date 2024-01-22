/*
 * ----------------------------------------------------------------------------------
 * Filename     :	LED_interface.c
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

#ifndef LED_INTERFACE_H
#define LED_INTERFACE_H

typedef struct 
{
	u8 LED_u8PORT;
	u8 LED_u8PIN;
}LED_t;

void LED_voidInit(LED_t* Copy_pLED_t_Obj);
void LED_voidTurnOn(LED_t* Copy_pLED_t_Obj);
void LED_voidTurnOff(LED_t* Copy_pLED_t_Obj);
void LED_voidToggle(LED_t* Copy_pLED_t_Obj);

#endif /* LED_INTERFACE_H */
