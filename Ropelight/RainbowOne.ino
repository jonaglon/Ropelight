
void RainbowOne() {
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

void rainbowFast() {
  int j;
  int pixNum;
  
  // forward
  j = 255 - ((totalTicks*2) % 255);
  for(pixNum=0; pixNum<numLeds; pixNum++) {
    setLedByInt(pixNum, Wheel((pixNum+j) & 255));
  }
}


void rainbowBackward() {
  int pixNum;
  
  for(pixNum=0; pixNum<numLeds; pixNum++) {
    setLedByInt(pixNum, Wheel((pixNum+(totalTicks % 256)) & 255));
  }

}


