/*
 * External_Interrupt_Privte.h
 *
 * Created: 12/22/2022 9:53:20 PM
 *  Author: fathi
 */ 


#ifndef EXTERNAL_INTERRUPT_PRIVTE_H_
#define EXTERNAL_INTERRUPT_PRIVTE_H_


/* address of registers  */
#define EXIN_U8_MCUCR_REG             *((volatile u8*)0x55)
#define EXIN_U8_MCUCSR_REG            *((volatile u8*)0x54) 
#define EXIN_U8_GICR_REG              *((volatile u8*)0x5B) 
#define EXIN_U8_SREG_REG              *((volatile u8*)0x5F)



#endif /* EXTERNAL_INTERRUPT_PRIVTE_H_ */