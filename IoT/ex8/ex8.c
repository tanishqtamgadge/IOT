#include <Arduino.h>

void setup() {
    Serial.begin(9600); // Start Serial Monitor
    Serial.println("Enter a number:");
}

void loop() {
    if (Serial.available() > 0) { 
        int num = Serial.parseInt();
        Serial.print("Squared value: ");
        Serial.print(num * num); 
        Serial.println();
        delay(1000);
        Serial.println("Enter another number:");
        delay(500); 
    }
}
