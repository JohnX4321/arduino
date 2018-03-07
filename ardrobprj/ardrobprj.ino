#define fwl1
#define fwl2
#define fwr1
#define fwr2
#define bwl1
#define bwl2
#define bwr1
#define bwr2
#define prop
#define btx
#define brx


void setup() {
  // put your setup code here, to run once:
pinMode(fwl1,OUTPUT);
pinMode(fwl2,OUTPUT);
pinMode(fwr1,OUTPUT);
pinMode(fwr2,OUTPUT);
pinMode(bwl1,OUTPUT);
pinMode(bwl2,OUTPUT);
pinMode(bwr1,OUTPUT);
pinMode(bwr2,OUTPUT);
pinMode(brx,INPUT);
pinMode(btx,OUTPUT);
pinMode(prop,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalRead(brx);
  if(brx=='W')
  {
    digitalWrite(fwl1,1);
    digitalWrite(fwl2,0);
    digitalWrite(fwr1,1);
    digitalWrite(fwr2,0);
    digitalWrite(bwl1,1);
    digitalWrite(bwl2,0);
    digitalWrite(bwr1,1);
    digitalWrite(bwr2,0);
    digitalWrite(prop,1);
  }
  else if(brx=='S')
  {
    digitalWrite(fwl1,0);
    digitalWrite(fwl2,1);
    digitalWrite(fwr1,0);
    digitalWrite(fwr2,1);
    digitalWrite(bwl1,0);
    digitalWrite(bwl2,1);
    digitalWrite(bwr1,0);
    digitalWrite(bwr2,1);
  }
  else if(brx=='H')
  {
    digitalWrite(fwl1,0);
    digitalWrite(fwl2,0);
    digitalWrite(fwr1,0);
    digitalWrite(fwr2,0);
    digitalWrite(bwl1,0);
    digitalWrite(bwl2,0);
    digitalWrite(bwr1,0);
    digitalWrite(bwr2,0);
  }
  else if(brx=='D')
  {
    digitalWrite(fwl1,1);
    digitalWrite(fwl2,0);
    digitalWrite(fwr1,1);
    digitalWrite(fwr2,0);
    digitalWrite(bwl1,0);
    digitalWrite(bwl2,0);
    digitalWrite(bwr1,0);
    digitalWrite(bwr2,0);
  }
  else
  {
    digitalWrite(fwl1,0);
    digitalWrite(fwl2,0);
    digitalWrite(fwr1,0);
    digitalWrite(fwr2,0);
    digitalWrite(bwl1,1);
    digitalWrite(bwl2,0);
    digitalWrite(bwr1,1);
    digitalWrite(bwr2,0);
  }
}
