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
    digitalWrite(pin_Red, HIGH);
    digitalWrite(pin_Blue, LOW);
    digitalWrite(pin_Green, LOW);
    delay(100);
  }
  else if(val>=500 && val<900) {
    digitalWrite(pin_Red, LOW);
    digitalWrite(pin_Blue, LOW);
    digitalWrite(pin_Green, HIGH);
    delay(100);
  }
  else if(val<500) {
    digitalWrite(pin_Red, LOW);
    digitalWrite(pin_Blue, HIGH);
    digitalWrite(pin_Green, LOW);
    delay(100);
  }
}  
