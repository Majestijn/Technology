#include <AFMotor.h>

//AF_DCMotor motor1(1, MOTOR12_1KHZ);

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  //motor1.setSpeed(255);
  //motor1.run(FORWARD);
  //Serial.print("lalala");

  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);   
}
