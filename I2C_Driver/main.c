/*
 * I2C_Driver.c
 *
 * Created: 1/7/2023 10:48:10 PM
 * Author : fathi
 */ 

#include "header_files/LIB.h"
#include"header_files/MATH.h"
#include"header_files/I2C_Private.h"
#include"header_files/I2C_interface.h"
#define  F_CPU 12000000UL 
#include <util/delay.h>

int main(void)
{
	 u8 count =0 ;
   I2C_master_init() ;
 _delay_ms(100) ;
   
    while (1) 
    {
		 count++ ;
		  if (count%2==0){
		  
		  I2C_master_start() ;
		  I2C_master_addr(50,0) ;
		  
		  I2C_master_write(count) ;
		  I2C_master_stop() ;
		  _delay_ms(400);
		  
		  }else {
			    I2C_master_start() ;
			    I2C_master_addr(51,0) ;
			    
			    I2C_master_write(count) ;
			    I2C_master_stop() ;
			    _delay_ms(400);
		  }
}
	}
