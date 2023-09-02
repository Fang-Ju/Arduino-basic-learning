// DOC:       https://lolikitty.pixnet.net/blog/post/168715383
//            http://yehnan.blogspot.com/2012/03/arduino.html
// DOWNLOAD:  https://github.com/JChristensen/Timer#installation
#include <Timer.h>

Timer t ;// setup one sec timer event

int hour=23;
int min=59;
int sec=50;
const int sw=2;      
const int led=13; 
int val;
int ledStatus=LOW;

void setup()
{ 
  pinMode(sw,INPUT_PULLUP);  
  pinMode(led,OUTPUT);
  Serial.begin(9600);
  t.every(1000, TimerHandler);     // Clock System updated in once per 1000 microseconds  //TimerHandler函式
  Serial.println("Press now, then go");
}

void loop() 
{
  val=digitalRead(sw);
//  Serial.print("SW val is ....: ");
//  Serial.println(val);  
  if(val==LOW)    
  {
    delay(20);
    while(digitalRead(sw)==LOW);
               
    ledStatus=!ledStatus; 
    digitalWrite(led,ledStatus);  
    Serial.print("ledStatus is ....: ");
    Serial.println(ledStatus);            
  } 
  t.update();  // ****** THIS IS VERY IMPORT LINE, check timer event ****** 
  //Serial.println("This is a main program");
}

void TimerHandler() //-- update per microsec -- 
{
  Serial.println("now Time is ....: ");
  Serial.print(hour);Serial.print(":");Serial.print(min);Serial.print(":");Serial.print(sec);
  Serial.println();

  sec=sec+1;

  if (sec >= 60)
  {
    min=min + 1;
    sec = 0;
    if (min >= 60)
    {
      hour = hour + 1;
      min = 0;
      if (hour >= 24)
           hour = 0;
    }  
   }   
}
