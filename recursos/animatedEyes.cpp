#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define ledPin 25
#define numLeds 68

Adafruit_NeoPixel strip = Adafruit_NeoPixel(numLeds, ledPin, NEO_GRB + NEO_KHZ800);

void eyes();
void blinkEyes();
void happyEyes();


void setup() {
  strip.begin();
  strip.show(); // Inicializa todos los LEDs a 'apagado'
  delay(100); // Espera 100ms para asegurarse de que los LEDs estén listos
}

void loop() {
  
  happyEyes();

}
// Función para encender un rango de LEDs con un color específico
void setLedRange(int start, int end, uint32_t color) {
  for (int i = start; i <= end; i++) {
    strip.setPixelColor(i, color);
  }
  strip.show();
}

//Función encender ambos ojos
void eyes() {
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

void blinkEyes() {
  eyes();
  delay(1500);
  // Intercalar los parpadeos de ambos ojos

  // Fase 1
  setLedRange(15, 15, strip.Color(0, 0, 0)); // Ojo izquierdo
  setLedRange(10, 10, strip.Color(0, 0, 0)); // Ojo derecho
  delay(100);

  // Fase 2
  setLedRange(19, 21, strip.Color(0, 0, 0)); // Ojo izquierdo
  setLedRange(24, 26, strip.Color(0, 0, 0)); // Ojo derecho
  delay(100);

  // Fase 3
  setLedRange(34, 36, strip.Color(0, 0, 0)); // Ojo izquierdo
  setLedRange(29, 31, strip.Color(0, 0, 0)); // Ojo derecho
  delay(150);

  // Fase 4
  setLedRange(39, 39, strip.Color(255, 255, 255)); // Ojo izquierdo
  setLedRange(40, 40, strip.Color(0, 0, 0));       // Ojo izquierdo
  setLedRange(41, 41, strip.Color(255, 255, 255)); // Ojo izquierdo
  setLedRange(45, 45, strip.Color(0, 0, 0));       // Ojo derecho
  setLedRange(44, 44, strip.Color(255, 255, 255)); // Ojo derecho
  setLedRange(46, 46, strip.Color(255, 255, 255)); // Ojo derecho
  setLedRange(55, 55, strip.Color(255, 255, 255)); // Ojo izquierdo
  setLedRange(50, 50, strip.Color(255, 255, 255)); // Ojo derecho
  delay(200);

  // Fase 5
  setLedRange(39, 41, strip.Color(255, 255, 255)); // Ojo izquierdo
  setLedRange(55, 55, strip.Color(255, 255, 255)); // Ojo izquierdo
  setLedRange(50, 50, strip.Color(255, 255, 255)); // Ojo derecho
  setLedRange(44, 46, strip.Color(255, 255, 255)); // Ojo derecho
  delay(100);

  // Fase 6
  setLedRange(34, 36, strip.Color(255, 255, 255)); // Ojo izquierdo
  setLedRange(29, 31, strip.Color(255, 255, 255)); // Ojo derecho
  delay(100);

  // Fase 7
  setLedRange(19, 21, strip.Color(255, 255, 255)); // Ojo izquierdo
  setLedRange(24, 26, strip.Color(255, 255, 255)); // Ojo derecho
  delay(100);

  // Fase 8
  setLedRange(15, 15, strip.Color(255, 255, 255)); // Ojo izquierdo
  setLedRange(10, 10, strip.Color(255, 255, 255)); // Ojo derecho
  delay(100);

  
}

void happyEyes() {
  eyes();
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