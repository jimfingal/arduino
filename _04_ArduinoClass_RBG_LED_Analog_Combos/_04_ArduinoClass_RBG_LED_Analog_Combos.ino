const int ON_LENGTH = 100;
const int OFF_LENGTH = 10;

// Can be Bytes since well below max number for a byte
byte ledPins[] = {10, 11, 9};
byte ledLevels[] = {0, 0, 0};


void setup() { 
  
  Serial.begin(19200);
  Serial.println("Started!");
  
  for (int i=0; i<3; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], HIGH);
  } 
}

void loop() {
  
  for (int i=0; i<3; i++) {
    int led_value = random(0, 256);
    analogWrite(ledPins[i], led_value);
    delay(ON_LENGTH);
  }
}

void setColor() {
  Serial.print("LED color is now: "); 
}
