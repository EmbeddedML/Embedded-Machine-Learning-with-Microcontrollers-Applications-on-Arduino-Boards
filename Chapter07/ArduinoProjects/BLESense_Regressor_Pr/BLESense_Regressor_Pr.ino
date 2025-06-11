#include "lib_serial.h"
#include "lib_rng.h"
#include "poly_reg_inference.h"

#define INPUT_PC		  1
#define INPUT_MCU		  2
#define INPUT			    INPUT_PC

#define SIZE_INPUT 		NUM_INPUTS
#define SIZE_OUTPUT 	1

float input[SIZE_INPUT];
float output[SIZE_OUTPUT];

void setup() 
{
  Serial.begin(2000000);
  while(!Serial);
  delay(1000);
}

void loop() 
{
#if (INPUT == INPUT_PC)
  LIB_SERIAL_Receive(input, SIZE_INPUT, TYPE_F32);
#elif (INPUT == INPUT_MCU)
  for (uint32_t i = 0; i < SIZE_INPUT; ++i)
    input[i] = (float)(LIB_RNG_GetRandomNumber() % 1000) / 1000.0f;
	LIB_SERIAL_Transmit(input, SIZE_INPUT, TYPE_F32);
#endif
  poly_reg_predict(input, output);
	LIB_SERIAL_Transmit((void*)&output, SIZE_OUTPUT, TYPE_F32);

	delay(1000);
}
