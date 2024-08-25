// Sw1 is pressed both led should turn ON
// Sw2 is pressed both led should turn OFF
int sw1 = 2;
int sw2 = 3;
int led1 = 5;
int led2 = 4;
void setup(){
  pinMode(sw1,INPUT_PULLUP);
  pinMode(sw2,INPUT_PULLUP);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}
void loop(){
  if(digitalRead(sw1) == LOW){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    
  }
  if(digitalRead(sw2) == LOW){
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
  }
}