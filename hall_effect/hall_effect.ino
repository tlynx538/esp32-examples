int val = 0;
void setup() {
  Serial.begin(9600);
    }
 
void loop() {
  // put your main code here, to run repeatedly:
  val = hallRead();
  delay(1000);
  // print the results to the serial monitor:
  //Serial.print("sensor = ");
  Serial.println(val);//to graph 
}
