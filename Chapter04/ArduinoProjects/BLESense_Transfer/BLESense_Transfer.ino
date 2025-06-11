#include "lib_serial.h"

uint8_t rxBuffer[12];
float txBuffer[2] = {M_PI, M_E};

void setup() 
{
  // Init USB peripheral
  Serial.begin(2000000);
  while (!Serial);
  // Init Blue LED
  pinMode(LEDB, OUTPUT);
  // Turn Off Blue LED
  digitalWrite(LEDB, HIGH); 
}

void loop() 
{
  if (LIB_SERIAL_Receive(rxBuffer, 12, TYPE_U8) == SERIAL_OK) 
  {
    if (strncmp((const char*)rxBuffer, "Hello World\n", 12) == 0)
    {
      // Turn On Blue LED
      digitalWrite(LEDB, LOW);
    }
    delay(1000);
    // Turn Off Blue LED
    digitalWrite(LEDB, HIGH);     
    LIB_SERIAL_Transmit(txBuffer , 2, TYPE_F32);
    delay(1000);
  }
}
