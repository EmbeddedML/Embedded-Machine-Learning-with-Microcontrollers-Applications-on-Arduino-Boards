#include <Arduino_OV767X.h>
#include "lib_serialimage.h"
#include "lib_slidingwindow.h"
#include "lib_image.h"
#include "lib_serial.h"
#include "lib_modelble.h"
#include "hdr_cnn.h"

IMAGE_HandleTypeDef img, croppedGray;
SW_TypeDef sw = {&img, &croppedGray, 0};

constexpr int kTensorArenaSize = 195 * 1024;
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
  LIB_IMAGE_InitStruct(&img, (uint8_t*)&tensor_arena, IMAGE_RESOLUTION_QVGA_HEIGHT, IMAGE_RESOLUTION_QVGA_WIDTH, IMAGE_FORMAT_GRAYSCALE);
  LIB_IMAGE_InitStruct(&croppedGray, (uint8_t*)&tensor_arena[IMAGE_RESOLUTION_QVGA_HEIGHT * IMAGE_RESOLUTION_QVGA_WIDTH * IMAGE_FORMAT_GRAYSCALE], 32, 32, IMAGE_FORMAT_GRAYSCALE);
  LIB_SW_Init(&sw);
  
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
  // Get Image from Camera
  digitalWrite(LEDB, LOW);  
  Camera.readFrame(img.pData);

  // Preprocess Image
  // Crop Image to 32x32x3 
  LIB_SW_GetWindow(&sw);
  uint32_t j = 0, i = 0;
  for (i = 0; i < 32*32*3; i = i + 3)
  {
    input->data.uint8[i + 0] = croppedGray.pData[j];
    input->data.uint8[i + 1] = croppedGray.pData[j];
    input->data.uint8[i + 2] = croppedGray.pData[j];
    j++;
  }

  // Transmit Image to PC
  LIB_SERIAL_IMG_Transmit(&croppedGray);

  // RUN INFERENCE
  LIB_MODEL_Run(&output);
  
  // Transmit Results to PC
  LIB_SERIAL_Transmit(output->data.uint8, 10, TYPE_U8);
  
  digitalWrite(LEDG, LOW); 
  delay(1000);
}
