int LED_Green = 9;
int Pot_Green = A1;
int val_Sensor_Green = 0;
int val_Output_Green = 0;
void setup() {
pinMode(LED_Green, OUTPUT);
pinMode(Pot_Green, INPUT);
Serial.begin(9600);
}
void loop() {
val_Sensor_Green = analogRead(Pot_Green);
val_Output_Green = map(val_Sensor_Green, 0, 1023, 0, 255);
Serial.print("Potentionmeter Value = ");
Serial.print(val_Sensor_Green);
Serial.print(", LED's Bright = ");
Serial.println(val_Output_Green);
analogWrite(LED_Green, val_Output_Green);
delay(10);
}
