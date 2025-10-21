const int pinIR1 = 6;
const int pinIR2 = 7;
const int pinIR3 = 8;
const int pinIR4 = 9;
const int pinIR5 = 10;
const int pinIR6 = 11;
const int pinIR7 = 40;
const int pinIR8 = 41;
const int pinMotor1cw = 2;
const int pinMotor1ccw = 3;
const int pinMotor2ccw = 4;
const int pinMotor2cw = 5;
const int Ena1 = 12;
const int Ena2 = 13;
int IRvalue1 = 0;
int IRvalue2 = 0;
int IRvalue3 = 0;
int IRvalue4 = 0;
int IRvalue5 = 0;
int IRvalue6 = 0;
int IRvalue7 = 0;
int IRvalue8 = 0;
int x = 1;
int y = 1;
int i = 1;

void setup()
{ Serial.begin(9600);
  pinMode(pinIR1,INPUT);
  pinMode(pinIR2,INPUT);
  pinMode(pinIR3,INPUT);
  pinMode(pinIR4,INPUT);
  pinMode(pinIR5,INPUT);
  pinMode(pinIR6,INPUT);
  pinMode(pinIR7,INPUT);
  pinMode(pinIR8,INPUT);
  pinMode(pinMotor1cw,OUTPUT);
  pinMode(pinMotor2ccw,OUTPUT);
  pinMode(pinMotor1ccw,OUTPUT);
  pinMode(pinMotor2cw,OUTPUT);
  pinMode(22,OUTPUT);
  pinMode(24,OUTPUT);
  pinMode(26,OUTPUT);
  pinMode(28,OUTPUT);
  pinMode(30,OUTPUT);
  pinMode(32,OUTPUT);
  pinMode(34,OUTPUT);
  pinMode(36,OUTPUT);
  pinMode(23,OUTPUT);
  pinMode(25,OUTPUT);
  pinMode(27,OUTPUT);
  pinMode(29,OUTPUT);
  pinMode(31,OUTPUT);
  pinMode(33,OUTPUT);
  pinMode(35,OUTPUT);
  pinMode(37,OUTPUT);
  digitalWrite(22,HIGH);
  digitalWrite(24,HIGH);
  digitalWrite(26,HIGH);
  digitalWrite(28,HIGH);
  digitalWrite(30,HIGH);
  digitalWrite(32,HIGH);
  digitalWrite(34,HIGH);
  digitalWrite(36,HIGH);
}

void loop()
{
   int IRvalue1 = digitalRead(pinIR1);
   int IRvalue2 = digitalRead(pinIR2);
   int IRvalue3 = digitalRead(pinIR3);
   int IRvalue4 = digitalRead(pinIR4);
   int IRvalue5 = digitalRead(pinIR5);
   int IRvalue6 = digitalRead(pinIR6);
   int IRvalue7 = digitalRead(pinIR7);
   int IRvalue8 = digitalRead(pinIR8);
   
   if (IRvalue1 == 1)
   {digitalWrite(pinMotor1cw, HIGH);
   digitalWrite(pinMotor2ccw, HIGH);
   i=0;} 
   if (IRvalue8 == 1)
   {digitalWrite(pinMotor1cw, HIGH);
   digitalWrite(pinMotor2ccw, HIGH);
   i=0;}
   if (IRvalue2 == 1)
   {digitalWrite(pinMotor1cw, HIGH);
   i=0;}
   if (IRvalue3 == 1)
   {digitalWrite(pinMotor2ccw, HIGH);
   i=0;}
   if (IRvalue4 == 1)
   {digitalWrite(pinMotor2cw, HIGH);
   digitalWrite(pinMotor1cw, HIGH);
   digitalWrite(pinMotor2ccw, LOW);
   digitalWrite(pinMotor1ccw, LOW);
   delay(20);
   i=0;}
   if (IRvalue6 == 1)
   {digitalWrite(pinMotor2cw, HIGH);
   digitalWrite(pinMotor1cw, HIGH);
   digitalWrite(pinMotor2ccw, LOW);
   digitalWrite(pinMotor1ccw, LOW);
   delay(50);
   i=0;}
   if (IRvalue5 == 1)
   {digitalWrite(pinMotor2ccw, HIGH);
   digitalWrite(pinMotor1ccw, HIGH);
   digitalWrite(pinMotor1cw, LOW);
   digitalWrite(pinMotor2cw, LOW);
   delay(20);
   i=0;}
   if (IRvalue7 == 1)
   {digitalWrite(pinMotor2ccw, HIGH);
   digitalWrite(pinMotor1ccw, HIGH);
   digitalWrite(pinMotor1cw, LOW);
   digitalWrite(pinMotor2cw, LOW);
   delay(50);
   i=0;}
   if(i<100)
   {
   if ((IRvalue1 == 0)&&(IRvalue2 == 0)&&(IRvalue3 == 0)&&(IRvalue4 == 0)&&(IRvalue5 == 0)&&(IRvalue6 == 0)&&(IRvalue7 == 0)&&(IRvalue8 == 0))
   {digitalWrite(pinMotor1ccw, HIGH);
   digitalWrite(pinMotor2cw, HIGH);
   i=i+1;
   delay(10);}}
   delay(1);

   digitalWrite(pinMotor2ccw, LOW);
   digitalWrite(pinMotor2cw, LOW);
   digitalWrite(pinMotor1ccw, LOW);
   digitalWrite(pinMotor1cw, LOW);
   Serial.print(i);
    }