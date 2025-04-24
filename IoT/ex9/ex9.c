const int redPin = 9;     // Red LED pin 
const int greenPin = 10;  // Green LED pin 
const int bluePin = 11;   // Blue LED pin

// Potentiometer
const int redPotPin = A0;   // Red
const int greenPotPin = A1; // green
const int bluePotPin = A2;  // Blue

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int redValue = analogRead(redPotPin);   
  int greenValue = analogRead(greenPotPin);   
  int blueValue = analogRead(bluePotPin);   

  redValue = map(redValue, 0, 1023, 0, 255);
  greenValue = map(greenValue, 0, 1023, 0, 255);
  blueValue = map(blueValue, 0, 1023, 0, 255);

  analogWrite(redPin, redValue);   
  analogWrite(greenPin, greenValue);   
  analogWrite(bluePin, blueValue);   

  Serial.print("Red: ");
  Serial.print(redValue);
  Serial.print(" Green: ");
  Serial.print(greenValue);
  Serial.print(" Blue: ");
  Serial.println(blueValue);

  delay(10);
}
