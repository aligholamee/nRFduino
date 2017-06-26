/* nRF24L01+ Connection with two UNOs
* ========================================
* [] File Name : sketch_jun26a.c
*
* [] Duty: Send a "hello world" through nrf pipe
* 
* [] Creation Date : June 26, 2017
*
* [] Created By : Ali Gholami (aligholami7596@gmail.com)
* ========================================
*/

#include <SPI.h> // Handles communication interface with the modem
#include <nRF24L01.h> // Handles nRF24
#include <RF24.h> // Some other controls over radio

// RF24 Object
// Represents a modem connected to the UNO
// 7: CE Signal Port
// 8: CSN Signal Port
RF24 radio(7,8)
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
