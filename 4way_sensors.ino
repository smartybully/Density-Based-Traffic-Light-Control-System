const int greenPin1 = 2;
const int yellowPin1 = 3;
const int redPin1 = 4;
const int irSensorPin1 = 5;  // Change this to the actual pin for the first IR sensor module for the first set
const int irSensorPin2 = 6;  // Change this to the actual pin for the second IR sensor module for the first set


const int greenPin2 = 7;
const int yellowPin2 = 8;
const int redPin2 = 9;
const int irSensorPin3 = 10;  // Change this to the actual pin for the first IR sensor module for the second set
const int irSensorPin4 = 11;  // Change this to the actual pin for the second IR sensor module for the second set


const int greenPin3 = 12;
const int yellowPin3 = 13;
const int redPin3 = A0;
const int irSensorPin5 = A1;  // Change this to the actual pin for the first IR sensor module for the third set
const int irSensorPin6 = A2;  // Change this to the actual pin for the second IR sensor module for the third set

const int greenPin4 = A3;
const int yellowPin4 = A4;
const int redPin4 = A5;
const int irSensorPin7 = A6;  // Change this to the actual pin for the first IR sensor module for the fourth set
const int irSensorPin8 = A7;  // Change this to the actual pin for the second IR sensor module for the fourth set

void setup() {
  pinMode(greenPin1, OUTPUT);
  pinMode(yellowPin1, OUTPUT);
  pinMode(redPin1, OUTPUT);
  pinMode(irSensorPin1, INPUT);
  pinMode(irSensorPin2, INPUT);

  pinMode(greenPin2, OUTPUT);
  pinMode(yellowPin2, OUTPUT);
  pinMode(redPin2, OUTPUT);
  pinMode(irSensorPin3, INPUT);
  pinMode(irSensorPin4, INPUT);

  pinMode(greenPin3, OUTPUT);
  pinMode(yellowPin3, OUTPUT);
  pinMode(redPin3, OUTPUT);
  pinMode(irSensorPin5, INPUT);
  pinMode(irSensorPin6, INPUT);

  pinMode(greenPin4, OUTPUT);
  pinMode(yellowPin4, OUTPUT);
  pinMode(redPin4, OUTPUT);
  pinMode(irSensorPin7, INPUT);
  pinMode(irSensorPin8, INPUT);
}

void loop() {
  // Initialize all lights to red
  digitalWrite(greenPin1, LOW);
  digitalWrite(yellowPin1, LOW);
  digitalWrite(redPin1, HIGH);

  digitalWrite(greenPin2, LOW);
  digitalWrite(yellowPin2, LOW);
  digitalWrite(redPin2, HIGH);

  digitalWrite(greenPin3, LOW);
  digitalWrite(yellowPin3, LOW);
  digitalWrite(redPin3, HIGH);

  digitalWrite(greenPin4, LOW);
  digitalWrite(yellowPin4, LOW);
  digitalWrite(redPin4, HIGH);

  // Check the state of the IR sensors for the first set of traffic lights
  bool isSensor1Blocked = (digitalRead(irSensorPin1) == LOW);
  bool isSensor2Blocked = (digitalRead(irSensorPin2) == LOW);

  // First set of traffic lights
  if (isSensor1Blocked && isSensor2Blocked) {
    digitalWrite(greenPin1, HIGH);
    digitalWrite(redPin1, LOW);
    delay(10000);  // 10 seconds green
  } else if (isSensor1Blocked || isSensor2Blocked) {
    digitalWrite(greenPin1, HIGH);
    digitalWrite(redPin1, LOW);
    delay(6000);  // 6 seconds green
  } else {
    digitalWrite(greenPin1, HIGH);
    digitalWrite(redPin1, LOW);
    delay(3000);  // 3 seconds green
  }

  // First set yellow light
  digitalWrite(greenPin1, LOW);
  digitalWrite(yellowPin1, HIGH);
  digitalWrite(redPin1, LOW);
  delay(2000);  // 2 seconds yellow

  // First set red light
  digitalWrite(yellowPin1, LOW);
  digitalWrite(redPin1, HIGH);
  delay(3000);  // 3 seconds red

  // Check the state of the IR sensors for the second set of traffic lights
  bool isSensor3Blocked = (digitalRead(irSensorPin3) == LOW);
  bool isSensor4Blocked = (digitalRead(irSensorPin4) == LOW);

  // Second set of traffic lights
  if (isSensor3Blocked && isSensor4Blocked) {
    digitalWrite(greenPin2, HIGH);
    digitalWrite(redPin2, LOW);
    delay(10000);  // 10 seconds green
  } else if (isSensor3Blocked || isSensor4Blocked) {
    digitalWrite(greenPin2, HIGH);
    digitalWrite(redPin2, LOW);
    delay(6000);  // 6 seconds green
  } else {
    digitalWrite(greenPin2, HIGH);
    digitalWrite(redPin2, LOW);
    delay(3000);  // 3 seconds green
  }

  // Second set yellow light
  digitalWrite(greenPin2, LOW);
  digitalWrite(yellowPin2, HIGH);
  digitalWrite(redPin2, LOW);
  delay(2000);  // 2 seconds yellow

  // Second set red light
  digitalWrite(yellowPin2, LOW);
  digitalWrite(redPin2, HIGH);
  delay(3000);  // 3 seconds red

  // Check the state of the IR sensors for the third set of traffic lights
  bool isSensor5Blocked = (digitalRead(irSensorPin5) == LOW);
  bool isSensor6Blocked = (digitalRead(irSensorPin6) == LOW);

  // Third set of traffic lights
  if (isSensor5Blocked && isSensor6Blocked) {
    digitalWrite(greenPin3, HIGH);
    digitalWrite(redPin3, LOW);
    delay(10000);  // 10 seconds green
  } else if (isSensor5Blocked || isSensor6Blocked) {
    digitalWrite(greenPin3, HIGH);
    digitalWrite(redPin3, LOW);
    delay(6000);  // 6 seconds green
  } else {
    digitalWrite(greenPin3, HIGH);
    digitalWrite(redPin3, LOW);
    delay(3000);  // 3 seconds green
  }

  // Third set yellow light
  digitalWrite(greenPin3, LOW);
  digitalWrite(yellowPin3, HIGH);
  digitalWrite(redPin3, LOW);
  delay(2000);  // 2 seconds yellow

  // Third set red light
  digitalWrite(yellowPin3, LOW);
  digitalWrite(redPin3, HIGH);
  delay(3000);  // 3 seconds red

  // Check the state of the IR sensors for the fourth set of traffic lights
  bool isSensor7Blocked = (digitalRead(irSensorPin7) == LOW);
  bool isSensor8Blocked = (digitalRead(irSensorPin8) == LOW);

  // Fourth set of traffic lights
  if (isSensor7Blocked && isSensor8Blocked) {
    digitalWrite(greenPin4, HIGH);
    digitalWrite(redPin4, LOW);
    delay(10000);  // 10 seconds green
  } else if (isSensor7Blocked || isSensor8Blocked) {
    digitalWrite(greenPin4, HIGH);
    digitalWrite(redPin4, LOW);
    delay(6000);  // 6 seconds green
  } else {
    digitalWrite(greenPin4, HIGH);
    digitalWrite(redPin4, LOW);
    delay(3000);  // 3 seconds green
  }

  // Fourth set yellow light
  digitalWrite(greenPin4, LOW);
  digitalWrite(yellowPin4, HIGH);
  digitalWrite(redPin4, LOW);
  delay(2000);  // 2 seconds yellow

  // Fourth set red light
  digitalWrite(yellowPin4, LOW);
  digitalWrite(redPin4, HIGH);
  delay(3000);  // 3 seconds red
}