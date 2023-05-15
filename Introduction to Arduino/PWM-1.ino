// C++ code
//
void setup()
{
	pinMode(A0,INPUT);
  Serial.begin(9600);
  pinMode(11,OUTPUT);
}

void loop()
{
  int raw=analogRead(A0);
  int data=map(raw,0,1023,0,225);
  Serial.println(data);
  analogWrite(11,data);

}