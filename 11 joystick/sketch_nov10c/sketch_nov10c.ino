#include <Servo.h>
Servo myServo;
int Analog_X = A0;
int Analog_Y = A1;
int Digital_Z = 3;
int servoPos;

void setup()
{
  Serial.begin(9600);
  pinMode(Analog_X, INPUT);
  pinMode(Analog_Y, INPUT);
  pinMode(Digital_Z, INPUT_PULLUP);
  myServo.attach(9);
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
  servoPos = map(val_X_A0, 0, 1024, 0, 180);

  if(val_X_A0 < 1024 && val_X_A0 >= 0)
  {
    myServo.write(servoPos);
  }

  else
  {
    myServo.write(servoPos); 
  }


} 
