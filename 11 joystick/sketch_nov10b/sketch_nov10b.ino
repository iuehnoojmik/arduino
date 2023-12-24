int Analog_X = A0;
int Analog_Y = A1;
int Digital_Z = 3;
#define LED_Yellow 13
#define LED_Green 12

void setup()
{
  Serial.begin(9600);
  pinMode(Analog_X, INPUT);
  pinMode(Analog_Y, INPUT);
  pinMode(Digital_Z, INPUT_PULLUP);
  pinMode(LED_Yellow, OUTPUT);
  pinMode(LED_Green, OUTPUT);
}

void loop()
{
  int val_X_A0;
  int val_Y_A1;
  int val_Z_13;
  
  val_X_A0 = analogRead(Analog_X);
  val_Y_A1 = analogRead(Analog_Y);
  val_Z_13 = digitalRead(Digital_Z);
  Serial.println(val_X_A0);

  if(val_X_A0 < 1024 && val_X_A0 >= 0)
  {
    if(val_X_A0 >= 824) {
      digitalWrite(LED_Yellow, LOW);
      digitalWrite(LED_Green, HIGH);
    }

    else if(val_X_A0 <= 200) {
      digitalWrite(LED_Yellow, HIGH);
      digitalWrite(LED_Green, LOW);
    }

    else {
      digitalWrite(LED_Yellow, LOW);
      digitalWrite(LED_Green, LOW);
    }
  }

  else
  {
    digitalWrite(LED_Yellow, LOW);
    digitalWrite(LED_Green, LOW);
  }


} 
