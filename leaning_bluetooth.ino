int const RX_PIN = 10; //this is the rx pin this recieves the bluetooth 
int const TX_PIN = 9; // this tx pin transmits the bluetooth; 
#include <SoftwareSerial.h>

SoftwareSerial tooth(TX_PIN, RX_PIN); // make a bluetooth object
// set tx and rx pins 
// tx goes first then rx
char davis;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  tooth.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(tooth.available() >0){
    davis = tooth.read();
    tooth.println("reading new imput:");
    tooth.print(davis);


  }
   if (davis == 'd'){
    Serial.println("davis has value");
   }
   delay(100);

}
