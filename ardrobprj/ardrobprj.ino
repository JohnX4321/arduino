#include<Servo.h>

Servo esc;

#define lw1 4
#define lw2 5
#define rw1 2
#define rw2 3
#define prop 8
#define btx 1
#define brx 0


void setup() {
  // put your setup code here, to run once:
pinMode(lw1,OUTPUT);
pinMode(lw2,OUTPUT);
pinMode(rw1,OUTPUT);
pinMode(rw2,OUTPUT);
pinMode(brx,INPUT);
pinMode(btx,OUTPUT);
pinMode(prop,OUTPUT);

esc.attach(prop);

esc.writeMicroseconds(1000);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

int val;

val=analogRead(A0);

val=map(val,o,1023,1000,2000);

esc.writeMicroseconds(val);
  digitalRead(brx);
  if(brx=='W')
  {
    digitalWrite(lw1,1);
    digitalWrite(lw2,0);
    digitalWrite(rw1,1);
    digitalWrite(rw2,0);
    digitalWrite(prop,1);
   }
  else if(brx=='S')
  {
    digitalWrite(lw1,0);
    digitalWrite(lw2,1);
    digitalWrite(rw1,0);
    digitalWrite(rw2,1);
  }
  else if(brx=='A')
  {
    digitalWrite(lw1,0);
    digitalWrite(lw2,0);
    digitalWrite(rw1,1);
    digitalWrite(rw2,0);
  }
  else if(brx=='D')
  {
    digitalWrite(lw1,1);
    digitalWrite(lw2,0);
    digitalWrite(rw1,0);
    digitalWrite(rw2,0);
  }
  else
  {
    digitalWrite(lw1,0);
    digitalWrite(lw2,0);
    digitalWrite(rw1,0);
    digitalWrite(rw2,0);
  }
}
