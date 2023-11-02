#include <TM1637Display.h>
#define CLK1 A0
#define DIO1 A1
#define CLK2 A2
#define DIO2 A3
#define CLK3 A4
#define DIO3 A5
#define CLK4 14
#define DIO4 15
TM1637Display display1 = TM1637Display(CLK1, DIO1);
TM1637Display display2 = TM1637Display(CLK2, DIO2);
TM1637Display display3 = TM1637Display(CLK3, DIO3);
TM1637Display display4 = TM1637Display(CLK4, DIO4);

void setup() {
 
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
   // Clear the display:
  display2.clear();
  display1.clear();
  display3.clear();
  display4.clear();

}
void loop() 

{
  // Set the brightness:
  display1.setBrightness(7);
  display2.setBrightness(7);
  display3.setBrightness(7);
  display4.setBrightness(7);

  int i;
  for (i = 10; i>0; i--) {
    display1.showNumberDec(i);
    display2.showNumberDec(i+5);
    display3.showNumberDec(i+20);
    display4.showNumberDec(i+35);
    digitalWrite(13, HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(3,LOW);
    delay(1000);
    }
  for (i = 5; i>0; i--) {
    display1.showNumberDec(i);
    display2.showNumberDec(i);
    display3.showNumberDec(i+15);
    display4.showNumberDec(i+30);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    
    delay(1000);
  }
  for (i = 10; i>0; i--) {
    display1.showNumberDec(i+35);
    display2.showNumberDec(i);
    display3.showNumberDec(i+5);
    display4.showNumberDec(i+20);
    digitalWrite(12,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(8,LOW);
    
    delay(1000);
  }
  for (i = 5; i>0; i--) {
    display1.showNumberDec(i+30);
    display2.showNumberDec(i);
    display3.showNumberDec(i);
    display4.showNumberDec(i+15);
    digitalWrite(10,LOW);
    digitalWrite(9,HIGH);
    
    delay(1000);
  }
  for (i = 10; i>0; i--) {
    display1.showNumberDec(i+20);
    display2.showNumberDec(i+35);
    display3.showNumberDec(i);
    display4.showNumberDec(i+5);
    digitalWrite(9,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(5,LOW);
    delay(1000);
    }
  for (i = 5; i>0; i--) {
    display1.showNumberDec(i+15);
    display2.showNumberDec(i+30);
    display3.showNumberDec(i);
    display4.showNumberDec(i);
    digitalWrite(7,LOW);
    digitalWrite(6,HIGH);
    delay(1000);
  }
   for (i = 10; i>0; i--) {
    display1.showNumberDec(i+5);
    display2.showNumberDec(i+20);
    display3.showNumberDec(i+35);
    display4.showNumberDec(i);
    digitalWrite(6,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(2,LOW);
    delay(1000);
    }
  for (i = 5; i>0; i--) {
    display1.showNumberDec(i);
    display2.showNumberDec(i+15);
    display3.showNumberDec(i+30);
    display4.showNumberDec(i);
    digitalWrite(4,LOW);
    digitalWrite(3,HIGH);
    delay(1000);
  }
}