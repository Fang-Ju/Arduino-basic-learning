int hour=0, min=0, sec=0;
unsigned long mytime=0; //unsigned long整型不會存儲負數
void TimerHandler();
const int sw=2;      
const int led=13; 
int val;
int ledStatus=LOW;
void setup()
{
  Serial.begin(9600);
  pinMode(sw,INPUT);  
  pinMode(led,OUTPUT);
}

void loop() 
{
//  Serial.println("This is a main program");
  TimerHandler();
  val=digitalRead(sw); 
  if(val==LOW)    
  {
    delay(20);      // delay 20ms
    while(digitalRead(sw)==LOW);
               
    ledStatus=!ledStatus; 
    digitalWrite(led,ledStatus);              
  }    
}

void TimerHandler() //-- update per microsec -- 
{
//    Serial.println("now Time is ....: ");
//    Serial.print(hour);Serial.print(":");Serial.print(min);Serial.print(":");Serial.print(sec);
//    Serial.println();

    if (millis()-mytime >=1000)
    {
      Serial.println("now Time is ....: ");
      Serial.print(hour);Serial.print(":");Serial.print(min);Serial.print(":");Serial.print(sec);
      Serial.println();
      
      mytime = millis();
      sec=sec+1;

      if (sec >= 60)
      {
            min=min + 1;
            sec = 0;
            if (min >= 60)
            {
                hour = hour + 1;
                min = 0;
                if (hour >= 24)
                     hour = 0;
            }  
       } 
    }  
}
