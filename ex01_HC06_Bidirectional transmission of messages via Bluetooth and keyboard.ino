//  Arduino : HC-06 藍芽模組設定 
//  http://gsyan888.blogspot.com/2014/03/arduino-hc-06-at-command.html

#include <SoftwareSerial.h>
SoftwareSerial BTserial(2,3); // RX, TX
void setup()
{
  Serial.begin(9600);
  Serial.println("Enter AT commands:");
  BTserial.begin(9600);
}
void loop() 
{
  // Keep reading from HC-06 and send to Arduino Serial Monitor
  if(BTserial.available())
    Serial.write(BTserial.read()); 
  // Keep reading from Arduino Serial Monitor and send to HC-06
  else if(Serial.available())
    BTserial.write(Serial.read());    
}       
