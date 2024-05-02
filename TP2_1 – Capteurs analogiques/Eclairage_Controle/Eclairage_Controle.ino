// Pin de la LED
const int ledPin = 9;
// Pin du potentiomètre
const int potPin = A0;

void setup() {
  // Configurer le pin de la LED en sortie
  pinMode(ledPin, OUTPUT);
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
}
