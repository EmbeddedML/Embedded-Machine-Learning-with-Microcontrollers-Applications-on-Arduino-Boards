#include <Arduino_OV767X.h>
#include "lib_serialimage.h"
#include "lib_slidingwindow.h"
#include "lib_image.h"
#include "lib_serial.h"
#include "lib_modelble.h"
#include "hdr_cnn.h"

IMAGE_HandleTypeDef img;
uint8_t buffer[IMAGE_RESOLUTION_QVGA_HEIGHT * IMAGE_RESOLUTION_QVGA_WIDTH * IMAGE_FORMAT_GRAYSCALE];
constexpr int kTensorArenaSize = 120 * 1024;
alignas(16) static uint8_t tensor_arena[kTensorArenaSize];
TfLiteTensor* input = nullptr;
TfLiteTensor* output = nullptr;

void setup() 
{
  Serial.begin(2000000);
  while (!Serial);
  // Init LEDs
  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDB, OUTPUT);
  
  pinMode(D12, OUTPUT);
  digitalWrite(D12, HIGH);
  // Turn off the LEDs
  digitalWrite(LEDR, HIGH);
  digitalWrite(LEDG, HIGH);  
  digitalWrite(LEDB, HIGH);   
  // Init image structure
  LIB_MODEL_Init(converted_model_tflite, &input, tensor_arena, kTensorArenaSize);
  LIB_IMAGE_InitStruct(&img, (uint8_t*)buffer, IMAGE_RESOLUTION_QVGA_HEIGHT, IMAGE_RESOLUTION_QVGA_WIDTH, IMAGE_FORMAT_GRAYSCALE);
  if (!Camera.begin(QVGA, GRAYSCALE , 1)) 
  {
    digitalWrite(LEDR, LOW);
    while (1);
  }
  digitalWrite(LEDG, LOW);
  delay(1000);
  digitalWrite(LEDG, HIGH);
}

void loop() 
{
  digitalWrite(LEDB, LOW);  
  Camera.readFrame(buffer);

  // Transmit Image to PC
  LIB_SERIAL_IMG_Transmit(&img);

  // Downsample Image to 32x32x3 (float)
  
  // Run Model
  memcpy(input->data.f, (void*)&buffer, 32*32*3*4);
  LIB_MODEL_Run(&output);

  // Transmit Moments to PC
  LIB_SERIAL_Transmit(output->data.f, 10, TYPE_F32);
  digitalWrite(LEDG, LOW); 

  delay(1000);
}
