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
RF24 radio(7,8);

// Receiver Address
const byte rxAddr[6] = "00001";

void setup() {
  // Activate The Modem
  radio.begin();
  // Retry Every 15 * 250ms = 3750 miliseconds
  // Times to Retry = 15
  radio.setRetries(15,15);

  // Create a pipe on the address 00001
  radio.openWritingPipe(rxAddr);
  
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
