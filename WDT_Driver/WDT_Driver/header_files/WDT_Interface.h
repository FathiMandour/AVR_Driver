/*
 * WDT_Interface.h
 *
 * Created: 1/3/2023 3:20:24 PM
 *  Author: fathi
 */ 


#ifndef WDT_INTERFACE_H_
#define WDT_INTERFACE_H_



/*Typical Time-out  at VCC = 5.0V */

#define time_16_3ms          0x00
#define time_32_5ms          0x01
#define time_65ms            0x02
#define time_0_13s           0x03
#define time_0_26s           0x04
#define time_0_52s           0x05   
#define time_1_0s            0x06
#define time_2_1s            0x07




// macro of bits 
#define   WDTOE_bit    4 
#define   WDE_bit      3 

/*
function name: WDT_Start
function arguments: u8 time_out // time out when the mc rest if WTD not stoped
function return: void
function description: Start watchdog timer
*/
void WDT_Start( u8 time_out ) ;
/*
function name: WDT_Stop
function arguments: void
function return: void
function description: Stop watchdog timer
*/
void WDT_Stop(void) ;


#endif /* WDT_INTERFACE_H_ */