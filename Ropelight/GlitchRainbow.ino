
void GlitchRainbow () {
    for(int j=0; j<2000; j++) {
      rainbow();
      AddGlitchToRainbow();
      delay(0);
    }
}


struct Glitch {
  short chanceSwitch;
  int startPixel;
  short glitchLengh;
  uint32_t glitchCol;
  short flashLength;
  Glitch() {
  }
  Glitch(short aChanceSwitch, int aStartPixel, short aGlitchLengh, uint32_t aCol, short aFlashLength) : 
  chanceSwitch(aChanceSwitch), startPixel(aStartPixel), glitchLengh(aGlitchLengh), glitchCol(aCol), flashLength(aFlashLength) { 
  }
};

Glitch glitches[20];

void AddGlitchToRainbow()
{
  for(short j=0; j<20; j++)
  {
    if (totalTicks % 50 == 0)
    {
      glitches[j].chanceSwitch = random(8);
      glitches[j].startPixel = random(numLeds - 30);
      glitches[j].glitchLengh = random(60);
      glitches[j].glitchCol = goodRandomColour();
      glitches[j].flashLength = random(8,40);
    }    
    if ((totalTicks % 50 < glitches[j].flashLength) && glitches[j].chanceSwitch == 1)
    {
      for(int pixNum=glitches[j].startPixel; pixNum<(glitches[j].startPixel + glitches[j].glitchLengh); pixNum++)
        setLedByInt(pixNum, glitches[j].glitchCol);
    }
  }
}

