/* CUSTOM BUILT CMSIS DSP LIBRARY MUST BE INCLUDED */
#include <PDM.h>
#include "lib_serial.h"
#include "lib_modelble.h"
#include "kws_cnn.h"
#include "arm_math.h"

#define BUFFER_SIZE		(8*1024)


int16_t AudioBuffer[BUFFER_SIZE] = {0}; // 16KHz
float   AudioBufferF32Down[BUFFER_SIZE/2] = {0}; // 8KHz 
float   fft_[257*2];
float fft_mag[257];

volatile int samplesRead;
volatile uint32_t sampleCount = 0;

constexpr int kTensorArenaSize = 128 * 1024;
alignas(16) static uint8_t tensor_arena[kTensorArenaSize];
TfLiteTensor* input = nullptr;
TfLiteTensor* output = nullptr;

void setup() 
{
  //Init Communication
  Serial.begin(2000000);
  while (!Serial);
  // Init LED
  pinMode(LEDG, OUTPUT);
  // Turn off LED 
  digitalWrite(LEDG, HIGH);
  PDM.onReceive(onPDMdata);
  //Init PDM microphone
  if (!PDM.begin(1, 16000)) 
  {
    while (1);
  }
  LIB_MODEL_Init(converted_model_tflite, &input, tensor_arena, kTensorArenaSize);
}


void loop() 
{
  /*WAIT UNTIL AUDIO DATA IS READY*/
  if (sampleCount >= BUFFER_SIZE) 
  {
    sampleCount = 0;
		int16_t max = 0; uint32_t idx = 0, i = 0, j = 0;
		
    /* DOWNSAMPLING TO 8KHZ */
    arm_absmax_q15(AudioBuffer, BUFFER_SIZE, &max, &idx);
		for (i = 0; i < BUFFER_SIZE/2; ++i)
		{
		  AudioBufferF32Down[i] = (float)AudioBuffer[j]/(float)max;
		  j = j + 2;
		}
		
    for (uint32_t i = 0; i < 30; i++)
		{
			arm_rfft_fast_instance_f32 fft;
			arm_rfft_fast_init_512_f32(&fft);
			arm_rfft_fast_f32(&fft, &AudioBufferF32Down[i * 256] , fft_, 0);
			arm_cmplx_mag_f32(fft_, fft_mag, 257);
			for (uint32_t j = 0; j < 257; ++j)
			{
				input->data.int8[i * 257 + j] = (int8_t)fft_mag[j];
			}
		}

		/*SEND AUDIO DATA TO PC*/
		LIB_SERIAL_Transmit(AudioBufferF32Down, sizeof(AudioBufferF32Down)/sizeof(float), TYPE_F32);
		
    memcpy(input->data.f, AudioBufferF32Down, sizeof(AudioBufferF32Down));
		LIB_MODEL_Run(&output);

		/*SEND INFERENCE RESULTS TO PC*/
		LIB_SERIAL_Transmit(output->data.f, 10, TYPE_F32);
	}
}

void onPDMdata() 
{
  int bytesAvailable = PDM.available();

  // Read into the sample buffer
  PDM.read(&AudioBuffer[sampleCount], bytesAvailable);

  // 16-bit, 2 bytes per sample
  samplesRead = bytesAvailable / 2;
  sampleCount += samplesRead;
}
