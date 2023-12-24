#define pin_A 2
#define pin_B 3
#define pin_C 4
#define pin_D 5
#define pin_E 6
#define pin_F 7
#define pin_G 8
#define pin_DP 9

int button_3=13;
int button_6=12;
int button_9=11;

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

  pinMode(button_3, INPUT_PULLUP);
  pinMode(button_6, INPUT_PULLUP);
  pinMode(button_9, INPUT_PULLUP);
}

void loop() {

  int readValue3 = digitalRead(button_3);
  int readValue6 = digitalRead(button_6);
  int readValue9 = digitalRead(button_9);

  if(readValue3 == LOW){
     FND(1, 1, 1, 1, 0, 0, 1, 1); //3
     delay(500);
  }
  if(readValue6 == LOW){
    FND(1, 0, 1, 1, 1, 1, 1, 1); //6
    delay(500);   
  } 
  if(readValue9 == LOW){
    FND(1, 1, 1, 1, 0, 1, 1, 1); //9
    delay(500);  
  } 
  else{
     FND(0, 0, 0, 0, 0, 0, 0, 0);
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
