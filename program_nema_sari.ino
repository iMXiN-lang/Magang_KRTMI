#include <Servo.h>
Servo myServo;
int pinServo = 11;
int muter = 1;

#define dir 48
#define step 7
#define enable 6

void setup() {
  myServo.attach(11); 
  pinMode(dir, OUTPUT);
  pinMode(enable, OUTPUT);
  pinMode(step, OUTPUT);

  digitalWrite(enable, LOW); // enable on
}

void loop() {
	while(muter <= 10){
  		for(int i = 0; i < 180; i++) 
  		{ 
   		myServo.write(i); 
   		delay(10); 
  		}
  		for(int i = 180; i >=1; i--) 
  		{
   		myServo.write(i); 
   		delay(10); 
  		}
      muter++;
   	}

  digitalWrite(dir, LOW); // buat setel arahnya
  for(int i = 0; i <= 8000; i++) { // 90 derajat
    digitalWrite(step, HIGH); //high searah jarum jam
    delayMicroseconds(200); //low kebalikan searah jarum jam
    digitalWrite(step, LOW);
    delayMicroseconds(200);
  }
  delay(500);
  digitalWrite(dir, HIGH); //high = searah jarum jam
  for(int i = 0; i <= 4000; i++) { // 45 derajat
    digitalWrite(step, HIGH);
    delayMicroseconds(200);
    digitalWrite(step, LOW);
    delayMicroseconds(200);
  }
}
