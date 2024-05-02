// Pin de la LED
const int ledPin = 9;
// Pin du capteur de luminosité
const int lightSensorPin = A0;
// Seuil d'obscurité
const int darknessThreshold = 500;

void setup() {
  // Configurer le pin de la LED en sortie
  pinMode(ledPin, OUTPUT);
  // Configurer le moniteur série
  Serial.begin(9600);
}

void loop() {
  // Lire la valeur du capteur de luminosité
  int lightValue = analogRead(lightSensorPin);
  // Afficher la valeur sur le moniteur série
  Serial.print("Light Value : ");
  Serial.println(lightValue);
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
