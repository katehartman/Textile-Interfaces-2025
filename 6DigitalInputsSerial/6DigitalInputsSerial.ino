/* Textile Interfaces 2025
  Kate Hartman
  6 digital inputs with values printed to Serial Monitor
  no resistors needed (see documentation for pinmode "INPUT_PULLUP")
 */

#define DEBOUNCE 100  

// Variables that won't change
const int buttonPin1 = 12;
const int buttonPin2 = 11;
const int buttonPin3 = 10;
const int buttonPin4 = 9;
const int buttonPin5 = 8;
const int buttonPin6 = 7;

// Variables that will change
int buttonValue1 = 1;
int buttonValue2 = 1;
int buttonValue3 = 1;
int buttonValue4 = 1;
int buttonValue5 = 1;
int buttonValue6 = 1;

void setup() {

  // initialize the buttons' inputs:
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);
  pinMode(buttonPin4, INPUT_PULLUP);
  pinMode(buttonPin5, INPUT_PULLUP);
  pinMode(buttonPin6, INPUT_PULLUP);

  // initialize serial
  Serial.begin(9600);
}

void loop() {

  // read all button pins
  buttonValue1 = digitalRead(buttonPin1);
  buttonValue2 = digitalRead(buttonPin2);
  buttonValue3 = digitalRead(buttonPin3);
  buttonValue4 = digitalRead(buttonPin4);
  buttonValue5 = digitalRead(buttonPin5);
  buttonValue6 = digitalRead(buttonPin6);

  Serial.print("Val 1: ");
  Serial.print(buttonValue1);
  Serial.print(", Val 2: ");
  Serial.print(buttonValue2);
  Serial.print("Val 3: ");
  Serial.print(buttonValue3);
  Serial.print("Val 4: ");
  Serial.print(buttonValue4);
  Serial.print("Val 5: ");
  Serial.print(buttonValue5);
  Serial.print("Val 6: ");
  Serial.println(buttonValue6);

  delay(DEBOUNCE);  // delay in between reads for stability
}