#include <Servo.h> 
Servo servo;
int angle=0;

void setup() 
{ 
  Serial.begin(9600);
  servo.attach(2);
} 

void loop() 
{
  if(Serial.available())
  {
     Serial.print("h "); 
     char ch=Serial.read();    
     if(ch>='0' && ch<='9')
        angle=angle*10+ch-'0';      
     else if(ch=='A' || ch=='a')
     {
        servo.write(angle);
        angle=0;
     }   
  }      
} 
