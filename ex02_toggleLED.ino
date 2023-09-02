//撥動一次SW 交換燈亮
/*
#define RED  12
#define GREEN  13
#define SW  2

        
void setup() {      
  pinMode(RED,OUTPUT);  
  pinMode(GREEN,OUTPUT); 
  pinMode(SW,INPUT_PULLUP); 
}
void loop() {
  int button;
  button =d igitalRead(SW);  
  if(button == LOW)
  {   
    digitalWrite(RED,HIGH); 
    digitalWrite(GREEN,LOW);
  }
  else          
  {
    digitalWrite(RED,LOW);
    digitalWrite(GREEN,HIGH);
  }   
}
*/

/*
#define RED  12
#define GREEN  13
#define SW  2

bool bON = false;
int button;
        
void setup() {      
  pinMode(RED,OUTPUT);  
  pinMode(GREEN,OUTPUT); 
  pinMode(SW,INPUT_PULLUP); 
}
void loop() {
  button = digitalRead(SW);  
  if(button == LOW)
    bON = !bON;

  if(bON)
  {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
  }
  else
  {
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, HIGH);
  }

  delay(300);
}
*/



#define RED  12
#define GREEN  13
#define SW  2
#define debounceDelay 20

bool bON = false;
int button;
        
void setup() {      
  pinMode(RED,OUTPUT);  
  pinMode(GREEN,OUTPUT); 
  pinMode(SW,INPUT_PULLUP); 
}
void loop() {
  button = digitalRead(SW);  
  if(button == LOW)
  {
    delay(debounceDelay);
    while(digitalRead(SW)==LOW)  
      ;         
    bON = !bON;
    delay(debounceDelay);
  }
  if(bON)
  {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
  }
  else
  {
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, HIGH);
  }

  delay(300);
}
