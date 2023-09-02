#include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,4,5,6,7);
byte yChar[8]={B10000,B11111,B00010,B01111,B01010,B11111,B00010,B00000};
byte mChar[8]={B01111,B01001,B01111,B01001,B01111,B01001,B11101,B00000};
byte dChar[8]={B01111,B01001,B01001,B01111,B01001,B01001,B01111,B00000};
/*
byte h0Char[8]={B00000,B01111,B01001,B01001,B01111,B01001,B01001,B01111};
byte h1Char[8]={B00100,B11111,B00100,B01110,B00010,B11111,B01010,B00110};
*/
int year=2021;
byte moon=2;
byte day=8;
void setup() 
{
  lcd.begin(16,2); 
  lcd.createChar(0,yChar);
  lcd.createChar(1,mChar);
  lcd.createChar(2,dChar);  
//  lcd.createChar(3,h0Char); 
//  lcd.createChar(4,h1Char); 
}   
void loop() 
{
  lcd.setCursor(0,0);
  lcd.print(year);
  lcd.write(byte(0)); 
  lcd.print(moon);
  lcd.write(byte(1));
  lcd.print(day);
  lcd.write(byte(2));
  
//  lcd.write(byte(3));
//  lcd.write(byte(4));   
}
