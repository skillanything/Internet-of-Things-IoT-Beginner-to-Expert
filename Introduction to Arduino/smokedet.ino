//stored pins in variables

#define gasSensor A0
#define buzzer 0
#define ledGreen 1
#define ledRed 2
#define HIGH 600

void setup() {

   //Initialising all pins
   
   pinMode(gasSensor, INPUT);
   pinMode(buzzer, OUTPUT);
   pinMode(ledGreen, OUTPUT);
   pinMode(ledRed, OUTPUT);
  }

void loop() {
  //Read data from the sensor
int gas_value = analogRead(gasSensor);


//check data from sensor if there is smoke, if will execute otherwise else will execute
if(gas_value > HIGH)
{
  tone(buzzer,1000,500);
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledGreen,LOW);
  
  
}
else
{
  noTone(buzzer);
  digitalWrite(ledGreen,HIGH);
  digitalWrite(ledRed, LOW);
}
delay(200);
  
}