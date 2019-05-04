
// variable to hold sensor value
int sensorValue;

// variable to calibrate highest value
int sensorLow = 1023;
// variable to calibrate lowest value
int sensorHigh = 0;
// LED pin
const int ledPin = 13;

void setup() {
  Serial.begin(9600); // initialize serial communications
  
  // Make the LED pin an output and turn it on
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);

  // calibrate for the first five seconds after program runs
  while (millis() < 5000) {
    // record the maximum sensor value
     sensorValue = analogRead(A0);
    if (sensorValue > sensorHigh) {
      sensorHigh = sensorValue;
    
    // record the minimum sensor value
    if (sensorValue < sensorLow) {
      sensorLow = sensorValue;
    }
  sensorValue = analogRead(A0);
    }
  // turn the LED off, signaling the end of the calibration period
  digitalWrite(ledPin, LOW);
}
    }

void loop() {
    
     if (analogRead(A0)<50 ) { 
      tone(8, 33, 20); //note C1
    } else if (analogRead(A0)<150 ) {
      tone(8, 37, 20); //note D1
        } else if (analogRead(A0)<200 ) {
      tone(8, 41, 20); //note E1
         } else if (analogRead(A0)<300 ) {
      tone(8, 44, 20); //note F1
         } else if (analogRead(A0)<400 ) {
      tone(8, 49, 20); //note G1
        } else if (analogRead(A0)<500 ) {
      tone(8, 55, 20); //note A1
          } else if (analogRead(A0)<600 ) {
      tone(8, 62, 20); //note B1
          } else if (analogRead(A0)<700 ) {
      tone(8, 65, 20); //note C2
          } else if (analogRead(A0)<750 ) {
      tone(8, 73, 20); //note D2
          } else if (analogRead(A0)<800 ) {
      tone(8, 82, 20); //note E2
      } else if (analogRead(A0)<850 ) {
      tone(8, 87, 20); //note F2
      } else if (analogRead(A0)<900 ) {
      tone(8, 98, 20); //note G2
         } else if (analogRead(A0)<950 ) {
      tone(8, 110, 20); //note A2
         } else if (analogRead(A0)<1000 ) {
      tone(8, 123, 20); //note B2
  } else {
      tone(8, 131, 20); //note C3
  }

  // wait for a moment
  delay(10);

}
