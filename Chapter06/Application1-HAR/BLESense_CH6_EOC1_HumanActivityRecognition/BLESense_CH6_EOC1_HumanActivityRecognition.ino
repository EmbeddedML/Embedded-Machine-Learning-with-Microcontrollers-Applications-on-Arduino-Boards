#include "mbed.h"
#include "har_feature_extraction.h"
#include "Arduino_BMI270_BMM150.h"
#include "lib_serial.h"
#include "bayes_cls_inference.h"


#define SIZE_INPUT	VECTOR_LEN

mbed::Ticker ticker;
HAR_FtrExtOutput features;

uint8_t LedStatus = 0;
volatile uint32_t counter = 0;
volatile uint8_t isDataReady = 0, isSamplingTime = 0;
float accel[3][SIZE_INPUT] = {0};
arm_matrix_instance_f32 mat_input;
arm_matrix_instance_f32 mat_output; 
float output[NUM_CLASSES] = {0};

void TICKER_Callback();
void init_struct();

void setup() 
{
  Serial.begin(2000000);
  while(!Serial);
  init_struct();
  pinMode(LED_RED, OUTPUT);
  digitalWrite(LED_RED, HIGH);
  ticker.attach(&TICKER_Callback, 0.02);
  IMU.begin();
}

void loop() 
{
  if (isDataReady == 1)
  {
    isDataReady = 0;
    /*SEND AUDIO DATA TO PC*/
    LIB_SERIAL_Transmit(accel, sizeof(accel)/sizeof(float), TYPE_F32);
    /*RUN INFERENCE ON MCU*/
    har_extract_features(accel, &features);
    bayes_cls_predict(&mat_input, &mat_output);

    /*SEND INFERENCE RESULTS TO PC*/
    LIB_SERIAL_Transmit(&output, sizeof(output)/sizeof(float), TYPE_F32);
  }

  
  if(isSamplingTime)
  {
    isSamplingTime = 0;
    IMU.readAcceleration(accel[0][counter], accel[1][counter], accel[2][counter]);
    counter++;
    if (counter == SIZE_INPUT) 
    { 
      isDataReady = 1;
      counter = 0;
    }
  }
  
}

void TICKER_Callback()
{
  if(LedStatus == 0)
  {
    digitalWrite(LED_RED, LOW);
    LedStatus = 1;
  }
  else
  {
    digitalWrite(LED_RED, HIGH);
    LedStatus = 0;
  }

  isSamplingTime = 1;

}



void init_struct()
{
  mat_input.numCols = 1;
  mat_input.numRows = NUM_FEATURES;
  mat_input.pData = reinterpret_cast<float*>(&features);
  mat_output.numCols = NUM_CLASSES;
  mat_output.numRows=1;
  mat_output.pData= reinterpret_cast<float*>(&output);
}