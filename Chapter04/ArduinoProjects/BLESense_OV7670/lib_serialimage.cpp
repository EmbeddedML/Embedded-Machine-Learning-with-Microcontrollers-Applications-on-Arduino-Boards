/*
 * lib_serialimage.c
 *
 *  Created on: 29 Oca 2023
 *      Author: Eren Atmaca
 */

#include "lib_serialimage.h"
#include <Arduino.h>



/* |'S'|'T'|'W'|HEIGHT0|HEIGHT1|WIDTH0||WIDTH1|FORMAT|... DATA ...| */
int8_t LIB_SERIAL_IMG_Transmit(IMAGE_HandleTypeDef * img)
{
	uint8_t __header[3] = {'S','T','W'};
	uint8_t * __pData = img->pData;
  uint32_t __size = img->size;
  
	Serial.write(__header, 3);
	Serial.write((uint8_t*)&img->height, 2);
	Serial.write((uint8_t*)&img->width,  2);
	Serial.write((uint8_t*)&img->format, 1);
	delay(1);

  if(Serial.write(__pData, __size) != __size)
  {
    return SERIAL_ERROR;
  }
	return SERIAL_OK;
}

int8_t LIB_SERIAL_IMG_Receive(IMAGE_HandleTypeDef * img)
{
	uint8_t __header[3] = {'S','T','R'};
	uint8_t * __pData = img->pData;
  uint32_t __size = img->size;
  uint32_t __tick = 0;
  
  Serial.write(__header, 3);
	Serial.write((uint8_t*)&img->height, 2);
	Serial.write((uint8_t*)&img->width,  2);
	Serial.write((uint8_t*)&img->format, 1);
	delay(1);

  __tick = millis();
  while (Serial.available() == 0)
  {
    if ((millis() - __tick) > 10000) 
    {
      return SERIAL_ERROR;
    }
  }
  if (Serial.readBytes(__pData, __size) != __size)
  {
    return SERIAL_ERROR;
  }
	return SERIAL_OK;
}

