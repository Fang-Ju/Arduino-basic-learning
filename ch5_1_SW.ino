const int sw=2;			
const int led=13;	
int val;				
void setup() {    
  pinMode(sw,INPUT_PULLUP); 	
  pinMode(led,OUTPUT);	
}
void loop() {
  val=digitalRead(sw);	
  if(val==LOW)		
    digitalWrite(led,HIGH);	
  else					
    digitalWrite(led,LOW);     
}
