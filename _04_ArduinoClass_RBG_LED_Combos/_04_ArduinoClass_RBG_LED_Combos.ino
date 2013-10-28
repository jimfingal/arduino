const int ON_LENGTH = 100;
const int OFF_LENGTH = 10;

void setup() { 
  for (int i=9; i<12; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
  } 
}

void loop() {
  for (int i=9; i<12; i++) {
    digitalWrite(i, LOW);
    delay(ON_LENGTH);
    
    for (int j=9; j<12; j++) {
      if (i != j) {
        digitalWrite(j, LOW);
        delay(ON_LENGTH);
        
        for (int k=9; k<12; k++) {
          if (k != j && k !=i) {
            digitalWrite(k, LOW);
            delay(ON_LENGTH);
            digitalWrite(k, HIGH);
            delay(OFF_LENGTH);
          }
        }  
        
        digitalWrite(j, HIGH);
        delay(OFF_LENGTH);
      }
    }  
    
    digitalWrite(i, HIGH);
    delay(OFF_LENGTH);
  }  
}
