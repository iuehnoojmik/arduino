int pin_Active = 10;

void setup()
{
  pinMode(pin_Active, OUTPUT);
}

void loop()
{
  tone(pin_Active, HIGH);
  delay(1000);
  //digitalWrite(pin_Active, LOW);
  noTone(pin_Active);
  delay(1000);
}
