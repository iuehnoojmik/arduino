#include <IRremote.h>
#define IR_RECEIVE_PIN 8 
#define IR_BUTTON_1 69
#define IR_BUTTON_2 70 
#define LED_Red 13
#define LED_Yellow 12 
byte state_LED_Red = LOW; 
byte state_LED_Yellow = LOW;

void setup() { 
  Serial.begin(9600);
  IrReceiver.begin(IR_RECEIVE_PIN); 
  pinMode(LED_Red, OUTPUT);
  pinMode(LED_Yellow, OUTPUT);
}
void loop() {
  if (IrReceiver.decode() )   
  { 
    IrReceiver.resume();
    int command = IrReceiver.decodedIRData.command; 

    switch (command) 
    {
      case IR_BUTTON_1:  
      {
        state_LED_Red = (state_LED_Red == LOW) ? HIGH : LOW; 
        digitalWrite(LED_Red, state_LED_Red);
        Serial.println("Red LED"); 
        break;
      }

      case IR_BUTTON_2: 
      {
        state_LED_Yellow = (state_LED_Yellow == LOW) ? HIGH: LOW; 
        digitalWrite(LED_Yellow, state_LED_Yellow);
        Serial.println("Yellow LED"); 
        break;
      }

      default: 
      {
        digitalWrite(LED_Red, LOW); 
        digitalWrite(LED_Yellow, LOW); 
        Serial.println("Try Again");
      }
    }
  }
}
