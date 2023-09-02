int i;
int j;
const byte num[10][8]={
    {1,1,0,0,0,0,0,0},  //0
    {1,1,1,1,1,0,0,1},  //1
    {1,0,1,0,0,1,0,0},  //2
    {1,0,1,1,0,0,0,0},  //3
    {1,0,0,1,1,0,0,1},  //4
    {1,0,0,1,0,0,1,0},  //5
    {1,0,0,0,0,0,1,0},  //6
    {1,1,1,1,1,0,0,0},  //7    
    {1,0,0,0,0,0,0,0},  //8
    {1,0,0,1,0,0,0,0}   //9    
                      };
const int seg[]={2,3,4,5,6,7,8,9};  //abcdefgp
int enable[2] = {13, 12}; // pin13 is ten, pin 12 is one

int count=0, number, quotient, remainder;
unsigned long mytime=0;

void setup() 
{ 
  for(i=0;i<8;i++)
    pinMode(seg[i],OUTPUT);

  pinMode(enable[0],OUTPUT);
  pinMode(enable[1],OUTPUT);  
}
void loop() 
{
//    number = count;
//
//    quotient = number / 10;
//    remainder = number % 10;
    quotient = count / 10;
    remainder = count % 10;


    digitalWrite(enable[0], HIGH);
    digitalWrite(enable[1], LOW);    
    ShowDigit(quotient);
    delay(50); 
    digitalWrite(enable[0], LOW);
    digitalWrite(enable[1], HIGH);    
    ShowDigit(remainder);
    delay(50);     
 
  if (millis() - mytime >= 1000)  // 1000ms
  {
    mytime = millis();
    count = count + 1;
    if (count >= 100)
      count = 0;
  }       
} 

void ShowDigit(int n)
{
  digitalWrite(seg[0], num[n][7]);
  digitalWrite(seg[1], num[n][6]);  
  digitalWrite(seg[2], num[n][5]);
  digitalWrite(seg[3], num[n][4]);  
  digitalWrite(seg[4], num[n][3]);
  digitalWrite(seg[5], num[n][2]);  
  digitalWrite(seg[6], num[n][1]);
  digitalWrite(seg[7], num[n][0]);     
}
