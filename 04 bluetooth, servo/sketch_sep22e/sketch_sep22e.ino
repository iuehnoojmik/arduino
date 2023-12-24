#include <SoftwareSerial.h>
#include <Servo.h>
Servo myServo;
int BT_TX = 10;
int BT_RX = 11;
#define LED_Red 13
SoftwareSerial BT(BT_TX, BT_RX);

void setup()
{
  myServo.attach(9);
  Serial.begin(9600);
  BT.begin(9600);
}

void loop()
{
  if(BT.available()>0)
  {
    int servoPos = BT.read();
    Serial.println(servoPos);
    myServo.write(servoPos);
       if(servoPos > 90)
      {
        digitalWrite(LED_Red, HIGH);
        Serial.println("LED ON");
      }
      else if(servoPos < 90)
      {
        digitalWrite(LED_Red, LOW);
        Serial.println("LED OFf");
      }
  }
  

}
