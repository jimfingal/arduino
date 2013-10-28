const int pin_1a = 10;
const int pin_2a = 9;
const int pin_en = 11;

const int STOP = 0;
const int TURN_CW = 1;
const int TURN_CCW = 2;
const int REALLY_STOP = 3;

void setup() {                
  pinMode(pin_1a, OUTPUT);   
  pinMode(pin_2a, OUTPUT);     
  pinMode(pin_en, OUTPUT);     

}

void loop() {


  runMotor(TURN_CW, 255, 2000);  
  runMotor(REALLY_STOP, 255, 1000);
  runMotor(TURN_CCW, 255, 2000);  
  runMotor(STOP, 255, 1000);
  
  runMotor(TURN_CW, 100, 2000);  
  runMotor(REALLY_STOP, 100, 1000);
  runMotor(TURN_CCW, 100, 2000);  
  runMotor(STOP, 100, 1000);
   
}



void runMotor(enum  dir, int power, int duration) {
  
 
  
  if (dir == STOP) 
  {
      digitalWrite(pin_1a, LOW);
      digitalWrite(pin_2a, LOW);
  } 
  else if (dir == TURN_CW) 
  {
      digitalWrite(pin_1a, LOW);
      digitalWrite(pin_2a, HIGH);
  } 
  else if (dir == TURN_CCW) 
  {
      digitalWrite(pin_1a, HIGH);
      digitalWrite(pin_2a, LOW);
  }
  else
  {
      digitalWrite(pin_1a, HIGH);
      digitalWrite(pin_2a, HIGH);
  }
  
  analogWrite(pin_en, power);
  delay(duration);  
  
}

