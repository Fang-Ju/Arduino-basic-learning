const int posR=4;
const int negR=5;
const int posL=6;
const int negL=7;
const int pwmR=9;
const int pwmL=10;
const int Rspeed=200;
const int Lspeed=200;
char key;
void setup()
{
  Serial.begin(9600);  
  pinMode(posR,OUTPUT);
  pinMode(negR,OUTPUT);
  pinMode(posL,OUTPUT);
  pinMode(negL,OUTPUT);   
}
void loop() 
{
  if(Serial.available())
     key=Serial.read();   
  if(key=='S' || key=='s')  
     pause(0,0); 
  else if(key=='F' || key=='f')
     forward(Rspeed,Lspeed); 
  else if(key=='B' || key=='b')
     back(Rspeed,Lspeed);
  else if(key=='R' || key=='r')
     right(Rspeed,Lspeed);
  else if(key=='L' || key=='l')
     left(Rspeed,Lspeed);      
}   
void pause(byte RmotorSpeed, byte LmotorSpeed)
{
    analogWrite(pwmR,RmotorSpeed);
    analogWrite(pwmL,LmotorSpeed);
    digitalWrite(posR,LOW);
    digitalWrite(negR,LOW);         
    digitalWrite(posL,LOW);
    digitalWrite(negL,LOW);   
}     
void forward(byte RmotorSpeed, byte LmotorSpeed)
{
    analogWrite(pwmR,RmotorSpeed);
    analogWrite(pwmL,LmotorSpeed);
    digitalWrite(posR,HIGH);
    digitalWrite(negR,LOW);         
    digitalWrite(posL,LOW);
    digitalWrite(negL,HIGH);   
}  
void back(byte RmotorSpeed, byte LmotorSpeed)
{
    analogWrite(pwmR,RmotorSpeed);
    analogWrite(pwmL,LmotorSpeed);
    digitalWrite(posR,LOW);
    digitalWrite(negR,HIGH);         
    digitalWrite(posL,HIGH);
    digitalWrite(negL,LOW);   
} 
void right(byte RmotorSpeed, byte LmotorSpeed)
{
    analogWrite(pwmR,RmotorSpeed);
    analogWrite(pwmL,LmotorSpeed);
    digitalWrite(posR,LOW);
    digitalWrite(negR,LOW);         
    digitalWrite(posL,LOW);
    digitalWrite(negL,HIGH);        
} 
void left(byte RmotorSpeed, byte LmotorSpeed)
{
    analogWrite(pwmR,RmotorSpeed);
    analogWrite(pwmL,LmotorSpeed);
    digitalWrite(posR,HIGH);
    digitalWrite(negR,LOW);         
    digitalWrite(posL,LOW);
    digitalWrite(negL,LOW);        
} 

 
