o\int LED_Red_Pin = 11;
int LED_Green_Pin = 9;
int LED_Blue_Pin = 10;
int Pot_Green = A1;
int val_Sensor_Green = 0;

int val_Output_Blue = 0;

void setup() {
  pinMode(LED_Red_Pin, OUTPUT);
  pinMode(LED_Green_Pin, OUTPUT);
  pinMode(LED_Blue_Pin, OUTPUT);
  pinMode(Pot_Green, INPUT);

  Serial.begin(9600);
}

void loop() {
  val_Sensor_Green = analogRead(Pot_Green);
  
  val_Output_Blue = map(val_Sensor_Green, 0, 1023, 0, 255);

  RGB_Color(255, 255, val_Output_Blue);
 
}

void RGB_Color(int LED_Red_Val, int LED_Green_Val, int LED_Blue_Val) {
  analogWrite(LED_Red_Pin, LED_Red_Val);
  analogWrite(LED_Green_Pin, LED_Green_Val);
  analogWrite(LED_Blue_Pin, LED_Blue_Val);
}
