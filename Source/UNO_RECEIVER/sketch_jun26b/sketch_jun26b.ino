/* nRF24L01+ Connection with two UNOs
* ========================================
* [] File Name : sketch_jun26a.c
*
* [] Duty: Receive everything through the wireless pipe 
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
  // put your setup code here, to run once:
  
  // Set the serial communication of arduino and the computer
  // Wait for the USB port switches to serial COM port until we connect USB cable
  while (!Serial);
  // Set the bps for USB
  Serial.begin(9600);

  // Activate the modem and create the reading pipe
  radio.begin();
  // Stream number is 0
  radio.openReadingPipe(0, rxAddr);

  // Listen
  radio.startListening();
}

void loop() {
  // put your main code here, to run repeatedly:

}
