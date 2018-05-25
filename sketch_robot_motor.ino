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

void demoOne() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, 40);
  delay(3000);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  analogWrite(enA, 0);
  delay(1000);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(enA, 45);
  delay(3000);
  analogWrite(enA, 0);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  delay(5000);
}

void demoTwo() {
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, 40);
  delay(3000);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  analogWrite(enB, 0);
  delay(1000);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enB, 45);
  delay(3000);
  analogWrite(enB, 0);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(5000);
}

void demoThree() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enA, 42);
  analogWrite(enB, 45);
  delay(1000);
  analogWrite(enA, 0);
  analogWrite(enB, 0);
  delay(2000);
}

void setDirection(char direction) {
  switch (direction) {
    case 'f':
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
      break;
    case 'b':
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
      break;
    case 'l':
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
      break;
    case 'a':
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
      break;
    default:
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);
      break;
  }
}

void rampUp() {
  // TODO: Write code for ramping up to speed.
}

void rampDown() {
  // TODO: Write code for ramping down speed.
}

void throttle(int value) {
  /* TODO: Write code for throttle control.  
     Motors are about 5 ints off from one 
     and other. Also we are going to abstract
     away the min max values of the HBridge
     and make the throttle range 0 - 100. */
  int throttle_max = 60;
   
  
}

void loop() {
  // put your main code here, to run repeatedly:
  // TODO: remove this code before shipping.
  // demoOne();
  // demoTwo();
  //demoThree();

  // TODO: Replace demo code with UI control code.
  // The UI control code will run in a loop constantly 
  // seeking user input to control the robot. As a 
  // failsafe we will ramp the robot to a stop
  // after 30 seconds of no user input.
  

}
