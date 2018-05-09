void setup() {
  Serial.begin(115200);
  pinMode(39, OUTPUT);//motor1A
  pinMode(41, OUTPUT);//motor1B
  pinMode(43, OUTPUT);//motor2A
  pinMode(45, OUTPUT);//motot2B
}

void loop() {
  digitalWrite(41, LOW);
  digitalWrite(43, LOW);
  digitalWrite(39, LOW);
  digitalWrite(45, LOW);

  int angle = 0;
  if (Serial.available()) {

    int what = (Serial.read() - '0');

    


    if (what == 1) {
      digitalWrite(39, HIGH);// forward
      digitalWrite(43, HIGH);
      delay(500);
      digitalWrite(39, LOW);
      digitalWrite(43, LOW);
      Serial.println("forward");
    }
    else if (what == 2) {// reverse
      digitalWrite(41, HIGH);
      digitalWrite(45, HIGH);
      delay(500);
      digitalWrite(41, LOW);
      digitalWrite(45, LOW);
      Serial.println("reverse");
    }
    else if (what == 3) {//left
      digitalWrite(39, HIGH);
      delay(500);
      digitalWrite(39, LOW);
      Serial.println("move left");
    }
    else if (what == 4) {//right
      digitalWrite(43, HIGH);
      delay(500);
      digitalWrite(43, LOW);
      Serial.println("move right");
    }
    else { //stop
      digitalWrite(41, LOW);
      digitalWrite(43, LOW);
      digitalWrite(39, LOW);
      digitalWrite(45, LOW);

      Serial.println("Stopped");
    }
  }

  //Serial.println("Done, bro!");
}

