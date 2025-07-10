// Comment out Blynk to test without hardware
// #include <BlynkSimpleStream.h>

// Declare global variables
int sensorPin = A0;
int ledPin = 9;
int sensorValue = 1;

// Comment out Blynk auth key if not used
// char auth[] = "SZN_5JK5GVRNDfFOVo4T0UmPRm_X76Ar";

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  // Blynk.begin(auth, Serial);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue); // See the value in Serial Monitor

  if (sensorValue <= 450)
    digitalWrite(ledPin, HIGH);
  else
    digitalWrite(ledPin, LOW);

  // Blynk.run();
}
