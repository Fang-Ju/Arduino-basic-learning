#include <Stepper.h> 
#define STEPS 2048    // 跑一圈需要 2048步
Stepper stepper(STEPS,2,4,3,5);
int steps=0, RunSpeed=1;
void setup() 
{
  Serial.begin(9600);
  Serial.println("1. Forward: speed=2, steps=4096");
  Serial.println("2. Backward: speed=2, steps=4096");
  Serial.println("3. Forward: speed=10, steps=8192");    
  Serial.println("4. Backward: speed=10, steps=8192");
  Serial.println("5. Forward: speed=18, steps=8192");
  Serial.println("6. Backward: speed=18, steps=8192"); 
}
 
void loop()
{
 if (Serial.available() > 0) 
 {
    int num = Serial.read();
    Serial.print("received:");
    Serial.write(num);
    Serial.println();

    if (num=='1')
    {
      RunSpeed=2;
      steps=4096;
    }
    else if (num=='2')
    {
      RunSpeed=2;
      steps=-4096;      
    }
    else if (num=='3')
    {
      RunSpeed=10;
      steps=8192;     
    }
    else if (num=='4')
    {
      RunSpeed=10;
      steps=-8192;       
    }
    else if (num=='5')
    {
      RunSpeed=18;
      steps=8192;       
    }
    else if (num=='6')
    {
      RunSpeed=18;
      steps=-8192;        
    }
    Serial.println("Running Stepper Motor !:");
    stepper.setSpeed(RunSpeed);
    stepper.step(steps);

    delay(1000);
  }
}
