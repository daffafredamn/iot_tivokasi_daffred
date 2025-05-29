#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");

  pinMode(33, OUTPUT);  // LED merah
  pinMode(25, OUTPUT);  // LED kuning
  pinMode(26, OUTPUT);  // LED hijau
}

void loop() {
  Serial.println("Red");
  digitalWrite(33, HIGH);
  delay(2000);
  digitalWrite(33, LOW);

  Serial.println("Yellow");
  digitalWrite(25, HIGH);
  delay(2000);
  digitalWrite(25, LOW);

  Serial.println("Green");
  digitalWrite(26, HIGH);
  delay(2000);
  digitalWrite(26, LOW);
}
