void setup() { 
  for (int i=9; i<12; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
  } 
}

void loop() {
  for (int i=9; i<12; i++) {
    digitalWrite(i, LOW);
    delay(50);
    digitalWrite(i, HIGH);
    delay(10);
  }  
}
