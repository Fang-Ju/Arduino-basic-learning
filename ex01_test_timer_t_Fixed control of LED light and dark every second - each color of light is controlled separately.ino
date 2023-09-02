// DOC:       https://lolikitty.pixnet.net/blog/post/168715383
//            http://yehnan.blogspot.com/2012/03/arduino.html
// DOWNLOAD:  https://github.com/JChristensen/Timer#installation
#include <Timer.h>

Timer t ;// setup one sec timer event

int hour=23;
int min=59;
int sec=50;    
const int R_led=13;    
const int Y_led=12;    
const int G_led=11;
bool bR=false;
bool bY=false;
bool bG=false;

void setup()
{ 
  pinMode(R_led,OUTPUT);
  pinMode(Y_led,OUTPUT);
  pinMode(G_led,OUTPUT);
  digitalWrite(R_led, false); 
  digitalWrite(Y_led, false); 
  digitalWrite(G_led, false);
   
  Serial.begin(9600);
  
  t.every(1000, RedHandler);     // Clock System updated in once per 1000 microseconds  //TimerHandler函式
  t.every(1000, YellowHandler);
  t.every(1000, GreenHandler);
  
  Serial.println("Press now, then go");
}

void loop() 
{
  t.update();  // ****** THIS IS VERY IMPORT LINE, check timer event ****** 
  t.update();
  t.update();
}

void RedHandler() //-- update per microsec -- 
{
  //Serial.println("This is a main program");
  bR= !bR;
  digitalWrite(R_led, bR); 
}

void YellowHandler() //-- update per microsec -- 
{
  //Serial.println("This is a main program");
  bY= !bY;
  digitalWrite(Y_led, bY); 
}

void GreenHandler() //-- update per microsec -- 
{
  //Serial.println("This is a main program");
  bG= !bG;
  digitalWrite(G_led, bG); 
}
