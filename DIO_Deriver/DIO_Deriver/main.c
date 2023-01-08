/*
 * DIO_Deriver.c
 *
 * Created: 12/20/2022 8:50:03 AM
 * Author : fathi
 */ 


#include"header_files/LIB.h"
#include"header_files/MATH.h"
#include"header_files/DIO_prog.h"
#define F_CPU 12000000UL // set the frequency of micro controller
#include <util/delay.h> // this header include all delay function like _delay_ms



int main(void)
{
	 
DIO_vid_SetPintDirection(DIO_u8PORTA,DIO_u8PIN0,OUTPUT) ;
	
    
    while (1) 
    {
DIO_vid_SetPintValue(DIO_u8PORTA,DIO_u8PIN0,HIGH) ;
              _delay_ms(500) ;
DIO_vid_SetPintValue(DIO_u8PORTA,DIO_u8PIN0,LOW) ;
_delay_ms(500) ;			  
	
		
    }
}

