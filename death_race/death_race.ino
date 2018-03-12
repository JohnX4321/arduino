#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);



void setup() {
  // put your setup code here, to run once:
    motor1.setSpeed(2000);
    motor2.setSpeed(2000);
    Serial.begin(9600);
}

char data='';
void loop() {
  // put your main code here, to run repeatedly:
    if(Serial.available())
    {
      data=Serial.read();
      if(data=='W')
      {
        motor1.run(FORWARD);
        motor2.run(FORWARD);
      }
      else if(data=='A')
      {
        motor1.run(BACKWARD);
        motor2.run(FORWARD);
      }
      else if(data=='S')
      {
        motor1.run(BACKWARD);
        motor2.run(BACKWARD);
      }
      else if(data=='D')
      {
        motor1.run(FORWARD);
        motor2.run(BACKWARD);
      }
      else
      {
        motor1.run(RELEASE);
        motor2.run(RELEASE);
      }
    }
}
