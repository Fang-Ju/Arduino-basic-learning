const int in1Pin=2;
const int in2Pin=3;
const int in3Pin=4;
const int in4Pin=5;
const int enA=9;
const int enB=10;
void setup() 
{ 
  Serial.begin(9600);
  Serial.println("press '0'~'9' : setup speed");
  Serial.println("press 'S' : stop");  
  Serial.println("press 'F' :  front");
  Serial.println("press 'B' :  back");   
  Serial.println("press 'R' : turn right");
  Serial.println("press 'L' : turn left"); 
  pinMode(in1Pin,OUTPUT);
  pinMode(in2Pin,OUTPUT);
  pinMode(in3Pin,OUTPUT);
  pinMode(in4Pin,OUTPUT); 
  analogWrite(enA,50);
  analogWrite(enB,50); 
} 
void loop() 
{
  if(Serial.available())
  {
    char key=Serial.read();
    Serial.print("key=");
    Serial.println(key);
    if(key>='0' && key<='9')
    {
      int speed=map(key,'0','9',50,250);
      analogWrite(enA,speed);
      analogWrite(enB,speed);
    }  
    else if(key=='S'||key=='s')
    {
      digitalWrite(in1Pin,LOW);
      digitalWrite(in2Pin,LOW); 
      digitalWrite(in3Pin,LOW);
      digitalWrite(in4Pin,LOW);       
    }  
    else if(key=='F'||key=='f')
    {
      digitalWrite(in1Pin,LOW);
      digitalWrite(in2Pin,HIGH); 
      digitalWrite(in3Pin,HIGH);
      digitalWrite(in4Pin,LOW);     
    }  
    else if(key=='B'||key=='b')
    {
      digitalWrite(in1Pin,HIGH);
      digitalWrite(in2Pin,LOW); 
      digitalWrite(in3Pin,LOW);
      digitalWrite(in4Pin,HIGH);           
    }  
    else if(key=='R'||key=='r')
    {
      digitalWrite(in1Pin,LOW);
      digitalWrite(in2Pin,HIGH); 
      digitalWrite(in3Pin,LOW);
      digitalWrite(in4Pin,LOW);            
    }  
    else if(key=='L'||key=='l')
    {
      digitalWrite(in1Pin,LOW);
      digitalWrite(in2Pin,LOW); 
      digitalWrite(in3Pin,HIGH);
      digitalWrite(in4Pin,LOW);     
    }      
  }
} 
