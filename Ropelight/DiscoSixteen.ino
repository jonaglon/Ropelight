
uint32_t sixteenColours[16];
short sixteenthInterval = numLeds / 16;    
short beatChangeVar = 0;
short drumBeatTimer = 0;

void DiscoSixteen() {
  int delayTime;
  int delayRnd = random(3);
  if (delayRnd == 0) {
    delayTime = 7;
  } else if (delayRnd == 1) {
    delayTime = 15;
  } else if (delayRnd == 2) {
    delayTime = 25;
  }
  
  for (int count = 0; count < 1000; count ++) {
    discoBackgroundOne();
    LEDS.show();
    incrementDrumBeat(delayTime);
    incrementTotalTicks();
  }
}


void incrementDrumBeat(int delayTime)
{
  if (totalTicks%delayTime == 0)
  {
    drumBeatTimer ++;
    if (drumBeatTimer == 16)
      drumBeatTimer = 0;
  }  
}


void discoBackgroundOne()
{
  for (int count = 0; count < numLeds; count ++)
    setLedByInt(count,0);
    
  if (drumBeatTimer != beatChangeVar)
  {
      sixteenColours[0] = goodRandomColour();
      sixteenColours[1] = goodRandomColour();
      sixteenColours[2] = goodRandomColour();
      sixteenColours[3] = goodRandomColour();
      sixteenColours[4] = goodRandomColour();
      sixteenColours[5] = goodRandomColour();
      sixteenColours[6] = goodRandomColour();
      sixteenColours[7] = goodRandomColour();
      sixteenColours[8] = goodRandomColour();
      sixteenColours[9] = goodRandomColour();
      sixteenColours[10] = goodRandomColour();
      sixteenColours[11] = goodRandomColour();
      sixteenColours[12] = goodRandomColour();
      sixteenColours[13] = goodRandomColour();
      sixteenColours[14] = goodRandomColour();
      sixteenColours[15] = goodRandomColour();
    
    if (random(2) == 1) {
      uint32_t randomColour = goodRandomColour();
      sixteenColours[0] = randomColour;
      sixteenColours[1] = randomColour;
      sixteenColours[2] = randomColour;
      sixteenColours[3] = randomColour;
    } 
    if (random(3) == 1) {
      uint32_t randomColour = goodRandomColour();
      sixteenColours[4] = randomColour;
      sixteenColours[5] = randomColour;
      sixteenColours[6] = randomColour;
      sixteenColours[7] = randomColour;
    } 
    if (random(2) == 1) {
      uint32_t randomColour = goodRandomColour();
      sixteenColours[8] = randomColour;
      sixteenColours[9] = randomColour;
      sixteenColours[10] = randomColour;
      sixteenColours[11] = randomColour;
    } 
    if (random(3) == 1) {
      uint32_t randomColour = goodRandomColour();
      sixteenColours[12] = randomColour;
      sixteenColours[13] = randomColour;
      sixteenColours[14] = randomColour;
      sixteenColours[15] = randomColour;
    }
    
    beatChangeVar = drumBeatTimer; 
  }
    
  for(short pixNum=0; pixNum<numLeds; pixNum++) 
  {  

    for(short sixteenths=0; sixteenths<17; sixteenths++) 
    {  
      if (pixNum >= (sixteenthInterval * sixteenths) && pixNum < (sixteenthInterval * (sixteenths + 1))) {      
        setLedByInt(pixNum,sixteenColours[sixteenths]);
      }
    }
  }
  
}



