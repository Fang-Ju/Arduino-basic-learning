const int sw=2;		
const int led=13;	
const int debounceDelay=20;	
int ledStatus=LOW;	
int val;				
void setup() 
{   
  pinMode(sw,INPUT_PULLUP);  	
  pinMode(led,OUTPUT);  	
}
void loop() 
{
  val=digitalRead(sw);	
  if(val==LOW)		
  {
    delay(debounceDelay);	
    while(digitalRead(sw)==LOW)	
      ;  	 
    ledStatus=!ledStatus;  	
    digitalWrite(led,ledStatus);

    delay(debounceDelay);
  }    
}
