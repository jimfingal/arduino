int pin_1a = 10;
int pin_2a = 9;

void setup() {                
  pinMode(pin_1a, OUTPUT);   
  pinMode(pin_2a, OUTPUT);     
  
}

void loop() {
  
  digitalWrite(pin_1a, LOW);
  digitalWrite(pin_2a, HIGH);
  delay(2000);
  digitalWrite(pin_1a, LOW);
  digitalWrite(pin_2a, LOW);
  delay(1200);   
  digitalWrite(pin_1a, HIGH);
  digitalWrite(pin_2a, LOW);
  delay(2000); 
  digitalWrite(pin_1a, LOW);
  digitalWrite(pin_2a, LOW);
  delay(1200);  

  
}
