// On définit les variables pour chaque broche
//FEU 1
const int R1 = 5; // La broche 4 devient le feu rouge 1
const int J1 = 6; // La broche 3 devient le feu jaune 1
const int V1 = 7; // La broche 2 devient le feu vert 1
//FEU2
const int R2 = 8; // La broche 8 devient le feu rouge 2
const int J2 = 9; // La broche 9 devient le feu jaune 2
const int V2 = 10; // La broche 10 devient le feu vert 2
// FEU 3
const int R3 = 2; // La broche 4 devient le feu rouge 1
const int J3 = 3; // La broche 3 devient le feu jaune 1
const int V3 = 4; // La broche 2 devient le feu vert 1
//TEMPS
int timer1 = 2000; // Le temps est fixé à 2 secondes
int timer2 = 6000; // Le temps est fixé à 6 secondes
void setup() {
 // On initialise les sorties
 pinMode(R1, OUTPUT);
 pinMode(J1, OUTPUT);
 pinMode(V1, OUTPUT);
 pinMode(R2, OUTPUT);
 pinMode(J2, OUTPUT);
 pinMode(V2, OUTPUT);
 pinMode(R3, OUTPUT);
 pinMode(J3, OUTPUT);
 pinMode(V3, OUTPUT);
}
void loop() {
  // R1, V2 et R3 sont allumés, le reste est éteint
 digitalWrite(V1, LOW);
 digitalWrite(J1, LOW);
 digitalWrite(J2, LOW);
 digitalWrite(R2, LOW);
 digitalWrite(V3, LOW);
 digitalWrite(J3, LOW);
 digitalWrite(R1, HIGH);
 digitalWrite(V2, HIGH);
 digitalWrite(R3, HIGH);
 delay(timer2);
  // J1,R1,J2,J3,R3 sont allumés, le reste est éteint
 digitalWrite(V1, LOW);
 digitalWrite(V2, LOW);
 digitalWrite(R2, LOW);
 digitalWrite(V3, LOW);
 digitalWrite(J1, HIGH);
 digitalWrite(R1, HIGH);
 digitalWrite(J2, HIGH);
 digitalWrite(J3, HIGH);
 digitalWrite(R3, HIGH);
 delay(timer1);
  // V1,R2,R3 sont allumés, le reste est éteint
 digitalWrite(J1, LOW);
 digitalWrite(R1, LOW);
 digitalWrite(V2, LOW);
 digitalWrite(J2, LOW);
 digitalWrite(V3, LOW);
 digitalWrite(J3, LOW);
 digitalWrite(V1, HIGH);
 digitalWrite(R2, HIGH);
 digitalWrite(R3, HIGH);
 delay(timer2);
  // J1,J2,R2,J3et R3 sont allumés, le reste est éteint
 digitalWrite(V1, LOW);
 digitalWrite(R1, LOW);
 digitalWrite(V2, LOW);
 digitalWrite(V3, LOW);
 digitalWrite(J1, HIGH);
 digitalWrite(J2, HIGH);
 digitalWrite(R2, HIGH);
 digitalWrite(J3, HIGH);
 digitalWrite(R3, HIGH);
 delay(timer1);
  // R1,R2 et V3 sont allumés, le reste est éteint
 digitalWrite(V1, LOW);
 digitalWrite(J1, LOW);
 digitalWrite(V2, LOW);
 digitalWrite(J2, LOW);
 digitalWrite(J3, LOW);
 digitalWrite(R3, LOW);
 digitalWrite(R1, HIGH);
 digitalWrite(R2, HIGH);
 digitalWrite(V3, HIGH);
 delay(timer2);
  // J1,R1,J2,R2 et J3 sont allumés, le reste est éteint
 digitalWrite(V1, LOW);
 digitalWrite(V2, LOW);
 digitalWrite(V3, LOW);
 digitalWrite(J3, LOW);
 digitalWrite(J1, HIGH);
 digitalWrite(R1, HIGH);
 digitalWrite(J2, HIGH);
 digitalWrite(R2, HIGH);
 digitalWrite(J3, HIGH);
 delay(timer1);
}
