int LED_Red_Pin = 11;
int LED_Green_Pin = 9;
int LED_Blue_Pin = 10;

void setup() {
  pinMode(LED_Red_Pin, OUTPUT);
  pinMode(LED_Green_Pin, OUTPUT);
  pinMode(LED_Blue_Pin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    char serialData = Serial.read();

    if (serialData == 'r') {
      RGB_Color(255, 0, 0);
      Serial.println("Red");
      delay(1000);
    }
    else if (serialData == 'g') {
      RGB_Color(0, 255, 0);
      Serial.println("Green");
      delay(1000);
    }
    else if (serialData == 'y') {
      RGB_Color(255, 255, 0);
      Serial.println("Yellow");
      delay(1000);
    }
    else {
      RGB_Color(0, 0, 0);
    }
  }
}

void RGB_Color(int LED_Red_Val, int LED_Green_Val, int LED_Blue_Val) {
  analogWrite(LED_Red_Pin, LED_Red_Val);
  analogWrite(LED_Green_Pin, LED_Green_Val);
  analogWrite(LED_Blue_Pin, LED_Blue_Val);
}
