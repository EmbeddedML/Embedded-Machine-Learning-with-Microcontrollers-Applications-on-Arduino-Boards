#include <Arduino_OV767X.h>
#include "lib_serialimage.h"

IMAGE_HandleTypeDef img;
uint8_t buffer[IMAGE_RESOLUTION_QVGA_WIDTH * IMAGE_RESOLUTION_QVGA_HEIGHT * IMAGE_FORMAT_RGB565];

void setup() 
{
  Serial.begin(2000000);
  while (!Serial);
  // Init LEDs
  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDB, OUTPUT);
  // Turn off the LEDs
  digitalWrite(LEDR, HIGH);
  digitalWrite(LEDG, HIGH);  
  digitalWrite(LEDB, HIGH);   
  // Init image structure
  LIB_IMAGE_InitStruct(&img, 
    buffer,
    IMAGE_RESOLUTION_QVGA_HEIGHT,
    IMAGE_RESOLUTION_QVGA_WIDTH,
    IMAGE_FORMAT_RGB565);

  if (!Camera.begin(QVGA, RGB565, 5)) 
  {
    digitalWrite(LEDR, LOW);
    while (1);
  }
  digitalWrite(LEDG, LOW);
  delay(1000);
}

void loop() 
{
  Camera.readFrame(buffer);
  if(LIB_SERIAL_IMG_Transmit(&img) == SERIAL_OK)
  {
    digitalWrite(LEDB, LOW);    
  }
  delay(1000);
  digitalWrite(LEDB, HIGH);    
}


