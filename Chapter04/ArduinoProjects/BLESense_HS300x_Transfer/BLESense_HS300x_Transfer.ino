#include <Arduino_HS300x.h>
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
  // Init HS300x
  HS300x.begin();
}

void loop() 
{
  txBuffer[0] = HS300x.readHumidity();
  txBuffer[1] = HS300x.readTemperature();
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
