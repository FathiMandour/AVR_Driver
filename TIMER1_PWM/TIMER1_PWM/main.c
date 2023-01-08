/*
 * TIMER1_PWM.c
 *
 * Created: 12/31/2022 4:36:30 PM
 * Author : fathi
 */ 

#include "header_files/LIB.h"
#include "header_files/MATH.h"
#include "header_files/TIMER1_private.h"
#include "header_files/TIMER1_interface.h"
#include "header_files/DIO_prog.h"
#define F_CPU 12000000UL // set the frequency of microcontroller
#include <util/delay.h> // this header include all delay function like _delay_ms


int main(void)
{
	   TIMER1_PWM_FastFreq_Init(OC1A_PIN) ;
	   
	   TIMER1_PWM_FastFreq_Duty_cycle(50,OC1A_PIN) ; // 1024*1/120000 = 85.667
   
    while (1) 
    {
		
    }
}

