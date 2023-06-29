/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/student/Desktop/IoT/ArjunLab4/src/ArjunLab4.ino"
void setup();
void loop();
#line 1 "/Users/student/Desktop/IoT/ArjunLab4/src/ArjunLab4.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

int buttonState = LOW;
int oldButtonState = LOW;
int ledState = LOW;

void setup()
{

  pinMode(D7, INPUT);
  pinMode(D5, OUTPUT);
}

void loop()
{

  buttonState = digitalRead(D7);

  if (buttonState != oldButtonState &&
      buttonState == HIGH)
  {
    ledState = (ledState == LOW ? HIGH : LOW);
    digitalWrite(D5, ledState);
    delay(50);
  }
  oldButtonState = buttonState;
}