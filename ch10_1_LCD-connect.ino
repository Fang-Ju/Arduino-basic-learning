#include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,4,5,6,7);
void setup() 
{
   lcd.begin(16,2);
   lcd.print("hello World!");
}   
void loop() 
{
   lcd.setCursor(0, 0);
   lcd.print("hello World!"); 
}
