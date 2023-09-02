#include <Servo.h> 
Servo servo;
int angle=0;

void setup() 
{ 
  Serial.begin(9600);
  Serial.println("Please press 0~9 for any angles (<180): ");
  Serial.println("Please press 'A' or 'a' to run servo: ");  
  servo.attach(2);
  servo.write(angle);   // angle=0
}
 
void loop() 
{
  if(Serial.available())
  {
     char ch=Serial.read();    
     if(ch>='0' && ch<='9')
     {
        Serial.print("ch is "); Serial.println(ch);
        angle=angle*10+ch-'0';
        Serial.print("angle is "); Serial.println(angle); 
        ch = -1;  // clear ch content       
     }   
     else if(ch=='A' || ch=='a')
     {
        servo.write(angle);
        Serial.println("Servo is running ...");
        angle=0;
     }   
  }      
} 
