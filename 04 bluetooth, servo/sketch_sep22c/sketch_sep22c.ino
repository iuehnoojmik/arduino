#include<SoftwareSerial.h>
#define BTtx 2
#define BTrx 3
#define LED_Red 13
SoftwareSerial BT(BTtx, BTrx);
//BT(2,3);
char data = 'F';

void setup()
{
  BT.begin(9600);
  Serial.begin(9600);
  pinMode(LED_Red, OUTPUT);
}

void loop()
{
  if(BT.available()>0)
  {
    data = BT.read();
  }
  if(data == 'T')
  {
    digitalWrite(LED_Red, HIGH);
    Serial.println("LED ON");
  }
  else if(data == 'F')
  {
    digitalWrite(LED_Red, LOW);
    Serial.println("LED OFF");
  }
}
