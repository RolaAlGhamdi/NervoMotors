#include <Servo.h>

int position2 = 0;

int position1 = 0;

int i = 0;

int j = 0;

Servo servo_5;

Servo servo_9;

void setup()
{
  servo_5.attach(5);

  servo_9.attach(9);

}

void loop()
{
  position1 = 0;
  position2 = 0;
  for (position1 = 0; position1 <= 179; position1 += 1) {
    servo_5.write(position1);
    delay(15); // Wait for 15 millisecond(s)
    servo_9.write(position1);
    delay(15); // Wait for 15 millisecond(s)
  }
  for (position1 = 179; position1 >= 0; position1 -= 1) {
    servo_5.write(position1);
  }
  for (position2 = 179; position2 >= 0; position2 -= 1) {
    servo_9.write(position2);
  }
}