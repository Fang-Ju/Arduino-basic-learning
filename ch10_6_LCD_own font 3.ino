#include <LiquidCrystal.h>
#define COL 6
LiquidCrystal lcd(8,9,10,4,5,6,7);
byte shape[8][8]={
{B11111,B11111,B11111,B11111,B11111,B11111,B11111,B11111}, //0
{B00000,B00000,B00000,B00000,B00000,B00000,B00000,B00000}, //1
{B11111,B11111,B00000,B00000,B00000,B00000,B00000,B00000}, //2
{B00000,B00000,B00000,B00000,B00000,B00000,B11111,B11111}, //3
{B11111,B11111,B00000,B00000,B00000,B00000,B00000,B11111}, //4
{B11111,B00000,B00000,B00000,B00000,B00000,B11111,B11111}, //5
{B11111,B00000,B00000,B00000,B00000,B00000,B00000,B00000}, //6
{B00000,B00000,B00000,B00000,B00000,B00000,B00000,B11111}}; //7
const char number[10][6]={
{0,2,0,0,3,0},{1,0,1,1,0,1},{4,4,0,0,5,5},{2,4,0,3,5,0},{0,7,0,6,6,0},
{0,4,4,5,5,0},{0,4,4,0,5,0},{2,2,0,1,1,0},{0,4,0,0,5,0},{0,4,0,5,5,0}};
void setup() 
{
  lcd.begin(16,2); 
  for(int i=0;i<8;i++)
     lcd.createChar(i,shape[i]);   
}   
void loop() 
{
  for(int i=0;i<10;i++)
  {
    showNumber(i);
    delay(1000);
  }  
}
void showNumber(int n)
{
  int i;  //控制 上半下半位置
  lcd.setCursor(COL,0);
  for(i=0;i<=2;i++)
     lcd.write(byte(number[n][i]));
  lcd.setCursor(COL,1);  
  for(i=3;i<=5;i++)
     lcd.write(byte(number[n][i]));
 }


 /*
  * #include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,4,5,6,7);
byte shape[8][8]={
{B11111,B11111,B11111,B11111,B11111,B11111,B11111,B11111}, //0
{B00000,B00000,B00000,B00000,B00000,B00000,B00000,B00000}, //1
{B11111,B11111,B00000,B00000,B00000,B00000,B00000,B00000}, //2
{B00000,B00000,B00000,B00000,B00000,B00000,B11111,B11111}, //3
{B11111,B11111,B00000,B00000,B00000,B00000,B00000,B11111}, //4
{B11111,B00000,B00000,B00000,B00000,B00000,B11111,B11111}, //5
{B11111,B00000,B00000,B00000,B00000,B00000,B00000,B00000}, //6
{B00000,B00000,B00000,B00000,B00000,B00000,B00000,B11111}}; //7
const char number[10][6]={
{0,2,0,0,3,0},{1,0,1,1,0,1},{4,4,0,0,5,5},{2,4,0,3,5,0},{0,7,0,6,6,0},
{0,4,4,5,5,0},{0,4,4,0,5,0},{2,2,0,1,1,0},{0,4,0,0,5,0},{0,4,0,5,5,0}};
void setup() 
{
  lcd.begin(16,2); 
  for(int i=0;i<8;i++)
     lcd.createChar(i,shape[i]);   
}   
void loop() 
{
  for(int i=0;i<10;i++)
  {
    showNumber(i,6);
    delay(1000);
  }  
}
void showNumber(int value,int colPosition)
{
  int i;
  lcd.setCursor(colPosition,0);
  for(i=0;i<=2;i++)
     lcd.write(byte(number[value][i]));
  lcd.setCursor(colPosition,1);  
  for(i=3;i<=5;i++)
     lcd.write(byte(number[value][i]));
 }
 */
