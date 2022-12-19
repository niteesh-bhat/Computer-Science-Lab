
void setup() 
{
Serial.begin(9600); // activates Serial Communication
}
 
void loop() 
{
  if(digitalRead(8)== 0){
//Serial.print(digitalRead(8));
Serial.print(" 1(line detected) \n");}
else { Serial.print("0(not detected) \n");
  }
// Line Tracking sensor is connected with pin 8 of the Arduino
delay(500);
}
