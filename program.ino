#include<AFMotor.h>

int LS = A4;
int RS = A5;

AF_DCMotor motor1(4); //sag motor
AF_DCMotor motor2(3); //sol , motor //left

int LSVAL = 0;
int RSVAL = 0;
int threshold = 500;

void setup() {

  motor1.setSpeed(155);
  motor2.setSpeed(155);

}

void loop() {

  LSVAL = analogRead(LS);
  RSVAL = analogRead(RS);

  if (LSVAL < threshold && RSVAL < threshold) {
    motor1.run(FORWARD);
    motor2.run(FORWARD);
  }

  if (LSVAL > threshold && RSVAL > threshold) {
    motor1.run(FORWARD);
    motor2.run(FORWARD);
  }

  if (LSVAL > threshold && RSVAL < threshold) {
    motor1.run(FORWARD);
    motor2.run(BACKWARD);
  }

  if (LSVAL < threshold && RSVAL > threshold) {
    motor1.run(BACKWARD);
    motor2.run(FORWARD);
  }

}
