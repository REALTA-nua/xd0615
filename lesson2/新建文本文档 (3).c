void setup()
{ int i=0;
  for(i=0;i<4;i++)
  {pinMode(i, OUTPUT);}
}

void loop()
{ for(i=0;i<4;i++)
{digitalWrite(i, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(i, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}}