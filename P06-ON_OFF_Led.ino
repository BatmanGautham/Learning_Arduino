void setup() 
{
  pinMode(13, OUTPUT);

  Serial.begin(9600);
  Serial.println("Enter On or Off to Set the LED");
}

void loop() 
{
  if (Serial.available() > 0) 
  {
    String choice = Serial.readString();
    choice.trim();
    choice.toLowerCase(); 

    if (choice == "on") 
    {
      digitalWrite(13, HIGH);
      Serial.println("LED is ON");
    } 
    else if (choice == "off") 
    {
      digitalWrite(13, LOW);
      Serial.println("LED is OFF");
    } 
    else 
    {
      Serial.println("Invalid input. Enter 'on' or 'off'.");
    }
  }
}


/*
Serial Monitor Output:

Enter On or Off to Set the LED
LED is ON
LED is OFF
*/
