#include <DHT.h>

#define DHTPIN A2       
#define DHTTYPE DHT22  

DHT dht(DHTPIN, DHTTYPE);

float minTemp = 1000; 
float maxTemp = -1000; 

void setup() {
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  float tempC = dht.readTemperature();
  float tempF = dht.readTemperature(true);

  if (isnan(tempC)) {
    Serial.println("Error: Failed to read temperature!");
    return;
  }

  if (tempF < minTemp) minTemp = tempF;
  if (tempF > maxTemp) maxTemp = tempF;

  Serial.print("Temperature: ");
  Serial.print(tempF);
  Serial.print("°F | Min: ");
  Serial.print(minTemp);
  Serial.print("°F | Max: ");
  Serial.print(maxTemp);
  Serial.println("°F");

  delay(2000);
}
