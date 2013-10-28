const int LED = 9;
const int BUTTON_PIN = 5;

const int INCREMENT = 5;

const int DEFAULT_WAIT = 10;

int wait;

void setup() {                
  
  pinMode(LED, OUTPUT); 

  // Similar to setting it to INPUT, and doing a digitalWrite - HIGH
  pinMode(BUTTON_PIN, INPUT_PULLUP);    
 
  wait = 10;
  
}

void loop() {

  boolean button_off = digitalRead(BUTTON_PIN);
  
  if (button_off == LOW) {
    
    wait = wait + INCREMENT;
    
    digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(wait);               // wait for a second
    digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
    delay(wait);             // wait for a second
    
  } else {
    wait = DEFAULT_WAIT;
  }
  
}
