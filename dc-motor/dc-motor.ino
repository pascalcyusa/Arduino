const int input2 = 2; 
const int input1 = 3; 
const int enablePin = 5; 

void setup() {
  // put your setup code here, to run once:
  pinMode(input2, OUTPUT);
  pinMode(input1, OUTPUT);
  pinMode(enablePin, OUTPUT);

  analogWrite(enablePin, 250);
  analogWrite(input1, LOW);
  analogWrite(input2, HIGH);
}
 
void loop() {
}
