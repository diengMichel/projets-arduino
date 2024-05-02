#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>
#include <LiquidCrystal.h>

Adafruit_MPU6050 mpu;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup(void) {
  Serial.begin(115200);
  while (!Serial) {
    delay(10);
  }
  // Initialisation
  if (!mpu.begin()) {
    Serial.println("Echec de la recherche de la puce");
    while (1) {
      delay(10);
    }
  }
  mpu.setAccelerometerRange(MPU6050_RANGE_16_G);
  mpu.setGyroRange(MPU6050_RANGE_250_DEG);
  mpu.setFilterBandwidth(MPU6050_BAND_21_HZ);
  delay(100);
  
  // Initialisation de l'écran LCD
  lcd.begin(16, 2);
  lcd.clear();
}

void loop() {
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);

  // Affichage des résultats sur l'écran LCD
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temp.temperature);
  lcd.print(" degC");
  lcd.setCursor(0, 1);
  lcd.print("Acc X: ");
  lcd.print(a.acceleration.x);
  lcd.print(", Y: ");
  lcd.print(a.acceleration.y);
  lcd.print(", Z: ");
  lcd.print(a.acceleration.z);
  lcd.print(" m/s2");
  delay(10);
}
