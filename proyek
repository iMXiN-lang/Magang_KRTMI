// Pin motor 1
#define REN_1  1
#define LEN_1  2
#define RPWM_1  3
#define LPWM_1  4

// Pin motor 2
#define REN_2  7
#define LEN_2  8
#define RPWM_2  9
#define LPWM_2  10

// Pin motor 3
#define REN_3  13
#define LEN_3  14
#define RPWM_3  15
#define LPWM_3  16

// Pin motor 4
#define REN_4  19
#define LEN_4  20
#define RPWM_4  21
#define LPWM_4  22

int kecepatan_awal = 0;
int kecepatan_akhir = 255;
int waktu_gas = 50;  
int waktu_rem = 50;  

void setup() {
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

void roda1(int dir, int kecepatan) {
  if (dir == 1) {
    analogWrite(RPWM_1, kecepatan);
    analogWrite(LPWM_1, 0);
  }
  else {
    analogWrite(RPWM_1, 0);
    analogWrite(LPWM_1, kecepatan);
  }
}

void roda2(int dir, int kecepatan) {
  if (dir == 1) {
    analogWrite(RPWM_2, kecepatan);
    analogWrite(LPWM_2, 0);
  } else {
    analogWrite(RPWM_2, 0);
    analogWrite(LPWM_2, kecepatan);
  }
}

void roda3(int dir, int kecepatan) {
  if (dir == 1) {
    analogWrite(RPWM_3, kecepatan);
    analogWrite(LPWM_3, 0);
  } else {
    analogWrite(RPWM_3, 0);
    analogWrite(LPWM_3, kecepatan);
  }
}

void roda4(int dir, int kecepatan) {
  if (dir == 1) {
    analogWrite(RPWM_4, kecepatan);
    analogWrite(LPWM_4, 0);
  } else {
    analogWrite(RPWM_4, 0);
    analogWrite(LPWM_4, kecepatan);
  }
}

// Fungsi akselerasi (gas)
void akselerasi(int kecepatan_akhir) {
  for (int speed = kecepatan_awal; speed <= kecepatan_akhir; speed++) {
    roda1(0, kecepatan);
    roda2(1, kecepatan);
    roda3(1, kecepatan);
    roda4(0, kecepatan);
    delay(waktu_gas);
  }
}

// Fungsi deselerasi (rem)
void deselerasi(int kecepatan_tertinggi) {
  for (int speed = kecepatan_tertinggi; speed >= kecepatan_awal; speed--) {
    roda1(0, kecepatan);
    roda2(1, kecepatan);
    roda3(1, kecepatan);
    roda4(0, kecepatan);
    delay(waktu_rem);
  }
}

void maju(int kecepatan) {
  akselerasi(kecepatan);
}

void mundur(int kecepatan) {
  roda1(1, kecepatan);
  roda2(0, kecepatan);
  roda3(0, kecepatan);
  roda4(1, kecepatan);
}

void kanan(int speed) {
  roda1(0, speed);
  roda2(0, speed);
  roda3(1, speed);
  roda4(1, speed);
}

void kiri(int speed) {
  roda1(1, speed);
  roda2(1, speed);
  roda3(0, speed);
  roda4(0, speed);
}

void berhenti() {
  deselerasi(kecepatan_akhir);
}

void loop() {
  maju(kecepatan_akhir);
  delay(2000); 
  berhenti();
  delay(1000); 

  mundur(kecepatan_akhir);
  delay(2000); 
  berhenti();
  delay(1000); 

  kanan(kecepatan_akhir);
  delay(2000);  
  berhenti();
  delay(1000);

  kiri(kecepatan_akhir);
  delay(2000);
  berhenti();
  delay(1000);
}
