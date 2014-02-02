void clinDeil() {
  digitalWrite(15,HIGH);
  digitalWrite(17,HIGH);
  digitalWrite(18,HIGH);

  digitalWrite(1,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  delay(3000);
  digitalWrite(1,LOW);
  digitalWrite(3,LOW);
  
  digitalWrite(0,HIGH);
  digitalWrite(2,HIGH);
  delay(500);
  digitalWrite(0,LOW);
  digitalWrite(2,LOW);
  digitalWrite(1,HIGH);
  digitalWrite(3,HIGH);
  delay(1000);
}

void crazy() {
  for (int j=10; j>=0; j--) {
    for (int i=0; i<10; i++) {
      digitalWrite(random(14,19), HIGH);
      delay(j*10);
      digitalWrite(random(14,19), LOW);
      delay(j*10);
    }
  }
}

void crazy2() {
  for (int j=10; j>=0; j--) {
    for (int i=0; i<10; i++) {
      int maLed=random(14,19);
      digitalWrite(maLed, HIGH);
      delay(j*25);
      digitalWrite(maLed, LOW);
    }
  }
}

byte yeux[]={
  0,1,2,3,4,14,15,16,17,18};
void crazyYeux() {
  for (int j=100; j>=0; j--) {
    int maLed=yeux[random(10)];
    digitalWrite(maLed, HIGH);
    delay(j);
    digitalWrite(maLed, LOW);
  } 

  digitalWrite(1, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);

  digitalWrite(15, HIGH);
  digitalWrite(17, HIGH);
  digitalWrite(18, HIGH);
  delay(1000);
}




