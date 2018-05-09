
int t;
void forward(int del){
  
      digitalWrite(39, HIGH);// forward
      digitalWrite(43, HIGH);
      delay(del);
      digitalWrite(39, LOW);
      digitalWrite(43, LOW);
      Serial.println("forward");
  }
void backwards(int del){
      digitalWrite(41, HIGH);
      digitalWrite(45, HIGH);
      delay(del);
      digitalWrite(41, LOW);
      digitalWrite(45, LOW);
      Serial.println("reverse");  
  
  }
void left(int del){

      digitalWrite(39, HIGH);
      digitalWrite(45, HIGH);
      delay(del);
      digitalWrite(39, LOW);
      digitalWrite(45, LOW);
      Serial.println("move left");
      
  }
void right(int del){
      digitalWrite(43, HIGH);
      digitalWrite(41, HIGH);
      delay(del);
      digitalWrite(43, LOW);
      digitalWrite(41, LOW);
      Serial.println("move right");  
  }

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

  t = 200; // variable for time delay
  
  if (Serial.available()) {
    
    char what = Serial.read();
    Serial.write(what);
    if (what == 'f') {
     forward(t); 
      
    }
    else if (what == 'b') {// reverse
    backwards(t);
    }
    else if (what == 'l') {//left
    left(t);
    }
    else if (what == 'r') {//right
    right(t);
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





