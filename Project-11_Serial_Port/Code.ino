// Control LED by Serial Port 
int led = 13;
void setup(){
  Serial.begin(9600);
  Serial.println("Hello World");
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW); 
}
void loop(){
  if(Serial.available()>0){
      int rxd = Serial.read();
      if(rxd == 'a'){
        digitalWrite(led,HIGH);
      }
      if(rxd == 'b'){
        digitalWrite(led,LOW);
      }
    }
}