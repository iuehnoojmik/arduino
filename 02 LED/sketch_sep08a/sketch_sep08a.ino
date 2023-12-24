int LED1 = 2;
int LED2 = 4;
int LED3 = 6;

void setup(){
Serial.begin(9600);
pinMode(LED1, OUTPUT); 
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
}
int serialData;

void loop(){
  if (Serial.available() > 0) {
    serialData = Serial.read();
    Serial.println(serialData);

    if(serialData == '0'){
      digitalWrite(LED1, LOW); 
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
      Serial.println("000");
    }
    else if(serialData == '1'){
      digitalWrite(LED1, LOW); 
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, HIGH);
      Serial.println("001");
    }
    else if(serialData == '2'){
      digitalWrite(LED1, LOW); 
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, LOW);
      Serial.println("010");
    }
    else if(serialData == '3'){
      digitalWrite(LED1, LOW); 
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      Serial.println("011");
    }
    else if(serialData == '4'){
      digitalWrite(LED1, HIGH); 
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
      Serial.println("100");
    }
    else if(serialData == '5'){
      digitalWrite(LED1, HIGH); 
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, HIGH);
      Serial.println("101");
    }
    else if(serialData == '6'){
      digitalWrite(LED1, HIGH); 
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, LOW);
      Serial.println("110");
    }
    else if(serialData == '7'){
      digitalWrite(LED1, HIGH); 
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      Serial.println("111");
    }
  }
 
}
