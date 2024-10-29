/*
 * lib_serialimage.h
 *
 *  Created on: 29 Oca 2023
 *      Author: Eren Atmaca
 */

#ifndef INC_SERIAL_IMAGE_H_
#define INC_SERIAL_IMAGE_H_

#include "lib_image.h"

#define SERIAL_OK				  ((int8_t)0)
#define SERIAL_ERROR			((int8_t)-1)

int8_t LIB_SERIAL_IMG_Transmit(IMAGE_HandleTypeDef * img);
int8_t LIB_SERIAL_IMG_Receive(IMAGE_HandleTypeDef * img);

#endif /* INC_SERIAL_IMAGE_H_ */
