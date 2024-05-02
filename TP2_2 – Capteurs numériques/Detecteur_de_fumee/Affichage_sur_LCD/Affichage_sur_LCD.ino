#include <LiquidCrystal.h> // importe la bibliothèque pour utiliser l'écran LCD

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // définit les broches de l'écran LCD
int smokePin = A0; // broche du capteur MQ2
int buzzer = 8; // broche du buzzer
int ledRed = 7; // broche de la LED rouge
int ledGreen = 6; // broche de la LED verte

void setup() {
  pinMode(buzzer, OUTPUT); // définit la broche du buzzer en sortie
  pinMode(ledRed, OUTPUT); // définit la broche de la LED rouge en sortie
  pinMode(ledGreen, OUTPUT); // définit la broche de la LED verte en sortie
  lcd.begin(16, 2); // initialise l'écran LCD avec 16 colonnes et 2 lignes
}

void loop() {
  int smoke = analogRead(smokePin); // lit la valeur de la broche du capteur MQ2
  lcd.clear(); // efface l'écran LCD
  lcd.print("Smoke: "); // affiche "Smoke: " sur la première ligne
  lcd.print(smoke); // affiche la valeur de smoke sur la première ligne
  if (smoke > 200) { // si la valeur est supérieure à 200, cela indique la présence de fumée
    digitalWrite(buzzer, HIGH); // active le buzzer
    digitalWrite(ledRed, HIGH); // allume la LED rouge
    digitalWrite(ledGreen, LOW); // éteint la LED verte
    lcd.setCursor(0, 1); // positionne le curseur sur la seconde ligne
    lcd.print("Fumee detectee!"); // affiche "Smoke detected!" sur la seconde ligne
  } else {
    digitalWrite(buzzer, LOW); // désactive le buzzer
    digitalWrite(ledRed, LOW); // éteint la LED rouge
    digitalWrite(ledGreen, HIGH); // allume la LED verte
    lcd.setCursor(0, 1); // positionne le curseur sur la seconde ligne
    lcd.print("Pas de fumee detectee."); // affiche "No smoke detected." sur la seconde ligne
  }
}
