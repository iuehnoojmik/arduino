#include <SoftwareSerial.h>
#include <Servo.h>
#define BTtx 2
#define BTrx 3
SoftwareSerial BT(BTtx, BTrx);
Servo myServo;
int data = 0;
void setup()
{
  myServo.attach(13);
  BT.begin(9600);
  Serial.begin(9600);
}

void loop()
{
  if(BT.available()>0)
  {
    data = BT.read();
    Serial.println(data);   
  }
  
  if(data==0) {
    myServo.write(data);
  }
  else if(data==90) {
    myServo.write(data);
  }
  else if(data==180) {
    myServo.write(data);
  }
}
