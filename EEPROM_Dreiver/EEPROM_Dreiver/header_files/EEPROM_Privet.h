/*
 * EEPROM_Privet.h
 *
 * Created: 12/25/2022 7:40:55 AM
 *  Author: fathi
 */ 


#ifndef EEPROM_PRIVET_H_
#define EEPROM_PRIVET_H_


#define  EEAR_REG     *((volatile u16*)0x3E)
#define  EEDR_REG     *((volatile u8*)0x3D)
#define  EECR_REG     *((volatile u8*)0x3C)

#endif /* EEPROM_PRIVET_H_ */