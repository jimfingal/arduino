int motor = 9;

void setup() {                
  pinMode(motor, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  
  for (int i = 256; i > 1; i++) {
    analogWrite(motor, i);
    delay(50);                
  }
  
  
}
