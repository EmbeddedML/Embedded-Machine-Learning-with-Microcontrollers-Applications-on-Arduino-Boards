#include <Arduino_HTS221.h>
#include "lib_serial.h"

float txBuffer[2];

void setup() 
{
  // Init USB peripheral
  Serial.begin(2000000);
  while (!Serial);
  // Init Blue LED
  pinMode(LEDB, OUTPUT);
  // Turn Off LED
  digitalWrite(LEDB, HIGH);
  // Init HTS221
  HTS.begin();  
}

void loop() 
{
  txBuffer[0] = HTS.readHumidity();
  txBuffer[1] = HTS.readTemperature();  
  if (LIB_SERIAL_Transmit(txBuffer, 2, TYPE_F32) == SERIAL_OK) 
  {
    // Turn On Blue LED
    digitalWrite(LEDB, LOW);
    delay(1000);
    // Turn Off Blue LED
    digitalWrite(LEDB, HIGH);     
    delay(1000);
  }
}