
const int Broche_Sortie_Buzzer = 8 ;
const int Broche_Entree_Ana_PhotoR = A2 ;
const int Limite_Basse = 600 ;
const int Limite_Haute = 944 ;
int Frequence ;
int Valeur_Ana_PhotoR = 0 ;
void setup() {
Serial.begin(9600) ;
}
void loop(){
Valeur_Ana_PhotoR = analogRead(Broche_Entree_Ana_PhotoR) ;
Serial.print("Valeur ANA Photoresistance 0-1023") ; 
Serial.print(Valeur_Ana_PhotoR) ;
  
Frequence=map(Valeur_Ana_PhotoR,Limite_Basse,Limite_Haute,50,4000);
tone(8, Frequence) ;
Serial.print("Frequence = ") ;
Serial.print(Frequence) ;
Serial.println(" Hz ") ;
 
delay(5000) ;
}
