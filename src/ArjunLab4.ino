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

  if (buttonState != oldButtonState && buttonState == HIGH)

  {
    ledState = (ledState == LOW ? HIGH : LOW);
    digitalWrite(D5, ledState);
    delay(50);
  }

  oldButtonState = buttonState;
}