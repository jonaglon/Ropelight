
  int delayTime;
  int rgbSelector;

void ShowEyes() {
  delayTime = random(0,10);
  rgbSelector = random(4);
  
  uint32_t backgroundColour;
  if (rgbSelector == 2)
    backgroundColour = Color(0,0,0);
  else
    backgroundColour = goodRandomDarkColour();

  for (int ss = 1; ss<1000; ss++) {
    showSinusoidal(192, 198, 110, backgroundColour);
    incrementTotalTicks();
    delay(delayTime);
  }
}

void showSinusoidal(int middlePos, int width, int eyeGap, uint32_t backgroundColour)
{
  int nextPos;
  int x;
    
  float angle = 0.0;

  int count314 = (totalTicks % 314);
  angle = count314 / 50.0f;

  x = width / 2 * sin (angle);

  nextPos = x + middlePos;
  
  for(int k=0; k<numLeds; k++) {
    setLedByInt(k, backgroundColour);
  }
  
  showEyesAt(nextPos+eyeGap/2);  
  showEyesAt(nextPos-eyeGap/2);  
  LEDS.show();
}

uint32_t backgroundColour(int addNum) {
  if (rgbSelector == 0) {
    return Color(0 + addNum,0,0);
  } else if (rgbSelector == 1) {
    return Color(0,0 + addNum,0);
  } else if (rgbSelector == 2) {
    return Color(0,0,0 + addNum);
  } else {
    return Color(0 + addNum,0 + addNum,0 + addNum);
  }
}

void showEyesAt(int i)
{
    setLedByInt(i-40, backgroundColour(0));
    setLedByInt(i-39, backgroundColour(1));
    setLedByInt(i-38, backgroundColour(3));
    setLedByInt(i-37, backgroundColour(3));
    setLedByInt(i-36, backgroundColour(3));
    setLedByInt(i-35, backgroundColour(7));
    setLedByInt(i-34, backgroundColour(7));
    setLedByInt(i-33, backgroundColour(7));
    setLedByInt(i-32, backgroundColour(15));
    setLedByInt(i-31, backgroundColour(15));
    setLedByInt(i-30, backgroundColour(15));
    setLedByInt(i-29, backgroundColour(15));
    setLedByInt(i-28, backgroundColour(30));
    setLedByInt(i-27, backgroundColour(30));
    setLedByInt(i-26, backgroundColour(30));
    setLedByInt(i-25, backgroundColour(30));
    setLedByInt(i-24, backgroundColour(60));
    setLedByInt(i-23, backgroundColour(60));
    setLedByInt(i-22, backgroundColour(60));
    setLedByInt(i-21, backgroundColour(60));
    setLedByInt(i-20, backgroundColour(90));
    setLedByInt(i-19, backgroundColour(90));
    setLedByInt(i-18, backgroundColour(90));
    setLedByInt(i-17, backgroundColour(90));
    setLedByInt(i-16, backgroundColour(90));
    setLedByInt(i-15, backgroundColour(130));
    setLedByInt(i-14, backgroundColour(130));
    setLedByInt(i-13, backgroundColour(130));
    setLedByInt(i-12, backgroundColour(130));
    setLedByInt(i-11, backgroundColour(130));
    setLedByInt(i-10, backgroundColour(0));
    setLedByInt(i-9, backgroundColour(0));
    setLedByInt(i-8, backgroundColour(0));
    setLedByInt(i-7, backgroundColour(0));
    setLedByInt(i-6, backgroundColour(0));        
    setLedByInt(i-5, backgroundColour(0));        
    setLedByInt(i-4, backgroundColour(0));        
    setLedByInt(i-3, backgroundColour(0));        
    setLedByInt(i-2,  backgroundColour(0));
    setLedByInt(i-1,  backgroundColour(0));
    setLedByInt(i,  backgroundColour(0));
    setLedByInt(i+1,  backgroundColour(0));
    setLedByInt(i+2,  backgroundColour(0));
    setLedByInt(i+3, backgroundColour(0));        
    setLedByInt(i+4, backgroundColour(0));        
    setLedByInt(i+5, backgroundColour(0));        
    setLedByInt(i+6, backgroundColour(0));        
    setLedByInt(i+7, backgroundColour(0));
    setLedByInt(i+8, backgroundColour(0));
    setLedByInt(i+9, backgroundColour(0));
    setLedByInt(i+10, backgroundColour(0));
    setLedByInt(i+11, backgroundColour(130));
    setLedByInt(i+12, backgroundColour(130));
    setLedByInt(i+13, backgroundColour(130));
    setLedByInt(i+14, backgroundColour(130));
    setLedByInt(i+15, backgroundColour(130));
    setLedByInt(i+16, backgroundColour(90));
    setLedByInt(i+17, backgroundColour(90));
    setLedByInt(i+18, backgroundColour(90));
    setLedByInt(i+19, backgroundColour(90));
    setLedByInt(i+20, backgroundColour(90));
    setLedByInt(i+21, backgroundColour(60));
    setLedByInt(i+22, backgroundColour(60));
    setLedByInt(i+23, backgroundColour(60));
    setLedByInt(i+24, backgroundColour(60));
    setLedByInt(i+25, backgroundColour(30));
    setLedByInt(i+26, backgroundColour(30));
    setLedByInt(i+27, backgroundColour(30));
    setLedByInt(i+28, backgroundColour(30));
    setLedByInt(i+29, backgroundColour(15));
    setLedByInt(i+30, backgroundColour(15));
    setLedByInt(i+31, backgroundColour(15));
    setLedByInt(i+32, backgroundColour(15));
    setLedByInt(i+33, backgroundColour(7));
    setLedByInt(i+34, backgroundColour(7));
    setLedByInt(i+35, backgroundColour(7));
    setLedByInt(i+36, backgroundColour(3));
    setLedByInt(i+37, backgroundColour(3));
    setLedByInt(i+38, backgroundColour(3));
    setLedByInt(i+39, backgroundColour(1));
    setLedByInt(i+40, backgroundColour(0));    
}

