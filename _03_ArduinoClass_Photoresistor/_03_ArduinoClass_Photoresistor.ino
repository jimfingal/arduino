const int knobPin = 0;
const int ledPin = 9;

void setup() {
  Serial.begin(57600);
  Serial.println("Started!");
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int a = analogRead(knobPin);
  Serial.print("DEC: ");
  Serial.print(a, DEC);
  Serial.print("\tHEX: ");
  Serial.print(a, HEX);
  Serial.print("\tBIN: ");
  Serial.print(a, BIN);
  Serial.print("\tOCT: ");
  Serial.println(a, OCT);
  analogWrite(ledPin, map(a, 0, 1023, 0, 255));
  delay(300);
}
