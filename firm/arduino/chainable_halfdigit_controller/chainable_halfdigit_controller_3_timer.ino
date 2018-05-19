void readBluetooth() {
  while (bluetoothSerial.available() > 0)
  {
    str = bluetoothSerial.readStringUntil('\n');
    str.remove(0, 1);
    if(str.startsWith("[MATCH] RUN ") || str.startsWith("[MATCH] READY ") || str.startsWith("[MATCH] ")){
      str.remove(0, 55);
      score = str.toInt();
    }
  }
}
void rainbowCycleWithBluetooth(unsigned char frames, unsigned int frameAdvance, unsigned int pixelAdvance)
{
  // Hue is a number between 0 and 3*256 than defines a mix of r->g->b where
  // hue of 0 = Full red
  // hue of 128 = 1/2 red and 1/2 green
  // hue of 256 = Full Green
  // hue of 384 = 1/2 green and 1/2 blue
  // ...

  unsigned int firstPixelHue = 0;     // Color for the first pixel in the string

  for(unsigned int j=0; j<frames; j++) {
    unsigned int currentPixelHue = firstPixelHue;

    readBluetooth();
//    new_time = millis();
//    diff_time = (new_time - old_time) / 1000;

    int sizeDigit = 23*2;
    
    char result[ARRAY_SIZE];
    
    fillArrayWithZero(result, ARRAY_SIZE);
    computeDigits(result, score, 0);
      
    cli();

    for(unsigned int i=0; i< PIXELS; i++) {
      if (currentPixelHue>=(3*256)) { // Normalize back down incase we incremented and overflowed
        currentPixelHue -= (3*256);
      }

      unsigned char phase = currentPixelHue >> 8;
      unsigned char step = currentPixelHue & 0xff;

      /*
      for (int i = 0; i < ARRAY_SIZE; i++)
      {
        if(result[i] == 0) {
          Serial.print('0');
        }
        else if (result[i] == 1)
        {
          Serial.print('1');
        } else
        {
          Serial.print(result[i]);
        }
      }
      Serial.println("");
      //*/
      //*
      if(i < ARRAY_SIZE) {
        if(result[i] == 1) {  
          switch (phase) {
            case 0:
              sendPixel( ~step , step ,  0 );
              break;
            case 1:
              sendPixel( 0 , ~step , step );
              break;
            case 2:
              sendPixel(  step ,0 , ~step );
              break;
          }
        } else {
          sendPixel(0,0,0);
        }
      } else {
        sendPixel(0,0,0);
      }

      currentPixelHue+=pixelAdvance;
      //*/
    }

    sei();

    show();

    firstPixelHue += frameAdvance;
  }
}

void rainbowCycleWithTimer(unsigned char frames, unsigned int frameAdvance, unsigned int pixelAdvance)
{
  // Hue is a number between 0 and 3*256 than defines a mix of r->g->b where
  // hue of 0 = Full red
  // hue of 128 = 1/2 red and 1/2 green
  // hue of 256 = Full Green
  // hue of 384 = 1/2 green and 1/2 blue
  // ...

  unsigned int firstPixelHue = 0;     // Color for the first pixel in the string

  for(unsigned int j=0; j<frames; j++) {
    unsigned int currentPixelHue = firstPixelHue;

    new_time = millis();
    diff_time = (new_time - old_time) / 1000;

    int sizeDigit = 23*2;
    
    char result[ARRAY_SIZE];
    
    fillArrayWithZero(result, ARRAY_SIZE);
    computeDigits(result, diff_time, 0);
      
    cli();

    for(unsigned int i=0; i< PIXELS; i++) {
      if (currentPixelHue>=(3*256)) { // Normalize back down incase we incremented and overflowed
        currentPixelHue -= (3*256);
      }

      unsigned char phase = currentPixelHue >> 8;
      unsigned char step = currentPixelHue & 0xff;

      /*
      for (int i = 0; i < ARRAY_SIZE; i++)
      {
        if(result[i] == 0) {
          Serial.print('0');
        }
        else if (result[i] == 1)
        {
          Serial.print('1');
        } else
        {
          Serial.print(result[i]);
        }
      }
      Serial.println("");
      //*/
      //*
      if(i < ARRAY_SIZE) {
        if(result[i] == 1) {  
          switch (phase) {
            case 0:
              sendPixel( ~step , step ,  0 );
              break;
            case 1:
              sendPixel( 0 , ~step , step );
              break;
            case 2:
              sendPixel(  step ,0 , ~step );
              break;
          }
        } else {
          sendPixel(0,0,0);
        }
      } else {
        sendPixel(0,0,0);
      }

      currentPixelHue+=pixelAdvance;
      //*/
    }

    sei();

    show();

    firstPixelHue += frameAdvance;
  }
}
