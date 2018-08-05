
#include <SoftwareSerial.h>
/*
  Stopwatch using a 4 Digit 7 Segment LED Display

  Created by Ritik Batra, 2018
*/

// Pin 2-8 is connected to the 7 segments of the display.

int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;
int pinF = 7;
int pinG = 8;

// Control which digit is being used
int D1 = 9;
int D2 = 10;
int D3 = 11;
int D4 = 12;

int buttonPin = 14;     // the number of the pushbutton pin

// This is to keep track of the numbers
int digits[4] = { 0, 0, 0, 0 };


// the setup routine sets up all the inputs/outputs
void setup() {
  // initialize the digital pins as outputs.
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);

  //Testing purposes only:
  Serial.begin(115200);
}

// Continously update the time and each loop lasts one second.
void loop() {
  update();
  int start = millis();
  int endtime = start;
  // the while loop lasts for one second, and the delays are so short, it is not noticeable.
  while ((endtime - start) <= 1000) {
    printNum(digits[0], 1);
    delay(1);
    printNum(digits[1], 2);
    delay(1);
    printNum(digits[2], 3);
    delay(1);
    printNum(digits[3], 4);
    delay(1);
    endtime = millis();
  }
  //Testing purposes:
  //  Serial.print(digits[0]);
  //  Serial.print(digits[1]);
  //  Serial.print(digits[2]);
  //  Serial.println(digits[3]);
}

// used to increment time
void update() {
  digits[3]++;
  if (digits[3] == 10) {
    digits[3] = 0;
    digits[2]++;
  }
  if (digits[2] == 10) {
    digits[2] = 0;
    digits[1]++;
  }
  if (digits[1] == 10) {
    digits[1] = 0;
    digits[0]++;
  }
}

//Used to convert a number to its LED counterpart for a specific digit.
void printNum (int num, int digit)
{
  if (digit == 1) {
    digit1();
  }
  else if (digit == 2) {
    digit2();
  }
  else if (digit == 3) {
    digit3();
  }
  else {
    digit4();
  }

  if (num == 0) {
    num0();
  }
  else if (num == 1) {
    num1();
  }
  else if (num == 2) {
    num2();
  }
  else if (num == 3) {
    num3();
  }
  else if (num == 4) {
    num4();
  }
  else if (num == 5) {
    num5();
  }
  else if (num == 6) {
    num6();
  }
  else if (num == 7) {
    num7();
  }
  else if (num == 8) {
    num8();
  }
  else {
    num9();
  }
}

// Testing purposes:
//void off() {
//  digitalWrite(pinA, LOW);
//  digitalWrite(pinB, LOW);
//  digitalWrite(pinC, LOW);
//  digitalWrite(pinD, LOW);
//  digitalWrite(pinE, LOW);
//  digitalWrite(pinF, LOW);
//  digitalWrite(pinG, LOW);
//}

// Control which digit is being lit up

void digit1() {
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
}

void digit2() {
  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
}

void digit3() {
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
  digitalWrite(D4, HIGH);
}

void digit4() {
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, LOW);
}

// Specific instructions on how to create each number

void num0() {
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, LOW);
}

void num1() {
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
}

void num2() {
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, HIGH);
}

void num3() {
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, HIGH);
}

void num4() {
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
}

void num5() {
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
}

void num6() {
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
}

void num7() {
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
}

void num8() {
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
}

void num9() {
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
}

