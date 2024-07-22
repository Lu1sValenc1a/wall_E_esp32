#include <NewPing.h>
 
#define TRIGGER_PIN 26
#define ECHO_PIN 25
#define MAX_DISTANCE 200

// Configuración NewPing de los pines y la distancia máxima
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); 
 
void setup() {
   Serial.begin(115200);
}
 
void loop() {
   delay(50);
   unsigned int distance = sonar.ping_cm();
   Serial.print(distance);
   Serial.println("cm");
}