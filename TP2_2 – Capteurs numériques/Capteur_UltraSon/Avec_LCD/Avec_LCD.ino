#include <LiquidCrystal.h> // importe la bibliothèque pour utiliser l'écran LCD

int ledPin = 8 ;                // choose the pin for the LED
int inputPin = 2;               // choose the input pin (for PIR sensor)
int pirState = LOW;             // we start, assuming no motion detected
int val = 0;                    // variable for reading the pin status
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // définit les broches de l'écran LCD

void setup() {
  pinMode(ledPin, OUTPUT);      // declare LED as output
  pinMode(inputPin, INPUT);     // declare sensor as input
  lcd.begin(16, 2); // initialise l'écran LCD avec 16 colonnes et 2 lignes
  Serial.begin(9600);
}
 
void loop(){
  val = digitalRead(inputPin);  // read input value
  if (val == HIGH) {            // check if the input is HIGH
    digitalWrite(ledPin, HIGH);  // turn LED ON
    lcd.clear(); // nettoyer l'écran LCD
    lcd.print("Motion detected!");
    delay(1000);
    if (pirState == LOW) {
      // we have just turned on
      Serial.println("Motion detected!");
      // We only want to print on the output change, not state
      pirState = HIGH;
    }
  } 
  else {
    digitalWrite(ledPin, LOW); // turn LED OFF
    lcd.clear();
    lcd.print("Motion ended!");
    if (pirState == HIGH){
      // we have just turned of
      Serial.println("Motion ended!");
      // We only want to print on the output change, not state
      pirState = LOW;
    }
  }
}
