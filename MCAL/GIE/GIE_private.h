/*
 * ----------------------------------------------------------------------------------
 * Filename     :	GIE_private.h
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

#ifndef GIE_PRIVATE_H
#define GIE_PRIVATE_H

#define SREG            *((volatile u8*) 0x5F)

#define SREG_BIT7       7    /* Global Interrupt */


#endif /* GIE_PRIVATE_H */