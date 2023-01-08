/*
 * EEPROM_interface.h
 *
 * Created: 12/25/2022 7:41:50 AM
 *  Author: fathi
 */ 

#include"../header_files/MATH.h"
#include "../header_files/LIB.h"
#include"../header_files/EEPROM_Privet.h"
#include "../header_files/EEPROM_interface.h"


void EEPROM_Vid_Write(u16 address,u8 data) {
	
	/*  Wait until EEWE becomes zero.  */
	while(GET_BIT(EECR_REG,1)==1){}
		EEAR_REG=address ; // assigned address register 
		EEDR_REG=data ; // assigned Data register 
		SET_BIT(EECR_REG,2) ; // set bit to write 
		SET_BIT(EECR_REG,1) ;
	
	
	
}
u8  EEPROM_Vid_Read (u16 address ) {
	
	/*  Wait until EEWE becomes zero.  */
	while(GET_BIT(EECR_REG,1)==1){}
	EEAR_REG=address ; // assigned address register
      SET_BIT(EECR_REG,0) ;  // set bit to read 
	  
	  return EEDR_REG ;
	
	
	
	
	
}
