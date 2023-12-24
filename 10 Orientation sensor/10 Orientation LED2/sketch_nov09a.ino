#include <SoftwareSerial.h>
#define BTtx 2
#define BTrx 3
#define LED_Red 13
#define LED_Green 12
SoftwareSerial BT(BTtx,BTrx);
char data = 'F';

void setup()
{
  BT.begin(9600);
  Serial.begin(9600);
  pinMode(LED_Red, OUTPUT);
  pinMode(LED_Green, OUTPUT);
}

void loop()
{
  if(BT.available()>0)
  {
    data = BT.read();
  }
  if(data == 'F')
  {
    digitalWrite(LED_Red, LOW);
    digitalWrite(LED_Green, LOW);
    Serial.println("LED_OFF");
  }
  else if(data == 'R')
  {
    digitalWrite(LED_Red, LOW);
    digitalWrite(LED_Green, HIGH);
    Serial.println("LED_RIGHT");
  }
  else if(data == 'L')
  {
    digitalWrite(LED_Red, HIGH);
    digitalWrite(LED_Green, LOW);
    Serial.println("LED_LEFT");
  }
  else if(data == 'T')
  {
    digitalWrite(LED_Red, HIGH);
    digitalWrite(LED_Green, HIGH);
    Serial.println("LED_ON");
  }
}
