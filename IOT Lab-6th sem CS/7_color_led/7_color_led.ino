void setup () {
  // Initialize the digital pin as an output.
  // Pin 11 has an LED connected on most Arduino boards:
  pinMode (11, OUTPUT);
  
}

void loop () {
  digitalWrite (11, HIGH); // set the LED on
  delay (2000); // wait for a second
  digitalWrite (11, LOW); // set the LED off
  delay (2000); // wait for a second
}
