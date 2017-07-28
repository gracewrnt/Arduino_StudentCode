typedef void (*Show)();
int segmentA = A0;
int segmentB = A1;
int segmentC = A2;
int segmentD = A3;
int segmentE = A4;
int segmentF = A5;
int segmentG = 13;
int digit[] = {8, 9, 10, 11} ;

void setup() {
 pinMode(segmentA, OUTPUT);
 pinMode(segmentB, OUTPUT);
 pinMode(segmentC, OUTPUT);
 pinMode(segmentD, OUTPUT);
 pinMode(segmentE, OUTPUT);
 pinMode(segmentF, OUTPUT);
 pinMode(segmentG, OUTPUT);
 pinMode(digit[0], OUTPUT);
 pinMode(digit[1], OUTPUT);
 pinMode(digit[2], OUTPUT);
 pinMode(digit[3], OUTPUT);

}
void lowAll() {
 digitalWrite(segmentA, LOW);
 digitalWrite(segmentB, LOW);
 digitalWrite(segmentC, LOW);
 digitalWrite(segmentD, LOW);
 digitalWrite(segmentE, LOW);
 digitalWrite(segmentF, LOW);
 digitalWrite(segmentG, LOW);
}
void highAll() {
 digitalWrite(segmentA, HIGH);
 digitalWrite(segmentB, HIGH);
 digitalWrite(segmentC, HIGH);
 digitalWrite(segmentD, HIGH);
 digitalWrite(segmentE, HIGH);
 digitalWrite(segmentF, HIGH);
 digitalWrite(segmentG, HIGH);
}
void Num0() {
 highAll();
 digitalWrite(segmentG, LOW);
}
void Num1() {
 lowAll();
 digitalWrite(segmentB, HIGH);
 digitalWrite(segmentC, HIGH);
}
void Num2() {
 highAll();
 digitalWrite(segmentC, LOW);
 digitalWrite(segmentF, LOW);
}

void Num3() {
 highAll();
 digitalWrite(segmentE, LOW);
 digitalWrite(segmentF, LOW);
}

void Num4() {
 highAll();
 digitalWrite(segmentA, LOW);
 digitalWrite(segmentD, LOW);
 digitalWrite(segmentE, LOW);
}

void Num5() {
 highAll();
 digitalWrite(segmentB, LOW);
 digitalWrite(segmentE, LOW);
}

void Num6() {
 highAll();
 digitalWrite(segmentB, LOW);
}
void Num7() {
 lowAll();
 digitalWrite(segmentA, HIGH);
 digitalWrite(segmentB, HIGH);
 digitalWrite(segmentC, HIGH);
}
void Num8() {
 highAll();
}
void Num9() {
 highAll();
 digitalWrite(segmentE, LOW);
}

Show showNum[20] = {lowAll, lowAll, lowAll, Num5, Num9, Num0, Num1, Num1, Num2, Num0, Num1, lowAll, lowAll, lowAll, lowAll};

void digitLow() {
 digitalWrite(digit[0], LOW);
 digitalWrite(digit[1], LOW);
 digitalWrite(digit[2], LOW);
 digitalWrite(digit[3], LOW);
}

void loop() {
 for (int i = 0 ; i < 14 ; i++) {

   for (int j = 0 ; j <= 25 ; j++) {
     digitalWrite(digit[0], HIGH);
     showNum[i]();
     delay(4);  digitLow();

     digitalWrite(digit[1], HIGH);
     showNum[i + 1]();
     delay(4);  digitLow();

     digitalWrite(digit[2], HIGH);
     showNum[i + 2]();
     delay(4);  digitLow();

     digitalWrite(digit[3], HIGH);
     showNum[i + 3]();
     delay(4);  digitLow();   }}}

