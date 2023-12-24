int pin_Passive = 10;

void setup()
{
  pinMode(pin_Passive, OUTPUT);
}

void loop()
{
  tone(pin_Passive, 262); //도
  delay(500);
  noTone(pin_Passive);
  delay(500);
   
  tone(pin_Passive, 294); //레
  delay(500);
  noTone(pin_Passive);
  delay(500);
  
  tone(pin_Passive, 330); //미
  delay(500);
  noTone(pin_Passive);
  delay(500);

}
