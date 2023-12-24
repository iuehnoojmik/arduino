int Analog_X = A0;
int Analog_Y = A1;
int Digital_Z = 3;

void setup()
{
  Serial.begin(9600);
  pinMode(Analog_X, INPUT);
  pinMode(Analog_Y, INPUT);
  pinMode(Digital_Z, INPUT_PULLUP);
}

void loop()
{
  int val_X_A0;
  int val_Y_A1;
  int val_Z_13;
  
  val_X_A0 = analogRead(Analog_X);
  val_Y_A1 = analogRead(Analog_Y);
  val_Z_13 = digitalRead(Digital_Z);

  Serial.print("X : ");
  Serial.print(val_X_A0);
  Serial.print(", Y : ");
  Serial.print(val_Y_A1);
  Serial.print(", Z : ");
  Serial.println(val_Z_13);
  delay(200);
}
