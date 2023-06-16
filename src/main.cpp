#include <Arduino.h>

#define LED 12

void setup() {
    pinMode(LED, OUTPUT);
}

void blink(uint8_t pin, long delayMs) {
    digitalWrite(pin, HIGH);
    delay(delayMs);
    digitalWrite(pin, LOW);
    delay(delayMs);
}

void loop() {
    blink(LED, 200);
    blink(LED, 200);
    delay(500);
}