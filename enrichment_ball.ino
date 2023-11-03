// Mini Encrichment Ball Demo Code as presented at AAZK 2023 Conference
// This code reads a pot to set the speed.
// The code alternates between 5 seconds on
// and 5 seconds off, controlling an H-birdge.

int speed = 0;

void setup() {
  // Setup outputs and drive all low initially
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(12, OUTPUT); // Used as additional ground pin for pot
  pinMode(13, OUTPUT);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(12, LOW); // Used as additional ground pin for pot
  digitalWrite(13, LOW);
}

void loop() {

  // Get pot value and set speed
  // "Forward" movement
  speed = analogRead(A7);
  analogWrite(5, speed);
  digitalWrite(6, LOW);

  // Set LED on to indicate motion
  digitalWrite(13, HIGH);


  delay(5000);

  // Stop motion
  speed = analogRead(A7);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);

  // Turn off LED to indicate motion has stopped
  digitalWrite(13, LOW);

  delay(5000);

  // Get pot value and set speed
  // "Reverse" movement
  speed = analogRead(A7);
  analogWrite(6, speed);
  digitalWrite(5, LOW);

  // Set LED on to indicate motion
  digitalWrite(13, HIGH);

  delay(5000);

  // Stop motion
  speed = analogRead(A7);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);

  // Turn off LED to indicate motion has stopped
  digitalWrite(13, LOW);

  delay(5000);
  
}
