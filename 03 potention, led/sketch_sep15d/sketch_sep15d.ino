#define LED_Red 11
#define LED_Green 10
void setup(){
 Serial.begin(9600);
 pinMode(LED_Red, OUTPUT);
pinMode(LED_Green, OUTPUT);
}
void loop(){
int valBright;
 for(valBright=0; valBright<=255; valBright++){
 analogWrite(LED_Red, valBright);
 analogWrite(LED_Green, 255-valBright);
 Serial.print("Red : ");
 Serial.print(valBright);
 Serial.print(", Green : ");
 Serial.println(255-valBright);
 delay(10);
 }
}
