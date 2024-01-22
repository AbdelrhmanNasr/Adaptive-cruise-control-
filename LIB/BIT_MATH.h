/*
 * ----------------------------------------------------------------------------------
 * Filename     :	BIT_MATH.h
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

#ifndef BIT_MATH_H
#define BIT_MATH_H

/*************** Functions Like Macros To Manipulate Over Specific Bit *************/
#define     SET_BIT(REG_NAME, BIT_NUM) 	    (REG_NAME |= (1 << BIT_NUM))
#define     CLR_BIT(REG_NAME, BIT_NUM) 	    (REG_NAME &= ~(1 << BIT_NUM))
#define     TOG_BIT(REG_NAME, BIT_NUM) 	    (REG_NAME ^= (1 << BIT_NUM))
#define     GET_BIT(REG_NAME, BIT_NUM) 	    ((REG_NAME >> BIT_NUM) & 1)

/************ Functions Like Macros To Manipulate Over Specific Register ***********/
#define     SET_REG(REG_NAME, VALUE)        (REG_NAME = VALUE)
#define     GET_REG(REG_NAME)               (REG_NAME)
#define     CLR_REG(REG_NAME)               (REG_NAME = 0x00)
#define     TOG_REG(REG_NAME)               (REG_NAME ^= 0xFF)

#endif /* BIT_MATH_H */
