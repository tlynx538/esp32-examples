int ledPin = 2; //builtin LED
void setup() {
  pinMode(ledPin,OUTPUT); //set output for the builtin pin
  Serial.begin(9600); //set baud rate to 9600

}

void loop() {
  Serial.print("High"); //print High 
  digitalWrite(ledPin,HIGH); // set pin to HIGH
  delay(500); //set delay to 500 ms
  Serial.print("Low"); // print LOW
  digitalWrite(ledPin,LOW); //print Low
  delay(500); // set delay to 500 ms
}
