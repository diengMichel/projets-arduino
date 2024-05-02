#include <LiquidCrystal.h>

// Pin de la LED
const int ledPin = 9;
// Pin du capteur de luminosité
const int lightSensorPin = A0;
// Seuil d'obscurité
const int darknessThreshold = 500;
// Déclaration de l'écran LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // Configurer le pin de la LED en sortie
  pinMode(ledPin, OUTPUT);
  // Configurer l'écran LCD
  lcd.begin(16, 2);
}

void loop() {
  // Lire la valeur du capteur de luminosité
  int lightValue = analogRead(lightSensorPin);
  // Afficher la valeur sur l'écran LCD
  lcd.clear();
  lcd.print("Light Value : ");
  lcd.print(lightValue);
  // Vérifier si la valeur est inférieure au seuil d'obscurité
  if (lightValue < darknessThreshold) {
    // Allumer la LED
    digitalWrite(ledPin, HIGH);
  } else {
    // Eteindre la LED
    digitalWrite(ledPin, LOW);
  }
  delay(1000);
}
