#include <LiquidCrystal.h>

// Pines del LCD
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);               // Inicializa el LCD
  lcd.setCursor(0, 0);
  lcd.print("DESTINATION TIME");
  lcd.setCursor(0, 1);
  lcd.print("  APR 11 2025  ");
}

void loop() {
  lcd.noDisplay(); // Apaga la pantalla
  delay(500);      // Espera 0.5 segundos
  lcd.display();   // Enciende la pantalla
  delay(500);      // Espera 0.5 segundos
}
