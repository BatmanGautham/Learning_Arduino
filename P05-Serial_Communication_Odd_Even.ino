void setup() 
{
  Serial.begin(9600);
  Serial.println("Enter a Number");
}


void loop() 
{
  if(Serial.available() > 0)
  {
    int num = Serial.parseInt();

    Serial.print("Recieved number :");
    Serial.println(num);
    
    if(num%2 == 0)
    {
      Serial.println("The number is Even");
    }
    else
    {
      Serial.println("The number is Odd");
    }
  }
}

/*
Serial Monitor Output:

Enter a Number
Recieved number :37
The number is Odd
Recieved number :0
The number is Even
*/
