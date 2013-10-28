const int ON_LENGTH = 100;
const int OFF_LENGTH = 10;

// Can be Bytes since well below max number for a byte
byte ledPins[] = {10, 11, 9};
byte ledLevels[] = {0, 0, 0};
byte currentColor = 0;


void setup() {   
  Serial.begin(19200);
  Serial.println("Started!");
  setColor();
}

void loop() {
 
  if (Serial.available() > 0) {
     int incoming = Serial.read();

     if (incoming >= '0' && incoming <= '9') {
       Serial.print("You typed: ");
       Serial.print(char(incoming));
       Serial.println();
       
       ledLevels[currentColor] = map(incoming, '0', '9', 0, 255);
       
       currentColor++;
       if (currentColor > 2) { 
         setColor();
         currentColor = 0; 
       }
     }
  } 
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
