#define TEMPO 300
const int sp=2;
unsigned int freq[8]={0,523,587,659,694,784,880,988};   //char toneName[]="CDEFGAB";
//char beeTone[]="GEEFDDCDEFGGGGEEFDDCEGGEDDDDDEFEEEEEFGGEEFDDCEGGC";
int beeTone[]={freq[5],freq[3],freq[3],
                freq[4],freq[2],freq[2],
                freq[1],freq[2],freq[3],freq[4],
                freq[5],freq[5],freq[5],
                freq[5],freq[3],freq[3],
                freq[4],freq[2],freq[2],
                freq[1],freq[3],freq[5],freq[5],
                freq[3],
                freq[2],freq[2],freq[2],freq[2],
                freq[2],freq[3],freq[4],
                freq[3],freq[3],freq[3],freq[3],
                freq[3],freq[4],freq[5],
                freq[5],freq[3],freq[3],
                freq[4],freq[2],freq[2],
                freq[1],freq[3],freq[5],freq[5],
                freq[1]};
byte beeBeat[]={1,1,2,1,1,2,1,1,1,1,1,1,2,1,1,2,1,1,2,1,1,1,1,4,
             1,1,1,1,1,1,2,1,1,1,1,1,1,2,1,1,2,1,1,2,1,1,1,1,4}; 
const int beeLen=sizeof(beeTone)/sizeof(int);   // for int = 2BYTES
int i;

void setup() 
{
} 

void loop() 
{
  for(i=0;i<beeLen;i++)
     playTone(beeTone[i], beeBeat[i]);  
  delay(3000); 
}

void playTone(int freq, byte beatNo)
{
  tone(sp,freq);
  delay(beatNo*TEMPO);
  noTone(sp);
  delay(20);
} 
