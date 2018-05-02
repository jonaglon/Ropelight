
void RainbowTwo() {
  int delayTime = 20; // random(4);
  if (delayTime == 0) {
    rainbowCycle(0);
  } else if (delayTime == 1) {
    rainbowCycle(0);
  } else if (delayTime == 2) {
    rainbowCycle(20);
  } else if (delayTime == 3) {
    rainbowCycle(50);
  }
}


// Slightly different, this makes the rainbow equally distributed throughout
void rainbowCycle(uint8_t wait) {
  short i, j;

  for(j=0; j<1500; j++) {
    for(i=0; i < numLeds; i++) {
      int pixelColor = j;
      //if (j > 256)
        //pixelColor = 256 - (j - 256);
      setLedByInt(i, Wheel(((i * pixelColor / numLeds) + pixelColor) & 255));
    }
    endCycleShowLeds();
    delay(wait);
  }
}

