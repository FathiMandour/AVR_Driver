/*
 * EEPROM_Dreiver.c
 *
 * Created: 12/25/2022 7:39:51 AM
 * Author : fathi
 */ 

#include "header_files/LIB.h"
#include "header_files/MATH.h"
#include "header_files/LCD_interface.h"
#include "header_files/EEPROM_interface.h"
#define F_CPU 12000000UL // set the frequency of microcontroller
#include <util/delay.h> // this header include all delay function like _delay_ms

int main(void)
{

	u8 read = EEPROM_Vid_Read(15) ;



    LCD_init() ;

    while (1) 
    { 
		  LCD_write_command(0x85) ;
		LCD_write_data(read+48) ;
		EEPROM_Vid_Write(15,read) ;
		read++ ;
		_delay_ms(500) ;
		if(read==10){ read=0 ;}
    }
}

