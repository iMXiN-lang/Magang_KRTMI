// M1 ------ M2 
// |  /    \  |
// |<        >|
// |  \    /  |
// M4 ------ M3


// pin motor 1
#define REN_1 = 1;
#define LEN_1 = 2;
#define RPWM_1 = 3;
#define LPWM_1 = 4;
#define RIS_1 = 5;
#define LIS_1 = 6;
// pin motor 2
#define REN_2 = 7;
#define LEN_2 = 8;
#define RPWM_2 = 9;
#define LPWM_2 = 10;
#define RIS_2 = 11;
#define LIS_2 = 12;
// pin motor 3
#define REN_3 = 13;
#define LEN_3 = 14;
#define RPWM_3 = 15;
#define LPWM_3 = 16;
#define RIS_3 = 17;
#define LIS_3 = 18;
// pin motor 4
#define REN_4 = 19;
#define LEN_4 = 20;
#define RPWM_4 = 21;
#define LPWM_4 = 22;
#define RIS_4 = 23;
#define LIS_4 = 24;

//PWM
int A=0;
int B=255;

void setup(){
  // output pin Driver 1
  pinMode(REN_1, OUTPUT);
  pinMode(LEN_1, OUTPUT);
  pinMode(RPWM_1, OUTPUT);
  pinMode(LPWM_1, OUTPUT);
  pinMode(RIS_1, OUTPUT);
  pinMode(LIS_1, OUTPUT);
  digitalWrite(REN_1, HIGH);
  digitalWrite(LEN_1, HIGH);
  digitalWrite(RIS_1, LOW);
  digitalWrite(LIS_1, LOW);

  // output pin Driver 2
  pinMode(REN_2, OUTPUT);
  pinMode(LEN_2, OUTPUT);
  pinMode(RPWM_2, OUTPUT);
  pinMode(LPWM_2, OUTPUT);
  pinMode(RIS_2, OUTPUT);
  pinMode(LIS_2, OUTPUT);
  digitalWrite(REN_2, HIGH);
  digitalWrite(LEN_2, HIGH);
  digitalWrite(RIS_2, LOW);
  digitalWrite(LIS_2, LOW);

  // output pin Driver 3
  pinMode(REN_3, OUTPUT);
  pinMode(LEN_3, OUTPUT);
  pinMode(RPWM_3, OUTPUT);
  pinMode(LPWM_3, OUTPUT);
  pinMode(RIS_3, OUTPUT);
  pinMode(LIS_3, OUTPUT);
  digitalWrite(REN_3, HIGH);
  digitalWrite(LEN_3, HIGH);
  digitalWrite(RIS_3, LOW);
  digitalWrite(LIS_3, LOW);

  // output pin Driver 4
  pinMode(REN_4, OUTPUT);
  pinMode(LEN_4, OUTPUT);
  pinMode(RPWM_4, OUTPUT);
  pinMode(LPWM_4, OUTPUT);
  pinMode(RIS_4, OUTPUT);
  pinMode(LIS_4, OUTPUT);
  digitalWrite(REN_4, HIGH);
  digitalWrite(LEN_4, HIGH);
  digitalWrite(RIS_4, LOW);
  digitalWrite(LIS_4, LOW);
}

void loop(){
// maju
  analogWrite(RPWM_1, A);
  analogWrite(LPWM_1, B);

  analogWrite(RPWM_2, B);
  analogWrite(LPWM_2, A);

  analogWrite(RPWM_3, B);
  analogWrite(LPWM_3, A);
  
  analogWrite(RPWM_4, A);
  analogWrite(LPWM_4, B);
// mundur
  analogWrite(RPWM_1, B);
  analogWrite(LPWM_1, A);

  analogWrite(RPWM_2, A);
  analogWrite(LPWM_2, B);

  analogWrite(RPWM_3, A);
  analogWrite(LPWM_3, B);
  
  analogWrite(RPWM_4, B);
  analogWrite(LPWM_4, A);
// kanan
  analogWrite(RPWM_1, A);
  analogWrite(LPWM_1, B);

  analogWrite(RPWM_2, A);
  analogWrite(LPWM_2, B);

  analogWrite(RPWM_3, B);
  analogWrite(LPWM_3, A);
  
  analogWrite(RPWM_4, B);
  analogWrite(LPWM_4, A);
// kiri
  analogWrite(RPWM_1, B);
  analogWrite(LPWM_1, A);

  analogWrite(RPWM_2, B);
  analogWrite(LPWM_2, A);

  analogWrite(RPWM_3, A);
  analogWrite(LPWM_3, B);
  
  analogWrite(RPWM_4, A);
  analogWrite(LPWM_4, B);
// serong kanan depan
  analogWrite(RPWM_1, A);
  analogWrite(LPWM_1, B);
  
  analogWrite(RPWM_3, B);
  analogWrite(LPWM_3, A);
// serong kiri depan
  analogWrite(RPWM_2, B);
  analogWrite(LPWM_2, A);
  
  analogWrite(RPWM_4, A);
  analogWrite(LPWM_4, B);
// serong kanan belakang
  analogWrite(RPWM_2, A);
  analogWrite(LPWM_2, B);
  
  analogWrite(RPWM_4, B);
  analogWrite(LPWM_4, A);
// serong kiri belakang
  analogWrite(RPWM_1, B);
  analogWrite(LPWM_1, A);
  
  analogWrite(RPWM_3, A);
  analogWrite(LPWM_3, B);
// muter arah jarum jam
  analogWrite(RPWM_1, B);
  analogWrite(LPWM_1, A);

  analogWrite(RPWM_2, B);
  analogWrite(LPWM_2, A);

  analogWrite(RPWM_3, B);
  analogWrite(LPWM_3, A);
  
  analogWrite(RPWM_4, B);
  analogWrite(LPWM_4, A);
// muter berlawanan arah jarum jam
  analogWrite(RPWM_1, A);
  analogWrite(LPWM_1, B);

  analogWrite(RPWM_2, A);
  analogWrite(LPWM_2, B);

  analogWrite(RPWM_3, A);
  analogWrite(LPWM_3, B);
  
  analogWrite(RPWM_4, A);
  analogWrite(LPWM_4, B);


}
