int num = 0;   
void setup()
{
  Serial.begin(9600);   
}
void loop() 
{
 if (Serial.available() > 0)   //如果有字
 {
    num = Serial.read();
    Serial.print("received:");
    Serial.write(num);
    Serial.print(" ");
    Serial.println(num,DEC);
    
  }
}
