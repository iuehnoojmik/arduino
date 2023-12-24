#include <SoftwareSerial.h>
#include <Servo.h>
#define BTtx 10
#define BTrx 11
SoftwareSerial BT(BTtx, BTrx);
Servo myServo;

void setup()
{
  myServo.attach(9);
  BT.begin(9600);
  Serial.begin(9600);
}

void loop()
{
  if(BT.available()>0)
  {
    int servoPos = BT.read();
    Serial.println(servoPos);   
    myServo.write(servoPos);
  }
  
}
