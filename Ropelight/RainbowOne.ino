
void RainbowOne() {
  
    int delayTime = random(16, 24);
 
    for(int j=0; j<2000; j++) {
      rainbow(20 - delayTime);
      incrementTotalTicks();
      LEDS.show();
      delay(delayTime);
    } 
}


void rainbow(double speedFactor) {
  int j;
  int pixNum;
  
  int tachoPosition = totalTicks;

  if (speedFactor < 0) {
    speedFactor = sqrt (speedFactor * speedFactor);
    j = (tachoPosition % (int)(256 / speedFactor)) * speedFactor;
    for(pixNum=0; pixNum<numLeds; pixNum++) {
      setLedByInt(pixNum, Wheel((pixNum+j) & 255));
    }
  }
  else {
    // forward
    j = 256 - ((tachoPosition % (int)(256 / speedFactor)) * speedFactor);
    for(pixNum=0; pixNum<numLeds; pixNum++) {
      setLedByInt(pixNum, Wheel((pixNum+j) & 255));
    }
  }
}


