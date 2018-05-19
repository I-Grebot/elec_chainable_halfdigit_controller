#include <SoftwareSerial.h>

SoftwareSerial mySerial(4,5); // RX, TX
String str;
int score;

void setup() {
  Serial.begin(9600);
  pinMode(3,OUTPUT); digitalWrite(3,HIGH);
  Serial.println("Enter AT commands:");
  mySerial.begin(9600);
}

void loop()
{
  if (mySerial.available() > 0)
  {
    /*
    Serial.write(mySerial.read());
    //*/
    //*
    str = mySerial.readStringUntil('\n');
    
//    Serial.write("raw:\n");
    for (int i = 0; i < str.length(); i++)
    {
      Serial.write(str[i]);   // Push each char 1 by 1 on each loop pass
    }
    Serial.write('\n');

    str.remove(0, 1);
    if(str.startsWith("[MATCH] RUN ") || str.startsWith("[MATCH] READY ")){
      Serial.write("SETECTED : ");
      
//      for (int j = 0; j < str.length(); j++)
//      {
//        Serial.write(str[j]);   // Push each char 1 by 1 on each loop pass
//      }
//      Serial.write('\n');
      str.remove(0, 55);
      score = str.toInt();
      for(int o = 0; o < score; o++){
        
        Serial.write("i");
      }
      
//      Serial.write(score);
//      for (int k = 0; k < str.length(); k++)
//      {
//        Serial.write(str[k]);   // Push each char 1 by 1 on each loop pass
//      }
      Serial.write('\n');
      //Serial.write(str);
    }
    //*/
  }
  
  if (Serial.available())
  {
    mySerial.write(Serial.read());
  }
}

