#include "mbed.h"
#include "har_feature_extraction.h"
#include "Arduino_BMI270_BMM150.h"
#include "mlp_har_model.h"
#include "lib_serial.h"
#include "lib_modelble.h"
//#include <ThreadDebug.h>

// Define SerialUSB as serial debug port
// use DEBUG_BREAK_IN_SETUP to break the program at setup() entry, waiting for debugger connection.
// use DEBUG_NO_BREAK_IN_SETUP to let the program start normally, debugger can attach later.  
//UsbDebugCommInterface  debugComm(&SerialUSB);
//ThreadDebug            threadDebug(&debugComm, DEBUG_BREAK_IN_SETUP);

#define SIZE_INPUT	VECTOR_LEN

mbed::Ticker ticker;
HAR_FtrExtOutput features;

uint8_t LedStatus = 0;
volatile uint32_t counter = 0;
volatile uint8_t isDataReady = 0, isSamplingTime = 0;
float accel[3][SIZE_INPUT] = {0};

constexpr int kTensorArenaSize = 174 * 1024;
alignas(16) uint8_t tensor_arena[kTensorArenaSize];
TfLiteTensor* input = nullptr;
TfLiteTensor* output = nullptr;

void TICKER_Callback();

void setup() 
{
  Serial.begin(2000000);
  while(!Serial);
  pinMode(LED_RED, OUTPUT);
  pinMode(LEDB, OUTPUT);
  pinMode(LEDG, OUTPUT);
  digitalWrite(LEDG, HIGH);
  digitalWrite(LED_RED, HIGH);
  digitalWrite(LEDB, HIGH);
  LIB_MODEL_Init(converted_model_tflite, &input, tensor_arena, kTensorArenaSize);
  ticker.attach(&TICKER_Callback, 0.02);
  IMU.begin();
}

void loop() 
{
  if (isDataReady == 1)
  {
    digitalWrite(LEDB, LOW);
    isDataReady = 0;
    /*SEND AUDIO DATA TO PC*/
    LIB_SERIAL_Transmit(accel, sizeof(accel)/sizeof(float), TYPE_F32);
    /*RUN INFERENCE ON MCU*/
    har_extract_features(accel, &features);
    digitalWrite(LEDB, HIGH);
    digitalWrite(LEDG, LOW);
    memcpy(input->data.f, (void*)&features, sizeof(features));
		LIB_MODEL_Run(&output);
    
    /*SEND INFERENCE RESULTS TO PC*/
    LIB_SERIAL_Transmit(output->data.f, 6, TYPE_F32);
    digitalWrite(LEDG, HIGH);
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
