/*
 * SPI_Driver.c
 *
 * Created: 1/5/2023 4:28:02 PM
 * Author : fathi
 */ 
#include "header_files/LIB.h"
#include "header_files/MATH.h"
#include "header_files/SPI_interface.h"
#include "header_files/DIO_prog.h"
#define  F_CPU  12000000UL
#include <util/delay.h>


int main(void)
{
	  SPI_Master_Init() ;
	   _delay_ms(200) ;
	   
	 u8 counter=0 ;
	//SPI_Send_string("Welcome",7) ;
	

    while (1) 
    {
		SPI_Master_TX(counter++); 
		
		
		    
    }
}

