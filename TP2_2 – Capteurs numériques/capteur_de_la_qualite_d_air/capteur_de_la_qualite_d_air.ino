#include <MQ135.h>
#include <DHT.h>
#define PIN_MQ135 A2 
#define DHTPIN 2 
#define DHTTYPE DHT11 
MQ135 mq135_sensor(PIN_MQ135);
DHT dht(DHTPIN, DHTTYPE);
float temperature, humidity;
void setup() {
 Serial.begin(9600);
 dht.begin();
}
void loop() {
 humidity = dht.readHumidity();
 temperature = dht.readTemperature();
 if (isnan(humidity) || isnan(temperature)) {
 Serial.println(F("Failed to read from DHT sensor!"));
 return;
 }
 float rzero = mq135_sensor.getRZero();
 float correctedRZero = mq135_sensor.getCorrectedRZero(temperature,
humidity);
 float resistance = mq135_sensor.getResistance();
 float ppm = mq135_sensor.getPPM();
 float correctedPPM = mq135_sensor.getCorrectedPPM(temperature,
humidity);
 Serial.print("MQ135 RZero: ");
 Serial.print(rzero);
 Serial.print("\t Corrected RZero: ");
 Serial.print(correctedRZero);
 Serial.print("\t Resistance: ");
 Serial.print(resistance);
 Serial.print("\t PPM: ");
 Serial.print(ppm);
 Serial.print("ppm");
 Serial.print("\t Corrected PPM: ");
 Serial.print(correctedPPM);
 Serial.println("ppm");
 delay(300);
}
