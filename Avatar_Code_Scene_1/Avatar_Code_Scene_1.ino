#include <Servo.h>

Servo myservo;
const int mySwitchPin = 10;
const int ledPin = 7;
bool myBool = false;

void setup() {
  pinMode(mySwitchPin, INPUT);
  myservo.attach(8);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  if (digitalRead(mySwitchPin)==HIGH){
    myBool = true;
  }

  if(myBool == true){
    myservo.write(180);
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
  }
}
