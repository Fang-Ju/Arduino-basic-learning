byte val=65;
void setup() 
{ 
  Serial.begin(9600);
}
void loop() 
{
  for(int i=0;i<26;i++)
  {
     Serial.write(val+i);
     Serial.print('=');
     Serial.println(val+i);
     delay(1000); 

     Serial.write("大家好");
     Serial.println("上課Arduino中");
     delay(1000);
  }  
}  
