
void setup() {   
  DDRC  = B00111111;
  PORTC = B00101101;
  delay(100);
}

void loop() {

  for (int i=0; i<64; i++) {
    PORTC = i;
    delay(200);
  }
  
}
