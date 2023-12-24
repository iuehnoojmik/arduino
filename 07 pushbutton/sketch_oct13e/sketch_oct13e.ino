int button_Push_1 = 8;
int pin_Active = 10;

void setup()
{
  Serial.begin(9600);
  pinMode(button_Push_1, INPUT);
  pinMode(pin_Active, OUTPUT);
}

void loop()
{
  int readValue1 = digitalRead(button_Push_1);
  
  Serial.println(readValue1);
  
  if(readValue1 == HIGH)
  {
    tone(pin_Active, HIGH);
  }
  
  if(readValue1 == LOW)
  {
    noTone(pin_Active);
  }

}
