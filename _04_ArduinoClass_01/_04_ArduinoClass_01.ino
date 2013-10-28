void setup() { 
  
  Serial.begin(19200);
  Serial.println("Started!");

  char letter_a = 'A';
  char letter_b = 'B';
  
  Serial.println("Letter A: ");
  Serial.println(letter_a, DEC);
  Serial.println(letter_a, HEX);
  
  Serial.println("Letter B: ");
  Serial.println(letter_b, DEC);
  Serial.println(letter_b, HEX);

  Serial.println("B Minus A: ");
  Serial.println(letter_b - letter_a, DEC);
  Serial.println(letter_b - letter_a, HEX);

}

void loop() {
    
}
