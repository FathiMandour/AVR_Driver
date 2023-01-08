/*
 * UART_interface.c
 *
 * Created: 1/3/2023 11:35:58 PM
 *  Author: fathi
 */ 

#include"../header_files/LIB.h"
#include "../header_files/MATH.h"
#include "../header_files/UART_Privateh.h"
#include "../header_files/UART_interface.h"




/*****************************************************************************
* Function Name: UART_Init
* Purpose      : init uart with one stop bit, no parity, baud rate 9600 and 8 bit data
* Parameters   : void
* Return value : void
*****************************************************************************/
void UART_Init() {
	
	UBRRL_REG=78.125 ; // // baud rate 9600, F_CPU = 8Mhz
	
	SET_BIT(USCRB_REG,4) ; // Enable RX 
	SET_BIT(USCRB_REG,3) ; // Enable TX 
	
	
}
/*****************************************************************************
* Function Name: UART_TX
* Purpose      : Send data from node to another node
* Parameters   :  u8 data  // data
* Return value : void
*****************************************************************************/
void UART_TX(u8 data){
	
	
	/* Put data into buffer, sends the data */
	      UDR_REG=data ;
		  
	while(GET_BIT(UCSRA_REG,6)==0) ;
	
	
	
	
}

/*****************************************************************************
* Function Name: UART_RX
* Purpose      : Recive  data from node
* Parameters   :  u8 data  // data
* Return value : u8 --> return data
*****************************************************************************/
u8  UART_RX(u8 data){
	
		
		/* Wait for data to be received */
		while(GET_BIT(UCSRA_REG,7)==0) ;
		
	return UDR_REG ;   // return data 
	
}