// Initialisation des constantes :
const int analogInPin = A0; // Numéro de la broche à laquelle est connecté la photorésistance
const int analogOutPin = 9; // Numéro de la broche à laquelle est connectée la LED
int sensorValue = 0; // Valeur lue sur la photorésistance
int outputValue = 0; // Valeur envoyée à la LED
void setup() {
 // Initialise la communication avec l'ordinateur
 Serial.begin(9600);
 
 // Indique que la broche analogOutPin est une sortie :
 pinMode(analogOutPin, OUTPUT); 
 // Indique que la broche analogInPin est une entrée :
 pinMode(analogInPin, INPUT); 
}
void loop() {
 // lit la valeur de la photorésistance et
 // stocke le résultat dans sensorValue :
 sensorValue = analogRead(analogInPin); 
 // change sensorValue vers une valeur dans l’intervalle de 0 à 255
 // et stocke le résultat dans outputValue :
 outputValue = map(sensorValue, 0, 1023, 0, 255); 
 // envoie de cette nouvelle valeur sur la LED
 if (sensorValue <= 800){
 digitalWrite(analogOutPin, HIGH) ;
 // envoie tout ça vers l'ordinateur
 Serial.print("sensor = " ); 
 Serial.print(sensorValue); 
 Serial.print("\t output = "); 
 Serial.println(outputValue);
  } 
  else{
  digitalWrite(analogOutPin, LOW) ;
  }
}
