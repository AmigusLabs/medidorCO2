/*
 * Test para el NeoPixel
 */

// Neopixel
#include <Adafruit_NeoPixel.h>
#define PIN       D6
#define NUMPIXELS 1

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin(); // Inicializar NeoPixel
  pixels.clear(); // Todos los pixel sin color (= 0,0,0)
  pixels.show();  // Mostramos
}

void loop() {
  pixels.setPixelColor(0, pixels.Color(0, 127, 0)); // Color VERDE
  pixels.show();
  delay(500);
  pixels.setPixelColor(0, pixels.Color(127, 50, 0)); // Color NARANJA
  pixels.show(); 
  delay(500);
  pixels.setPixelColor(0, pixels.Color(127, 0, 0)); // Color ROJO
  pixels.show();
  delay(500);
}
