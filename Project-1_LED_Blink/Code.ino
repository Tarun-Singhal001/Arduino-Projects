// Pin 13 has a Built-in LED
int led = 13;
void setup() {
  // put your setup code here, to run once:
  // Blinking of Builtin LED
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(1000);
}
