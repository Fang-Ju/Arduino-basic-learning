//中斷 0 assign interrupt 0
const int speaker=7;
const int toneTable[8]={523,587,659,694,784,880,988,1046};
volatile bool bLED=0; //中斷法不能用參數故要用全域變數 //volatile(會被改變的) 
int keyOn=0;

void setup() 
{
  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT); 
  attachInterrupt(0, isr, FALLING); //assign int0
}

void loop() 
{
  for(int i=0;i<8;i++)
  {
    tone(speaker,toneTable[i]);
    delay(500); 
  } 
  noTone(speaker);
  
//  keyOn = digitalRead(2);
//  if (keyOn)
//  {
//    bLED = !bLED;
//    digitalWrite(13, bLED);
//  } 
}

void isr()
{
    bLED = !bLED;
    digitalWrite(13, bLED);
}

/*
//中斷 1 //assign interrupt 1
const int speaker=7;
const int toneTable[8]={523,587,659,694,784,880,988,1046};
volatile bool bLED=0;
int keyOn=0;

void setup() 
{
  pinMode(3, INPUT_PULLUP);
  pinMode(13, OUTPUT); 
  attachInterrupt(1, isr, FALLING); //assign int1
}

void loop() 
{
  for(int i=0;i<8;i++)
  {
    tone(speaker,toneTable[i]);
    delay(500); 
  } 
  noTone(speaker);
  
//  keyOn = digitalRead(2);
//  if (keyOn)
//  {
//    bLED = !bLED;
//    digitalWrite(13, bLED);
//  } 
}

void isr()
{
    bLED = !bLED;
    digitalWrite(13, bLED);
}
*/
