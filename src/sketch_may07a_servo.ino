#include <Servo.h>
Servo s = Servo();

void setup() {
  // put your setup code here, to run once:
 
  s.attach(8);
}

void loop() {
  // put your main code here, to run repeatedly:

  s.write(00);
  delay(1000);
  
  s.write(90);
  delay(1000);
  
  s.write(180);
  delay(1000);
  
}
