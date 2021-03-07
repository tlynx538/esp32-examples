
void setup()
{
  Serial.begin(115200);
  delay(1000); // give me time to bring up serial monitor
  Serial.println("ESP32 Touch Test");
}
 
void loop()
{
  Serial.println(touchRead(T0)); // get value using T0
  if(touchRead(T0) >= 100)
    Serial.println("No Touch or less pressure detected");
  else 
    Serial.println("Harder");  
  delay(1000);
}
