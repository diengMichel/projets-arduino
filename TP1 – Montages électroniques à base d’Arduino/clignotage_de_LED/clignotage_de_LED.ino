const int ledPin = 3; // déclarez la broche 3 comme la broche LED

void setup() {
  pinMode(ledPin, OUTPUT); // configurez la broche 3 comme une sortie
}

void loop() {
  digitalWrite(ledPin, HIGH); // allumez la LED
  delay(2000); // attendez 2 secondes
  digitalWrite(ledPin, LOW); // éteignez la LED
  delay(1000); // attendez 1 seconde
}
