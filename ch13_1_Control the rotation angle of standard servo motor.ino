/*
#include <Servo.h> 
Servo servo;
int angle;
void setup() 
{ 
  servo.attach(2);
} 
void loop() 
{
    for(angle=0;angle<=180;angle=angle+45)
    {
      servo.write(angle);
      delay(1000);      
    }
    for(angle=180;angle>=0;angle=angle-45)
    {
      servo.write(angle);
      delay(1000);      
    }  
} 
*/


#include <Servo.h> 
Servo servo;
int angle;
void setup() 
{ 
  servo.attach(2);
} 
void loop() 
{
    for(angle=0;angle<=180;angle++)
    {
      servo.write(angle);
      delay(10);      
    }
    for(angle=180;angle>=0;angle--)
    {
      servo.write(angle);
      delay(10);      
    }  
} 
