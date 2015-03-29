


void boucheallumee() {
  digitalWrite(22,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(7,HIGH);
}

void allumebouche() {
  digitalWrite(22,HIGH);
  delay(500);
  digitalWrite(9,HIGH);
  digitalWrite(11,HIGH);
  delay(500);
  digitalWrite(5,HIGH);
  digitalWrite(7,HIGH);
  delay(500);
}

void eteinbouche() {
  delay(500);
  digitalWrite(22,LOW);
  delay(500);
  digitalWrite(9,LOW);
  digitalWrite(11,LOW);
  delay(500);
  digitalWrite(5,LOW);
  digitalWrite(7,LOW);
  delay(500);


}

byte bouche[]={
  5,6,7,8,9,10,11,12,19,22,23};
void crazyBouche() {
  for (int j=100; j>=0; j--) {
    int maLed=bouche[random(11)];
    digitalWrite(maLed, HIGH);
    delay(j);
    digitalWrite(maLed, LOW);
  } 

}




