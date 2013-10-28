/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

int count = 1;

// the loop routine runs over and over again forever:
void loop() {
 
  int n = fib(count);
  blinkNTimes(n);
  waitASec();
  
  count++;
  
}

void blinkNTimes(int n) {  
  for (int i = 0; i < n; i++) {
     digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
     delay(100);               // wait for a second
     digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
     delay(25);             // wait for a second
  }
}

void waitASec() {
   delay(1000);
}

int fib(int n) {
   int a = 0;
   int b = 1;
   
   for (int i = 0; i < n; i++) {
     
     int tmp_a = a;
     int tmp_b = b;
     
     a = b;
     b = tmp_a + tmp_b; 
     
   }
   
   return a;
      
}

