/*
 * External_Interrupt_Prog.h
 *
 * Created: 12/22/2022 9:53:57 PM
 *  Author: fathi
 */ 


#ifndef EXTERNAL_INTERRUPT_PROG_H_
#define EXTERNAL_INTERRUPT_PROG_H_

#define ISR0(vector1)   void __vector_1(void)__attribute__((signal)) ;\
void __vector_1(void)

#define ISR1(vector2)   void __vector_2(void)__attribute__((signal)) ;\
void __vector_2(void)

#define ISR2(vector3)   void __vector_3(void)__attribute__((signal)) ;\
void __vector_3(void)
 
#define  INT0    0 
#define  INT1    1 
#define  INT2    2  
 
void EXInterrupt_Vid_Config_Pin( u8 u8pin) ;



#endif /* EXTERNAL_INTERRUPT_PROG_H_ */