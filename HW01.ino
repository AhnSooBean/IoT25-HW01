#include <Arduino.h>
#define LED 2

void setup() {
  // setup code to run once
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
}

void loop() {
  // main code to run repeatedly
  digitalWrite(LED, HIGH);
  Serial.println("LED is on");
  delay(1000);
  digitalWrite(LED, LOW);
  Serial.println("LED is off");
  delay(1000);
}