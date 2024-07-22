#include <Servo.h>

#define SERVO_PIN 2 // ESP32 pin GPIO26 connected to servo motor

Servo servoMotor;

void setup() {
  servoMotor.attach(SERVO_PIN);  // attaches the servo on ESP32 pin
}

void loop() {
  // rotates from 0 degrees to 180 degrees
  for (int pos = 0; pos <= 180; pos += 1) {
    // in steps of 1 degree
    servoMotor.write(pos);
    delay(15); // waits 15ms to reach the position
  }

  // rotates from 180 degrees to 0 degrees
  for (int pos = 180; pos >= 0; pos -= 1) {
    servoMotor.write(pos);
    delay(15); // waits 15ms to reach the position
  }
}
