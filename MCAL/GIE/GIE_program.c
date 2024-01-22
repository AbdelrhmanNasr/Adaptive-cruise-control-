/*
 * ----------------------------------------------------------------------------------
 * Filename     :	GIE_program.c
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

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#include "GIE_interface.h"
#include "GIE_private.h"
#include "GIE_config.h"

void GIE_voidEnableGlobalInterrupt(void)
{
    SET_BIT(SREG, SREG_BIT7);
}

void GIE_voidDisableGlobalInterrupt(void)
{
    CLR_BIT(SREG, SREG_BIT7);
}