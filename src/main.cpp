#include "Arduino.h"
#include "Keyboard.h"

#include "configuration.h"
#include "pins.h"

void pinModeOutOff(int pin) {
  pinMode(pin, OUTPUT);
  digitalWrite(pin, LOW);
}

void ledWrite(int led, bool state, bool en, bool inv) {
  if(en) {
    if(!inv) {
      digitalWrite(led, state);
    } else {
      digitalWrite(led, !state);
    }
  }
}


void setup() {
  pinMode(PIN_BT_MUTE, INPUT_PULLUP);
  pinMode(PIN_BT_RAISE, INPUT_PULLUP);
  pinModeOutOff(PIN_LED_MUTE_ON);
  pinModeOutOff(PIN_LED_MUTE_OFF);
  pinModeOutOff(PIN_LED_RAISE_ON);
  pinModeOutOff(PIN_LED_RAISE_OFF);
  ledWrite(PIN_LED_MUTE_ON, HIGH, LED_MUTE_ON_EN, LED_MUTE_ON_INV);
  ledWrite(PIN_LED_RAISE_OFF, HIGH, LED_RAISE_OFF_EN, LED_RAISE_OFF_INV);
  Keyboard.begin();
}

void loop() {
  
}
