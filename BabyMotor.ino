void setup(){
Serial.begin(115200);
pinMode(39, OUTPUT);
pinMode(41, OUTPUT);
pinMode(43, OUTPUT);
pinMode(45, OUTPUT);
}

void loop(){
if (Serial.available()) {
int what = (Serial.read() - '0');
if (what == 1){
  digitalWrite(39, HIGH);
  digitalWrite(43, HIGH);
  delay(100);
  digitalWrite(39, LOW);
  digitalWrite(43, LOW);
}
else if (what == 2){
  digitalWrite(41, HIGH);
  digitalWrite(45, HIGH);
  delay(100);
  digitalWrite(41, LOW);
  digitalWrite(45, LOW);
}
else if (what == 3){
  digitalWrite(39, HIGH);
  digitalWrite(45, HIGH);
  delay(100);
  digitalWrite(39, LOW);
  digitalWrite(45, LOW);
}
else if (what == 4){
  digitalWrite(41, HIGH);
  digitalWrite(43, HIGH);
  delay(100);
  digitalWrite(41, LOW);
  digitalWrite(43, LOW);
}
Serial.println("Done, bro!");
}
}
