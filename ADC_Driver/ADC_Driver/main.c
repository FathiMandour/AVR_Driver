/*
 * ADC_Driver.c
 *
 * Created: 1/1/2023 9:43:56 AM
 * Author : fathi
 */ 

#include "header_files/LIB.h"
#include "header_files/MATH.h"
#include "header_files/ADC_interface.h"
#include "header_files/LCD_interface.h"
#include "header_files/DIO_prog.h"
#include "header_files/TIMER1_interface.h"
#define F_CPU 12000000UL // set the frequency of microcontroller
#include <util/delay.h> // this header include all delay function like _delay_ms


int main(void)
{  
	 // DIO_vid_SetPintDirection(DIO_u8PORTD,DIO_u8PIN0,OUTPUT) ;
	  u16 ADC_ = 0 ;
        ADC_Init() ;
		LCD_init() ;
		TIMER1_PWM_FastFreq_Init(OC1B_PIN) ;
		LCD_write_string("ADC=");
		
    while (1) 
    {
	         ADC_=ADC_Read(ADC1) ;
			
		LCD_write_number(ADC_);
		_delay_ms(100) ;
		LCD_write_command(0x01) ;
	
			TIMER1_PWM_FastFreq_Duty_cycle(ADC_,OC1B_PIN) ;
			
		
	}
}

