//const int speaker=7;
//const int toneTable[8]={523,587,659,694,784,880,988,1046};
//bool bLED=0;
//int keyOn=0;
//
//void setup() 
//{
//  pinMode(2, INPUT_PULLUP);
//  pinMode(13, OUTPUT); 
//}
//
//void loop() 
//{
//  for(int i=0;i<8;i++)
//  {
//    tone(speaker,toneTable[i]);
//    delay(100); 
//    myReadKey();
//    delay(100); 
//    myReadKey();
//    delay(100); 
//    myReadKey();
//    delay(100); 
//    myReadKey();
//    delay(100); 
//    myReadKey();
//  } 
//  noTone(speaker);
//  
//  myReadKey();  
////  keyOn = digitalRead(2);
////  if (keyOn==LOW)
////  {
////    bLED = !bLED;
////    digitalWrite(13, bLED);
////  } 
//}
//
//void myReadKey()
//{
//  keyOn = digitalRead(2);
//  if (keyOn==LOW)
//  {
//    bLED = !bLED;
//    digitalWrite(13, bLED);
//  } 
//}



const int speaker=7;
const int toneTable[8]={523,587,659,694,784,880,988,1046};
bool bLED=0;
int keyOn=0;

void setup() 
{
  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT); 
}

void loop() 
{
  for(int i=0;i<8;i++)
  {
    tone(speaker,toneTable[i]);
    delay(100); 
    myReadKey();
    delay(100); 
    myReadKey();
    delay(100); 
    myReadKey();
    delay(100); 
    myReadKey();
    delay(100); 
    myReadKey();
  } 
  noTone(speaker);
  
  myReadKey();  

}

void myReadKey()
{
  keyOn = digitalRead(2);
  if (keyOn==LOW)
  {
    delay(20);
    if (keyOn==LOW)
    {
      bLED = !bLED;
      digitalWrite(13, bLED);
    }
  } 
}
