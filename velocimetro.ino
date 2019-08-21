#include <Servo.h>

#define POTENCIOMETRO_PIN A0
#define SERVO_PIN         8

Servo servo;

void setup() {
  servo.attach(SERVO_PIN);
}

void loop() {  
  int valor = map(analogRead(POTENCIOMETRO_PIN), 0, 1023, 0, 180);
  servo.write(valor);
  delay(5);
}
