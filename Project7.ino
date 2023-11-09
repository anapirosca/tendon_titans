#include "HX711.h" // include the appropriate library for `scale` functions


HX711 scale; //invoke scale functions
    
void setup() {

 Serial.begin(115200); //set baud rate
   scale.begin(6, 7); //set digital pins 6 and 7 as the data and clock pins
  scale.tare(); //zero the measurements

}


void loop() {

  float newReading= scale.get_units(10); //establish new variable from load cel

   Serial.println(newReading); //print load cell value

}

