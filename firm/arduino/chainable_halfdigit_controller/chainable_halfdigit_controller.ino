#define PIXELS_PER_DIGIT 23*2
#define DIGITS_NUMBER 3
#define ARRAY_SIZE PIXELS_PER_DIGIT * DIGITS_NUMBER

#define PIXELS 23*6  // Number of pixels in the string

//#define USE_UNITY_SIMULATOR

unsigned long old_time;
unsigned long new_time;
unsigned long diff_time;

void setup() {
  #ifdef USE_UNITY_SIMULATOR
    Serial.begin(250000);
    while (!Serial);
  #endif

  old_time = millis() - 200000;

  ledsetup();
}

void loop() {
  rainbowCycleWithTimer(500, 5, 3 );

  return;
}
