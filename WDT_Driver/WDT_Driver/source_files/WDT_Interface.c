/*
 * WDT_Interface.c
 *
 * Created: 1/3/2023 3:21:22 PM
 *  Author: fathi
 */ 
#include "../header_files/LIB.h"
#include"../header_files/MATH.h"
#include "../header_files/WDT_Private.h"
#include "../header_files/WDT_Interface.h"


/*
function name: WDT_Start
function arguments: u8 time_out // time out when the mc rest if WTD not stoped 
function return: void
function description: Start watchdog timer
*/
void WDT_Start(u8 time_out) {
	
	SET_BIT(WDTCR_REG,WDE_bit) ; // Enable WDT 
	    /* configer WDT  time out   */
	   WDTCR_REG|=time_out ; // 
	
}
/*
function name: WDT_Stop
function arguments: void
function return: void
function description: Stop watchdog timer
*/
void WDT_Stop(void) {
	
	/* Write logical one to WDTOE and WDE */
	WDTCR_REG |= (1<<WDTOE_bit) | (1<<WDE_bit);
	/* Turn off WDT */
	WDTCR_REG = 0x00;
	
}
