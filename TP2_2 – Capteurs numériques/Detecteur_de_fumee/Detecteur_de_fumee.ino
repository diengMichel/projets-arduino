int smokePin = A0; // broche du capteur MQ2
int buzzer = 8; // broche du buzzer
int ledRed = 7; // broche de la LED rouge
int ledGreen = 6; // broche de la LED verte

void setup() {
  pinMode(buzzer, OUTPUT); // définit la broche du buzzer en sortie
  pinMode(ledRed, OUTPUT); // définit la broche de la LED rouge en sortie
  pinMode(ledGreen, OUTPUT); // définit la broche de la LED verte en sortie
}

void loop() {
  int smoke = analogRead(smokePin); // lit la valeur de la broche du capteur MQ2
  if (smoke > 200) { // si la valeur est supérieure à 200, cela indique la présence de fumée
    digitalWrite(buzzer, HIGH); // active le buzzer
    digitalWrite(ledRed, HIGH); // allume la LED rouge
    digitalWrite(ledGreen, LOW); // éteint la LED verte
  } else {
    digitalWrite(buzzer, LOW); // désactive le buzzer
    digitalWrite(ledRed, LOW); // éteint la LED rouge
    digitalWrite(ledGreen, HIGH); // allume la LED verte
  }
}
