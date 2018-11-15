const int sensor1 = 65; 
const int sensor2 = 48;
const int sensor3 = 64;
const int sensor4 = 47;
const int sensor5 = 52; 
const int sensor6 = 68;
const int sensor7 = 53;
const int sensor8 = 69;

// Sensor sampling config
int t_on = 12; //microseconds (us)
int t_wait = 400;

void setup(){
	Serial.begin(9600);
}


void loop(){
	/* Pseudocode for sensor:
	----------------------------------------------
	1. Set sensor channel pin to high
	2. After a time t_on, set channel pins inputs
	3. After a time t_wait, read value from sensor
	   (Sensor value is digital 1 or 0)
	*/

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

	// Read channel values
	int read1 = digitalRead(sensor1);
	int read2 = digitalRead(sensor2);
	int read3 = digitalRead(sensor3);
	int read4 = digitalRead(sensor4);
	int read5 = digitalRead(sensor5);
	int read6 = digitalRead(sensor6);
	int read7 = digitalRead(sensor7);
	int read8 = digitalRead(sensor8);

	// Print sensor values to Serial Monitor
	// Serial.println(read1);
	// Serial.println(read2);
	// Serial.println(read3);
	// Serial.println(read4);
	// Serial.println(read5);
	// Serial.println(read6);
	// Serial.println(read7);
	// Serial.println(read8);

	findDelay();

	//Delay for stability
	delay(1);

}

void findDelay(){
	/* Find minimum t_wait for sensor to 
	distinguish between white and black */

	int start_time = micros();
	int end_time;

	while (digitalRead(sensor1) == 1){
		end_time = micros();
	};

	int time_elapsed = end_time - start_time;
	Serial.println(time_elapsed);
}