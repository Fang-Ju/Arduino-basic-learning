int i;
//int j;
const byte num[10][8]=
{
    {0,0,1,1,1,1,1,1},  //0
    {0,0,0,0,0,1,1,0},  //1
    {0,1,0,1,1,0,1,1},  //2
    {0,1,0,0,1,1,1,1},  //3
    {0,1,1,0,0,1,1,0},  //4
    {0,1,1,0,1,1,0,1},  //5
    {0,1,1,1,1,1,0,1},  //6
    {0,0,0,0,0,1,1,1},  //7    
    {0,1,1,1,1,1,1,1},  //8
    {0,1,1,0,1,1,1,1}  //9    
};

const int seg[]={2,3,4,5,6,7,8,9};  //腳位 對 abcdefgp
void setup() 
{ 
  for(i=0;i<8;i++)
    pinMode(seg[i],OUTPUT);
}

void loop() 
{
  for(i=0; i<10; i++)
  {
  DigitLED(i);
  delay(1000);
  }
}

void DigitLED(int n)
{
  digitalWrite(2, num[n][7]);
  digitalWrite(3, num[n][6]);
  digitalWrite(4, num[n][5]);
  digitalWrite(5, num[n][4]);

  digitalWrite(6, num[n][3]);
  digitalWrite(7, num[n][2]);
  digitalWrite(8, num[n][1]);
  digitalWrite(9, num[n][0]);

  /*
  digitalWrite(seg[0], num[n][7]);
  digitalWrite(seg[1], num[n][6]);
  digitalWrite(seg[2], num[n][5]);
  digitalWrite(seg[3], num[n][4]);

  digitalWrite(seg[4], num[n][3]);
  digitalWrite(seg[5], num[n][2]);
  digitalWrite(seg[6], num[n][1]);
  digitalWrite(seg[7], num[n][0]);
   */
}
