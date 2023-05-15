const int tempPin = A0; // the pin for the temperature sensor
const int motorPin = 8; // the pin for the DC motor

int threshold = 25; // the temperature threshold

void setup() {
  pinMode(motorPin, OUTPUT); // set the motor pin as an output
  Serial.begin(9600); // start serial communication
}

void loop() {
  int temp = analogRead(tempPin); // read the temperature
  temp=map(temp,20,360,0,100);
  Serial.println(temp); // print the temperature to the serial monitor
  
  if (temp > threshold) { // if the temperature is above the threshold
    digitalWrite(motorPin, HIGH); // turn on the motor
  } else { // otherwise
    digitalWrite(motorPin, LOW); // turn off the motor
  }
  delay(1000); // wait for 1 second
}
