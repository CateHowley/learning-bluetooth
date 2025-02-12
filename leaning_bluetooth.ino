int const RX_PIN = 10; //this is the rx pin this recieves the bluetooth 
int const TX_PIN = 9; // this tx pin transmits the bluetooth; 
#include <Software.Serial.h>

SoftwareSerial tooth(TX_PIN, RX_PIN); // make a bluetooth object
// set tx and rx pins 
// tx goes first then rx

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
