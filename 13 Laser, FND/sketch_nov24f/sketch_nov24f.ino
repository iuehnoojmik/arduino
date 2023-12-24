int ON = LOW;
int OFF = HIGH;
int digits[10][8] = {
  {OFF, OFF, OFF, OFF, OFF, OFF, ON, ON}, //0
  {ON, OFF, OFF, ON, ON, ON, ON, ON}, //1
  {OFF, OFF, ON, OFF, OFF, ON, OFF, ON}, //2
  {OFF, OFF, OFF, OFF, ON, ON, OFF, ON}, //3
  {ON, OFF, OFF, ON, ON, OFF, OFF, ON}, //4
  {OFF, ON, OFF, OFF, ON, OFF, OFF, ON}, //5
  {OFF, ON, OFF, OFF, OFF, OFF, OFF, ON}, //6
  {OFF, OFF, OFF, ON, ON, OFF, ON, ON}, //7
  {OFF, OFF, OFF, OFF, OFF, OFF, OFF, ON}, //8
  {OFF, OFF, OFF, ON, ON, OFF, OFF, ON} //9
};
int pins[] = {2, 3, 4, 5, 6, 7, 8, 9};

void setup() {
  for(int i = 0; i < 8 ; i++){
    pinMode(pins[i], OUTPUT);
  }
}

void loop() {
  for(int i = 0; i <=69; i++) {
    for(int j = 0; j < 8; j++){
      digitalWrite(pins[j], digits[i][j]);
    }
    delay(1000);
  }
}
