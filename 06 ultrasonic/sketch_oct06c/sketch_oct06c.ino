#define pin_Echo 11
#define pin_Trig 12
long duration;
int distance;

void setup() {
  pinMode(pin_Trig, OUTPUT);
  pinMode(pin_Echo, INPUT);
  Serial.begin(9600);
  Serial.println("Ultrasonnic sensor Test!");
}

void loop() {
  digitalWrite(pin_Trig, LOW);
  delayMicroseconds(2);
  digitalWrite(pin_Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(pin_Trig, LOW);

  duration = pulseIn(pin_Echo, HIGH);
  distance = duration * 340 * 100 / 1000000 / 2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("cm"); 
  
}
