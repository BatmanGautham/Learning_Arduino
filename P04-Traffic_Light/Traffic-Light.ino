int red = 10;
int yellow = 9;
int green = 8;

void setup() 
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() 
{
  digitalWrite(red,HIGH);
  delay(5000);
  digitalWrite(red,LOW);


  digitalWrite(yellow,HIGH);
  delay(1000);
  digitalWrite(yellow,LOW);
  delay(1000);

  digitalWrite(yellow,HIGH);
  delay(1000);
  digitalWrite(yellow,LOW);
  delay(1000);

  digitalWrite(yellow,HIGH);
  delay(1000);
  digitalWrite(yellow,LOW);
  delay(1000);


  digitalWrite(green,HIGH);
  delay(5000);
  digitalWrite(green,LOW);
}
