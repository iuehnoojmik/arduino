
int LED_Red_Pin = 11;
int LED_Green_Pin = 9;
int LED_Blue_Pin = 10;
void setup() {
Serial.begin(9600);
pinMode(LED_Red_Pin, OUTPUT);
pinMode(LED_Green_Pin, OUTPUT);
pinMode(LED_Blue_Pin, OUTPUT);
}
void loop() {
RGB_Color(255, 0, 0);
Serial.println("Red");
delay(1000);
RGB_Color(0, 0, 0);
delay(1000);
RGB_Color(0, 255, 0);
Serial.println("Green");
delay(1000);
RGB_Color(0, 0, 0);
delay(1000);
RGB_Color(0,0,255);
Serial.println("Yellow");
delay(1000);
RGB_Color(0, 0, 0);
delay(1000);
}
void RGB_Color(int LED_Red_Val, int LED_Green_Val, int LED_Blue_Val) {
analogWrite(LED_Red_Pin, LED_Red_Val);
analogWrite(LED_Green_Pin, LED_Green_Val);
analogWrite(LED_Blue_Pin, LED_Blue_Val);
}
