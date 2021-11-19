// C++ code
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
  Serial.begin(9600);
  Serial.print("INITIALISED");
}

void loop()
{
  if (digitalRead(2) == HIGH)
  {
  digitalWrite(13, HIGH);
   
   Serial.println("led on"); 
  }
  else{
    digitalWrite(13, LOW);
    Serial.println("led off");
  }

  digitalRead(0);
}
