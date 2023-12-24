int pin_CdS = A0;
int pin_Red = 13;
int pin_Green = 12;
int pin_Blue = 11;
int val = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(pin_Red, OUTPUT);
  pinMode(pin_Green, OUTPUT);
  pinMode(pin_Blue, OUTPUT);
  pinMode(pin_CdS, INPUT);
}

void loop()
{
  val = analogRead(pin_CdS);
  Serial.println(val);
  if(val>800){
    RGB_Color(255,0,0);
    delay(100);
  }
  else if(val<=800 && val>600) {
    RGB_Color(0,255,0);
    delay(100);
  }
  else if(val<=600) {
    RGB_Color(0,0,255);
    delay(100);
  }
}

void RGB_Color(int LED_Red_Val, int LED_Green_Val, int LED_Blue_Val) {
  analogWrite(pin_Red, LED_Red_Val);
  analogWrite(pin_Green, LED_Green_Val);
  analogWrite(pin_Blue, LED_Blue_Val);
}
