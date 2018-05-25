/*
   Robot Motor Controller
*/

// connect motor contoller pins to Arduino digital pins
// motor one
int enA = 10;
int in1 = 9;
int in2 = 8;
int in3 = 7;
int in4 = 6;
int enB = 5;

// set a global variable
int stopper = 0;


void setup() {
  // put your setup code here, to run once:
  // set all the motor control pins to outputs
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enB, OUTPUT);

}


void demoMove() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enA, 42);
  analogWrite(enB, 45);
  delay(3000);
  analogWrite(enA, 0);
  analogWrite(enB, 0);
  delay(2000);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enA, 42);
  analogWrite(enB, 45);
  delay(3000);
  analogWrite(enA, 0);
  analogWrite(enB, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (stopper == 0) {
    demoMove();
    stopper = 1;
  }
}
