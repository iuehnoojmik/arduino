int pinHorizon = A0;
int pinVertical = A1;
int pinButton = 2;

int stateBtn1 = 0;
int stateBtn2 = 0;

int pinLED_Green = 9;
int pinLED_Blue = 10;
int pinLED_Red = 11;

void setup()
{
  Serial.begin(9600);

  pinMode(pinHorizon, INPUT);
  pinMode(pinVertical, INPUT);
  pinMode(pinButton, INPUT_PULLUP);
  
  pinMode(pinLED_Red, OUTPUT);
  pinMode(pinLED_Green, OUTPUT);
  pinMode(pinLED_Blue, OUTPUT);
}

void loop()
{
  int X_Horizon = analogRead(pinHorizon);
  int Y_Vertical = analogRead(pinVertical);
  Serial.print(X_Horizon);
  Serial.print("\t");
  Serial.println(Y_Vertical);

  stateBtn1 = digitalRead(pinButton);
  Serial.println(stateBtn1);

  if(X_Horizon >= 1014 && Y_Vertical >= 1014)
  {
    RGB_Color(0,0,255);
    delay(500);
  }
  else
  {
    RGB_Color(0,0,0);
  }
  
  if(X_Horizon <= 10 && Y_Vertical >= 512)
  {
    RGB_Color(0,255,0);
    delay(500);
  }
  else
  {
    RGB_Color(0,0,0);
  }

  if(X_Horizon >= 1014 && Y_Vertical <= 512)
  {
    RGB_Color(255,255,0);
    delay(500);
  }
  else
  {
    RGB_Color(0,0,0);
  }

  if(X_Horizon <= 10 && Y_Vertical <= 10)
  {
    RGB_Color(255,0,0);
    delay(500);
  }
  else
  {
    RGB_Color(0,0,0);
  }

  if(stateBtn1 == 0)
  {
    RGB_Color(255,255,255);
    delay(500);
  }
  else
  {
    RGB_Color(0,0,0);
  }
} 

void RGB_Color(int RedVal, int GreenVal, int BlueVal)
{
  analogWrite(pinLED_Red, RedVal);
  analogWrite(pinLED_Green, GreenVal);
  analogWrite(pinLED_Blue, BlueVal);
}
