int lastState = HIGH; // the previous state from the input pin
int currentState;    // the current reading from the input pin

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(7, INPUT);
}

void loop() {
  // read the state of the switch/button:
  currentState = digitalRead(7);
  if(lastState == LOW && currentState == HIGH)
    Serial.println("button pressed and The state changed from LOW to HIGH");
  lastState = currentState;
  delay(250);
}
