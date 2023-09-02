const int led=13;
int key,keydata;				
int flash=0;							
void setup()
{
  Serial.begin(9600); 		
  pinMode(led,OUTPUT); 
  digitalWrite(led,LOW);   		
}
void loop() 
{
  if (Serial.available()>0) 		
  {
      key = Serial.read();		
      key=key-'0';	  // ASCII 58-48 = 6 存入key
      if(key>=0 && key<=9)
        keydata=key;	                  
  }	
  if(keydata==0)
    digitalWrite(led,LOW);
  else
  {
    flash=keydata*100;
    digitalWrite(led,HIGH);    
    delay(flash);   
    digitalWrite(led,LOW);    
    delay(flash);        	
  }   
}
