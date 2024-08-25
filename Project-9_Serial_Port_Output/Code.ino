// You can show output on Serial Monitor Which is present on top right side in arduino ide
// Write a programme to get a output from the Serial port.
void setup() {
  Serial.begin(9600);
  Serial.println("Hello world");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("repeat");
  delay(1000);
}
