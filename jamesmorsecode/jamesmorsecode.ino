const int BUFFER_SIZE = 100;
char buf[BUFFER_SIZE];
char input;

const int dashPause = 600;
const int dotPause = 200;
const int spacePause = 800;
const int shortPause = 200;
const int mediumPause = 600;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  if (Serial.available() > 0) {

    int strLength = Serial.readBytesUntil('\n', buf, BUFFER_SIZE);

    for (int i = 0; i < strLength; i++) {
      input = buf[i];
      if (input == 'a' || input == 'A') {
        A();
      }
      if (input == 'b' || input == 'B') {
        B();
      }
      if (input == 'c' || input == 'C') {
        C();
      }
      if (input == 'd' || input == 'D') {
        D();
      }
      if (input == 'e' || input == 'E') {
        E();
      }
      if (input == 'f' || input == 'F') {
        eff();
      }
      if (input == 'g' || input == 'G') {
        G();
      }
      if (input == 'h' || input == 'H') {
        H();
      }
      if (input == 'i' || input == 'I') {
        I();
      }
      if (input == 'j' || input == 'J') {
        J();
      }
      if (input == 'k' || input == 'K') {
        K();
      }
      if (input == 'l' || input == 'L') {
        L();
      }
      if (input == 'm' || input == 'M') {
        M();
      }
      if (input == 'n' || input == 'N') {
        N();
      }
      if (input == 'o' || input == 'O') {
        O();
      }
      if (input == 'p' || input == 'P') {
        P();
      }
      if (input == 'q' || input == 'Q') {
        Q();
      }
      if (input == 'r' || input == 'R') {
        R();
      }
      if (input == 's' || input == 'S') {
        S();
      }
      if (input == 't' || input == 'T') {
        T();
      }
      if (input == 'u' || input == 'U') {
        U();
      }
      if (input == 'v' || input == 'V') {
        V();
      }
      if (input == 'w' || input == 'W') {
        W();
      }
      if (input == 'x' || input == 'X') {
        X();
      }
      if (input == 'y' || input == 'Y') {
        Y();
      }
      if (input == 'z' || input == 'Z') {
        Z();
      }
      if (input == ' ') {
        Space();
      }

      //etc... do the whole dang old alphabet like this
    }
  }
}


void Dot() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotPause);
  digitalWrite(LED_BUILTIN, LOW);
  delay(shortPause);
}

void Dash() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dashPause);
  digitalWrite(LED_BUILTIN, LOW);
  delay(shortPause);
}

void A() {
  Dot();
  Dash();
  delay(mediumPause);
}

void B() {
  Dash();
  Dot();
  Dot();
  Dot();
  delay(mediumPause);
}

void C() {
  Dash();
  Dot();
  Dash();
  Dot();
  delay(mediumPause);
}

void D() {
  Dash();
  Dot();
  Dot();
  delay(mediumPause);
}

void E() {
  Dot();
  delay(mediumPause);
}

void eff() {
  Dot();
  Dot();
  Dash();
  Dot();
  delay(mediumPause);
}

void G() {
  Dash();
  Dash();
  Dot();
  delay(mediumPause);
}

void H() {
  Dot();
  Dot();
  Dot();
  Dot();
  delay(mediumPause);
}

void I() {
  Dot();
  Dot();
}

void J() {
  Dot();
  Dash();
  Dash();
  Dash();
  delay(mediumPause);
}

void K() {
  Dash();
  Dot();
  Dash();
  delay(mediumPause);
}

void L() {
  Dot();
  Dash();
  Dot();
  Dot();
  delay(mediumPause);
}

void M() {
  Dash();
  Dash();
  delay(mediumPause);
}

void N() {
  Dash();
  Dot();
  delay(mediumPause);
}

void O() {
  Dash();
  Dash();
  Dash();
  delay(mediumPause);
}

void P() {
  Dot();
  Dash();
  Dash();
  Dot();
  delay(mediumPause);
}

void Q() {
  Dash();
  Dash();
  Dot();
  Dash();
  delay(mediumPause);
}

void R() {
  Dot();
  Dash();
  Dot();
  delay(mediumPause);
}

void S() {
  Dot();
  Dot();
  Dot();
  delay(mediumPause);
}

void T() {
  Dash();
  delay(mediumPause);
}

void U() {
  Dot();
  Dot();
  Dash();
  delay(mediumPause);
}

void V() {
  Dot();
  Dot();
  Dot();
  Dash();
  delay(mediumPause);
}

void W() {
  Dot();
  Dash();
  Dash();
  delay(mediumPause);
}

void X() {
  Dash();
  Dot();
  Dot();
  Dash();
  delay(mediumPause);
}

void Y() {
  Dash();
  Dot();
  Dash();
  Dash();
  delay(mediumPause);
}

void Z() {
  Dash();
  Dash();
  Dot();
  Dot();
  delay(mediumPause);
}

void Space() {
  delay(spacePause);
}