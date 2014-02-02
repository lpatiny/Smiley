


void boucheallumee() {
  digitalWrite(10,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(21,HIGH);
}

void allumebouche() {
  digitalWrite(10,HIGH);
  delay(500);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  delay(500);
  digitalWrite(21,HIGH);
  delay(500);
}

void eteinbouche() {
  delay(500);
  digitalWrite(21,LOW);
  delay(500);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  delay(500);
  digitalWrite(10,LOW);
  delay(500);


}

byte bouche[]={
  5,6,7,8,9,10,11,12,19,20,21};
void crazyBouche() {
  for (int j=100; j>=0; j--) {
    int maLed=bouche[random(11)];
    digitalWrite(maLed, HIGH);
    delay(j);
    digitalWrite(maLed, LOW);
  } 

  digitalWrite(10, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(21, HIGH);
}



