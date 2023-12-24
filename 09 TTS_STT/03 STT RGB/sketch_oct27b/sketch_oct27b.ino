#include <SoftwareSerial.h>
#define BTtx 2
#define BTrx 3
SoftwareSerial BT(BTtx, BTrx); //BT(2,3);
char data;

int LED_Red_Pin = 11;
int LED_Green_Pin = 10;
int LED_Blue_Pin = 9;

void setup()
{
  BT.begin(9600);
  Serial.begin(9600);
  pinMode(LED_Red_Pin, OUTPUT);
  pinMode(LED_Green_Pin, OUTPUT);
  pinMode(LED_Blue_Pin, OUTPUT);
}

void loop()
{
  if(BT.available()>0)
  {
    data = BT.read();
  }
  
  if(data == 'r')
  {
    RGB_Color(255,0,0);
  }
  
  else if(data == 'g')
  {
    RGB_Color(0,255,0);
  }

  else if(data == 'b')
  {
    RGB_Color(0,0,255);
  }
}

void RGB_Color(int LED_Red_Val, int LED_Green_Val, int LED_Blue_Val) 
{
  analogWrite(LED_Red_Pin, LED_Red_Val);
  analogWrite(LED_Green_Pin, LED_Green_Val);
  analogWrite(LED_Blue_Pin, LED_Blue_Val);
}
