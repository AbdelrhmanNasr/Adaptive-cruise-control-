/*
 * ----------------------------------------------------------------------------------
 * Filename     :	H_Bridge_interface.h
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

#ifndef H_BRIDGE_INTERFACE_H
#define H_BRIDGE_INTERFACE_H

typedef enum
{
	H_Bridge_Stop,
	H_Bridge_Left_to_Right,
	H_Bridge_Right_to_Left,
}H_Bridge_Polarity_t;

typedef struct 
{
	Transistor_t 			H_Bridge_LeftToRightTransistorPair;
	Transistor_t 			H_Bridge_RightToLeftTransistorPair;
	H_Bridge_Polarity_t 	H_Bridge_InitialPolarity;
}H_Bridge_t;


typedef enum
{
	H_BridgeOk,
	H_BridgeInvalidConfiguration,
	H_BridgeInvalidPolarity,
}H_Bridge_Err_t;

H_Bridge_Err_t H_Bridge_voidConfigure(H_Bridge_t * Copy_H_BridgeName);
H_Bridge_Err_t H_Bridge_voidChangePolarity(H_Bridge_t * Copy_H_BridgeName, H_Bridge_Polarity_t Copy_H_BridgePolarity);

#endif /* H_BRIDGE_INTERFACE_H */
