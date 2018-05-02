byte currentBarWheelColour = 0;
byte currentBackgroundWheelColour = 128;

void KnightriderStuff() {

  // (centrePos, width or movement, max iterations, delay, stepsize, resetBackground)
    showSinusoidal(45, 0, 0.02, true, false); // with nightrider bar
    //showSinusoidal(45, 0, 0.02, false); // without nightrider bar  
}

void showSinusoidal(int barWidth, int delaytime, float stepsize, boolean resetBackground, boolean doDaveColours)
{
    int nextPos;
    int x;
    byte currentBarColour;
    byte currentBackgroundColour;
    
    for (int ss = 1; ss<100+1; ss++)
    {
        float angle = 0.0;
        float angle_stepsize = stepsize;
    
        // go through all angles from 0 to 2 * PI radians
        while (angle < 2 * PI)
        {
            // calculate x, y from a vector with known length and angle
            x = (((numLeds/4) - 88) / 2) * sin (angle);
    
            nextPos = x + middlePos;
            angle += angle_stepsize;
            
            currentBarColour = getNextBarWheelColour();
            currentBackgroundColour = getNextBackgroundWheelColour();
            if (currentBarColour == currentBackgroundColour)
              return;

            for (int x=0; x<4; x++) {
              showKnightRiderBarAt((x*300)+nextPos, Wheel(currentBarColour), DarkWheel(currentBackgroundColour), barWidth, resetBackground, doDaveColours);  
            }
            delay(delaytime);
        }    
    }
}

byte getNextBarWheelColour()
{
   if (totalTicks % 4 == 0)
     currentBarWheelColour++;
     
   if (currentBarWheelColour > 255) {
     currentBarWheelColour = 0;
   }
   return currentBarWheelColour;
}

byte getNextBackgroundWheelColour()
{
   if (totalTicks % 6 == 0)
     currentBackgroundWheelColour++;
     
   if (currentBackgroundWheelColour > 255) {
     currentBackgroundWheelColour = 0;
   }
   return currentBackgroundWheelColour;
}

void showKnightRiderBarAt(int i, uint32_t barColour, uint32_t bgColour, int barWidth, boolean resetBackground, boolean doDaveColours)
{
  if (resetBackground) {
    for(uint16_t j=0; j<(numLeds/4); j++) {
      setLedByInt(j, bgColour);
    }
  }
  
  for (int x=1; x<barWidth; x++) {
    setLedByInt(i-x, barColour);
  }
  
  setLedByInt(i, barColour);
    
  for (int y=1; y<barWidth; y++) {
    setLedByInt(i+y, barColour);
  }
}
