#include <Servo.h>

Servo myservo;
const int mySwitchPin = 10;
//const int ledPin = 7;
bool myBool = false;

void setup() {
  pinMode(mySwitchPin, INPUT);
  myservo.attach(8);
  //pinMode(LED_BUILTIN, OUTPUT);
 
}

void loop() {
  if (digitalRead(mySwitchPin)==HIGH){
    myBool = true;
    digitalWrite(LED_BUILTIN, HIGH);
  }

  if(myBool == true){
    myservo.write(180);
    //digitalWrite(LED_BUILTIN, HIGH);
  } else {
    myservo.write(0);
    //digitalWrite(LED_BUILTIN, LOW);
  }
}
