#include <DHT.h>
#define DHTPIN A2 
#define DHTTYPE DHT22  

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();  
}
void loop() {
  float temp = dht.readTemperature();

  if (isnan(temp)) {
    Serial.println("Error: Failed to read temperature!");
  } else {
    Serial.print("Temperature: ");
    Serial.print(temp);
    Serial.println("°C");
  }
  
  delay(2000);
  Serial.println("Temperature Received");
}
