int pin_Poten = A0;
void setup() {
Serial.begin(9600);
pinMode(pin_Poten, INPUT);
}
void loop() {
int readValue = analogRead(pin_Poten);
Serial.println(readValue);
}
