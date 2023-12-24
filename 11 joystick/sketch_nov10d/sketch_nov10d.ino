int pinHorizon = A0;
int pinVertical = A1;
int pinButton = 2;

int stateBtn1 = 0;
int stateBtn2 = 0;
int pinLED_Btn = 7;

int pinLED_Up = 8;
int pinLED_Down = 9;
int pinLED_Left = 10;
int pinLED_Right = 11;

void setup()
{
  Serial.begin(9600);

  pinMode(pinHorizon, INPUT);
  pinMode(pinVertical, INPUT);
  pinMode(pinButton, INPUT_PULLUP);
  
  pinMode(pinLED_Up, OUTPUT);
  pinMode(pinLED_Down, OUTPUT);
  pinMode(pinLED_Left, OUTPUT);
  pinMode(pinLED_Right, OUTPUT);

  pinMode(pinLED_Btn, OUTPUT);
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
    digitalWrite(pinLED_Down, HIGH);
  }
  else
  {
    digitalWrite(pinLED_Down, LOW);
  }
  
  if(X_Horizon <= 10 && Y_Vertical >= 512)
  {
    digitalWrite(pinLED_Left, HIGH);
  }
  else
  {
    digitalWrite(pinLED_Left, LOW);
  }

  if(X_Horizon >= 1014 && Y_Vertical <= 512)
  {
    digitalWrite(pinLED_Right, HIGH);
  }
  else
  {
    digitalWrite(pinLED_Right, LOW);
  }

  if(X_Horizon <= 10 && Y_Vertical <= 10)
  {
    digitalWrite(pinLED_Up, HIGH);
  }
  else
  {
    digitalWrite(pinLED_Up, LOW);
  }

  if(stateBtn1 == 0)
  {
    digitalWrite(pinLED_Btn, HIGH);
  }
  else
  {
    digitalWrite(pinLED_Btn, LOW);
  }
} 
