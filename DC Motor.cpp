
int i = 0, B=0, j=0;

void setup()
{
  pinMode(11, OUTPUT);
}

void loop()
{
  for (B = 0; B <= 255; B += 1)
  {
    analogWrite(11, B);
    delay(30); 
  }
  for (B = 255; B >= 0; B -= 1)
  {
    analogWrite(11, B);
    delay(30); 
  }
}