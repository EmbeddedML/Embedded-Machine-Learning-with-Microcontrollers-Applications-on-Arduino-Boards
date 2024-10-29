#include <Arduino_OV767X.h>
#include "hdr_feature_extraction.h"
#include "lib_serialimage.h"
#include "lib_slidingwindow.h"
#include "lib_image.h"
#include "lib_serial.h"

uint8_t buffer[IMAGE_RESOLUTION_QVGA_WIDTH * IMAGE_RESOLUTION_QVGA_WIDTH * IMAGE_FORMAT_GRAYSCALE];

HDR_FtrExtOutput output;
IMAGE_HandleTypeDef img;

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
  hdr_calculate_moments(&img, &output);
  

  hdr_calculate_hu_moments(&output);
  
  // Transmit Moments to PC
  LIB_SERIAL_Transmit(&output, sizeof(output)/sizeof(float), TYPE_F32);
   
  delay(1000);
}
