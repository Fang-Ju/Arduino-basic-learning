#define trigPin 13
#define echoPin 12
#define redled  11
#define greenled 10
#define SPK     2

void setup() 
{
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(redled, OUTPUT);
  pinMode(greenled, OUTPUT);
}

void loop() 
{
  unsigned long duration, distance;
  
  digitalWrite(trigPin, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin, HIGH);  //  delayMicroseconds(1000); - Removed this line
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;

  if (distance < 8) 
  {  // This is where the LED On/Off happens
    digitalWrite(redled,HIGH); // When the Red condition is met, the Green LED should turn off
    digitalWrite(greenled,LOW);
  }
  else 
  {
    digitalWrite(redled,LOW);
    digitalWrite(greenled,HIGH);
  }

  if (distance >= 200 || distance <= 0)
  {
    Serial.println("Car Crashed or  Out of range");
    digitalWrite(redled,LOW);
    digitalWrite(greenled,LOW);
    noTone(SPK);
    delay(10);
  }
  else 
  {
    Serial.print(distance);
    Serial.println(" cm");
  }
  Radar(distance);
  delay(100);
}

void Radar(int distance)
{
    if (distance >=150)
    {
      noTone(SPK);
      delay(10);
    }
    else if ( (0 < distance) && (distance <=20) )
    {
      tone(SPK,2000);
    } 
    else
    {
      tone(SPK,2000);
      delay(distance*5);
      noTone(SPK);
      delay(distance*10); 
    }
}
