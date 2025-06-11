float data[1000];
uint32_t startTick, stopTick, executionTime;
void setup() 
{
  Serial.begin(2000000);
}
void loop() 
{
  startTick = micros();
  for (uint32_t i = 0; i < 1000; i++)
  {
	  data[i] = M_PI * M_E * i;
  }
  stopTick = micros();
  executionTime = stopTick - startTick;
  Serial.print("Time Elapsed:");
  Serial.println(executionTime);
  delay(1000);
}
