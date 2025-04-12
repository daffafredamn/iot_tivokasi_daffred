#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial. begin (115200);
  Serial printin ("Hello, ESP32!");
  pinMode (33, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode (26, OUTPUT);
}
  
  void loop() {
  Serial-printin ("Red");
  digitalWrite(33, HIGH);
  delay (2000);
  digitalWrite(33, LOW);
  
  Serial println("Yellow");
  digitalwrite(25, HIGH);
  delay (2000);
  digitalWrite(25, LOW);
  
  Serial, printin ("Green");
  digitalwrite(26, HIGH);
  delay (2000);
  digitalWrite(26, LOW);
}