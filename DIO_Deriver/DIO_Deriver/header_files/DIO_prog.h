/*
 * DIO_prog.h
 *
 * Created: 12/22/2022 8:01:36 PM
 *  Author: fathi
 */ 


#ifndef DIO_PROG_H_
#define DIO_PROG_H_

 /* PORT defines */
 #define DIO_u8PORTA  0
 #define DIO_u8PORTB  1
 #define DIO_u8PORTC  2
 #define DIO_u8PORTD  3

 /* PIN defines */

 #define DIO_u8PIN0  0
 #define DIO_u8PIN1  1
 #define DIO_u8PIN2  2
 #define DIO_u8PIN3  3
 #define DIO_u8PIN4  4
 #define DIO_u8PIN5  5
 #define DIO_u8PIN6  6
 #define DIO_u8PIN7  7

 /* Digital I/O value */

 #define HIGH   1
 #define LOW    0

 /* Digital I/O direction */

 #define OUTPUT  0xFF
 #define  INPUT  0x00
 /* function to set port value */
 extern void DIO_vid_SetPortValue(u8 u8port,u8 u8value);
 /*function to set port direction */
 extern void DIO_vid_SetPortDirection(u8 u8port,u8 u8Dir);

 /* function to set pin value */
 extern void DIO_vid_SetPintValue(u8 u8port,u8 u8pin,u8 u8value);

 /* function to set pin direction */
 extern void DIO_vid_SetPintDirection(u8 u8port,u8 u8pin,u8 u8dir);
 /* function to get pin value */

 extern u8 DIO_GetPinValue(u8 u8port,u8 u8pin);

#endif /* DIO_PROG_H_ */