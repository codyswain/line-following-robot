/* Cody Swain and JD */
/* Line-following robot */

// Defining arduino pin numbers for sensor pins 1-8
int sensorPins[] = {65, 48, 64, 47, 52, 68, 53, 69};

// sensorRead elements updated with each sensorRead()
int sensorRead[8]; // 1 or 0

// Sensor sampling config
int t_on = 12; //microseconds (us)
int t_wait = 500000; //this value is really high?

void setup(){
	// Set up serial monitor
	Serial.begin(9600);
}

void loop(){
	readSensor();
	// Do something based off the sensor reading
}

void calculateProportionalError(){
	return 0;
}
void calculateDerivativeError(){
	return 0;
}
void motorCorrection(){
	return 0;
}

void readSensors(){
	/*
	How to read from sensors:
	----------------------------------------------
	1. Set sensor channel pin to high
	2. After a time t_on, set channel pins inputs
	3. After a time t_wait, read value from sensor
	   (Sensor value is digital 1 or 0)
	*/

	// Set sensor pins to output, and activate
	for (count=0; count<8; count++) {
    	pinMode(sensorPins[count], OUTPUT);
 		digitalWrite(sensorPins[count], HIGH);
 	}

	// Length of high output
  	delayMicroseconds(t_on);

  	// Set sensor pins to input 
	for (count=0; count<8; count++) {
    	pinMode(sensorPins[count], INPUT);
 	}

 	// Delay before reading input
 	// Determined by findDelay(); function
	delayMicroseconds(t_wait);

	// Read sensor values and assign to global variables
	for (count=0; count<8; count++){
		sensorRead[count] = digitalRead(sensorPins[count])
	}

	//Delay for stability?
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



