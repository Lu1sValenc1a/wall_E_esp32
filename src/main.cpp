#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define ledPin 25
#define numLeds 68

Adafruit_NeoPixel strip = Adafruit_NeoPixel(numLeds, ledPin, NEO_GRB + NEO_KHZ800);

void eyesOn();
void eyesOff();
void blinkEyes();
void happyEyes();
void obstacleEyes();


void setup() {
  strip.begin();
  strip.show();
  delay(100);
}

void loop() {
  eyesOn();
  delay(2000);
  eyesOff();
  delay(2000);
  blinkEyes();
  delay(2000);
  happyEyes();
  delay(2000);
  obstacleEyes();
  delay(2000);
}
// Función para encender un rango de LEDs con un color específico
void setLedRange(int start, int end, uint32_t color) {
  for (int i = start; i <= end; i++) {
    strip.setPixelColor(i, color);
  }
  strip.show();
}

//Función encender ambos ojos
void eyesOn() {
  //Ojo izquierdo
  setLedRange(15, 15, strip.Color(255, 255, 255));
  setLedRange(19, 21, strip.Color(255, 255, 255));
  setLedRange(34, 36, strip.Color(255, 255, 255));
  setLedRange(39, 41, strip.Color(255, 255, 255));
  setLedRange(55, 55, strip.Color(255, 255, 255));
  //Ojo derecho
  setLedRange(10, 10, strip.Color(255, 255, 255));
  setLedRange(24, 26, strip.Color(255, 255, 255));
  setLedRange(29, 31, strip.Color(255, 255, 255));
  setLedRange(44, 46, strip.Color(255, 255, 255));
  setLedRange(50, 50, strip.Color(255, 255, 255));
}

//Función para apagar ojos
void eyesOff() {
 //Ojo izquierdo
  setLedRange(15, 15, strip.Color(0, 0, 0));
  setLedRange(19, 21, strip.Color(0, 0, 0));
  setLedRange(34, 36, strip.Color(0, 0, 0));
  setLedRange(39, 41, strip.Color(0, 0, 0));
  setLedRange(55, 55, strip.Color(0, 0, 0));
  //Ojo derecho
  setLedRange(10, 10, strip.Color(0, 0, 0));
  setLedRange(24, 26, strip.Color(0, 0, 0));
  setLedRange(29, 31, strip.Color(0, 0, 0));
  setLedRange(44, 46, strip.Color(0, 0, 0));
  setLedRange(50, 50, strip.Color(0, 0, 0)); 
}

//Funcion de parpadeo de ojos
void blinkEyes() {
  eyesOn();
  delay(1000);
  // Intercalar los parpadeos de ambos ojos

  // Fase 1
  setLedRange(15, 15, strip.Color(0, 0, 0)); // Ojo izquierdo
  setLedRange(10, 10, strip.Color(0, 0, 0)); // Ojo derecho
  delay(80);

  // Fase 2
  setLedRange(19, 21, strip.Color(0, 0, 0)); // Ojo izquierdo
  setLedRange(24, 26, strip.Color(0, 0, 0)); // Ojo derecho
  delay(80);

  // Fase 3
  setLedRange(34, 36, strip.Color(0, 0, 0)); // Ojo izquierdo
  setLedRange(29, 31, strip.Color(0, 0, 0)); // Ojo derecho
  delay(80);

  // Fase 4
  setLedRange(39, 39, strip.Color(255, 255, 255)); // Ojo izquierdo
  setLedRange(40, 40, strip.Color(0, 0, 0));       // Ojo izquierdo
  setLedRange(41, 41, strip.Color(255, 255, 255)); // Ojo izquierdo
  setLedRange(45, 45, strip.Color(0, 0, 0));       // Ojo derecho
  setLedRange(44, 44, strip.Color(255, 255, 255)); // Ojo derecho
  setLedRange(46, 46, strip.Color(255, 255, 255)); // Ojo derecho
  setLedRange(55, 55, strip.Color(255, 255, 255)); // Ojo izquierdo
  setLedRange(50, 50, strip.Color(255, 255, 255)); // Ojo derecho
  delay(80);

  // Fase 5
  setLedRange(39, 41, strip.Color(255, 255, 255)); // Ojo izquierdo
  setLedRange(55, 55, strip.Color(255, 255, 255)); // Ojo izquierdo
  setLedRange(50, 50, strip.Color(255, 255, 255)); // Ojo derecho
  setLedRange(44, 46, strip.Color(255, 255, 255)); // Ojo derecho
  delay(80);

  // Fase 6
  setLedRange(34, 36, strip.Color(255, 255, 255)); // Ojo izquierdo
  setLedRange(29, 31, strip.Color(255, 255, 255)); // Ojo derecho
  delay(80);

  // Fase 7
  setLedRange(19, 21, strip.Color(255, 255, 255)); // Ojo izquierdo
  setLedRange(24, 26, strip.Color(255, 255, 255)); // Ojo derecho
  delay(80);

  // Fase 8
  setLedRange(15, 15, strip.Color(255, 255, 255)); // Ojo izquierdo
  setLedRange(10, 10, strip.Color(255, 255, 255)); // Ojo derecho
  delay(80);

}

//Función de ojos alegres
void happyEyes() {
  eyesOn();
  delay(1500);
  setLedRange(55, 55, strip.Color(0, 0, 0));
  setLedRange(50, 50, strip.Color(0, 0, 0));
  delay(50);
  setLedRange(39, 41, strip.Color(0, 0, 0));
  setLedRange(44, 46, strip.Color(0, 0, 0));
  delay(100);
  setLedRange(34, 36, strip.Color(0, 0, 0));
  setLedRange(29, 31, strip.Color(0, 0, 0));
  delay(100);
  setLedRange(20, 20, strip.Color(0, 0, 0));
  setLedRange(25, 25, strip.Color(0, 0, 0));
  delay(100);  
  setLedRange(19, 19, strip.Color(255, 255, 255));
  setLedRange(21, 21, strip.Color(255, 255, 255));
  setLedRange(15, 15, strip.Color(255, 255, 255));
  setLedRange(10, 10, strip.Color(255, 255, 255));
  setLedRange(24, 24, strip.Color(255, 255, 255));
  setLedRange(26, 26, strip.Color(255, 255, 255));
  delay(2000);

}

//Función de ojos obstaculos
void obstacleEyes() {
  blinkEyes();
  delay(50);
  eyesOff();
  delay(50);
  //Mirada izquierdo
  setLedRange(16, 16, strip.Color(255, 255, 255));
  setLedRange(11, 11, strip.Color(255, 255, 255));
  setLedRange(18, 20, strip.Color(255, 255, 255));
  setLedRange(23, 25, strip.Color(255, 255, 255));
  setLedRange(30, 32, strip.Color(255, 255, 255));
  setLedRange(35, 37, strip.Color(255, 255, 255));
  setLedRange(38, 40, strip.Color(255, 255, 255));
  setLedRange(43, 45, strip.Color(255, 255, 255));
  setLedRange(51, 51, strip.Color(255, 255, 255));
  setLedRange(56, 56, strip.Color(255, 255, 255));
  delay(500);
  setLedRange(16, 16, strip.Color(0, 0, 0));
  setLedRange(11, 11, strip.Color(0, 0, 0));
  setLedRange(18, 20, strip.Color(0, 0, 0));
  setLedRange(23, 25, strip.Color(0, 0, 0));
  setLedRange(30, 32, strip.Color(0, 0, 0));
  setLedRange(35, 37, strip.Color(0, 0, 0));
  setLedRange(38, 40, strip.Color(0, 0, 0));
  setLedRange(43, 45, strip.Color(0, 0, 0));
  setLedRange(51, 51, strip.Color(0, 0, 0));
  setLedRange(56, 56, strip.Color(0, 0, 0));
  delay(50);
  //Vuelve al parpadeo
  blinkEyes();
  delay(50);
  eyesOff();
  delay(50);
  //Voltea a la derecha
  setLedRange(9, 9, strip.Color(255, 255, 255));
  setLedRange(14, 14, strip.Color(255, 255, 255));
  setLedRange(20, 22, strip.Color(255, 255, 255));
  setLedRange(25, 27, strip.Color(255, 255, 255));
  setLedRange(28, 30, strip.Color(255, 255, 255));
  setLedRange(33, 35, strip.Color(255, 255, 255));
  setLedRange(40, 42, strip.Color(255, 255, 255));
  setLedRange(45, 47, strip.Color(255, 255, 255));
  setLedRange(49, 49, strip.Color(255, 255, 255));
  setLedRange(54, 54, strip.Color(255, 255, 255));
  delay(500);
  setLedRange(9, 9, strip.Color(0, 0, 0));
  setLedRange(14, 14, strip.Color(0, 0, 0));
  setLedRange(20, 22, strip.Color(0, 0, 0));
  setLedRange(25, 27, strip.Color(0, 0, 0));
  setLedRange(28, 30, strip.Color(0, 0, 0));
  setLedRange(33, 35, strip.Color(0, 0, 0));
  setLedRange(40, 42, strip.Color(0, 0, 0));
  setLedRange(45, 47, strip.Color(0, 0, 0));
  setLedRange(49, 49, strip.Color(0, 0, 0));
  setLedRange(54, 54, strip.Color(0, 0, 0));
  delay(50);

}