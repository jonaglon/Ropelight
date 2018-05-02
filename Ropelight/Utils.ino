// last midi details sent


/* Helper functions */
// Create a 24 bit color value from R,G,B
uint32_t Color(byte r, byte g, byte b)
{
  uint32_t c;
  c = r;
  c <<= 8;
  c |= g;
  c <<= 8;
  c |= b;
  return c;
}

void NiceFades() {
  //int fadeTime = random(0,10);
  int fadeTime = 10;
  if (fadeTime < 66) {
    for(uint16_t i=0; i<12; i++) {
      fadeToColour(fadeTime, goodRandomColour());
    }    
  } else if (fadeTime < 130) {
    for(uint16_t i=0; i<8; i++) {
      fadeToColour(fadeTime, goodRandomColour());
    }    
  } else  {
    for(uint16_t i=0; i<4; i++) {
      fadeToColour(fadeTime, goodRandomColour());
    }    
  }  
}

void fadeToColour(int delayTime, uint32_t fadeToColour) {
  for(int j=0; j<100; j++) {
    for(short i=0; i<numLeds; i++) {
      setAdjustedPixelColor(i, j / 2000.0f, fadeToColour);
    }
    endCycleShowLeds();
    delay(delayTime);
  }
}

void AllOff() {
  for(uint16_t i=0; i<numLeds; i++) {
    rgbLeds[i] = CRGB( 0, 0, 0);
  }
}

void setLedByInt(int ledNum, uint32_t color) {
  if (ledNum < 1 || ledNum > numLeds)
    return;
  
  uint8_t newR = (color >> 16),
  newG = (color >>  8),
  newB = (color);
  rgbLeds[ledNum].r = newR;
  rgbLeds[ledNum].g = newG;
  rgbLeds[ledNum].b = newB;    
}


void setAdjustedPixelColor(int pixel, float opicaityFactor, uint32_t newCol) {
  if (pixel < 1 || pixel > numLeds)
    return;
      
  uint8_t newR = (newCol >> 16),
  newG = (newCol >>  8),
  newB = (newCol);
  rgbLeds[pixel].r = rgbLeds[pixel].r - ((rgbLeds[pixel].r - newR) * opicaityFactor);
  rgbLeds[pixel].g = rgbLeds[pixel].g - ((rgbLeds[pixel].g - newG) * opicaityFactor);
  rgbLeds[pixel].b = rgbLeds[pixel].b - ((rgbLeds[pixel].b - newB) * opicaityFactor);
}

uint32_t goodRandomColour()
{
  short randomEighteen = random(18);
  switch (randomEighteen) {
      case 0:
        return Color(random(140),random(140),random(140));
      case 1:
        return Color(random(255),random(255),random(255));
      default: 
        return Wheel(random(255));
    }  
}

uint32_t goodRandomDarkColour()
{
  short randomEighteen = random(18);
  switch (randomEighteen) {
      case 0:
        return Color(random(60),random(60),random(60));
      default: 
        return DarkWheel(random(255));
    }  
}

// Fill the dots one after the other with a color
void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<numLeds; i++) {
      //setLedByInt(i, c);
      setLedByInt(i, c);
      endCycleShowLeds();
      delay(wait);
  }
}

// Input a value 0 to 255 to get a color value.
// The colours are a transition r - g - b - back to r.
uint32_t Wheel(byte WheelPos) {
  if(WheelPos < 85) {
   return Color(WheelPos * 3, 255 - WheelPos * 3, 0);
  } else if(WheelPos < 170) {
   WheelPos -= 85;
   return Color(255 - WheelPos * 3, 0, WheelPos * 3);
  } else {
   WheelPos -= 170;
   return Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
}

// Input a value 0 to 255 to get a color value.
// The colours are a transition r - g - b - back to r.
uint32_t DarkWheel(byte WheelPos) {
  if(WheelPos < 85) {
   return Color((WheelPos * 3) / 9, (255 - WheelPos * 3) / 9, 0);
  } else if(WheelPos < 170) {
   WheelPos -= 85;
   return Color((255 - WheelPos * 3) / 9, 0, (WheelPos * 3) / 9);
  } else {
   WheelPos -= 170;
   return Color(0, (WheelPos * 3) / 9, (255 - WheelPos * 3) / 9);
  }
}

