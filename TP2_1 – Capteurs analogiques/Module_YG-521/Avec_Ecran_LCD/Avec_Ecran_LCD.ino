#include <LiquidCrystal.h>

// Pin de la LED
const int ledPin = 9;
// Pin du potentiomètre
const int potPin = A0;
// Déclaration de l'écran LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // Configurer le pin de la LED en sortie
  pinMode(ledPin, OUTPUT);
  // Configurer l'écran LCD
  lcd.begin(16, 2);
}

void loop() {
  // Lire la valeur du potentiomètre
  int potValue = analogRead(potPin);
  // Calculer la tension générée par le potentiomètre
  float voltage = map(potValue, 0, 1023, 0, 5.0);
  // Calculer le rapport cyclique en fonction de la tension
  int dutyCycle = map(voltage, 0, 5.0, 0, 255);
  // Appliquer le rapport cyclique au signal PWM de la LED
  analogWrite(ledPin, dutyCycle);
  // Afficher les valeurs sur l'écran LCD
  lcd.clear();
  lcd.print("Potentiometre : ");
  lcd.print(potValue);
  lcd.setCursor(0, 1);
  lcd.print("Voltage : ");
  lcd.print(voltage);
  lcd.print("V");
  lcd.print(" rapport cyclique : ");
  lcd.print(dutyCycle);
  lcd.print("%");
  delay(1000);
}
