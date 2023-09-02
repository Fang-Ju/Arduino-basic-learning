#define led 13

int key;        
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

      switch(key)
      {
        case '1':
          flash = 100;
          break;
        case '2':
          flash = 200;
          break;
        case '3':
          flash = 300;
          break;
        case '4':
          flash = 400;
          break;
        case '5':
          flash = 500;
          break;
        case '6':
          flash = 600;
          break;
        case '7':
          flash = 700;
          break;
        case '8':
          flash = 800;
          break;
        case '9':
          flash = 900;
          break;
        default:
          flash=0;
          digitalWrite(led,LOW);
      }
  } 
  if(flash>=100 && flash<=900)
  {
    digitalWrite(led,HIGH);    
    delay(flash);   
    digitalWrite(led,LOW);    
    delay(flash);         
  }   
}
