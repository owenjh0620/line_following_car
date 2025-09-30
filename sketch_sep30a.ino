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
   Serial.print(IRvalue1);
   Serial.print(IRvalue2);
   Serial.print(IRvalue3);
   Serial.print(IRvalue4);
   Serial.println(IRvalue5);
   
   while (IRvalue1 || IRvalue8 == 1 ){
   Strt();
   delay(20);
   break;}
   
    while (IRvalue2 == 1){
    L();
    delay(20);
    break;}

     while (IRvalue3 == 1){
      R();
      delay(20);
      break;}
     
   while (IRvalue4 == 1)
   {HardL();
   delay(20);
   break;}
     
   while (IRvalue6 == 1)
   {HardL();
   delay(50);
   break;}
   
   while (IRvalue5 == 1)
   {HardR();
   delay(20);
   break;}
   
   while (IRvalue7 == 1)
   {HardR();
   delay(50);
   break;}
    digitalWrite(pinMotor1cw, LOW);
    digitalWrite(pinMotor2cw, LOW);
    digitalWrite(pinMotor1ccw, LOW);
    digitalWrite(pinMotor2ccw, LOW);
  delay(10);
   }
   
   void Strt(){
   digitalWrite(pinMotor1cw, HIGH);
   digitalWrite(pinMotor2ccw, HIGH);
   }
   
   void L(){
   digitalWrite(pinMotor1cw, HIGH);}
   
   void R(){
   digitalWrite(pinMotor2ccw, HIGH);}
   
   void HardL(){
   digitalWrite(pinMotor2cw, HIGH);
   digitalWrite(pinMotor1cw, HIGH);}
   void HardR(){
   digitalWrite(pinMotor2ccw, HIGH);
   digitalWrite(pinMotor1ccw, HIGH);}
