#include "lib_rng.h"
#include "lib_serial.h"
uint32_t randu32 = 0;
void setup() 
{
  Serial.begin(2000000);
}
void loop() 
{
  randu32 = LIB_RNG_GetRandomNumber();
  LIB_SERIAL_Transmit(&randu32, 1, TYPE_U32);
  delay(1000);
}

