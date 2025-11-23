/* Textile Interfaces 2025
  Kate Hartman
  4 analog sensors with values printed to Serial Monitor
  be sure to use a voltage divider circuit for each sensor!
 */

#define DEBOUNCE 100

// Variables that won't change
const int sensorPin1 = A0;
const int sensorPin2 = A1;
const int sensorPin3 = A2;
const int sensorPin4 = A3;

// Variables that will change
int sensorValue1 = 1;
int sensorValue2 = 1;
int sensorValue3 = 1;
int sensorValue4 = 1;


void setup() {
  // initialize serial
  Serial.begin(9600);
}

void loop() {

  // read all sensor pins
  sensorValue1 = analogRead(sensorPin1);
  sensorValue2 = analogRead(sensorPin2);
  sensorValue3 = analogRead(sensorPin3);
  sensorValue4 = analogRead(sensorPin4);

  Serial.print("Val 1: ");
  Serial.print(sensorValue1);
  Serial.print(", Val 2: ");
  Serial.print(sensorValue2);
  Serial.print(", Val 3: ");
  Serial.print(sensorValue3);
  Serial.print(", Val 4: ");
  Serial.println(sensorValue4);

  delay(DEBOUNCE);  // delay in between reads for stability
}