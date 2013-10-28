const int LED_PIN = 9;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  
  for (int d = 2; d < 500; d += d) {
    digitalWrite(LED_PIN, HIGH);
    delay(d/2);
    digitalWrite(LED_PIN, LOW);
    delay(d);  
  }
  
}
