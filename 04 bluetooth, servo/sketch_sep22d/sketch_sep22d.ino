#include<SoftwareSerial.h>
#define BTtx 2
#define BTrx 3
#define LED_Red 13
#define LED_Yellow 9
SoftwareSerial BT(BTtx, BTrx);
//BT(2,3);
char data = '1';

void setup()
{
  BT.begin(9600);
  Serial.begin(9600);
  pinMode(LED_Red, OUTPUT);
  pinMode(LED_Yellow, OUTPUT);
}

void loop()
{
  if(BT.available()>0)
  {
    data = BT.read();
  }
  if(data == '1')
  {
    digitalWrite(LED_Red, LOW);
    digitalWrite(LED_Yellow, LOW);
    Serial.println("XX");
  }
  else if(data == '2')
  {
    digitalWrite(LED_Red, LOW);
    digitalWrite(LED_Yellow, HIGH);
    Serial.println("XO");
  }
    else if(data == '3')
  {
    digitalWrite(LED_Red, HIGH);
    digitalWrite(LED_Yellow, LOW);
    Serial.println("OX");
  }
    else if(data == '4')
  {
    digitalWrite(LED_Red, HIGH);
    digitalWrite(LED_Yellow, HIGH);
    Serial.println("OO");
  }
}
