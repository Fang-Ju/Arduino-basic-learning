//  Arduino : HC-06 藍芽模組的設定
//  http://gsyan888.blogspot.com/2014/03/arduino-hc-06-at-command.html

#include <SoftwareSerial.h>
SoftwareSerial BTSerial(2, 3); // RX | TX
void setup()
{
  Serial.begin(9600);
  Serial.println("Enter AT commands:");
  BTSerial.begin(9600);  // HC-06 current bound rate (appsduino default is 57600)
}
void loop()
{
  // Keep reading from HC-06 and send to Arduino Serial Monitor
  if (BTSerial.available())
    Serial.write(BTSerial.read());
  // Keep reading from Arduino Serial Monitor and send to HC-06
  if (Serial.available())
    BTSerial.write(Serial.read());
}
