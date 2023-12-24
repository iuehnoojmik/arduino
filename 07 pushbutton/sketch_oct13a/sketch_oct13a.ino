int LED_Red = 13;
int button_Push = 8;

void setup()
{
  Serial.begin(9600);
  pinMode(LED_Red, OUTPUT);
  pinMode(button_Push, INPUT_PULLUP);
}

void loop()
{
  int readValue = digitalRead(button_Push);
  Serial.println(readValue);
  
  if(readValue == HIGH)
  {
    digitalWrite(LED_Red, HIGH);
  }
  
  else
  {
    digitalWrite(LED_Red, LOW);
  }
}
