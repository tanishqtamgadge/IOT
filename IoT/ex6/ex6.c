#define green 3
#define yellow 4
#define red 5

int counter = 0;

void setup() {
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop() {
  if (counter < 100) {
    digitalWrite(green, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
  } 
  else if (counter >= 101 && counter <= 200) {
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(red, LOW);
  } 
  else if (counter > 200) {
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
  }
  
  counter += 10; 
  if (counter > 250) counter = 0; 

  delay(500); 
}
