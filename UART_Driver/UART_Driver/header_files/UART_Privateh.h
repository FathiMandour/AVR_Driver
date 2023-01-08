/*
 * UART_Privateh.h
 *
 * Created: 1/3/2023 11:35:04 PM
 *  Author: fathi
 */ 


#ifndef UART_PRIVATEH_H_
#define UART_PRIVATEH_H_


#define  UDR_REG            *((volatile u8*)0x2C)
#define  UCSRA_REG          *((volatile u8*)0x2B)
#define  USCRB_REG          *((volatile u8*)0x2A)
#define  UBRRL_REG           *((volatile u8*)0x29) 


#endif /* UART_PRIVATEH_H_ */