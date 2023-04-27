int sensor1 = 0;
int sensor2 = 0;
int sensor3 = 0;
int sensor4 = 0;
int sensor5 = 0;
int sensor6 = 0;
int sensor7 = 0;
int sensor8 = 0;
int sensor9 = 0;
int sensor10 = 0;
int sensor11 = 0;
int sensor12 = 0;

int pixel1;
int pixel2;
int pixel3;
int pixel4;
int pixel5;
int pixel6;
int pixel7;
int pixel8;
int pixel9;
int pixel10;
int pixel11;
int pixel12;

int A = 3; // Corresponds to a 0b001 binary for most of the multiplexer
int B = 4; // Corresponds to a 0b010 binary for most of the multiplexer
int C = 5; // Corresponds to a 0b100 binary for most of the multiplexer

 int SENSE = 1023;

void setup() {
  Serial.begin(9600);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);

  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
}

void loop() {

  for (int i = 0; i < 8; i++) {
      if (i == 0) {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
      } else if (i == 1) {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
      } else if (i == 2) {
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
      } else if (i == 3) {
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
      } else if (i == 4) {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
      } else if (i == 5) {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
      } else if (i == 6) {
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
      } else if (i == 7) {
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
      }

      int sensor1 = analogRead(A0);
      int sensor2 = analogRead(A1);
      int sensor3 = analogRead(A2);
      int sensor4 = analogRead(A3);
      int sensor5 = analogRead(A4);
      int sensor6 = analogRead(A5);
      int sensor7 = analogRead(A6);
      int sensor8 = analogRead(A7);
      int sensor9 = analogRead(A8);
      int sensor10 = analogRead(A9);
      int sensor11 = analogRead(A10);
      int sensor12 = analogRead(A11);

      int pixel1 = map(sensor1, 0, SENSE, 0, 255);
      int pixel2 = map(sensor2, 0, SENSE, 0, 255);
      int pixel3 = map(sensor3, 0, SENSE, 0, 255);
      int pixel4 = map(sensor4, 0, SENSE, 0, 255);
      int pixel5 = map(sensor5, 0, SENSE, 0, 255);
      int pixel6 = map(sensor6, 0, SENSE, 0, 255);
      int pixel7 = map(sensor7, 0, SENSE, 0, 255);
      int pixel8 = map(sensor8, 0, SENSE, 0, 255);
      int pixel9 = map(sensor9, 0, SENSE, 0, 255);
      int pixel10 = map(sensor10, 0, SENSE, 0, 255);
      int pixel11 = map(sensor11, 0, SENSE, 0, 255);
      int pixel12 = map(sensor12, 0, SENSE, 0, 255);
      
      Serial.print(pixel1);
      Serial.print(", ");
      Serial.print(pixel2);
      Serial.print(", ");
      Serial.print(pixel3);
      Serial.print(", ");
      Serial.print(pixel4);
      Serial.print(", ");
      Serial.print(pixel5);
      Serial.print(", ");
      Serial.print(pixel6);
      Serial.print(", ");
      Serial.print(pixel7);
      Serial.print(", ");
      Serial.print(pixel8);
      Serial.print(", ");
      Serial.print(pixel9);
      Serial.print(", ");
      Serial.print(pixel10);
      Serial.print(", ");
      Serial.print(pixel11);
      Serial.print(", ");
      Serial.print(pixel12);
  }
  Serial.println(";");
}
