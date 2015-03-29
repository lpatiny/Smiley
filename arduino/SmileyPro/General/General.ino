void eteintTout() {
  for (byte i=0; i<NBPIN; i++) {
    digitalWrite(i, LOW);
  } 
}

void allumeTout() {
  for (byte i=0; i<NBPIN; i++) {
    digitalWrite(i, HIGH);
  } 
}

void randomTout(int numberOfTimes, int waitTime) {
  for (int i=0; i<numberOfTimes; i++) {
    byte maLed=random(NBPIN);
    digitalWrite(maLed, HIGH);
    delay(waitTime);
    digitalWrite(maLed, LOW);
  } 
}





