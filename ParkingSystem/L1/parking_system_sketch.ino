// Ultrasonic Sensor Pins declaration
const int trigPin = ;
const int echoPin = ;

// LED Pins declaration
const int redLED = ;
const int greenLED = ;

// Buzzer Pin declaration
const int buzzerPin = ;

// DISTANCE THRESHOLD 
int distanceThreshold = ;

// define functions
void turnOnLED(int led);
void turnOffLED(int led);
void printDistance(int distance);
void soundBuzzer(bool state);

// defines variables
long duration;
int distance;

// This code runs once when the arduino is powered on or restarted.
void setup() {
  pinMode(trigPin, OUTPUT);  // Sets the trigPin as an Output
  pinMode(, INPUT);   // Sets the echoPin as an Input

  // LED Setup
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  digitalWrite(, LOW);
  digitalWrite(greenLED, LOW);

  // Buzzer Setup
  pinMode(buzzerPin, OUTPUT);
  tone(buzzerPin, 1000, 2000);

  Serial.begin(9600);  // Starts the serial communication
}

// This code runs over and over again in a loop when the arduino is powered on.
void loop() {
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);

  // Calculating the distance
  distance = duration * 0.034 / 2;

  // Add logic below to print the distance as well as turn on/off the LEDs and buzzer.
  
  delay(1000);
}

// turn On LED
void turnOnLED(int led) {
  digitalWrite(, HIGH);
}

// turns Off LED
void turnOffLED(int led) {
  digitalWrite(, LOW);
}

// Prints the distance on the Serial Monitor
void printDistance(int distance) {
  Serial.print("Distance: ");
  Serial.println();
}

// Plays a buzzer tone
void soundBuzzer(bool state) {
  
}