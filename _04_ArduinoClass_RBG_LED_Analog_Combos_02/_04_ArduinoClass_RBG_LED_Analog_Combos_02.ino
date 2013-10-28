const int ON_LENGTH = 100;
const int OFF_LENGTH = 10;

// Can be Bytes since well below max number for a byte
byte ledPins[] = {10, 11, 9};
byte ledLevels[] = {0, 0, 0};
byte curentColor = 0;


void setup() {   
  Serial.begin(19200);
  Serial.println("Started!");
  setColor();
}

void loop() {
 
  for (int i=0; i<3; i++) {
    int led_value = random(0, 256);
    ledLevels[i] = led_value;
  } 
  
  setColor();
  delay(1000);
 
}

void setColor() {
  Serial.print("LED color is now: "); 
  for (int i=0; i<3; i++) {
    analogWrite(ledPins[i], 255 - ledLevels[i]);
    if (ledLevels[i] < 16) {
       Serial.print('0');
    }
    Serial.print(ledLevels[i], HEX);
  } 
  Serial.println();
}
