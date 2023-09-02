const int sp=2;
int i;
void setup() 
{}   
void loop() 
{
  for(i=0;i<10;i++)
  {
    tone(sp,1000);
    delay(50);
//    tone(sp,500);
//    delay(50);
  }
  noTone(sp);
  delay(2000);    
}
