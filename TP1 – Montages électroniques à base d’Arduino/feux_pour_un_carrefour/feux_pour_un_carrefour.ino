const int V1 = 13;
const int J1 = 12;
const int R1 = 11;
  
const int V2 = 10;
const int J2 = 9;
const int R2 = 8;
 
const int V3 = 7;
const int J3 = 6;
const int R3 = 5;

const int V4 = 4;
const int J4 = 3;
const int R4 = 2;

int timer1 = 2000;
int timer2 = 6000;

void setup()
{
pinMode(V1, OUTPUT);
pinMode(J1, OUTPUT);
pinMode(R1, OUTPUT);
pinMode(V2, OUTPUT);
pinMode(J2, OUTPUT);
pinMode(R2, OUTPUT);
pinMode(V3, OUTPUT);
pinMode(J3, OUTPUT);
pinMode(R3, OUTPUT);
pinMode(V4, OUTPUT);
pinMode(J4, OUTPUT);
pinMode(R4, OUTPUT);
}

void loop()
{
  // V1,R2,R3 et r4 sont allumés, le reste est éteint
digitalWrite(J1, LOW);
digitalWrite(R1, LOW);
digitalWrite(V2, LOW);
digitalWrite(J2, LOW);
digitalWrite(V3, LOW);
digitalWrite(J3, LOW);
digitalWrite(V4, LOW);
digitalWrite(J4, LOW);
digitalWrite(V1, HIGH);
digitalWrite(R2, HIGH);
digitalWrite(R3, HIGH);
digitalWrite(R4, HIGH);
delay(timer2);
  // J1,J2,R2,J3,R3,J4,R4 sont allumés, le reste est éteint
digitalWrite(V1, LOW);
digitalWrite(R1, LOW);
digitalWrite(V2, LOW);
digitalWrite(V3, LOW);
digitalWrite(V4, LOW);
digitalWrite(J1, HIGH);
digitalWrite(J2, HIGH);
digitalWrite(R2, HIGH);
digitalWrite(J3, HIGH);
digitalWrite(R3, HIGH);
digitalWrite(J4, HIGH);
digitalWrite(R4, HIGH);
delay(timer1);
  // V2,R1,R3 et R4 sont allumés, le reste est éteint
digitalWrite(V1, LOW);
digitalWrite(J1, LOW);
digitalWrite(J2, LOW);
digitalWrite(R2, LOW);
digitalWrite(V3, LOW);
digitalWrite(J3, LOW);
digitalWrite(V4, LOW);
digitalWrite(J4, LOW);
digitalWrite(V2, HIGH);
digitalWrite(R1, HIGH);
digitalWrite(R3, HIGH);
digitalWrite(R4, HIGH); 
delay(timer2);
// J1,R1,J2,J3,R3,J4 et R4 sont allumés, le reste est éteint
digitalWrite(V1, LOW);
digitalWrite(V2, LOW);
digitalWrite(V3, LOW);
digitalWrite(V4, LOW);
digitalWrite(R2, LOW);
digitalWrite(J1, HIGH);
digitalWrite(R1, HIGH);
digitalWrite(J2, HIGH);
digitalWrite(J3, HIGH);
digitalWrite(R3, HIGH);
digitalWrite(J4, HIGH);
digitalWrite(R4, HIGH);
delay(timer1);
// V3,R1,R2 et R4 sont allumés, le reste est éteint
digitalWrite(V1, LOW);
digitalWrite(J1, LOW);
digitalWrite(V2, LOW);
digitalWrite(J2, LOW);
digitalWrite(J3, LOW);
digitalWrite(R3, LOW);
digitalWrite(V4, LOW);
digitalWrite(J4, LOW);
digitalWrite(V3, HIGH);
digitalWrite(R1, HIGH);
digitalWrite(R2, HIGH);
digitalWrite(R4, HIGH); 
delay(timer2);
// J1,R1,J2,R2,J3,J4 et r4 sont allumés, le reste est éteint
digitalWrite(V1, LOW);
digitalWrite(V2, LOW);
digitalWrite(V3, LOW);
digitalWrite(V4, LOW);
digitalWrite(R3, LOW);
digitalWrite(J1, HIGH);
digitalWrite(R1, HIGH);
digitalWrite(J2, HIGH);
digitalWrite(R2, HIGH);
digitalWrite(J3, HIGH);
digitalWrite(J4, HIGH);
digitalWrite(R4, HIGH);
delay(timer1);
// V4,R1,R2 et R3 sont allumés, le reste est éteint
digitalWrite(V1, LOW);
digitalWrite(J1, LOW);
digitalWrite(V2, LOW);
digitalWrite(J2, LOW);
digitalWrite(V3, LOW);
digitalWrite(J3, LOW);
digitalWrite(J4, LOW);
digitalWrite(R4, LOW);
digitalWrite(V4, HIGH);
digitalWrite(R1, HIGH);
digitalWrite(R2, HIGH);
digitalWrite(R3, HIGH);
delay(timer2);
// J1,R1,J2,R2,J3,R3 et J4 sont allumés, le reste est éteint
digitalWrite(V1, LOW);
digitalWrite(V2, LOW);
digitalWrite(V3, LOW);
digitalWrite(V4, LOW);
digitalWrite(R4, LOW);
digitalWrite(J1, HIGH);
digitalWrite(R1, HIGH);
digitalWrite(J2, HIGH);
digitalWrite(R2, HIGH);
digitalWrite(J3, HIGH);
digitalWrite(R3, HIGH);
digitalWrite(J4, HIGH);
delay(timer1);
}
