int tiltPin = 2;      // pin number for tilt switch signal 
void setup() {  
  pinMode(tiltPin, INPUT);  // set the tilt switch pin as input
  Serial.begin(9600);
}
void loop(){
  // get the tilt switch state
  int tiltState = digitalRead(tiltPin);
  // check if tilt switch is tilted.
  if (tiltState == HIGH) {     
    Serial.println("Moved!!!");
  } 
  delay(500);
}
