int pin_MQ3 = A5;
int pin_Red = 11;
int pin_Green = 9;
int pin_Blue = 10;

void setup() {
  Serial.begin(9600);
  pinMode(pin_Red, OUTPUT);
  pinMode(pin_Green, OUTPUT);
  pinMode(pin_Blue, OUTPUT);
  pinMode(pin_MQ3, INPUT);
}

void loop() {
  int val = analogRead(pin_MQ3);
  Serial.println(analogRead(val));

  if(val>=900) {
    RGB_Color(255, 0, 0);
    delay(100);
  }
  else if(val>=500 && val<900) {
    RGB_Color(0, 255, 0);
    delay(100);
  }
  else if(val<500) {
    RGB_Color(0, 0, 255);
    delay(100);
  }
}

void RGB_Color(int LED_Red_Val, int LED_Green_Val, int LED_Blue_Val) {
  analogWrite(pin_Red, LED_Red_Val);
  analogWrite(pin_Green, LED_Green_Val);
  analogWrite(pin_Blue, LED_Blue_Val);
}
