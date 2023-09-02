#include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,4,5,6,7);
void setup() 
{
   lcd.begin(16,2);    
}   
void loop() 
{
  lcd.setCursor(10,0);
  lcd.print("hello!"); 
  delay(200);
  for(int i=0;i<10;i++)
  {
    lcd.scrollDisplayLeft(); 
    delay(200);
  }

  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("hello!"); 
  delay(200);
  for(int i=0;i<10;i++)
  {
    lcd.scrollDisplayRight(); 
    delay(200);
  }

  lcd.clear();
}


////串列式LCD
//#include <Wire.h> 
//#include <LiquidCrystal_I2C.h>
//LiquidCrystal_I2C lcd(0x27,16,2);
//void setup() 
//{
//   lcd.begin();    
//}   
//void loop() 
//{
//  lcd.setCursor(10,0);
//  lcd.print("hello!"); 
//  delay(200);
//  for(int i=0;i<10;i++)
//  {
//    lcd.scrollDisplayLeft(); 
//    delay(200);
//  }
//
//  lcd.clear();
//  lcd.setCursor(0,1);
//  lcd.print("hello!"); 
//  delay(200);
//  for(int i=0;i<10;i++)
//  {
//    lcd.scrollDisplayRight(); 
//    delay(200);
//  }
//
//  lcd.clear();
//}
