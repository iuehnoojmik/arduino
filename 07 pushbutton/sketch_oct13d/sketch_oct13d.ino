int LED_Red = 13;
int LED_Green = 11;
int LED_Blue = 12;

int button_Push_1 = 7;
int button_Push_2 = 4;
int button_Push_3 = 2;

void setup()
{
  Serial.begin(9600);
  pinMode(LED_Red, OUTPUT);
  pinMode(LED_Blue, OUTPUT);
  pinMode(LED_Green, OUTPUT);
  pinMode(button_Push_1, INPUT);
  pinMode(button_Push_2, INPUT);
  pinMode(button_Push_3, INPUT);
}

void loop()
{
  int readValue1 = digitalRead(button_Push_1);
  int readValue2 = digitalRead(button_Push_2);
  int readValue3 = digitalRead(button_Push_3);
  
  Serial.println(readValue1);
  Serial.println(readValue2);
  Serial.println(readValue3);
  
  if(readValue1 == HIGH)
  {
    RGB_Color(255,0,0);
  }
  
  if(readValue1 == LOW)
  {
    RGB_Color(0,0,0);
  }
  
  if(readValue2 == HIGH)
  {
    RGB_Color(0,255,0);
  }
  
  if(readValue2 == LOW)
  {
    RGB_Color(0,0,0);
  }
  
  if(readValue3 == HIGH)
  {
    RGB_Color(0,0,255);
  }
  
  if(readValue3 == LOW)
  {
    RGB_Color(0,0,0);
  }
}

void RGB_Color(int LED_RED_Val, int LED_GREEN_Val, int LED_BLUE_Val) 
{
  analogWrite(LED_Red, LED_RED_Val);
  analogWrite(LED_Green, LED_GREEN_Val);
  analogWrite(LED_Blue, LED_BLUE_Val);
}
