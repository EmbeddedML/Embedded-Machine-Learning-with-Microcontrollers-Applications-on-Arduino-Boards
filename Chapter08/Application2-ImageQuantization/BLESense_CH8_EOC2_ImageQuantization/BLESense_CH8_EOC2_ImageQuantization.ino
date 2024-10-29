#include <Arduino_OV767X.h>
#include "lib_serialimage.h"
#include "lib_slidingwindow.h"
#include "lib_image.h"
#include "lib_serial.h"
#include "kmeans_clus_inference.h"

uint8_t pImage[IMAGE_RESOLUTION_QQVGA_HEIGHT*IMAGE_RESOLUTION_QQVGA_WIDTH*3];
uint8_t pImageQuantized[IMAGE_RESOLUTION_QQVGA_HEIGHT*IMAGE_RESOLUTION_QQVGA_WIDTH*3];

IMAGE_HandleTypeDef img, img_q;

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
  LIB_IMAGE_InitStruct(&img, (uint8_t*)pImage, IMAGE_RESOLUTION_QQVGA_HEIGHT, IMAGE_RESOLUTION_QQVGA_WIDTH, IMAGE_FORMAT_RGB565);
  LIB_IMAGE_InitStruct(&img_q, (uint8_t*)pImageQuantized, IMAGE_RESOLUTION_QQVGA_HEIGHT, IMAGE_RESOLUTION_QQVGA_WIDTH, IMAGE_FORMAT_RGB888);
  
  if (!Camera.begin(QQVGA, RGB565, 1)) 
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
  Camera.readFrame(pImage);
  // Preprocess Image

  // Transmit Image to PC
  LIB_SERIAL_IMG_Transmit(&img);
  delay(1000);
  digitalWrite(LEDB, HIGH);  
  

  // Extract Features
  uint32_t i, j = 0;
  for (i = 0; i < img.height * img.width * img.format; i = i + img.format)
  {
    uint8_t r8, g8, b8;
    r8 = (img.pData[i + 1] & 0xF8) << 3;
    g8 = (((img.pData[i + 1] & 0x07) << 5) | ((img.pData[i] & 0xE0) >> 3));
    b8 = (img.pData[i] & 0x1F) << 3;
    
    float rgb[3] = {r8, g8, b8};
    float cluster_idx = {0};
    kmeans_clus_predict(rgb, &cluster_idx, 0);
    pImageQuantized[j + 0] = (uint8_t)centroids[(uint8_t)cluster_idx][0];
    pImageQuantized[j + 1] = (uint8_t)centroids[(uint8_t)cluster_idx][1];
    pImageQuantized[j + 2] = (uint8_t)centroids[(uint8_t)cluster_idx][2];
    j = j + img_q.format;
  }

  // Transmit Quantized Image to PC
  digitalWrite(LEDG, LOW); 
  LIB_SERIAL_IMG_Transmit(&img_q);
  delay(1000);
  digitalWrite(LEDG, HIGH); 
}
