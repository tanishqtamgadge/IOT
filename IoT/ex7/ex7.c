// A53 Dipanshu Ambilkar
const int redPin = 13;
const int greenPin = 12;
const int yellowPin = 11;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);

  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, LOW);

  Serial.begin(9600);
  Serial.println("System ready. Send 'b' for blink, 'g' for green, 'r' for red, 'y' for yellow.");
}

void loop() {
  if (Serial.available() > 0) {
    char ip = Serial.read(); 

    // Reset all LEDs
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(yellowPin, LOW);

    if (ip == 'b') {
      for(int i = 0; i < 5; i++) {  
        digitalWrite(greenPin, HIGH);
        delay(500);
        digitalWrite(greenPin, LOW);
        delay(500);
      }
    }
    else if (ip == 'g') {
      digitalWrite(greenPin, HIGH);
      delay(5000);
    }
    else if (ip == 'r') {  
      digitalWrite(redPin, HIGH);
      delay(5000);
    }
    else if (ip == 'y') {
      digitalWrite(yellowPin, HIGH);
      delay(5000);
    }
    else {
      Serial.println("Invalid input! Please send 'b', 'g', 'r', or 'y'.");
    }
  }
}
