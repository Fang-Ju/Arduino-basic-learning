#include <Stepper.h> 
#define STEPS 200
Stepper stepper(STEPS,2,4,3,5);
void setup() 
{ 
  stepper.setSpeed(6);
} 
void loop()
{  
  stepper.step(1);
}
  
  
