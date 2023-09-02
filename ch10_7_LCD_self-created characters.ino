#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
uint8_t heart[8]={0x0,0xa,0x1f,0x1f,0xe,0x4,0x0,0x0};         
char str1[]="Hello, World!"; 
char str2[]="Arduino Uno.";
void setup()
{
  lcd.begin();    
  lcd.createChar(0,heart);                 
  lcd.setCursor(0,0);
  lcd.print(str1);
  lcd.setCursor(0,1);
  lcd.print("I");
  lcd.print(" ");
  lcd.write(byte(0));
  lcd.print(" ");
  lcd.print(str2);
}
void loop()
{
}
