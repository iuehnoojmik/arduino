#include <SoftwareSerial.h>
#define BTtx 2
#define BTrx 3
SoftwareSerial BT(BTtx, BTrx);

int red = 11;
int green = 9;
int blue = 10;

void setup()
{
  BT.begin(9600);
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop()
{
  if(BT.available()>0)
  {
    int blue = BT.read();
    blue = map(blue, 0, 180, 0, 255);
    RGB_Color(255,255,blue);
  }
  
}

void RGB_Color(int redVal, int greenVal, int blueVal) {
  analogWrite(red, redVal);
  analogWrite(green, greenVal);
  analogWrite(blue, blueVal);
}
