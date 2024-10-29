/*
 * lib_model.h
 *
 *  Created on: Oct 14, 2023
 *      Author: Eren Atmaca
 */

#ifndef INC_LIB_MODEL_H_
#define INC_LIB_MODEL_H_

#include <TensorFlowLite.h>
#include "stdint.h"
#include "tensorflow/lite/micro/all_ops_resolver.h"
#include "tensorflow/lite/micro/micro_interpreter.h"
#include "tensorflow/lite/micro/micro_log.h"
#include "tensorflow/lite/micro/system_setup.h"
#include "tensorflow/lite/schema/schema_generated.h"

#define OK		(0)
#define ERROR	(-1)

int8_t LIB_MODEL_Init(const void *tfliteModel, TfLiteTensor **inputTensor, uint8_t *buffer, uint32_t bufferSize);
int8_t LIB_MODEL_Run(TfLiteTensor **output);


#endif /* INC_LIB_MODEL_H_ */
