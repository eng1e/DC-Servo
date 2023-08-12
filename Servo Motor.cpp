#include <Servo.h>

int pos = 0;

Servo S;

void setup()
{
  S.attach(6, 500, 2500);
}

void loop()
{
  
  for (pos = 0; pos <= 180; pos += 1)
  {
    S.write(pos);
    delay(15); 
  }
  for (pos = 180; pos >= 0; pos -= 1)
  {
    S.write(pos);
    delay(15); 
  }
}