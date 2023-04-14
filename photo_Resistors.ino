int sensor1 = A0;
int sensor2 = A1;
int sensor3 = A2;
int sensor4 = A3;
int sensor5 = A4;
int sensor6 = A5;
int sensor7 = A6;
int sensor8 = A7;

int pixel1;
int pixel2;
int pixel3;
int pixel4;
int pixel5;
int pixel6;
int pixel7;
int pixel8;

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

  for (int i = 0; i < 7; i++) {
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

      int pixel1 = map(sensor1, 0, SENSE, 0, 255);
      int pixel2 = map(sensor2, 0, SENSE, 0, 255);
      int pixel3 = map(sensor3, 0, SENSE, 0, 255);
      int pixel4 = map(sensor4, 0, SENSE, 0, 255);
      int pixel5 = map(sensor5, 0, SENSE, 0, 255);
      int pixel6 = map(sensor6, 0, SENSE, 0, 255);
      int pixel7 = map(sensor7, 0, SENSE, 0, 255);
      int pixel8 = map(sensor8, 0, SENSE, 0, 255);
      
      Serial.println(pixel1);
      Serial.println(pixel2);
      Serial.println(pixel3);
      Serial.println(pixel4);
      Serial.println(pixel5);
      Serial.println(pixel6);
      Serial.println(pixel7);
      Serial.println(pixel8);
  }

}
