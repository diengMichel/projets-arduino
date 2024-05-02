#include <dht_nonblocking.h>
#include <LiquidCrystal.h> // importe la bibliothèque pour utiliser l'écran LCD

#define DHT_SENSOR_TYPE DHT_TYPE_11

static const int DHT_SENSOR_PIN = 2;
DHT_nonblocking dht_sensor( DHT_SENSOR_PIN, DHT_SENSOR_TYPE );
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // définit les broches de l'écran LCD

/*
 * Initialize the serial port.
 */
void setup( )
{
  Serial.begin( 9600);
  lcd.begin(16, 2); // initialise l'écran LCD avec 16 colonnes et 2 lignes
}



/*
 * Poll for a measurement, keeping the state machine alive.  Returns
 * true if a measurement is available.
 */
static bool measure_environment( float *temperature, float *humidity )
{
  static unsigned long measurement_timestamp = millis( );

  /* Measure once every four seconds. */
  if( millis( ) - measurement_timestamp > 3000ul )
  {
    if( dht_sensor.measure( temperature, humidity ) == true )
    {
      measurement_timestamp = millis( );
      return( true );
    }
  }

  return( false );
}



/*
 * Main program loop.
 */
void loop( )
{
  float temperature;
  float humidity;

  /* Measure temperature and humidity.  If the functions returns
     true, then a measurement is available. */
  if( measure_environment( &temperature, &humidity ) == true )
  {
    lcd.clear(); // nettoyer l'écran LCD
    lcd.print("Temp: ");
    lcd.print(temperature);
    lcd.setCursor(0, 1); // se déplacer à la seconde ligne
    lcd.print("Humidity: ");
    lcd.print(humidity);
  }
}
