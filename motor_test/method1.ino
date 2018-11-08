// Left Motor Pin Declarations
const int LEFT_PWM = 40;
const int LEFT_DIR = 14;
const int LEFT_SLP = 31;

// Right Motor Pin Declarations
const int RIGHT_PWM = 39;
const int RIGHT_DIR = 15;
const int RIGHT_SLP = 11; 

// Sensor pin declarations
const int sensor1 = 65; 
const int sensor2 = 48;
const int sensor3 = 64;
const int sensor4 = 47;
const int sensor5 = 52; 
const int sensor6 = 68;
const int sensor7 = 53;
const int sensor8 = 69;

int leftPWM = 0;
int rightPWM = 0;

void setup() {
	Serial.begin(9600);

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

void setup(){
	// Channel pins set to output
	pinMode(sensor1, OUTPUT);
	pinMode(sensor2, OUTPUT);
	pinMode(sensor3, OUTPUT);
	pinMode(sensor4, OUTPUT);
	pinMode(sensor5, OUTPUT);
	pinMode(sensor6, OUTPUT);
	pinMode(sensor7, OUTPUT);
	pinMode(sensor8, OUTPUT);

	// Activate sensor channels
	digitalWrite(sensor1, HIGH);
	digitalWrite(sensor2, HIGH);
	digitalWrite(sensor3, HIGH);
	digitalWrite(sensor4, HIGH);
	digitalWrite(sensor5, HIGH);
	digitalWrite(sensor6, HIGH);
	digitalWrite(sensor7, HIGH);
	digitalWrite(sensor8, HIGH);

	// Length of HIGH output
	delayMicroseconds(t_on);

	// Set channel pins to input
	pinMode(sensor1, INPUT);
	pinMode(sensor2, INPUT);
	pinMode(sensor3, INPUT);
	pinMode(sensor4, INPUT);
	pinMode(sensor5, INPUT);
	pinMode(sensor6, INPUT);
	pinMode(sensor7, INPUT);
	pinMode(sensor8, INPUT);


	delayMicroseconds(t_wait);

	// Read channel values
	int read1 = digitalRead(sensor1);
	int read2 = digitalRead(sensor2);
	int read3 = digitalRead(sensor3);
	int read4 = digitalRead(sensor4);
	int read5 = digitalRead(sensor5);
	int read6 = digitalRead(sensor6);
	int read7 = digitalRead(sensor7);
	int read8 = digitalRead(sensor8);

	//Delay for stability
	delay(1);
}