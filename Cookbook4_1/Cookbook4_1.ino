void setup() {
  Serial.begin(9600);
}

int number = 0;

void loop() {
  Serial.print("The number is ");
  Serial.print(number);   
  Serial.print("\n"); 
  delay(1000);
  number++;
}
