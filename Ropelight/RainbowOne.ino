
void RainbowOne() {
  
    // int delayTime = 20; // random(16, 24);
 
    for(int j=0; j<2000; j++) {
      rainbow();
      endCycleShowLeds();
      delay(20);
    } 
}


void rainbow() {
  int j;
  int pixNum;
  
  // forward
  j = 255 - (totalTicks % 255);
  for(pixNum=0; pixNum<numLeds; pixNum++) {
    setLedByInt(pixNum, Wheel((pixNum+j) & 255));
  }
}

void rainbowInefficient(double speedFactor) {
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


