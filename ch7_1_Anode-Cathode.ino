/*
// Anode 共陽極
int i;
int j;
const byte num[10]={
    B11000000,  //0
    B11111001,  //1
    B10100100,  //2
    B10110000,  //3
    B10011001,  //4
    B10010010,  //5
    B10000010,  //6
    B11111000,  //7    
    B10000000,  //8
    B10010000   //9    
};
const int seg[]={2,3,4,5,6,7,8,9};  //abcdefgp
void setup() 
{ 
  for(i=0;i<8;i++)
    pinMode(seg[i],OUTPUT);
}
void loop() 
{
  for(i=0;i<10;i++)
  {
    for(j=0;j<8;j++)
    {  
      if(bitRead(num[i],j))  // 讀變數num[i]的某個位元j
        digitalWrite(seg[j],HIGH);
      else
        digitalWrite(seg[j],LOW);        
    }
  delay(1000);    
  } 
}  
*/

// Cathode 共陰極
int i;
int j;
const byte num[10]={
    B11000000,  //0
    B11111001,  //1
    B10100100,  //2
    B10110000,  //3
    B10011001,  //4
    B10010010,  //5
    B10000010,  //6
    B11111000,  //7    
    B10000000,  //8
    B10010000   //9    
};
const int seg[]={2,3,4,5,6,7,8,9};  //abcdefgp
void setup() 
{ 
  for(i=0;i<8;i++)
    pinMode(seg[i],OUTPUT);
}
void loop() 
{
  for(i=0;i<10;i++)
  {
    for(j=0;j<8;j++)
    {  
      if(bitRead(num[i],j))  // if(bitRead(num[i],j)==true)
        digitalWrite(seg[j],LOW);
      else
        digitalWrite(seg[j],HIGH);        
    }
  delay(1000);    
  } 
}
