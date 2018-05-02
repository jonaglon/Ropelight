
//// Night rider moving colour play code
uint8_t currentBarWheelColour1 = 0;
uint8_t currentBarWheelColour2 = 63;
uint8_t currentBarWheelColour3 = 127;
uint8_t currentBarWheelColour4 = 190;
//byte currentBackgroundWheelColour = 127;

void SinusoidalDisco() {
  for(int j=0; j<1000; j++) {
    sinusoidalDiscoPattern();
    LEDS.show();
    delay(25);
    totalTicks++;
  }
}

void sinusoidalDiscoPattern() {
  uint16_t width = 300;
  float angle = (totalTicks % 6283) / 35.0f; 
  int nextPos = (width / 2 * sin (angle)) + (numLeds / 2);

  for(short j=0; j<numLeds; j++)
    rgbLeds[j] = Color(0,0,0);

  for (int x=0; x<4; x++) {
    showBarAt((x*300) + nextPos - 360, Wheel(getNextBarWheelColour1()), 4);  
    showBarAt((x*300) + nextPos - 330, Wheel(getNextBarWheelColour2()), 4);  
    showBarAt((x*300) + nextPos - 300, Wheel(getNextBarWheelColour3()), 4);  
    showBarAt((x*300) + nextPos - 270, Wheel(getNextBarWheelColour4()), 4);  
    showBarAt((x*300) + nextPos - 240, Wheel(getNextBarWheelColour1()), 4);  
    showBarAt((x*300) + nextPos - 210, Wheel(getNextBarWheelColour2()), 4);  
    showBarAt((x*300) + nextPos - 180, Wheel(getNextBarWheelColour3()), 4);  
    showBarAt((x*300) + nextPos - 150, Wheel(getNextBarWheelColour4()), 4);  
    showBarAt((x*300) + nextPos - 120, Wheel(getNextBarWheelColour1()), 4);  
    showBarAt((x*300) + nextPos - 90, Wheel(getNextBarWheelColour2()), 4);  
    showBarAt((x*300) + nextPos - 60, Wheel(getNextBarWheelColour3()), 4);  
    showBarAt((x*300) + nextPos - 30, Wheel(getNextBarWheelColour4()), 4);  
    showBarAt((x*300) + nextPos, Wheel(getNextBarWheelColour1()), 4);  
    showBarAt((x*300) + nextPos + 30, Wheel(getNextBarWheelColour2()), 4);  
    showBarAt((x*300) + nextPos + 60, Wheel(getNextBarWheelColour3()), 4);  
    showBarAt((x*300) + nextPos + 90, Wheel(getNextBarWheelColour4()), 4);  
    showBarAt((x*300) + nextPos + 120, Wheel(getNextBarWheelColour1()), 4);  
    showBarAt((x*300) + nextPos + 150, Wheel(getNextBarWheelColour2()), 4);  
    showBarAt((x*300) + nextPos + 180, Wheel(getNextBarWheelColour3()), 4);  
    showBarAt((x*300) + nextPos + 210, Wheel(getNextBarWheelColour4()), 4);  
    showBarAt((x*300) + nextPos + 240, Wheel(getNextBarWheelColour1()), 4);  
    showBarAt((x*300) + nextPos + 270, Wheel(getNextBarWheelColour2()), 4);  
    showBarAt((x*300) + nextPos + 300, Wheel(getNextBarWheelColour3()), 4);  
    showBarAt((x*300) + nextPos + 330, Wheel(getNextBarWheelColour4()), 4);  
    showBarAt((x*300) + nextPos + 360, Wheel(getNextBarWheelColour1()), 4);  
  }
}

void showBarAt(int i, uint32_t barColour, int barWidth)
{
  for (int x=1; x<barWidth; x++) {
    setLedByInt(i-x, barColour);
  }
  setLedByInt( i, barColour);
  for (int y=1; y<barWidth; y++) {
    setLedByInt(i+y, barColour);
  }
}



uint8_t getNextBarWheelColour1() {
  if (totalTicks % 4 == 0)
    currentBarWheelColour1++;

  if (currentBarWheelColour1 > 255)
    currentBarWheelColour1 = 0;

  return currentBarWheelColour1;
}

short getNextBarWheelColour2()
{
  if (totalTicks % 4 == 0)
    currentBarWheelColour2++;

  if (currentBarWheelColour2 > 255)
    currentBarWheelColour2 = 0;

  return currentBarWheelColour2;
}

short getNextBarWheelColour3()
{
  if (totalTicks % 4 == 0)
    currentBarWheelColour3++;

  if (currentBarWheelColour3 > 255)
    currentBarWheelColour3 = 0;

  return currentBarWheelColour3;
}

short getNextBarWheelColour4()
{
  if (totalTicks % 4 == 0)
    currentBarWheelColour4++;

  if (currentBarWheelColour4 > 255)
    currentBarWheelColour4 = 0;

  return currentBarWheelColour4;
}

