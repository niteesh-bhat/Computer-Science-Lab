void setup(){
  pinMode(2,INPUT);
  Serial.begin(9600);
 
}
void loop(){
  if (digitalRead(2)==HIGH){
    Serial.println("detected");
  }
  else{
    Serial.println("no");
  }
delay(500);
}
