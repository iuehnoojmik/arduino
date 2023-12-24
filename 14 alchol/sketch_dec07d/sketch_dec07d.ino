int pin_MQ3 = A5;
#define pin_A 2
#define pin_B 3
#define pin_C 4
#define pin_D 5
#define pin_E 6
#define pin_F 7
#define pin_G 8
#define pin_DP 9

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
  pinMode(pin_MQ3, INPUT);
}

void loop() {
  int val = analogRead(pin_MQ3);
  Serial.println(analogRead(val));

  if(val>=900) {
    FND(1,1,1,1,0,0,1,0); //3
    delay(100);
  }
  else if(val>=650 && val<900) {
    FND(1,1,0,1,1,0,1,0); //2
    delay(100);
  }
  else if(val>=400 && val<650) {
    FND(0,1,1,0,0,0,0,0); //1
    delay(100);
  }
  else if(val<400) {
    FND(1,1,1,1,1,1,0,0); //0
    delay(100);
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
