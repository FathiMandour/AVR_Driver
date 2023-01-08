/*
 * SPI_intrerface.c
 *
 * Created: 1/5/2023 4:30:51 PM
 *  Author: fathi
 */ 
#include "../header_files/LIB.h"
#include "../header_files/MATH.h"
#include "../header_files/SPI_interface.h"
#include "../header_files/SPI_Private.h"
#include "../header_files/DIO_prog.h"
#define  F_CPU  12000000UL
#include <util/delay.h>

void SPI_Master_Init() {
	 
	   DIO_vid_SetPintDirection(DIO_u8PORTB,MOSI_PIN,OUTPUT) ; // MAKE MOSI PIN (PB5) OUPUT
	   DIO_vid_SetPintDirection(DIO_u8PORTB,MISO_PIN,INPUT) ; // MAKE MISO PIN (PB6) INPUT
	    DIO_vid_SetPintDirection(DIO_u8PORTB,SS_PIN,OUTPUT) ; // MAKE SS PIN (PB5) OUPUT
	   DIO_vid_SetPintDirection(DIO_u8PORTB,SCK_PIN,OUTPUT) ; // MAKE SCK PIN (PB5) OUPUT
	   	 
	   SET_BIT(SPCR_REG,4) ; // MAKE node as a master
	
	     SET_BIT(SPCR_REG,6) ; // Enable SPI

}

void SPI_Slave_Init(){
	
	//  DIO_vid_SetPintDirection(DIO_u8PORTB,MOSI_PIN,INPUT) ; // MAKE MOSI PIN (PB5) OUPUT
	//  DIO_vid_SetPintDirection(DIO_u8PORTB,MISO_PIN,OUTPUT) ; // MAKE MISO PIN (PB6) INPUT
	DIO_vid_SetPintDirection(DIO_u8PORTB,SS_PIN,INPUT) ; // MAKE SS PIN (PB5) OUPUT
	// DIO_vid_SetPintDirection(DIO_u8PORTB,SCK_PIN,INPUT) ; // MAKE SCK PIN (PB5) OUPUT
	
	
	SET_BIT(SPCR_REG,6) ; // Enable SPI
}
void SPI_Master_TX(u8 data) {
	
	SPDR_REG=data ;
	
	while(GET_BIT(SPSR_REG,7)==0){} // Wait to transmit data 
		_delay_ms(500) ;
}

u8 SPI_Slave_RX(void){
	
	
	
	while(GET_BIT(SPSR_REG,7)==0){} // Wait to transmit data
	
	return SPDR_REG ;
}

u8 SPI_Master_RX_Slave_TX(u8 data) {
	
	SPDR_REG=data ;
	
	while(GET_BIT(SPSR_REG,7)==0){} // Wait to transmit data
	_delay_ms(500) ;
	return data ;
}

void SPI_Send_string(uc8* string , u8 size ){
	
	u8 i=0 ;


	for (i=0;i<size;i++){
		
		SPI_Master_RX_Slave_TX(string[i]) ;
		
		_delay_ms(500) ;
	}
	
	
}