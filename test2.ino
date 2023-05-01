int sensor;
int pixel;
bool but = 1;

int A = 3; // Corresponds to a 0b001 binary for most of the multiplexer
int B = 4; // Corresponds to a 0b010 binary for most of the multiplexer
int C = 5; // Corresponds to a 0b100 binary for most of the multiplexer
int EN = 2;
int SENSE = 1023;

void setup() {
  Serial.begin(9600);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(EN, OUTPUT);

  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(EN, LOW);
}

void loop() {
  while (but == 1) {
    //////////////////////////////////////////////row 1/////////////////////////////////////////////////////////
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

      int sensor = analogRead(A0);

      int pixel = map(sensor, 0, SENSE, 0, 255);
      if (i < 7) {
        Serial.print(pixel);
        Serial.print(",");
      } else {
        Serial.print(pixel);
      }
    }
    Serial.println(";");

    ////////////////////////////////////////row2/////////////////////////////////////////////////
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

      int sensor = analogRead(A1);

      int pixel = map(sensor, 0, SENSE, 0, 255);
      if (i < 7) {
        Serial.print(pixel);
        Serial.print(",");
      } else {
        Serial.print(pixel);
      }
    }
    Serial.println(";");
    ////////////////////////////////////////row3/////////////////////////////////////////////////
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

      int sensor = analogRead(A2);

      int pixel = map(sensor, 0, SENSE, 0, 255);
      if (i < 7) {
        Serial.print(pixel);
        Serial.print(",");
      } else {
        Serial.print(pixel);
      }
    }
    Serial.println(";");
    ////////////////////////////////////////row4/////////////////////////////////////////////////
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

      int sensor = analogRead(A3);

      int pixel = map(sensor, 0, SENSE, 0, 255);
      if (i < 7) {
        Serial.print(pixel);
        Serial.print(",");
      } else {
        Serial.print(pixel);
      }
    }
    Serial.println(";");
    ////////////////////////////////////////row5/////////////////////////////////////////////////
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

      int sensor = analogRead(A4);

      int pixel = map(sensor, 0, SENSE, 0, 255);
      if (i < 7) {
        Serial.print(pixel);
        Serial.print(",");
      } else {
        Serial.print(pixel);
      }
    }
    Serial.println(";");

    ////////////////////////////////////////row6/////////////////////////////////////////////////
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

      int sensor = analogRead(A5);

      int pixel = map(sensor, 0, SENSE, 0, 255);
      if (i < 7) {
        Serial.print(pixel);
        Serial.print(",");
      } else {
        Serial.print(pixel);
      }
    }
    Serial.println(";");

    ////////////////////////////////////////row7/////////////////////////////////////////////////

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

      int sensor = analogRead(A6);

      int pixel = map(sensor, 0, SENSE, 0, 255);
      if (i < 7) {
        Serial.print(pixel);
        Serial.print(",");
      } else {
        Serial.print(pixel);
      }
    }
    Serial.println(";");
    ////////////////////////////////////////row8/////////////////////////////////////////////////

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

      int sensor = analogRead(A7);

      int pixel = map(sensor, 0, SENSE, 0, 255);
      if (i < 7) {
        Serial.print(pixel);
        Serial.print(",");
      } else {
        Serial.print(pixel);
      }
    }
    Serial.println(";");

    ////////////////////////////////////////row9/////////////////////////////////////////////////

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

      int sensor = analogRead(A8);

      int pixel = map(sensor, 0, SENSE, 0, 255);
      if (i < 7) {
        Serial.print(pixel);
        Serial.print(",");
      } else {
        Serial.print(pixel);
      }
    }
    Serial.println(";");

    ////////////////////////////////////////row10/////////////////////////////////////////////////

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

      int sensor = analogRead(A9);

      int pixel = map(sensor, 0, SENSE, 0, 255);
      if (i < 7) {
        Serial.print(pixel);
        Serial.print(",");
      } else {
        Serial.print(pixel);
      }
    }
    Serial.println(";");
    ////////////////////////////////////////row11/////////////////////////////////////////////////
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

      int sensor = analogRead(A10);

      int pixel = map(sensor, 0, SENSE, 0, 255);
      if (i < 7) {
        Serial.print(pixel);
        Serial.print(",");
      } else {
        Serial.print(pixel);
      }
    }
    Serial.println(";");
    ////////////////////////////////////////row12/////////////////////////////////////////////////
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

      int sensor = analogRead(A11);

      int pixel = map(sensor, 0, SENSE, 0, 255);
      if (i < 7) {
        Serial.print(pixel);
        Serial.print(",");
      } else {
        Serial.print(pixel);
      }
    }
    Serial.println(";");
    but = 0;

  }
}
