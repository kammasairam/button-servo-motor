#include <Servo.h>

Servo myservo; 
const int buttonPin = D3;    
const int ledPin =  D4;    

int buttonState = 0;        

void setup() {
  myservo.attach(D2);
 
  pinMode(ledPin, OUTPUT);
  
  pinMode(buttonPin, INPUT);
}

void loop() {
 
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
   
    digitalWrite(ledPin, HIGH);
      int pos;

  for (pos = 0; pos <= 180; pos += 1) { 
    myservo.write(pos);              
    delay(1);                       
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    myservo.write(pos);              
    delay(1);                       
  }
    
  } else {
    digitalWrite(ledPin, LOW);
  }
}
