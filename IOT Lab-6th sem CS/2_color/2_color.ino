// common cathode red and green LED
// switches red on, then green on
#define RED_LED   6
#define GRN_LED   5

void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(GRN_LED, OUTPUT);
}

void loop() {
  // red on, green off
  digitalWrite(RED_LED, HIGH);
  digitalWrite(GRN_LED, LOW);
  delay(1000);
  // red off, green on
  digitalWrite(RED_LED, LOW);
  digitalWrite(GRN_LED, HIGH);
  delay(1000);
}
