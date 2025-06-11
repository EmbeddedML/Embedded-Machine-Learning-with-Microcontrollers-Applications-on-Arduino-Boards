#include <Arduino_OV767X.h>
#include "lib_image.h"
uint8_t buffer[IMAGE_RESOLUTION_QVGA_WIDTH * IMAGE_RESOLUTION_QVGA_HEIGHT * IMAGE_FORMAT_RGB565];

void setup() 
{

  // Init LEDs
  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDB, OUTPUT);
  // Turn off the LEDs
  digitalWrite(LEDR, HIGH);
  digitalWrite(LEDG, HIGH);    
  digitalWrite(LEDB, HIGH); 
  if (!Camera.begin(QVGA, RGB565, 1)) 
  {
    digitalWrite(LEDG, LOW);
    while (1);
  }
  digitalWrite(LEDG, LOW);
  delay(1000);
}

void loop() 
{
  digitalWrite(LEDB, LOW); 
  Camera.readFrame(buffer);
  digitalWrite(LEDB, HIGH);
  delay(1000);
}


