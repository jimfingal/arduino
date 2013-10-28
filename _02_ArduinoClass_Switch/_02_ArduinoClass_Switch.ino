const int LED = 9;
const int BUTTON_PIN = 5;

const int INCREMENT = 5;

const int DEFAULT_WAIT = 10;

int wait;

void setup() {                
  
  // initialize the digital pin as an output.
  pinMode(LED, OUTPUT); 
  
    // initialize the button pin as an input.
  pinMode(BUTTON_PIN, INPUT);     
  
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
