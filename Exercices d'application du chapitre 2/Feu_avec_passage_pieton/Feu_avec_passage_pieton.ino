const int R1 = 12; // La broche 4 devient le feu rouge 1
const int J1 = 11; // La broche 3 devient le feu jaune 1
const int V1 = 10; // La broche 2 devient le feu vert 1
const int buttonPin = 2;
int buttonState = 0;
int vert1State = 0;
//FEU2
const int R2 = 9; // La broche 8 devient le feu rouge 2
const int V2 = 8; // La broche 10 devient le feu vert 2
//TEMPS
int timer1 = 1000; // Le temps est fixé à 2 secondes
int timer2 = 3000; // Le temps est fixé à 6 secondes
void setup() {
 // On initialise les sorties
 pinMode(R1, OUTPUT);
 pinMode(J1, OUTPUT);
 pinMode(V1, OUTPUT);
 pinMode(R2, OUTPUT);
 pinMode(V2, OUTPUT);
 pinMode(buttonPin, INPUT);
 pinMode(vert1State, OUTPUT);
}
void loop() {
 buttonState = digitalRead(buttonPin);
 vert1State = digitalRead(V1);
 if (buttonState == LOW ){
  digitalWrite(R1, LOW); // R2 éteint
 digitalWrite(J1, LOW); // J1 éteint
 digitalWrite(V2, LOW);
 digitalWrite(R2, HIGH);
 digitalWrite(V1, HIGH); // V2 allumé
 delay(timer2); // durée: 6000 millisecondes, soit 6 secondes
 // Phase 2 : R1, J1, J2 allumés et V2 éteint
digitalWrite(R1, LOW); // R2 éteint
 digitalWrite(V1, LOW); // J2 éteint
 digitalWrite(J1, HIGH); // V2 allumé
 delay(timer1); // durée: 2000 millisecondes, soit 2 secondes
 // Phase 3 : R1, J1, J2 éteints et V1 et R2 allumés
 digitalWrite(J1, LOW); // J1 éteint
 digitalWrite(V1, LOW); // J2 éteint
 digitalWrite(R1, HIGH); // R2 allumé
 delay(timer2);
  }
 else {
  digitalWrite(R1, LOW);
  digitalWrite(V1, HIGH);
  delay(timer2) ;
  digitalWrite(V1, LOW);
  digitalWrite(J1, HIGH); 
  delay(1000);
  digitalWrite(J1, LOW);
  digitalWrite(R2, LOW); 
  digitalWrite(R1, HIGH); 
  digitalWrite(V2, HIGH); 
  delay(5000);
  }
}
