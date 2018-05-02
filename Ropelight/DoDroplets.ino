
void DoDroplets() {
  showDroplets(200); 
}

void showDroplets(int length)
{
  // set bgcol for droplets effect
    for (int e = 0; e < numLeds; e++){setLedByInt(e, Color(0,0,30));}
    
    for(int it=1;it<=length;it++) 
    {
        showDroplet(30, (it+1)%20);
        showDroplet(140, (it+2)%20);
        showDroplet(7, (it+16)%20);
        showDroplet(184, (it+4)%20);
        showDroplet(342, (it+5)%20);
        showDroplet(90, (it+6)%20);
        showDroplet(103, (it+18)%20);
        showDroplet(285, (it+9)%20);
        showDroplet(60, (it+11)%20);
        showDroplet(134, (it+12)%20);
        showDroplet(310, (it+14)%20);
        showDroplet(220, (it+16)%20);
        showDroplet(199,  (it+17)%20);

        showDroplet(250, (it+18)%20);
        showDroplet(160, (it+19)%20);
        showDroplet(235, (it+3)%20);
        showDroplet(318, (it+2)%20);
        showDroplet(341, (it+12)%20);
        showDroplet(358, (it+7)%20);
        showDroplet(375, (it+11)%20);
        LEDS.show();
        delay(110);
    }
} 

void setSinglePixel(int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10,
                        int p11, int p12, int p13, int p14, int p15, int p16, int p17, int p18, int p19, int p20, int dropPos)
{
    int ColR0 = 0; int ColG0 = 0; int ColB0 = 30; int ColR1 = 0; int ColG1 = 80; int ColB1 = 0;
    if (p1==0) { setLedByInt(dropPos-10, Color(ColR0,ColG0,ColB0)); } else { setLedByInt(dropPos-10,  Color(230,230,230)); }   
    if (p2==0) { setLedByInt(dropPos-9,  Color(ColR0,ColG0,ColB0)); } else { setLedByInt(dropPos-9,  Color(ColR1,ColG1,ColB1)); }   
    if (p3==0) { setLedByInt(dropPos-8,  Color(ColR0,ColG0,ColB0)); } else { setLedByInt(dropPos-8,  Color(ColR1,ColG1,ColB1)); }   
    if (p4==0) { setLedByInt(dropPos-7,  Color(ColR0,ColG0,ColB0)); } else { setLedByInt(dropPos-7,  Color(ColR1,ColG1,ColB1)); }   
    if (p5==0) { setLedByInt(dropPos-6,  Color(ColR0,ColG0,ColB0)); } else { setLedByInt(dropPos-6,  Color(ColR1,ColG1,ColB1)); }   
    if (p6==0) { setLedByInt(dropPos-5,  Color(ColR0,ColG0,ColB0)); } else { setLedByInt(dropPos-5,  Color(ColR1,ColG1,ColB1)); }   
    if (p7==0) { setLedByInt(dropPos-4,  Color(ColR0,ColG0,ColB0)); } else { setLedByInt(dropPos-4,  Color(ColR1,ColG1,ColB1)); }   
    if (p8==0) { setLedByInt(dropPos-3,  Color(ColR0,ColG0,ColB0)); } else { setLedByInt(dropPos-3,  Color(ColR1,ColG1,ColB1)); }   
    if (p9==0) { setLedByInt(dropPos-2,  Color(ColR0,ColG0,ColB0)); } else { setLedByInt(dropPos-2,  Color(ColR1,ColG1,ColB1)); }   
    if (p10==0) { setLedByInt(dropPos-1, Color(ColR0,ColG0,ColB0)); } else { setLedByInt(dropPos-1,  Color(ColR1,ColG1,ColB1)); }   
    if (p11==0) { setLedByInt(dropPos,   Color(ColR0,ColG0,ColB0)); } else { setLedByInt(dropPos,  Color(ColR1,ColG1,ColB1)); }  
    if (p12==0) { setLedByInt(dropPos+1, Color(ColR0,ColG0,ColB0)); } else { setLedByInt(dropPos+1,  Color(ColR1,ColG1,ColB1)); }   
    if (p13==0) { setLedByInt(dropPos+2, Color(ColR0,ColG0,ColB0)); } else { setLedByInt(dropPos+2,  Color(ColR1,ColG1,ColB1)); }   
    if (p14==0) { setLedByInt(dropPos+3, Color(ColR0,ColG0,ColB0)); } else { setLedByInt(dropPos+3,  Color(ColR1,ColG1,ColB1)); }   
    if (p15==0) { setLedByInt(dropPos+4, Color(ColR0,ColG0,ColB0)); } else { setLedByInt(dropPos+4,  Color(ColR1,ColG1,ColB1)); }   
    if (p16==0) { setLedByInt(dropPos+5, Color(ColR0,ColG0,ColB0)); } else { setLedByInt(dropPos+5,  Color(ColR1,ColG1,ColB1)); }   
    if (p17==0) { setLedByInt(dropPos+6, Color(ColR0,ColG0,ColB0)); } else { setLedByInt(dropPos+6,  Color(ColR1,ColG1,ColB1)); }   
    if (p18==0) { setLedByInt(dropPos+7, Color(ColR0,ColG0,ColB0)); } else { setLedByInt(dropPos+7,  Color(ColR1,ColG1,ColB1)); }   
    if (p19==0) { setLedByInt(dropPos+8, Color(ColR0,ColG0,ColB0)); } else { setLedByInt(dropPos+8,  Color(ColR1,ColG1,ColB1)); }   
      if (p20==0) { setLedByInt(dropPos+9, Color(ColR0,ColG0,ColB0)); } else { setLedByInt(dropPos+9,  Color(230,230,230)); }   
}
 
void showDroplet(int dropPos, int iteration)
{

    if (iteration == 1) {setSinglePixel( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 , 0, 0, 0, 0, 0, 0, 0, 0, 0, dropPos );}
    if (iteration == 2) {setSinglePixel( 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, dropPos );}
    if (iteration == 3) {setSinglePixel( 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, dropPos );}
    if (iteration == 4) {setSinglePixel( 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, dropPos );}
    if (iteration == 5) {setSinglePixel( 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, dropPos );}
    if (iteration == 6) {setSinglePixel( 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, dropPos );}
    if (iteration == 7) {setSinglePixel( 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, dropPos );}
    if (iteration == 8) {setSinglePixel( 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, dropPos );}
    if (iteration == 9) {setSinglePixel( 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, dropPos );}
    if (iteration == 10){setSinglePixel( 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, dropPos );} 
    if (iteration == 11){setSinglePixel( 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, dropPos );}
    if (iteration == 12){setSinglePixel( 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, dropPos );}
    if (iteration == 13){setSinglePixel( 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, dropPos );}
    if (iteration == 14){setSinglePixel( 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, dropPos );}
    if (iteration == 15){setSinglePixel( 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, dropPos );}
    if (iteration == 16){setSinglePixel( 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, dropPos );}
    if (iteration == 17){setSinglePixel( 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, dropPos );}
    if (iteration == 18){setSinglePixel( 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, dropPos );}
    if (iteration == 19){setSinglePixel( 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, dropPos );}
    if (iteration == 20){setSinglePixel( 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, dropPos );}
}


