const int LED = 13;
const int DELAY_TIME = 5;

long beat_array[] = {4, 3, 2, 5};

int beat_index = 1;

void setup() {                
  
  pinMode(LED, OUTPUT); 
  
  Serial.begin(9600);
  
  Serial.println(sizeof(beat_array));
  
}

void loop() {
  
  beat_index++;

  if (beat_index > (sizeof(beat_array) / sizeof(long))) {
    beat_index = 0;
  }
  
  Serial.println(beat_index);
  
  int beat_delay = beat_array[beat_index];
  
  Serial.println(beat_delay);
  
  for (int i = 0; i < 256; i += 1) {
    analogWrite(LED, i);
    delay(beat_delay);
  }
  
  for (int i = 255; i >=0; i -= 1) {
    analogWrite(LED, i);
    delay(beat_delay);
  }

}


