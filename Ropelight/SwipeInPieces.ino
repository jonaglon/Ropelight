
void SwipeInPieces() {
  fadeToColour(2, goodRandomColour());
  for (int e = 0; e < 8; e++) {
    int delayTime = 10; // random(5, 40);
    doSwipe(random(4,32), goodRandomColour(), delayTime);
    delay(delayTime);
  }
}

void doSwipe(int numPieces, uint32_t swipeColour, int delaytime)
{
   for (int sipPos = 0; sipPos < numLeds/numPieces; sipPos++)
   {
       for (int e = 0; e < numPieces; e++)
       {
           setLedByInt(sipPos+(numLeds/numPieces*e), swipeColour);
       }
       endCycleShowLeds();
       delay(delaytime);       
   }
}


