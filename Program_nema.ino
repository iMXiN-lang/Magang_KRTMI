// definisiin pin
#define servo 11
#define dir 48
#define step 7
#define enable 6

void setup() {
  pinMode(dir, OUTPUT);
  pinMode(enable, OUTPUT);
  pinMode(step, OUTPUT);

  digitalWrite(enable, LOW); // enable on
}

void loop() {
  digitalWrite(dir, LOW); // buat setel arahnya
  for(int i = 0; i <= 4000; i++) {
    digitalWrite(step, HIGH);
    delayMicroseconds(200);
    digitalWrite(step, LOW);
    delayMicroseconds(200);
  }
  delay(500);
  digitalWrite(dir, HIGH);
  for(int i = 0; i <= 4000; i++) {
    digitalWrite(step, HIGH);
    delayMicroseconds(200);
    digitalWrite(step, LOW);
    delayMicroseconds(200);
  }
}
