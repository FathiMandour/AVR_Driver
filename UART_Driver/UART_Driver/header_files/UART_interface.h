/*
 * UART_interface.h
 *
 * Created: 1/3/2023 11:35:21 PM
 *  Author: fathi
 */ 


#ifndef UART_INTERFACE_H_
#define UART_INTERFACE_H_

/*****************************************************************************
* Function Name: UART_Init
* Purpose      : init uart with one stop bit, no parity, baud rate 9600 and 8 bit data
* Parameters   : void
* Return value : void
*****************************************************************************/
void UART_Init() ;
/*****************************************************************************
* Function Name: UART_TX
* Purpose      : Send data from node to another node
* Parameters   :  u8 data  // data 
* Return value : void
*****************************************************************************/
void UART_TX(u8 data) ;

/*****************************************************************************
* Function Name: UART_RX
* Purpose      : Recive  data from node 
* Parameters   :  u8 data  // data
* Return value : u8 --> return data 
*****************************************************************************/
u8  UART_RX(u8 data) ;


#endif /* UART_INTERFACE_H_ */