// It sounds at default frequency.
int buzzer = 3;
void setup(){
    pinMode(buzzer,OUTPUT);
}
void loop(){
    digitalWrite(buzzer,HIGH);
    delay(1000);
    digitalWrite(buzzer,LOW);
    delay(1000);
}

// If you want to change the frequency.

int buzzer = 3;
void setup(){
    pinMode(buzzer,OUTPUT);
}
void loop(){
    // 1000 Hz (1 second)
    tone(buzzer, 1000);
    delay(1000);
    // 500 Hz (0.5 second)
    tone(buzzer, 500);
    delay(1000);
    // Stop the tone
    noTone(buzzer);
    delay(1000);
}