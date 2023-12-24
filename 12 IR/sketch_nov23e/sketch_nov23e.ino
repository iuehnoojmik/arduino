#include <IRremote.h>
#include <Servo.h>
#define IR_RECEIVE_PIN 8 
#define IR_BUTTON_UP 24
#define IR_BUTTON_LEFT 8
#define IR_BUTTON_RIGHT 90
#define IR_BUTTON_OK 28 
Servo myServo;

void setup() { 
  Serial.begin(9600);
  IrReceiver.begin(IR_RECEIVE_PIN); 
  myServo.attach(9);
}

void loop() 
{
  if (IrReceiver.decode() )   
  { 
    IrReceiver.resume();
    int command = IrReceiver.decodedIRData.command; 

    switch (command) 
    {
      case IR_BUTTON_UP:  
      {
        myServo.write(90);
        Serial.println("Servo UP 90"); 
        break;
      }

      case IR_BUTTON_LEFT:  
      {
        myServo.write(0);
        Serial.println("Servo LEFT 0"); 
        break;
      }

      case IR_BUTTON_RIGHT:  
      {
        myServo.write(180);
        Serial.println("Servo RIGHT 180"); 
        break;
      }

      case IR_BUTTON_OK:  
      {
        myServo.write(0);
        delay(500);
        myServo.write(180);
        delay(500);
        myServo.write(0);
        delay(500);
        myServo.write(90);
        delay(500);
        Serial.println("Servo OK"); 
        break;
      }

      default: 
      {
        Serial.println("No Servo Change");
      }
    }
  }
}
