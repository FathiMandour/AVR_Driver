/*
 * UART_Driver.c
 *
 * Created: 1/3/2023 4:20:10 PM
 * Author : fathi
 */ 

#include"header_files/LIB.h"
#include "header_files/MATH.h"
#include "header_files/UART_interface.h"
#include "header_files/DIO_prog.h"
#define F_CPU 12000000UL


int main(void)
{
	  DIO_vid_SetPintDirection(DIO_u8PORTD,DIO_u8PIN1,OUTPUT) ;
	  
	    UART_Init() ;
	    UART_TX('a') ;
   
    while (1) 
    {
		
    }
}

