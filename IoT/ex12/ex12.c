#include <DHT.h>

#define DHTPIN A2       
#define DHTTYPE DHT22  

DHT dht(DHTPIN, DHTTYPE);

void setup() {
    Serial.begin(115200);
    dht.begin();
}

void loop() {
    float tempC = dht.readTemperature();

    if (isnan(tempC)) {
        Serial.println("Error: Sensor Failure");
        return;
    }

    Serial.println(tempC); // Send data to Serial Plotter
    delay(1000);
}
