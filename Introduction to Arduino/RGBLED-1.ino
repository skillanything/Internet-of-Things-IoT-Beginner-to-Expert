// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
 for(int i=0;i<3;i++){
    digitalWrite(13,HIGH);
    delay(1000);
   	digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    delay(1000);
   	digitalWrite(12,LOW);
    digitalWrite(11,HIGH);
    delay(1000);
   	digitalWrite(11,LOW);
  }
  
  for(int i=0;i<3;i++){
    digitalWrite(13,HIGH);
    delay(1000);
    digitalWrite(12,HIGH);
    delay(1000);
    digitalWrite(11,HIGH);
    delay(1000);
  }
    for(int i=0;i<3;i++){
    digitalWrite(13,LOW);
    delay(1000);
    digitalWrite(12,LOW);
    delay(1000);
    digitalWrite(11,LOW);
  }
}