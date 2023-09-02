#include <SPI.h>
#include <MFRC522.h>

#define RST_PIN  A0
#define SS_PIN   10

MFRC522 mfrc522(SS_PIN, RST_PIN); // Instance of the class

void setup() { 
  Serial.begin(9600);
  Serial.println("RFID reader is ready!");

  SPI.begin();     // Init SPI bus
  mfrc522.PCD_Init();   // Init MFRC522 
}
 
void loop() {
  // Look for new cards
  if (mfrc522.PICC_IsNewCardPresent() && mfrc522.PICC_ReadCardSerial()) //感應到卡片和讀取到卡片 
  {
     byte *id = mfrc522.uid.uidByte;
     byte idSize = mfrc522.uid.size;

  Serial.print("PICC type: ");
  //  show card type
  MFRC522::PICC_Type piccType = mfrc522.PICC_GetType(mfrc522.uid.sak);
  Serial.println(mfrc522.PICC_GetTypeName(piccType));

  Serial.print("UID Size:  ");
  Serial.println(idSize);

  for (byte i = 0; i < idSize; i++) {
    Serial.print("id[");
    Serial.print(i);
    Serial.print("]: ");
    Serial.println(id[i], HEX);
  }
  Serial.println();

   mfrc522.PICC_HaltA();
  }

}
