#include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,4,5,6,7);
const byte deg=25;
const byte degSym=B11011111;
void setup() 
{
  lcd.begin(16,2); 
}   
void loop() 
{
  lcd.setCursor(0,0);
  lcd.print(deg);
  lcd.write(degSym);  
  lcd.print("C"); 
}
