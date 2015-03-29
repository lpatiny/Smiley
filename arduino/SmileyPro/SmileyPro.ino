/*
  Blink
 Turns on an LED on for one second, then off for one second, repeatedly.
 
 This example code is in the public domain.
 */

#define NBPIN 25 // nb pin + 1

void setup() {                
  for (int i=0; i<NBPIN; i++) {
    pinMode(i, OUTPUT);     
  }
   pinMode(A6, INPUT); // will be used to change program
}

void loop() {
  smiley3();
}


void smiley1() {
  allumebouche();
  eteinbouche();
}

void smiley2() {
  boucheallumee();
}

void smiley3() {
  for (int i=7; i>=1; i--) {
    randomTout(10, i*50);
  }
  randomTout(100, 50);
  allumebouche();
  clinDeil();
  eteintTout();
}

void smiley4() {
 allumeTout(); 
}



