const int pinIR1 = 6;
const int pinIR2 = 7;
const int pinIR3 = 8;
const int pinIR4 = 9;
const int pinIR5 = 10;
const int pinIR6 = 11;
const int pinIR7 = 12;
const int pinIR8 = 13;
const int pinMotor1cw = 2;
const int pinMotor1ccw = 3;
const int pinMotor2ccw = 4;
const int pinMotor2cw = 5;
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

void setup()
{
  Serial.begin(9600);
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
   Serial.print(IRvalue1);
   Serial.print(IRvalue2);
   Serial.print(IRvalue3);
   Serial.print(IRvalue4);
   Serial.println(IRvalue5);
   
    if (IRvalue1 == 1)
   {digitalWrite(pinMotor1cw, HIGH);
   digitalWrite(pinMotor2ccw, HIGH);}
   else 
   {if (IRvalue8 == 1)
   {digitalWrite(pinMotor1cw, HIGH);
   digitalWrite(pinMotor2ccw, HIGH);}
   else 
   {digitalWrite(pinMotor1cw, LOW);
   digitalWrite(pinMotor2ccw, LOW);}}
   if (IRvalue2 == 1)
   {digitalWrite(pinMotor1cw, HIGH);}
    if (IRvalue3 == 1)
   {digitalWrite(pinMotor2ccw, HIGH);}
   if (IRvalue4 == 1)
   {digitalWrite(pinMotor2cw, HIGH);
   digitalWrite(pinMotor1cw, HIGH);}
    else 
   {if (IRvalue6 == 1)
   {digitalWrite(pinMotor2cw, HIGH);
   digitalWrite(pinMotor1cw, HIGH);
   delay(450);}
    else 
   {digitalWrite(pinMotor2cw, LOW);}}
   if (IRvalue5 == 1)
   {digitalWrite(pinMotor2ccw, HIGH);
   digitalWrite(pinMotor1ccw, HIGH);}
   else 
   {if (IRvalue7 == 1)
   {digitalWrite(pinMotor2ccw, HIGH);
   digitalWrite(pinMotor1ccw, HIGH);
   delay(450);}
   else 
   {digitalWrite(pinMotor1ccw, LOW);}}
    
   

   delay(20);}
