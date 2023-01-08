/*
 * EEPROM_interface.h
 *
 * Created: 12/25/2022 7:41:27 AM
 *  Author: fathi
 */ 


#ifndef EEPROM_INTERFACE_H_
#define EEPROM_INTERFACE_H_


void EEPROM_Vid_Write(u16 address,u8 data) ;
u8  EEPROM_Vid_Read (u16 address ) ;


#endif /* EEPROM_INTERFACE_H_ */