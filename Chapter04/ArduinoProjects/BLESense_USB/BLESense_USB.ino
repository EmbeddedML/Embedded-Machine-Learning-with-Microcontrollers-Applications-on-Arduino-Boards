void setup() 
{
  Serial.begin(2000000);
  // Initialize LED and Turn On    
  pinMode(LEDR, OUTPUT);
  digitalWrite(LEDR, LOW);
  // Wait USB connection
  while(!Serial);
  // Turn LED Off
  digitalWrite(LEDR, HIGH);
  Serial.print("ML on Arduino!")
}


void loop() 
{
  
}
