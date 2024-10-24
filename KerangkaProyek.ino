//    M1 ------ M2 
//    |  /    \  |
//    |<        >|
//    |  \    /  |
//    M4 ------ M3


// pin motor 1
#define REN_1  23
#define LEN_1  25
#define RPWM_1  9
#define LPWM_1  8

// pin motor 2
#define REN_2  31
#define LEN_2  33
#define RPWM_2  6
#define LPWM_2  7

// pin motor 3
#define REN_3  39
#define LEN_3  41
#define RPWM_3  4
#define LPWM_3  5

// pin motor 4
#define REN_4  47
#define LEN_4  49
#define RPWM_4  2
#define LPWM_4  3


//PWM
int A=0;
int B=100;



void setup(){
  // output pin Driver 1
  pinMode(REN_1, OUTPUT);
  pinMode(LEN_1, OUTPUT);
  pinMode(RPWM_1, OUTPUT);
  pinMode(LPWM_1, OUTPUT);
  digitalWrite(REN_1, HIGH);
  digitalWrite(LEN_1, HIGH);

  // output pin Driver 2
  pinMode(REN_2, OUTPUT);
  pinMode(LEN_2, OUTPUT);
  pinMode(RPWM_2, OUTPUT);
  pinMode(LPWM_2, OUTPUT);
  digitalWrite(REN_2, HIGH);
  digitalWrite(LEN_2, HIGH);

  // output pin Driver 3
  pinMode(REN_3, OUTPUT);
  pinMode(LEN_3, OUTPUT);
  pinMode(RPWM_3, OUTPUT);
  pinMode(LPWM_3, OUTPUT);
  digitalWrite(REN_3, HIGH);
  digitalWrite(LEN_3, HIGH);

  // output pin Driver 4
  pinMode(REN_4, OUTPUT);
  pinMode(LEN_4, OUTPUT);
  pinMode(RPWM_4, OUTPUT);
  pinMode(LPWM_4, OUTPUT);
  digitalWrite(REN_4, HIGH);
  digitalWrite(LEN_4, HIGH);
}
void roda1(int n){
  //Clockwise
  if(n==1){
    analogWrite(RPWM_1, B);
    analogWrite(LPWM_1, A);
  }
  //Counter
  else{
    analogWrite(RPWM_1, A);
    analogWrite(LPWM_1, B);
  }
}

void roda2(int n){
  //Clockwise
  if(n==1){
    analogWrite(RPWM_2, B);
    analogWrite(LPWM_2, A);
  }
  //Counter
  else{
    analogWrite(RPWM_2, A);
    analogWrite(LPWM_2, B);
  }
}

void roda3(int n){
  //Clockwise
  if(n==1){
    analogWrite(RPWM_3, B);
    analogWrite(LPWM_3, A);
  }
  //Counter
  else{
    analogWrite(RPWM_3, A);
    analogWrite(LPWM_3, B);
  }
}

void roda4(int n){
  //Clockwise
  if(n==1){
    analogWrite(RPWM_4, B);
    analogWrite(LPWM_4, A);
  }
  //Counter
  else{
    analogWrite(RPWM_4, A);
    analogWrite(LPWM_4, B);
  }

}

void berhenti(){
  analogWrite(RPWM_1, B);
  analogWrite(LPWM_1, B);
  analogWrite(RPWM_2, B);
  analogWrite(LPWM_2, B);
  analogWrite(RPWM_3, B);
  analogWrite(LPWM_3, B);
  analogWrite(RPWM_4, B);
  analogWrite(LPWM_4, B);
}
void maju(){
  roda1(0);
  roda2(1);
  roda3(1);
  roda4(0);
}
void mundur(){
  roda1(1);
  roda2(0);
  roda3(0);
  roda4(1);
}
void kanan(){
  roda1(0);
  roda2(0);
  roda3(1);
  roda4(1);
}
void kiri(){
  roda1(1);
  roda2(1);
  roda3(0);
  roda4(0);
}
void SerongKananDepan(){
  roda1(0);
  roda3(1);
}
void SerongKiriDepan(){
  roda2(1);
  roda4(0);
}
void SerongKananBelakang(){
  roda2(0);
  roda4(1);
}
void SerongKiriBelakang(){
  roda1(1);
  roda3(0);
}
void MuterKanan(){
  roda1(0);
  roda2(0);
  roda3(0);
  roda4(0);
}
void MuterKiri(){
  roda1(1);
  roda2(1);
  roda3(1);
  roda4(1);
}
void loop(){
  maju();
  delay(1000);
  mundur();
  delay(1000);
}

// void maju(){
// // maju
//   analogWrite(RPWM_1, A);
//   analogWrite(LPWM_1, B);

//   analogWrite(RPWM_2, B);
//   analogWrite(LPWM_2, A);

//   analogWrite(RPWM_3, B);
//   analogWrite(LPWM_3, A);
  
//   analogWrite(RPWM_4, A);
//   analogWrite(LPWM_4, B);

// }

// void mundur(){
// // mundur
//   analogWrite(RPWM_1, B);
//   analogWrite(LPWM_1, A);

//   analogWrite(RPWM_2, A);
//   analogWrite(LPWM_2, B);

//   analogWrite(RPWM_3, A);
//   analogWrite(LPWM_3, B);
  
//   analogWrite(RPWM_4, B);
//   analogWrite(LPWM_4, A);

// }

// void kanan(){
// // kanan
//   analogWrite(RPWM_1, A);
//   analogWrite(LPWM_1, B);

//   analogWrite(RPWM_2, A);
//   analogWrite(LPWM_2, B);

//   analogWrite(RPWM_3, B);
//   analogWrite(LPWM_3, A);
  
//   analogWrite(RPWM_4, B);
//   analogWrite(LPWM_4, A);

// }

// void kiri(){
// // kiri
//   analogWrite(RPWM_1, B);
//   analogWrite(LPWM_1, A);

//   analogWrite(RPWM_2, B);
//   analogWrite(LPWM_2, A);

//   analogWrite(RPWM_3, A);
//   analogWrite(LPWM_3, B);
  
//   analogWrite(RPWM_4, A);
//   analogWrite(LPWM_4, B);

// }

// void SerongDepanKanan(){
// // serong kanan depan
//   analogWrite(RPWM_1, A);
//   analogWrite(LPWM_1, B);
  
//   analogWrite(RPWM_3, B);
//   analogWrite(LPWM_3, A);

// }

// void SerongDepanKiri(){
// // serong kiri depan
//   analogWrite(RPWM_2, B);
//   analogWrite(LPWM_2, A);
  
//   analogWrite(RPWM_4, A);
//   analogWrite(LPWM_4, B);

// }

// void SerongBelakangKanan(){
// // serong kanan belakang
//   analogWrite(RPWM_2, A);
//   analogWrite(LPWM_2, B);
  
//   analogWrite(RPWM_4, B);
//   analogWrite(LPWM_4, A);

// }

// void SerongBelakangKiri(){
// // serong kiri belakang
//   analogWrite(RPWM_1, B);
//   analogWrite(LPWM_1, A);
  
//   analogWrite(RPWM_3, A);
//   analogWrite(LPWM_3, B);

// }

// void BerputarClockwise(){
// // muter arah jarum jam
//   analogWrite(RPWM_1, B);
//   analogWrite(LPWM_1, A);

//   analogWrite(RPWM_2, B);
//   analogWrite(LPWM_2, A);

//   analogWrite(RPWM_3, B);
//   analogWrite(LPWM_3, A);
  
//   analogWrite(RPWM_4, B);
//   analogWrite(LPWM_4, A);

// }

// void BerputarCounterClockwise(){
// // muter berlawanan arah jarum jam
//   analogWrite(RPWM_1, A);
//   analogWrite(LPWM_1, B);

//   analogWrite(RPWM_2, A);
//   analogWrite(LPWM_2, B);

//   analogWrite(RPWM_3, A);
//   analogWrite(LPWM_3, B);
  
//   analogWrite(RPWM_4, A);
//   analogWrite(LPWM_4, B);

// }
