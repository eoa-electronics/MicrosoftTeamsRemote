#include "Arduino.h"
#include "Keyboard.h"

#include "configuration.h"
#include "pins.h"

bool isMute = true;
bool isRaise = false;

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

bool btRead(int bt, bool en, bool inv) {
  bool t1 = false;
  bool t2 = false;
  if(en) {
    if(!inv) {
      t1 = !digitalRead(bt);
    } else {
      t1 = digitalRead(bt);
    }
    delay(50);
    if(!inv) {
      t2 = !digitalRead(bt);
    } else {
      t2 = digitalRead(bt);
    }
    if(t1 == LOW || t2 == LOW) {
      return(LOW);
    } else {
      return(HIGH);
    }
  } else {
    return(LOW);
  }
}

void pressCombination(char k1, bool k2en, char k2, bool k3en, char k3) {
  Keyboard.press(k1);
  if(k2en) {
    Keyboard.press(k2);
  }
  if(k3en) {
    Keyboard.press(k3);
  }
  delay(100);
  Keyboard.releaseAll();
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
  if(btRead(PIN_BT_MUTE, BT_MUTE_EN, BT_MUTE_INV)) {
    if(isMute) {
      ledWrite(PIN_LED_MUTE_OFF, HIGH, LED_MUTE_OFF_EN, LED_MUTE_OFF_INV);
      ledWrite(PIN_LED_MUTE_ON, LOW, LED_MUTE_ON_EN, LED_MUTE_ON_INV);
      pressCombination(UNMUTE_KEY_1, UNMUTE_EN_2, UNMUTE_KEY_2, UNMUTE_EN_3, UNMUTE_KEY_3);
      isMute = false;
    } else {
      ledWrite(PIN_LED_MUTE_OFF, LOW, LED_MUTE_OFF_EN, LED_MUTE_OFF_INV);
      ledWrite(PIN_LED_MUTE_ON, HIGH, LED_MUTE_ON_EN, LED_MUTE_ON_INV);
      pressCombination(MUTE_KEY_1, MUTE_EN_2, MUTE_KEY_2, MUTE_EN_3, MUTE_KEY_3);
      isMute = true;
    }
  }
  if(btRead(PIN_BT_RAISE, BT_RAISE_EN, BT_RAISE_INV)) {
    if(!isRaise) {
      ledWrite(PIN_LED_RAISE_ON, HIGH, LED_RAISE_ON_EN, LED_RAISE_ON_INV);
      ledWrite(PIN_LED_RAISE_OFF, LOW, LED_RAISE_OFF_EN, LED_RAISE_OFF_INV);
      pressCombination(RAISE_KEY_1, RAISE_EN_2, RAISE_KEY_2, RAISE_EN_3, RAISE_KEY_3);
      isRaise = true;
    } else {
      ledWrite(PIN_LED_RAISE_ON, LOW, LED_RAISE_ON_EN, LED_RAISE_ON_INV);
      ledWrite(PIN_LED_RAISE_OFF, HIGH, LED_RAISE_OFF_EN, LED_RAISE_OFF_INV);
      pressCombination(UNRAISE_KEY_1, UNRAISE_EN_2, UNRAISE_KEY_2, UNRAISE_EN_3, UNRAISE_KEY_3);
      isRaise = false;
    }
  }
}
