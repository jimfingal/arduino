#include <Servo.h>

Servo myservo;

const int SERVO_PIN = 11;

int buttonPins[] = {2, 3, 4, 5};
int positions[] = {0, 60, 120, 178};

void setup() 
{    

  myservo.attach(SERVO_PIN);  
  
  for (int i = 0; i < 4; i++) 
  {
    pinMode(buttonPins[i], INPUT_PULLUP);
  }    

}

void loop() 
{ 
  for (int i = 0; i < 4; i++) 
  {
     if (digitalRead(buttonPins[i]) == LOW)
    {
       myservo.write(positions[i]);
       delay(200);
    } 
  }
}


