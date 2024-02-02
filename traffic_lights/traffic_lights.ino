const int red = 13;
const int yellow = 12;
const int green = 11;
const int button = 6;


void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, INPUT);
  digitalWrite(green, HIGH);

}

void loop() {
  if(digitalRead(button) == HIGH) {
    delay(15); // software debounce
    if(digitalRead(button) == HIGH) {
      changeLights();
      delay(15000);
    }
  }

}

void changeLights() {
  // green off, yellow on for 3 secs
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(3000);

  // yellow off, red on for 5 secs
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  delay(5000);

  // red and yellow on for 2 secs, red is already on
  digitalWrite(yellow, HIGH);
  delay(2000);

  // red and yellow off, green on for 3 secs
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  delay(3000);

}
