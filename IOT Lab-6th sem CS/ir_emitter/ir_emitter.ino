void setup(){
  pinMode(4,INPUT);
  Serial.begin(9600);
}
void loop(){
  if(digitalRead(4))
  {
    Serial.println("detected");}
    else{
   Serial.println(" not detected");
  }
delay(500);
}
