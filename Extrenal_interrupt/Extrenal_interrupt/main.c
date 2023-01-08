/*
 * Extrenal_interrupt.c
 *
 * Created: 12/21/2022 5:51:53 PM
 * Author : fathi
 */ 
#include "header_files/MATH.h"
#include "header_files/LIB.h"
#include "header_files/DIO_prog.h"


#include "header_files/External_Interrupt_Prog.h"


int main(void)
{
	
	DIO_vid_SetPintDirection(DIO_u8PORTA,DIO_u8PIN0,OUTPUT) ;// make pin0 in DDRA --> output
	DIO_vid_SetPintDirection(DIO_u8PORTD,DIO_u8PIN2,INPUT) ; // make pin2 in PORTD -- >input 
	
	DIO_vid_SetPintValue(DIO_u8PORTD,DIO_u8PIN2,HIGH) ; //   enable pullup resistor 

 
 
 // enable external interrupt 0 
EXInterrupt_Vid_Config_Pin(INT0);
 
    while (1) 
    {
		
		
		
    }
	
	return 0 ;
}



/*
ISR1(INT1){
	
	TOGGLE_BIT(DIO_u8PORTA_REG,DIO_u8PIN0) ;
	
	
}
*/
ISR0(INT0){
	
		DIO_vid_SetPintValue(DIO_u8PORTA,DIO_u8PIN0,HIGH) ; //   ACTIVE LED IN PIN0 PORTA  
	
	
}

/*
ISR(INT0_vect){
	
	TOGGLE_BIT(PORTA,7) ;
	
	
}*/