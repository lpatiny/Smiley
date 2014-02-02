void eteintTout() {
  for (byte i=0; i<22; i++) {
    digitalWrite(i, LOW);
  } 
}

void allumeTout() {
  for (byte i=0; i<22; i++) {
    digitalWrite(i, HIGH);
  } 
}

void randomTout(int numberOfTimes, int waitTime) {
  for (int i=0; i<numberOfTimes; i++) {
    byte maLed=random(22);
    digitalWrite(maLed, HIGH);
    delay(waitTime);
    digitalWrite(maLed, LOW);
  } 
}





