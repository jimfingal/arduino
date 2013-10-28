const int KNOB_PIN = 0;

void setup() {                
  
  pinMode(KNOB_PIN, INPUT); 
  
  Serial.begin(9600);  
  
  Serial.println("Started!");  
}

void loop() {
  
  // Reads value from 0 to 1023
  int foo = analogRead(KNOB_PIN);
  
  Serial.print("DEC: ");
  Serial.print(foo, DEC);  

  Serial.print("\tHEX: ");
  Serial.print(foo, HEX);
  
  Serial.print("\tOCT: ");
  Serial.print(foo, OCT);
  
  
  Serial.print("\tBIN: ");
  Serial.print(foo, BIN);
  
  Serial.print("\n");
 
  delay(150);
 
}
