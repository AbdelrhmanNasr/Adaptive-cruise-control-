/*
 * ----------------------------------------------------------------------------------
 * Filename     :	LCD_interface.h
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

#ifndef LCD_INTERFACE_H
#define LCD_INTERFACE_H

void LCD_voidInit(void);
void LCD_voidSendData(u8 Copy_u8Data);
void LCD_voidClearDisplay(void);
void LCD_voidGoToXY(u8 Copy_u8XPos, u8 Copy_u8YPos);
void LCD_voidSendString(u8 * Copy_pu8StringArray);
void LCD_voidSendNumber(u32 Copy_u32Number);
void LCD_voidSendCustomCharacter(u8 * Copy_pu8CharacterArray, u8 Copy_u8PatternNumber, u8 Copy_u8XPos, u8 Copy_u8YPos);
#endif /* LCD_INTERFACE_H */
