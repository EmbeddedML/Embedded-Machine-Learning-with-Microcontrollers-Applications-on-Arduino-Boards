/*
 * lib_model.cpp
 *
 *  Created on: Oct 14, 2023
 *      Author: Eren Atmaca
 */
#include "lib_modelble.h"

static tflite::AllOpsResolver resolver;
static tflite::MicroInterpreter* interpreter;
static const tflite::Model* model = nullptr;

/*
 * @brief Initializes the TFLite model and library
 * @param tfliteModel 	TFLite Model
 * @param inputTensor 	Pointer to input TfLiteTensor structure
 * @param buffer 		Pointer to buffer
 * @param bufferSize 	Size of buffer
 * @retval 0 if successfully initialized
 */
int8_t LIB_MODEL_Init(const void *tfliteModel, TfLiteTensor **inputTensor, uint8_t *buffer, uint32_t bufferSize)
{
	model = tflite::GetModel(tfliteModel);
	if (model->version() != TFLITE_SCHEMA_VERSION)
	{
		MicroPrintf(
		  "Model provided is schema version %d not equal "
		  "to supported version %d.",
		  model->version(), TFLITE_SCHEMA_VERSION);
		return ERROR;
	}

	//AllOpsResolver();

	static tflite::MicroInterpreter static_interpreter(model, resolver, buffer, bufferSize);
	interpreter = &static_interpreter;

	// Allocate memory from the tensor_arena for the model's tensors.
	TfLiteStatus allocate_status = interpreter->AllocateTensors();
	if (allocate_status != kTfLiteOk)
	{
		MicroPrintf("AllocateTensors() failed");
		return ERROR;
	}

	// Get information about the memory area to use for the model's input.
	*inputTensor = interpreter->input(0);
	return OK;
}

/*
 * @brief Runs inference
 * @param output Pointer to output TfLiteTensor structure
 * @retval 0 if successfull inference
 */
int8_t LIB_MODEL_Run(TfLiteTensor **output)
{
	if (kTfLiteOk != interpreter->Invoke())
	{
		MicroPrintf("Invoke failed.");
		return ERROR;
	}
	*output = interpreter->output(0);
	return OK;
}
