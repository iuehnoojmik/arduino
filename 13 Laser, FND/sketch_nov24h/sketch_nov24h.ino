#define pin_A 2
#define pin_B 3
#define pin_C 4
#define pin_D 5
#define pin_E 6
#define pin_F 7
#define pin_G 8
#define pin_DP 9

#define pin_Echo 11
#define pin_Trig 12
long duration;
long distance;

void setup() {
  Serial.begin(9600);
  pinMode(pin_A, OUTPUT);
  pinMode(pin_B, OUTPUT);
  pinMode(pin_C, OUTPUT);
  pinMode(pin_D, OUTPUT);
  pinMode(pin_E, OUTPUT);
  pinMode(pin_F, OUTPUT);
  pinMode(pin_G, OUTPUT);
  pinMode(pin_DP, OUTPUT);

  pinMode(pin_Trig, OUTPUT); //발신
  pinMode(pin_Echo, INPUT); //수신
}

void loop() {

  digitalWrite(pin_Trig, LOW);
  delayMicroseconds(2);
  digitalWrite(pin_Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(pin_Trig, LOW);
  duration = pulseIn(pin_Echo, HIGH);
  distance = duration * 340 * 100 / 1000000 / 2;

  if(distance >= 41) {
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println("cm");
    FND(1, 1, 0, 1, 1, 0, 1, 1); //2
    delay(500);
  }
  else if(distance >= 21) {
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println("cm");
    FND(0, 1, 1, 0, 0, 0, 0, 1); //1
    delay(500);
  }
  else {
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println("cm");
    FND(1, 1, 1, 1, 1, 1, 0, 1); //0
    delay(500);
  }
  
}

void FND(int A, int B, int C, int D, int E, int F, int G, int DP) {
  digitalWrite(pin_A, A);
  digitalWrite(pin_B, B);
  digitalWrite(pin_C, C);
  digitalWrite(pin_D, D);
  digitalWrite(pin_E, E);
  digitalWrite(pin_F, F);
  digitalWrite(pin_G, G);
  digitalWrite(pin_DP, DP);
}
