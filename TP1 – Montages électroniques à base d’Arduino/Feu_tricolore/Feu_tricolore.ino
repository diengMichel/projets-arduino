const int greenPin = 4; // déclarez la broche 4 comme la broche LED verte
const int orangePin = 3; // déclarez la broche 3 comme la broche LED orange
const int redPin = 2; // déclarez la broche 2 comme la broche LED rouge

void setup() {
  pinMode(greenPin, OUTPUT); // configurez la broche 4 comme une sortie
  pinMode(orangePin, OUTPUT); // configurez la broche 3 comme une sortie
  pinMode(redPin, OUTPUT); // configurez la broche 2 comme une sortie
}

void loop() {
  digitalWrite(greenPin, HIGH); // allumez la LED verte
  delay(3000); // attendez 3 secondes
  digitalWrite(greenPin, LOW); // éteignez la LED verte
  digitalWrite(orangePin, HIGH); // allumez la LED orange
  delay(1000); // attendez 1 seconde
  digitalWrite(orangePin, LOW); // éteignez la LED orange
  digitalWrite(redPin, HIGH); // allumez la LED rouge
  delay(3000); // attendez 3 secondes
  digitalWrite(redPin, LOW); // éteignez la LED rouge
}
