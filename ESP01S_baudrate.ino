//  WiFi MODULE         Arduino
//  VCC           ----  3.3volts
//  GND           ----  GND
//  TX            ----  RX, pin10
//  RX            ----  TX, pin11
#include <SoftwareSerial.h> 
SoftwareSerial WiFiSerial(10,11); //(RX,TX) 與 ESP8266 介接的軟體串列埠

void setup() 
{
  WiFiSerial.begin(115200);   //Cannot be WiFiSerial.begin(9600); should be WiFiSerial.begin(115200);
  Serial.begin(9600);
  Serial.println("SoftSerial to ESP8266 AT commands test ...");
}

void loop() 
{
  if (WiFiSerial.available()) 
  {  //若軟體串列埠 RX 有收到來自 ESP8266 的回應字元
    Serial.write(WiFiSerial.read());  //在串列埠監控視窗顯示 ESP8266 的回應字元
  }
  
  if (Serial.available()) 
  {  //若串列埠 RX 有收到來自 PC 的 AT 指令字元 (USB TX)
    char c=Serial.read();  //先暫存在字元變數 c 緩衝一下
    WiFiSerial.write(c);  //將 PC 的傳來的字元傳給 ESP8266
  }
  // delay(50);  //緩衝 50ms 以免傳送太快 (不用, 後述)
}
