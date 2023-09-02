const int cds=0;
const int led=10;
int val;
void setup() 
{ 
  pinMode(led,OUTPUT);
  digitalWrite(led,LOW);
  Serial.begin(9600);
}
void loop() 
{
  val=analogRead(cds);
  Serial.println(val);
  
  if(val>512)
     digitalWrite(led,HIGH);
  else
     digitalWrite(led,LOW); 
}  
