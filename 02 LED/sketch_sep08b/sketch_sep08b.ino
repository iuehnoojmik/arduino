int LED = 13;
void setup() {
Serial.begin(9600);
pinMode(LED, OUTPUT);
}
int serialData;
void loop() {
if (Serial.available() > 0) {
serialData = Serial.read();
Serial.println(serialData);
if (serialData == '1'){
digitalWrite(LED, HIGH);
}
else if (serialData == '0'){
digitalWrite(LED, LOW);
}
}
}
