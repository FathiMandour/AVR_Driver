/*
 * WDT_Driver.c
 *
 * Created: 1/3/2023 3:15:55 PM
 * Author : fathi
 */ 

#include "header_files/MATH.h"
#include "header_files/LIB.h"
#include "header_files/WDT_Interface.h"
#include "header_files/DIO_prog.h"
#define  F_CPU  12000000UL 
#include <util/delay.h>


int main(void)
{ 
	  DIO_vid_SetPintDirection(DIO_u8PORTA,DIO_u8PIN0,OUTPUT) ;
	  
	  WDT_Start(time_16_3ms) ;
	  _delay_ms(800) ;
	  
	  
     
    while (1) 
    {
		DIO_vid_SetPintValue(DIO_u8PORTA,DIO_u8PIN0,HIGH) ;
		_delay_ms(100) ;
	//	DIO_vid_SetPintValue(DIO_u8PORTA,DIO_u8PIN0,LOW) ;
	//	_delay_ms(500) ;
		
		WDT_Stop() ;
    }
}

