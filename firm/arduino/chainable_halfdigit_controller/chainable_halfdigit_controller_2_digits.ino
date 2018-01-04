#include <math.h>

//                   . . . |    D    |    E    |    G    |   C          F   |    G    |    B    |    A    | . . .
char digit_void[]  = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
char digit_0[]     = {0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,1,1,1,1, 1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0};
char digit_1[]     = {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1, 0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0};
char digit_2[]     = {0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0, 0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0};
char digit_3[]     = {0,0,0,1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1, 0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0};
char digit_4[]     = {0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1, 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,0,0};
char digit_5[]     = {0,0,0,1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1, 1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,0,0,0};
char digit_6[]     = {0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1, 1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,0,0,0};
char digit_7[]     = {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1, 0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0};
char digit_8[]     = {0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1, 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0};
char digit_9[]     = {0,0,0,1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1, 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0};

/*
int getDigitAtPosition(int digitPosition) {
  return 0;
}

int getArrayForDigit(unsigned long value, int digitPosition) {
  int digitValue = getDigitAtPosition(digitPosition);

  //compute Array
}

int computeDigits(unsigned long value, int currentPosition) {
  int test = ArrayForDigit(unsigned long value, int digitPosition);

 if(can go further) {
  concat computeDigits(currentPosition + 1);
 }

 return test;
}
*/

void fillArrayWithZero(char *buf, int length) {
  for(unsigned int i=0; i < length; i++) {
    buf[i] = 0;
  }
}

void fillArray(char *buf, char *data, int data_count, int position) {
  memcpy(buf + position * sizeof(char), data, data_count * sizeof(char));
}

void computeDigits(char *buf, unsigned long value, int currentPosition) {
  // if(value >= pow(10, currentPosition)) {
  if(value == 0 && currentPosition == 0) {
    fillArray(buf, digit_0, PIXELS_PER_DIGIT, PIXELS_PER_DIGIT * currentPosition);
  }
  else if(value > 0) {
    // unsigned long digit = value % (int)pow(10, currentPosition + 1);
    unsigned long digit = value % 10; //(int)pow(10, currentPosition + 1);
    
    // Serial.print("(val = ");
    // Serial.print(value);
    // Serial.print(")(pos = ");
    // Serial.print(currentPosition);
    // Serial.print(")(digit = ");
    // Serial.print(digit);
    // Serial.print(") - ");

    switch (digit) {
      case 0:
        fillArray(buf, digit_0, PIXELS_PER_DIGIT, PIXELS_PER_DIGIT * currentPosition);
        break;
      case 1:
        fillArray(buf, digit_1, PIXELS_PER_DIGIT, PIXELS_PER_DIGIT * currentPosition);
        break;
      case 2:
        fillArray(buf, digit_2, PIXELS_PER_DIGIT, PIXELS_PER_DIGIT * currentPosition);
        break;
      case 3:
        fillArray(buf, digit_3, PIXELS_PER_DIGIT, PIXELS_PER_DIGIT * currentPosition);
        break;
      case 4:
        fillArray(buf, digit_4, PIXELS_PER_DIGIT, PIXELS_PER_DIGIT * currentPosition);
        break;
      case 5:
        fillArray(buf, digit_5, PIXELS_PER_DIGIT, PIXELS_PER_DIGIT * currentPosition);
        break;
      case 6:
        fillArray(buf, digit_6, PIXELS_PER_DIGIT, PIXELS_PER_DIGIT * currentPosition);
        break;
      case 7:
        fillArray(buf, digit_7, PIXELS_PER_DIGIT, PIXELS_PER_DIGIT * currentPosition);
        break;
      case 8:
        fillArray(buf, digit_8, PIXELS_PER_DIGIT, PIXELS_PER_DIGIT * currentPosition);
        break;
      case 9:
        fillArray(buf, digit_9, PIXELS_PER_DIGIT, PIXELS_PER_DIGIT * currentPosition);
        break;
    }

    // fillArray(buf, digit_3, PIXELS_PER_DIGIT, 0);
    // fillArray(buf, digit_5, PIXELS_PER_DIGIT, PIXELS_PER_DIGIT);

    computeDigits(buf, (value - digit) / 10, currentPosition + 1);
  }
}
