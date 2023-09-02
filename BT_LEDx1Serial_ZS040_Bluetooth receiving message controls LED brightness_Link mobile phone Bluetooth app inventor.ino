#include <SoftwareSerial.h>  //引用「軟體序列埠」程式庫
SoftwareSerial BT(2,3);      //設定軟體序列埠(接收腳, 傳送腳)

#define pinRed 13      //紅色 LED 

String readString;        //藍芽傳送過來的字串
char ch;

void setup() {
  Serial.begin(9600);
  BT.begin(9600);        //啟動軟體序列埠

  pinMode(pinRed,OUTPUT);
}

void loop() {
  if(readString.length()>0) {  //如果有接收的字串就將其清空
    readString="";
  }
  while(BT.available()) {  //若有資料傳送過來就接收
    delay(3);
    ch = BT.read();
    readString+=ch;
  }

  if (readString=="redon") {  //紅燈亮
    digitalWrite(pinRed, HIGH);
    Serial.println("pinRed, HIGH");
  } else if (readString=="redoff") {  //紅燈滅
    digitalWrite(pinRed, LOW); 
    Serial.println("pinRed, LOW"); 
  }
}
