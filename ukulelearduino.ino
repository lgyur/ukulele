#include <SoftwareSerial.h>

#define led_1 4
#define led_2 5
#define led_3 6
#define led_4 7
#define led_5 8
#define led_6 9
#define led_7 10
#define led_8 11
#define led_9 12
#define led_10 13
#define led_11 A0
#define led_12 A1
#define led_13 A2
#define led_14 A3
#define led_15 A4
#define led_16 A5

SoftwareSerial LED_Serial(2, 3); //TX, RX

void setup() {
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
  pinMode(led_5, OUTPUT);
  pinMode(led_6, OUTPUT);
  pinMode(led_7, OUTPUT);
  pinMode(led_8, OUTPUT);
  pinMode(led_9, OUTPUT);
  pinMode(led_10, OUTPUT);
  pinMode(led_11, OUTPUT);
  pinMode(led_12, OUTPUT);
  pinMode(led_13, OUTPUT);
  pinMode(led_14, OUTPUT);
  pinMode(led_15, OUTPUT);
  pinMode(led_16, OUTPUT);
  LED_Serial.begin(9600);
}

void loop() {
  if (LED_Serial.available()) {
  char jeon;
  jeon = LED_Serial.read();
  switch (jeon) {
    case '1':
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, LOW);
      digitalWrite(led_6, LOW);
      digitalWrite(led_7, LOW);
      digitalWrite(led_8, LOW);
      digitalWrite(led_9, LOW);
      digitalWrite(led_10, LOW);
      digitalWrite(led_11, LOW);
      digitalWrite(led_12, HIGH);
      digitalWrite(led_13, LOW);
      digitalWrite(led_14, LOW);
      digitalWrite(led_15, LOW);
      digitalWrite(led_16, LOW);
      break;

    case '2':
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, HIGH);
      digitalWrite(led_6, LOW);
      digitalWrite(led_7, LOW);
      digitalWrite(led_8, LOW);
      digitalWrite(led_9, LOW);
      digitalWrite(led_10, LOW);
      digitalWrite(led_11, LOW);
      digitalWrite(led_12, LOW);
      digitalWrite(led_13, LOW);
      digitalWrite(led_14, LOW);
      digitalWrite(led_15, LOW);
      digitalWrite(led_16, LOW);
      break;

    case '3':
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, HIGH);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, HIGH);
      digitalWrite(led_6, LOW);
      digitalWrite(led_7, LOW);
      digitalWrite(led_8, LOW);
      digitalWrite(led_9, LOW);
      digitalWrite(led_10, LOW);
      digitalWrite(led_11, LOW);
      digitalWrite(led_12, LOW);
      digitalWrite(led_13, LOW);
      digitalWrite(led_14, LOW);
      digitalWrite(led_15, LOW);
      digitalWrite(led_16, LOW);
      break;

    case '4':
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, HIGH);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, LOW);
      digitalWrite(led_6, HIGH);
      digitalWrite(led_7, LOW);
      digitalWrite(led_8, HIGH);
      digitalWrite(led_9, LOW);
      digitalWrite(led_10, LOW);
      digitalWrite(led_11, LOW);
      digitalWrite(led_12, LOW);
      digitalWrite(led_13, LOW);
      digitalWrite(led_14, LOW);
      digitalWrite(led_15, LOW);
      digitalWrite(led_16, LOW);
      break;

     case '5':
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, HIGH);
      digitalWrite(led_5, LOW);
      digitalWrite(led_6, LOW);
      digitalWrite(led_7, LOW);
      digitalWrite(led_8, LOW);
      digitalWrite(led_9, LOW);
      digitalWrite(led_10, LOW);
      digitalWrite(led_11, LOW);
      digitalWrite(led_12, LOW);
      digitalWrite(led_13, LOW);
      digitalWrite(led_14, LOW);
      digitalWrite(led_15, LOW);
      digitalWrite(led_16, LOW);
      break;

    case '6':
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, LOW);
      digitalWrite(led_6, LOW);
      digitalWrite(led_7, LOW);
      digitalWrite(led_8, LOW);
      digitalWrite(led_9, LOW);
      digitalWrite(led_10, LOW);
      digitalWrite(led_11, LOW);
      digitalWrite(led_12, LOW);
      digitalWrite(led_13, LOW);
      digitalWrite(led_14, LOW);
      digitalWrite(led_15, LOW);
      digitalWrite(led_16, LOW);
      break;

    case '7':
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, LOW);
      digitalWrite(led_6, HIGH);
      digitalWrite(led_7, LOW);
      digitalWrite(led_8, HIGH);
      digitalWrite(led_9, LOW);
      digitalWrite(led_10, LOW);
      digitalWrite(led_11, LOW);
      digitalWrite(led_12, LOW);
      digitalWrite(led_13, LOW);
      digitalWrite(led_14, LOW);
      digitalWrite(led_15, LOW);
      digitalWrite(led_16, LOW);
      break;

    case '8':
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, HIGH);
      digitalWrite(led_6, LOW);
      digitalWrite(led_7, HIGH);
      digitalWrite(led_8, LOW);
      digitalWrite(led_9, LOW);
      digitalWrite(led_10, LOW);
      digitalWrite(led_11, LOW);
      digitalWrite(led_12, LOW);
      digitalWrite(led_13, LOW);
      digitalWrite(led_14, LOW);
      digitalWrite(led_15, LOW);
      digitalWrite(led_16, LOW);
      break;

/*   case '9':
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, LOW);
      digitalWrite(led_6, HIGH);
      digitalWrite(led_7, LOW);
      digitalWrite(led_8, HIGH);
      digitalWrite(led_9, LOW);
      digitalWrite(led_10, LOW);
      digitalWrite(led_11, HIGH);
      digitalWrite(led_12, LOW);
      digitalWrite(led_13, LOW);
      digitalWrite(led_14, LOW);
      digitalWrite(led_15, LOW);
      digitalWrite(led_16, LOW);
      break;
*/
    case 'a':
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, HIGH);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, HIGH);
      digitalWrite(led_6, HIGH);
      digitalWrite(led_7, LOW);
      digitalWrite(led_8, LOW);
      digitalWrite(led_9, LOW);
      digitalWrite(led_10, LOW);
      digitalWrite(led_11, LOW);
      digitalWrite(led_12, LOW);
      digitalWrite(led_13, LOW);
      digitalWrite(led_14, LOW);
      digitalWrite(led_15, LOW);
      digitalWrite(led_16, LOW);
      break;

    case 'b':
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, HIGH);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, HIGH);
      digitalWrite(led_6, LOW);
      digitalWrite(led_7, LOW);
      digitalWrite(led_8, LOW);
      digitalWrite(led_9, LOW);
      digitalWrite(led_10, LOW);
      digitalWrite(led_11, LOW);
      digitalWrite(led_12, LOW);
      digitalWrite(led_13, LOW);
      digitalWrite(led_14, LOW);
      digitalWrite(led_15, LOW);
      digitalWrite(led_16, LOW);
      break;

    case 'c':
      digitalWrite(led_1, HIGH);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, LOW);
      digitalWrite(led_6, HIGH);
      digitalWrite(led_7, LOW);
      digitalWrite(led_8, HIGH);
      digitalWrite(led_9, LOW);
      digitalWrite(led_10, LOW);
      digitalWrite(led_11, LOW);
      digitalWrite(led_12, LOW);
      digitalWrite(led_13, LOW);
      digitalWrite(led_14, LOW);
      digitalWrite(led_15, LOW);
      digitalWrite(led_16, LOW);
      break;

    case 'd':
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, HIGH);
      digitalWrite(led_6, HIGH);
      digitalWrite(led_7, HIGH);
      digitalWrite(led_8, LOW);
      digitalWrite(led_9, LOW);
      digitalWrite(led_10, LOW);
      digitalWrite(led_11, LOW);
      digitalWrite(led_12, LOW);
      digitalWrite(led_13, LOW);
      digitalWrite(led_14, LOW);
      digitalWrite(led_15, LOW);
      digitalWrite(led_16, LOW);
      break;

    case 'e':
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, HIGH);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, LOW);
      digitalWrite(led_6, LOW);
      digitalWrite(led_7, LOW);
      digitalWrite(led_8, LOW);
      digitalWrite(led_9, LOW);
      digitalWrite(led_10, LOW);
      digitalWrite(led_11, LOW);
      digitalWrite(led_12, LOW);
      digitalWrite(led_13, LOW);
      digitalWrite(led_14, LOW);
      digitalWrite(led_15, LOW);
      digitalWrite(led_16, LOW);
      break;

    case 'f':
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, LOW);
      digitalWrite(led_6, LOW);
      digitalWrite(led_7, LOW);
      digitalWrite(led_8, HIGH);
      digitalWrite(led_9, LOW);
      digitalWrite(led_10, LOW);
      digitalWrite(led_11, LOW);
      digitalWrite(led_12, LOW);
      digitalWrite(led_13, LOW);
      digitalWrite(led_14, LOW);
      digitalWrite(led_15, LOW);
      digitalWrite(led_16, LOW);
      break;

/*    case 'g':
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, LOW);
      digitalWrite(led_6, LOW);
      digitalWrite(led_7, LOW);
      digitalWrite(led_8, HIGH);
      digitalWrite(led_9, LOW);
      digitalWrite(led_10, LOW);
      digitalWrite(led_11, HIGH);
      digitalWrite(led_12, LOW);
      digitalWrite(led_13, LOW);
      digitalWrite(led_14, HIGH);
      digitalWrite(led_15, LOW);
      digitalWrite(led_16, LOW);
      break;

    case 'h':
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, HIGH);
      digitalWrite(led_5, LOW);
      digitalWrite(led_6, HIGH);
      digitalWrite(led_7, LOW);
      digitalWrite(led_8, LOW);
      digitalWrite(led_9, LOW);
      digitalWrite(led_10, LOW);
      digitalWrite(led_11, HIGH);
      digitalWrite(led_12, LOW);
      digitalWrite(led_13, LOW);
      digitalWrite(led_14, LOW);
      digitalWrite(led_15, LOW);
      digitalWrite(led_16, LOW);
      break;
*/
    case 'i':
      digitalWrite(led_1, HIGH);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, HIGH);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, LOW);
      digitalWrite(led_6, LOW);
      digitalWrite(led_7, LOW);
      digitalWrite(led_8, LOW);
      digitalWrite(led_9, LOW);
      digitalWrite(led_10, LOW);
      digitalWrite(led_11, LOW);
      digitalWrite(led_12, HIGH);
      digitalWrite(led_13, LOW);
      digitalWrite(led_14, LOW);
      digitalWrite(led_15, LOW);
      digitalWrite(led_16, LOW);
      break;

/*    case 'j':
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, LOW);
      digitalWrite(led_6, LOW);
      digitalWrite(led_7, LOW);
      digitalWrite(led_8, LOW);
      digitalWrite(led_9, LOW);
      digitalWrite(led_10, HIGH);
      digitalWrite(led_11, HIGH);
      digitalWrite(led_12, HIGH);
      digitalWrite(led_13, LOW);
      digitalWrite(led_14, LOW);
      digitalWrite(led_15, LOW);
      digitalWrite(led_16, LOW);
      break;
*/
    case 'k':
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, LOW);
      digitalWrite(led_6, HIGH);
      digitalWrite(led_7, HIGH);
      digitalWrite(led_8, HIGH);
      digitalWrite(led_9, LOW);
      digitalWrite(led_10, LOW);
      digitalWrite(led_11, LOW);
      digitalWrite(led_12, LOW);
      digitalWrite(led_13, HIGH);
      digitalWrite(led_14, LOW);
      digitalWrite(led_15, LOW);
      digitalWrite(led_16, LOW);
      break;

/*    case 'l':
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, HIGH);
      digitalWrite(led_4, HIGH);
      digitalWrite(led_5, LOW);
      digitalWrite(led_6, HIGH);
      digitalWrite(led_7, LOW);
      digitalWrite(led_8, LOW);
      digitalWrite(led_9, HIGH);
      digitalWrite(led_10, LOW);
      digitalWrite(led_11, LOW);
      digitalWrite(led_12, LOW);
      digitalWrite(led_13, LOW);
      digitalWrite(led_14, LOW);
      digitalWrite(led_15, LOW);
      digitalWrite(led_16, LOW);
      break;
*/
    case 'm':
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, HIGH);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, LOW);
      digitalWrite(led_6, HIGH);
      digitalWrite(led_7, LOW);
      digitalWrite(led_8, LOW);
      digitalWrite(led_9, LOW);
      digitalWrite(led_10, LOW);
      digitalWrite(led_11, LOW);
      digitalWrite(led_12, HIGH);
      digitalWrite(led_13, LOW);
      digitalWrite(led_14, LOW);
      digitalWrite(led_15, LOW);
      digitalWrite(led_16, LOW);
      break;

/*    case 'n':
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, LOW);
      digitalWrite(led_6, HIGH);
      digitalWrite(led_7, LOW);
      digitalWrite(led_8, LOW);
      digitalWrite(led_9, LOW);
      digitalWrite(led_10, LOW);
      digitalWrite(led_11, HIGH);
      digitalWrite(led_12, HIGH);
      digitalWrite(led_13, LOW);
      digitalWrite(led_14, LOW);
      digitalWrite(led_15, LOW);
      digitalWrite(led_16, LOW);
      break;
*/
    case 'o':
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, HIGH);
      digitalWrite(led_6, LOW);
      digitalWrite(led_7, HIGH);
      digitalWrite(led_8, LOW);
      digitalWrite(led_9, LOW);
      digitalWrite(led_10, HIGH);
      digitalWrite(led_11, LOW);
      digitalWrite(led_12, LOW);
      digitalWrite(led_13, LOW);
      digitalWrite(led_14, LOW);
      digitalWrite(led_15, LOW);
      digitalWrite(led_16, LOW);
      break;

    case 'p':
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, HIGH);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, HIGH);
      digitalWrite(led_6, LOW);
      digitalWrite(led_7, HIGH);
      digitalWrite(led_8, LOW);
      digitalWrite(led_9, LOW);
      digitalWrite(led_10, LOW);
      digitalWrite(led_11, LOW);
      digitalWrite(led_12, LOW);
      digitalWrite(led_13, LOW);
      digitalWrite(led_14, LOW);
      digitalWrite(led_15, LOW);
      digitalWrite(led_16, LOW);
      break;
  
    }
  }
}