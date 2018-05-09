#include <SoftwareSerial.h>

#define PIXELS_PER_DIGIT 23*2
#define DIGITS_NUMBER 3
#define ARRAY_SIZE PIXELS_PER_DIGIT * DIGITS_NUMBER

#define PIXELS 23*6  // Number of pixels in the string

unsigned long old_time;
unsigned long new_time;
unsigned long diff_time;

String str;
int score;

SoftwareSerial bluetoothSerial(4,5); // RX, TX

void setup() {
  bluetoothSerial.begin(9600);
  
  old_time = millis() - 200000;

  ledsetup();
}

void loop() {
//  rainbowCycleWithTimer(500, 5, 3);
rainbowCycleWithBluetooth(500, 5, 3);
  return;
}
