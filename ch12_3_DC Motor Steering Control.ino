const int motorPos=4;
const int motorNeg=5;
void setup() 
{ 
  pinMode(motorPos,OUTPUT);
  pinMode(motorNeg,OUTPUT);
  digitalWrite(motorPos,LOW);
  digitalWrite(motorNeg,LOW);  
} 
void loop() 
{
  digitalWrite(motorPos,HIGH);    //forward
  digitalWrite(motorNeg,LOW);
  delay(3000);
  digitalWrite(motorPos,LOW);    //reverse
  digitalWrite(motorNeg,HIGH);
  delay(3000);  
} 
