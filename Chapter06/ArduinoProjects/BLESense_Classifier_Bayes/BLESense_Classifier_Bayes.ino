#include "lib_serial.h"
#include "lib_rng.h"
#include "bayes_cls_inference.h"

#define INPUT_PC		  1
#define INPUT_MCU		  2
#define INPUT			    INPUT_PC

#define SIZE_INPUT 		NUM_FEATURES
#define SIZE_OUTPUT 	NUM_CLASSES

float input[SIZE_INPUT];
float output[SIZE_OUTPUT];

arm_matrix_instance_f32 mat_input = {.numRows= NUM_FEATURES, .numCols = 1,  .pData=input};
arm_matrix_instance_f32 mat_output = {.numRows=1, .numCols = NUM_CLASSES, .pData=output};

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
  bayes_cls_predict(&mat_input, &mat_output);
  LIB_SERIAL_Transmit((void*)&output, SIZE_OUTPUT, TYPE_F32);

	delay(1000);
}
