#include <SoftwareSerial.h>

SoftwareSerial mySerial(4,5); // RX, TX
String str;

void setup() {
  Serial.begin(9600);
  pinMode(3,OUTPUT); digitalWrite(3,HIGH);
  Serial.println("Enter AT commands:");
  mySerial.begin(9600);
}

void loop()
{
  if (mySerial.available())
  {
    str = mySerial.readStringUntil('\n');
    for (int i = 0; i < str.length(); i++)
    {
      Serial.write(str[i]);   // Push each char 1 by 1 on each loop pass
    }
    Serial.write('\n');
    if(str.startsWith("[MATCH] RUN")){
      Serial.write("SETECTED"sys);
      for (int i = 0; i < str.length(); i++)
      {
        Serial.write(str[i]);   // Push each char 1 by 1 on each loop pass
      }
      Serial.write('\n');
      //Serial.write(str);
    }
  }
  
  if (Serial.available())
  {
    mySerial.write(Serial.read());
  }
}

