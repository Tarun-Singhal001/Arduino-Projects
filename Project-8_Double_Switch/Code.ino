// Sw1 is pressed, all 2 LEDs blink 2 times with 500ms of delay.
// Sw2 is pressed, all 2 LEDs blink 4 times with 1s of delay.
int sw1 = 2;
int sw2 = 3;
int led1 = 4;
int led2 = 5;
void setup(){
  pinMode(sw1, INPUT_PULLUP);
  pinMode(sw2, INPUT_PULLUP);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}
void loop(){
  if(digitalRead(sw1) == LOW){
    for(int i = 1; i <= 2; i++){
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      delay(500);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      delay(500);
    }
  }
  if(digitalRead(sw2) == LOW){
    for(int i = 1; i <= 4; i++){
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      delay(1000);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      delay(1000);
    }
  }
}