int count;
void setup() {

 Serial.begin (9600);
 pinMode (9, INPUT); //Sensor output
}
void loop() {
  
  int sensorValue1 = analogRead(A0);
  float voltage1 = sensorValue1 * (5.0 / 1023.0);
  int sensorValue2 = analogRead(A1);
  float voltage2 = sensorValue2 * (5.0 / 1023.0);
  int sensorValue3 = analogRead(A2);
  float voltage3 = sensorValue3 * (5.0 / 1023.0);
  int sensorValue4 = analogRead(A3);
  float voltage4 = sensorValue4 * (5.0 / 1023.0);
  //Serial.print ("Sensor: ");
  //Serial.println (digitalRead(9)); //print the sensor output
  //delay (100); 
    if (voltage1 > 2.5 && digitalRead(9) == 0) {
  //Serial.print ("PS1: ");
  Serial.println(" Right"); 
  }
  //Serial.print ("PS1: ");
  //Serial.println(voltage1);
  //delay(100);

  else if (voltage2 > 2.5 && digitalRead(9) == 0)
{
  //Serial.print ("PS2: ");
  Serial.println(" Left");
}
  //Serial.print ("PS2: ");
  //Serial.println(voltage2);
  //delay(100);
  
  else if (voltage3 > 2.5 && digitalRead(9) == 0)
  {
    //Serial.print ("PS3: ");
    Serial.println(" Down");
  }
  //delay(100);
  
  else if (voltage4 > 2.5 )
  {
    //Serial.print ("PS4: ");
    Serial.println(" Fireball");
  }
  //delay(100);
  else if (voltage1 > 2.5 && digitalRead(9) == 1)
  {
  //Serial.print ("IR: ");
  Serial.println (" JumpRight");
  }
  else if (voltage2 > 2.5 && digitalRead(9) == 1)
  {
  //Serial.print ("IR: ");
  Serial.println (" JumpLeft");
  }
  else if (digitalRead(9) == 1)
  {
  //Serial.print ("IR: ");
  Serial.println (" Jump");
  }
  else
  {
    Serial.println(" Stop");
  }
  delay(100);
}
