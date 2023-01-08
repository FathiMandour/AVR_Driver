/*
 * External_Interrupt_prog.c
 *
 * Created: 12/22/2022 9:54:39 PM
 *  Author: fathi
 */ 

#include "../header_files/LIB.h"
#include "../header_files/MATH.h"
#include "../header_files/External_Interrupt_Prog.h"
#include "../header_files/External_Interrupt_Privte.h"
void EXInterrupt_Vid_Config_Pin( u8 u8pin) {
	
	
	switch(u8pin){
		
		 case INT0:    
		               SET_BIT(EXIN_U8_SREG_REG,7) ; // enable global interrupt 
					   SET_BIT(EXIN_U8_GICR_REG,6) ; // enable External interrut0
					          /* rising edge */
						SET_BIT(EXIN_U8_MCUCR_REG,0) ;	  
						SET_BIT(EXIN_U8_MCUCR_REG,1) ;	
						            break ;	  
	   case INT1:
					  SET_BIT(EXIN_U8_SREG_REG,7) ; // enable global interrupt
					  SET_BIT(EXIN_U8_GICR_REG,7) ; // enable External interrut1
					  /* rising edge */
					  SET_BIT(EXIN_U8_MCUCR_REG,0) ;
					  SET_BIT(EXIN_U8_MCUCR_REG,1) ;
					  break ;
	 case INT2:
					  SET_BIT(EXIN_U8_SREG_REG,7) ; // enable global interrupt
					  SET_BIT(EXIN_U8_GICR_REG,5) ; // enable External interrut0
					  /* rising edge */
					  SET_BIT(EXIN_U8_MCUCSR_REG,6);
					  break ;
		
		
		
		
		
	}
	
	
	
	
	
	
}