/*
 * TIMER_Deriver.c
 *
 * Created: 12/27/2022 7:31:25 PM
 * Author : fathi
 */ 
#include "header_files/LIB.h"
#include "header_files/MATH.h"
#include "header_files/TIM_interface.h"
#include <avr/interrupt.h>
#include "header_files/DIO_prog.h"
#define F_CPU 12000000UL // set the frequency of microcontroller



static void Over_flowApp(void) ;
static void CTC_APP(void) ;


int main(void)
{
 //TIM0_Vid_GenerateFreq_Init(120) ;  // 20Us
	
	//DIO_vid_SetPintDirection(DIO_u8PORTC,DIO_u8PIN0,OUTPUT) ; // make pin0 in portc output 
	//INT_OverFlow_Mode=Over_flowApp ;
	//INT_CTC_Mode=CTC_APP ;
  // TIM0_Vid_NormalMode_Init() ;
 // TIM0_Vid_CTCMode_Init(249) ;
 
    while (1) 
    {
		
    }
	
}

static void Over_flowApp(void) {
	
	
	static  u32 count=0 ;
	count++ ;
	
	if(count==12000){
		DIO_vid_SetPintValue(DIO_u8PORTC,DIO_u8PIN0,HIGH) ;
		
	}
	
	if(count==24000){
		DIO_vid_SetPintValue(DIO_u8PORTC,DIO_u8PIN0,LOW) ;
		
		count=0 ;
	}
	
	
}
static void CTC_APP(void){
	static  u32 count=0 ;
	count++ ;
	
	if(count==12000){
		DIO_vid_SetPintValue(DIO_u8PORTC,DIO_u8PIN0,HIGH) ;
		
	}
	
	if(count==24000){
		DIO_vid_SetPintValue(DIO_u8PORTC,DIO_u8PIN0,LOW) ;
		
		count=0 ;
	}
	
	
}


