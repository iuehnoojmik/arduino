int LED_Red = 13;
int LED_Blue = 12;

int button_Push_1 = 9;
int button_Push_2 = 8;

void setup()
{
  Serial.begin(9600);
  pinMode(LED_Red, OUTPUT);
  pinMode(LED_Blue, OUTPUT);
  pinMode(button_Push_1, INPUT);
  pinMode(button_Push_2, INPUT);
}

void loop()
{
  int readValue1 = digitalRead(button_Push_1);
  int readValue2 = digitalRead(button_Push_2);
  
  Serial.println(readValue1);
  Serial.println(readValue2);
  
  if(readValue1 == HIGH)
  {
    digitalWrite(LED_Red, HIGH);
  }
  
  if(readValue1 == LOW)
  {
    digitalWrite(LED_Red, LOW);
  }
  
  if(readValue2 == HIGH)
  {
    digitalWrite(LED_Blue, HIGH);
  }
  
  if(readValue2 == LOW)
  {
    digitalWrite(LED_Blue, LOW);
  }
}
