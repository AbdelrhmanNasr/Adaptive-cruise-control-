/*
 * ----------------------------------------------------------------------------------
 * Filename     :	UART_interface.h
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

#ifndef UART_INTERFACE_H
#define UART_INTERFACE_H

void UART_voidInit(void);
void UART_voidTransmitDataSynchronous(u8 Copy_u8Data);
void UART_voidReceiveDataSynchronous(u8 * Copy_pu8ReceivedData);
/*
transmit data As
receive data As
isr for transmitting
isr for receiving
isr for udr empty
transmit string
transmit number

*/

#endif /* UART_INTERFACE_H */
