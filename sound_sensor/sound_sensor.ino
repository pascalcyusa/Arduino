const int LED = 12;
const int sound_sensor = A0;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int threshold = 0;

  for (int i = 0; i < 32; i++) { 
    threshold += analogRead(sound_sensor);  
  } 

  // threshold >>= 5; //bitshift operation 

  if(threshold > 20) {
    digitalWrite(LED, HIGH);
    // delay(1000);
    digitalWrite(LED, LOW);
  } else {
    digitalWrite(LED, LOW);
  }
  // delay(50);
}
