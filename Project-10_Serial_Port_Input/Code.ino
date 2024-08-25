// Write a programme to give input to Serial port.
// You can give input on Serial Monitor (which is present on top right side in arduino ide)
void setup() {
  Serial.begin(9600);
  Serial.println("Hello World");
}

void loop() {
  if(Serial.available() > 0 ) // if the Serial available function returns 1
  // it means that some data has been received in the serial buffer of arduino
  {
    int rxd = Serial.read();
    delay(1000);
    Serial.print("You've pressed ");
    Serial.write(rxd);
    Serial.println(); // For next line
  }
}
