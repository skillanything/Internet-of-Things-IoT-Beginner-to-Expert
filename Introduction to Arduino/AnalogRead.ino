const int Input_PIN = A0;  // assinig A0 to Input_PIN

void setup() {
  pinMode(Input_PIN, INPUT);//defining Input_PIN as Input
  Serial.begin(9600);//initializing serial communication
}

void loop() {
  // read the state of the pushbutton value:
  int data = analogRead(A0);//reading the analog data and storing in data variable
  Serial.println(data);//printing the value to serial monitor
  
}