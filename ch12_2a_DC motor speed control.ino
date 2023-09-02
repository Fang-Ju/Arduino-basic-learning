const int motorPin=3;
int motorSpeed=0;
void setup() 
{ 
} 
void loop() 
{
   analogWrite(motorPin,0);
   delay(1000);
   analogWrite(motorPin,100);
   delay(5000);
   analogWrite(motorPin,204);
   delay(3000);
} 

/*
const int motorPin=3;
const int sw=4;
int motorSpeed=0;
unsigned int key;
unsigned int keyData=1;
int one=0,zero=0;
void setup() 
{ 
  pinMode(sw,INPUT_PULLUP);
} 
void loop() 
{
   keyScan();
   if(keyData==0)
   {
     keyData=1;
     motorSpeed=motorSpeed+50;
     if(motorSpeed>255)
      motorSpeed=0;
   }
   analogWrite(motorPin,motorSpeed); 
} 
void keyScan(void)
{
  key=digitalRead(sw);
  if(key==LOW)
  {
    one=0;
    if(zero<5)
    {
      zero+=1;
      if(zero==5)
        keyData=0;
    }
  }
  one+=1;
  if(one==5)
  {
    zero=0;
    keyData=1;
  }
} 
*/
