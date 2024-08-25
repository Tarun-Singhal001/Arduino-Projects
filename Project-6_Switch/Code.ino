// Blink Inbuilt led using a tactile switch.
int led = 13;
int sw = 2;
void setup(){
  pinMode(led,OUTPUT);
  pinMode(sw,INPUT_PULLUP);
}
void loop(){
  if(digitalRead(sw) == LOW){
    digitalWrite(led,HIGH);
  }
  if(digitalRead(sw) == HIGH){
    digitalWrite(led,LOW);
  }
}