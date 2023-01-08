/*
 * SPI_interface.h
 *
 * Created: 1/5/2023 4:30:34 PM
 *  Author: fathi
 */ 


#ifndef SPI_INTERFACE_H_
#define SPI_INTERFACE_H_


/*config pins  */

#define SS_PIN           4
#define MOSI_PIN         5
#define MISO_PIN         6
#define SCK_PIN          7


/*
function name: SPI_Master_Init
function arguments: void
function return: void
function description: intilized node as a master (SPI protocol)
*/
void SPI_Master_Init() ;

/*
function name: SPI_Slave_Init
function arguments: void
function return: void
function description: intilized node as a Slave (SPI protocol)
*/
void SPI_Slave_Init() ;

/*
function name: SPI_Master_TX
function arguments:  u8 data // take data will be send
function return: void
function description: send data from master node to slave node
*/
void SPI_Master_TX(u8 data) ;

/*
function name: SPI_Slave_RX
function arguments:  void
function return: u8 // return data from data register (data recived from master)
function description: send data from master node to slave node
*/
u8 SPI_Slave_RX(void) ;
/*
function name: SPI_Master_RX_Slave_TX
function arguments:  u8  // return data received from Slave
function return: u8 // return data from data register (data received from master)
function description: this function used when wanted receive data from slave
*/
u8 SPI_Master_RX_Slave_TX(u8 data) ;

/*
function name: SPI_Send_string
function arguments:  u8 * string ( take array of sting )& u8 size (size of string) 
function return: void
function description: Send array of character form master to slave 
*/

void SPI_Send_string(uc8* string , u8 size ) ;

#endif /* SPI_INTERFACE_H_ */