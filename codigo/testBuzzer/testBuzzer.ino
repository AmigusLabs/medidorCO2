/*
 * Test para el zumbador activo
 * OJO: ¡vigila la polaridad!
 */

// Buzzer
#define PIN  D8
 
void setup() {
   pinMode(PIN, OUTPUT);
}

void loop() {
  digitalWrite(PIN, HIGH);   // enciende el zumbador
  delay(1000);               // espera 1 segundo
  digitalWrite(PIN, LOW);    // apaga el zumbador
  delay(1000);               // espera 1 segundo
}
