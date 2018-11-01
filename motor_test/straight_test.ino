// Left Motor Pin Declarations
const int LEFT_PWM = 40;
const int LEFT_DIR = 14;
const int LEFT_SLP = 31;

// Right Motor Pin Declarations
const int RIGHT_PWM = 39;
const int RIGHT_DIR = 15;
const int RIGHT_SLP = 11; 

void setup() {
  // Set left motor pin modes
  pinMode(LEFT_DIR, OUTPUT); 
  pinMode(LEFT_PWM, OUTPUT); 
  pinMode(LEFT_SLP, OUTPUT);

  // Set right motor pin mode
  pinMode(RIGHT_DIR, OUTPUT);
  pinMode(RIGHT_PWM, OUTPUT);
  pinMode(RIGHT_PWM, OUTPUT);

  // LOW-Forward; HIGH-Reverse
  // HIGH Control; LOW-Outputs floating (coast)
  digitalWrite(LEFT_DIR, LOW);
  digitalWrite(LEFT_SLP, HIGH);
  digitalWrite(RIGHT_DIR, LOW);
  digitalWrite(RIGHT_SLP, HIGH);
}

void loop() {
  digitalWrite(LEFT_DIR, LOW);
  digitalWrite(RIGHT_DIR, LOW);
  analogWrite(LEFT_PWM, 60);
  analogWrite(RIGHT_PWM, 60);
  delay(1000);
  digitalWrite(LEFT_DIR, HIGH);
  digitalWrite(RIGHT_DIR, HIGH);
  analogWrite(LEFT_PWM, 0);
  analogWrite(RIGHT_PWM, 0);
  delay(500);
  digitalWrite(LEFT_DIR, HIGH);
  digitalWrite(RIGHT_DIR, HIGH);
  analogWrite(LEFT_PWM, 60);
  analogWrite(RIGHT_PWM, 60);
  delay(1000);
  digitalWrite(LEFT_DIR, HIGH);
  digitalWrite(RIGHT_DIR, HIGH);
  analogWrite(LEFT_PWM, 0);
  analogWrite(RIGHT_PWM, 0);
  delay(500);
}
