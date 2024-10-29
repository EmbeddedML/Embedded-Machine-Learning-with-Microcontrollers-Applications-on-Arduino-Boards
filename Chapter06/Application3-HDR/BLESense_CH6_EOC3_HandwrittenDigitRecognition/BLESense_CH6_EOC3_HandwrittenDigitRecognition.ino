#include <Arduino_OV767X.h>
#include "hdr_feature_extraction.h"
#include "lib_serialimage.h"
#include "lib_slidingwindow.h"
#include "lib_image.h"
#include "lib_serial.h"
#include "dt_cls_inference.h"

#define SIZE_INPUT 		(NUM_FEATURES)
#define SIZE_OUTPUT 	(NUM_CLASSES)

HDR_FtrExtOutput features;
IMAGE_HandleTypeDef img;

uint8_t buffer[IMAGE_RESOLUTION_QVGA_WIDTH * IMAGE_RESOLUTION_QVGA_WIDTH * IMAGE_FORMAT_GRAYSCALE];
int32_t output[SIZE_OUTPUT];

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
  // Preprocess Image

  // Transmit Image to PC
  LIB_SERIAL_IMG_Transmit(&img);


  digitalWrite(LEDG, LOW); 
  delay(1000);
  // Extract Features
  hdr_calculate_moments(&img, &features);
  hdr_calculate_hu_moments(&features);
  dt_cls_predict((float*)&features.hu_moments,(int*)output);

  // Transmit Moments to PC
  LIB_SERIAL_Transmit(&output, sizeof(output)/sizeof(int), TYPE_S32);

  delay(1000);
}
