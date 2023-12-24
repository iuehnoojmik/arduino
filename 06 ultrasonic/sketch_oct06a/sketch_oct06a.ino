int pin_Passive = 10;

void setup()
{
  pinMode(pin_Passive, OUTPUT);
}

void loop()
{
  tone(pin_Passive, HIGH);
  delay(1000);
  //digitalWrite(pin_Passive, LOW);
  noTone(pin_Passive);
  delay(1000);
}
