// CODE BY LUIS VALENCIA - 07/04/24
// LAST UPDATE - 07/09/24
// github.com/Lu1sValenc1a

#include <Arduino.h>

// We define the pins of the H/DRIVER bridge
#define ENA           4
#define IN1          16
#define IN2          17
#define IN3           5
#define IN4          18
#define ENB          19

#define PWM_CHANNEL_ENA  0
#define PWM_CHANNEL_ENB  1

#define PWM_FREQ         5000
#define PWM_RESOLUTION   8
#define MOTOR_SPEED      255


// Forward
void forward() {
  ledcWrite(PWM_CHANNEL_ENA, MOTOR_SPEED);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  ledcWrite(PWM_CHANNEL_ENB, MOTOR_SPEED);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

// Left
void left() {
  ledcWrite(PWM_CHANNEL_ENA, MOTOR_SPEED);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  ledcWrite(PWM_CHANNEL_ENB, 0);
}

// Right
void right() {
  ledcWrite(PWM_CHANNEL_ENB, MOTOR_SPEED);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  ledcWrite(PWM_CHANNEL_ENA, 0);
}

// Stop motors
void stop() {
  ledcWrite(PWM_CHANNEL_ENA, 0);
  ledcWrite(PWM_CHANNEL_ENB, 0);
}

void setup() {
  
  // Configure pins
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  
  // Setup PWM for ENA
  ledcSetup(PWM_CHANNEL_ENA, PWM_FREQ, PWM_RESOLUTION);
  ledcAttachPin(ENA, PWM_CHANNEL_ENA);

  // Setup PWM for ENB
  ledcSetup(PWM_CHANNEL_ENB, PWM_FREQ, PWM_RESOLUTION);
  ledcAttachPin(ENB, PWM_CHANNEL_ENB);
  
}

void loop() {
  
}