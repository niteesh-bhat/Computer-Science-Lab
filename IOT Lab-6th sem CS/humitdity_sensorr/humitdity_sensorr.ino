#include <DHT.h>

#define DHT_PIN 3
#define DHT_TYPE DHT11

DHT sensor(DHT_PIN, DHT_TYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello from Humidity sensor");

  sensor.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  float humidity = sensor.readHumidity();
  if (isnan(humidity)) {
    Serial.println("Failed to read humidity sensor");
  } else {
    Serial.print("Humidity = ");
    Serial.print(humidity);
    Serial.println("%");
  }
  delay(1000);
}
