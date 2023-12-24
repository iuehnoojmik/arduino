#include <IRremote.h>
#define IR_RECEIVE_PIN 8 
#define IR_BUTTON_1 69
#define IR_BUTTON_2 70 
#define IR_BUTTON_3 71 
#define IR_BUTTON_4 68 
#define IR_BUTTON_5 64
#define IR_BUTTON_6 67 
#define IR_BUTTON_7 7  
#define LED_Red 11
#define LED_Green 10
#define LED_Blue 9

void setup() { 
  Serial.begin(9600);
  IrReceiver.begin(IR_RECEIVE_PIN); 
  pinMode(LED_Red, OUTPUT);
  pinMode(LED_Green, OUTPUT);
  pinMode(LED_Blue, OUTPUT);
}

void loop() 
{
  if (IrReceiver.decode() )   
  { 
    IrReceiver.resume();
    int command = IrReceiver.decodedIRData.command; 

    switch (command) 
    {
      case IR_BUTTON_1:  
      {
        RGB_Color(255, 0, 0);
        Serial.println("Red"); 
        break;
      }

      case IR_BUTTON_2: 
      {
        RGB_Color(0, 255, 0);
        Serial.println("Green"); 
        break;
      }

      case IR_BUTTON_3: 
      { 
        RGB_Color(0, 0, 255);
        Serial.println("Blue"); 
        break;
      }

      case IR_BUTTON_4: 
      {
        RGB_Color(255, 255, 0);
        Serial.println("Yellow"); 
        break;
      }

      case IR_BUTTON_5: 
      { 
        RGB_Color(255, 0, 255);
        Serial.println("Magenta"); 
        break;
      }

      case IR_BUTTON_6: 
      {
        RGB_Color(0, 255, 255);
        Serial.println("Cyan"); 
        break;
      }

      case IR_BUTTON_7: 
      {
        RGB_Color(255, 255, 255);
        Serial.println("White"); 
        break;
      }

      default: 
      {
        RGB_Color(0, 0, 0);
        Serial.println("No LED");
      }
    }
  }
}

void RGB_Color(int LED_Red_Val, int LED_Green_Val, int LED_Blue_Val) 
{
  analogWrite(LED_Red, LED_Red_Val);
  analogWrite(LED_Green, LED_Green_Val);
  analogWrite(LED_Blue, LED_Blue_Val);
}
