/*
 * ----------------------------------------------------------------------------------
 * Filename     :	BUTTON_interface.c
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

#ifndef BUTTON_INTERFACE_H
#define BUTTON_INTERFACE_H

/* Button Connection */
#define PULLUP			0
#define NO_PULLUP		1

typedef struct 
{
	u8 BUTTON_u8PORT;
	u8 BUTTON_u8PIN;
	u8 BUTTON_u8Connection; /* PULLUP / PULLDOWN */
}BUTTON_t;

void BUTTON_voidInit(BUTTON_t* Copy_pBUTTON_t_Obj);
void BUTTON_voidRead(BUTTON_t* Copy_pBUTTON_t_Obj, u8* Copy_pu8Value);

#endif /* BUTTON_INTERFACE_H */
