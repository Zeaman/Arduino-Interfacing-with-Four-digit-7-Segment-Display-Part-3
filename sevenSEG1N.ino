/**** Arduino Uno Intefaced with  4 digit Seven-Segment Display ****/
// Pin Declaration for Arduino-UNO with common Anode(5V) 7-Segment:  
int pinA = 2;           // pin-2 connected to pin-A           
int pinB = 3;           // pin-3 connected to pin-B
int pinC = 4;           // pin-4 connected to pin-C
int pinD = 5;           // pin-5 connected to pin-D
int pinE = 6;           // pin-6 connected to pin-E
int pinF = 7;           // pin-7 connected to pin-F
int pinG = 8;           // pin-8 connected to pin-G
int D1 = 9;             // Digit-1 enable pin
int D2 = 10;            // Digit-2 enable pin
int D3 = 11;            // Digit-3 enable pin
int D4 = 12;            // Digit-4 enable pin
int DP = 13;            // Decimal-point(DP) enable pin

void setup() 
{
// Set the above pins as Output 
  pinMode(pinA,OUTPUT);
  pinMode(pinB,OUTPUT);
  pinMode(pinC,OUTPUT);
  pinMode(pinD,OUTPUT);
  pinMode(pinE,OUTPUT);
  pinMode(pinF,OUTPUT);
  pinMode(pinG,OUTPUT);
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
  pinMode(D4,OUTPUT);
  pinMode(DP,OUTPUT);

}

void loop() 
{
// For common Anode 7-segment display:
  // For zero/0
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4,HIGH);
  digitalWrite(DP, HIGH);
  
  digitalWrite(pinA,LOW);
  digitalWrite(pinB,LOW);
  digitalWrite(pinC,LOW);
  digitalWrite(pinD,LOW);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,HIGH);
  delay(1);              // delay 1ms = 0.001s
  
  //FOr ONE/1
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  digitalWrite(D3,HIGH);
  digitalWrite(D4,LOW);

  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,LOW);
  digitalWrite(pinC,LOW);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
  delay(1);
  
  //For TWO/2
  digitalWrite(D1,LOW);
  digitalWrite(D2,HIGH);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  
  digitalWrite(pinA,LOW);
  digitalWrite(pinB,LOW);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,LOW);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,LOW);
  delay(1);
  
  //For THREE/3
  digitalWrite(D1,HIGH);
  digitalWrite(D2,LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  
  digitalWrite(pinA,LOW);
  digitalWrite(pinB,LOW);
  digitalWrite(pinC,LOW);
  digitalWrite(pinD,LOW);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,LOW);
  delay(1);
}
