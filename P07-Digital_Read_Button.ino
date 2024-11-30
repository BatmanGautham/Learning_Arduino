int digitalInput = 5;

void setup()
{
  Serial.begin(9600);
  pinMode(digitalInput, INPUT);
  pinMode(13, OUTPUT);  
}

void loop()
{
  int input = digitalRead(digitalInput);
  
  if (input == HIGH) 
  {
    digitalWrite(13, HIGH);
    Serial.println("LED is ON");
  } 
  else 
  {
    digitalWrite(13, LOW); 
    Serial.println("LED is OFF");
  }
}
