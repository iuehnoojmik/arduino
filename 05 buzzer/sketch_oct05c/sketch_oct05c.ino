#define C4 262 //도
#define C4s 277 //도#
#define D4 294 //레
#define D4s 311 //레#
#define E4 330
#define F4 349
#define F4s 370
#define G4 392
#define G4s 415
#define A4 440
#define A4s 455
#define B4 494
#define C5 523 //도(5옥타브)

int pin_Passive = 10;
int LED_C4 = 11;
int LED_D4 = 12;
int LED_E4 = 13;

int melody[] = {C4, D4, E4, 0};
int duration_s[] = {4, 4, 4, 4};
int LED_s[] = {LED_C4, LED_D4, LED_E4, 0};

void setup()
{
  pinMode(pin_Passive, OUTPUT);
  pinMode(LED_C4, OUTPUT);
  pinMode(LED_D4, OUTPUT);
  pinMode(LED_E4, OUTPUT);
}

void loop(){
  for(int sounds = 0; sounds < 4; sounds++){
    int Duration = 1000/duration_s[sounds];
    tone(pin_Passive, melody[sounds]);
    digitalWrite(LED_s[sounds], HIGH);
    delay(Duration);
    digitalWrite(LED_s[sounds], LOW);
    int pauseSound = Duration * 1.3;
    noTone(pin_Passive);
    delay(pauseSound);
  }
}
