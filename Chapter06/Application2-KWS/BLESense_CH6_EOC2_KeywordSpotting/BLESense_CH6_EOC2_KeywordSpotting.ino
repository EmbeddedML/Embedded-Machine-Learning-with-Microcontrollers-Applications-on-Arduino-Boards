/* CUSTOM BUILT CMSIS DSP LIBRARY MUST BE INCLUDED */
#include <PDM.h>
#include "lib_serial.h"
#include "ks_feature_extraction.h"
#include "knn_cls_inference.h"


#define BUFFER_SIZE		(8*1024)
int16_t AudioBuffer[BUFFER_SIZE] = {0};
int16_t AudioBufferDown[BUFFER_SIZE/4] = {0};
float32_t AudioBufferF32Down[BUFFER_SIZE/4] = {0}; // Downsampled 8KHz mono
float32_t ExtractedFeatures[nbDctOutputs * 2] = {0};
volatile int samplesRead;
volatile uint32_t sampleCount = 0;
int output[NUM_CLASSES] = {0};

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

  ks_mfcc_init();
}


void loop() 
{
  	/*WAIT UNTIL AUDIO DATA IS READY*/
	  if (sampleCount >= BUFFER_SIZE) 
  {
    sampleCount = 0;
		int16_t max = 0; uint32_t idx = 0, i = 0, j = 0;
		/* DOWNSAMPLING TO 8KHZ */
		for (i = 0; i < BUFFER_SIZE/4; ++i)
		{
		  AudioBufferDown[i] = AudioBuffer[j];
		  j = j + 4;
		}
		arm_absmax_q15(AudioBufferDown, BUFFER_SIZE/4, &max, &idx);
		for (i = 0; i < BUFFER_SIZE/4; ++i)
		{
			AudioBufferF32Down[i] = (float32_t)AudioBufferDown[i]/(float32_t)max;
		}

		/*SEND AUDIO DATA TO PC*/
		LIB_SERIAL_Transmit(AudioBufferF32Down, BUFFER_SIZE/4, TYPE_F32);

		/* FEATURE EXTRACTION */
		ks_mfcc_extract_features(AudioBufferF32Down, ExtractedFeatures);
		ks_mfcc_extract_features(&AudioBufferF32Down[1024], &ExtractedFeatures[nbDctOutputs]);
		knn_cls_predict(ExtractedFeatures, output);
		/*SEND INFERENCE RESULTS TO PC*/
		LIB_SERIAL_Transmit(output, sizeof(output)/sizeof(float32_t), TYPE_S32);
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
