 /*____                    _      _       _     _       
 |  __ \                  | |    (_)     | |   | |      
 | |__) |___  _ __   ___  | |     _  __ _| |__ | |_ ___ 
 |  _  // _ \| '_ \ / _ \ | |    | |/ _` | '_ \| __/ __|
 | | \ \ (_) | |_) |  __/ | |____| | (_| | | | | |_\__ \
 |_|  \_\___/| .__/ \___| |______|_|\__, |_| |_|\__|___/
             | |                     __/ |              
             |_|                    |___/            */   
             
#include<FastLED.h>

unsigned long totalTicks = 0;
unsigned long nextReadTick = 5;

const int numLeds = 1200;
const int middlePos = numLeds/8;

CRGB rgbLeds[numLeds];

void setup() {
  
  // Debug
  Serial.begin(9600);
  
  LEDS.addLeds<NEOPIXEL, 7>(rgbLeds, numLeds); // Hardcoded to ports:25,26,27,28,14,15
  LEDS.setBrightness(128); // 128 good max, 255 actual /max
  
}

void loop() {    
  while (1 == 1) {
    SwipeInPieces();
    NiceFades();
    SinusoidalDisco();
    RainbowOne();
    SwipeInPieces();
    RainbowTwo();
    DiscoSixteen();
    GlitchRainbow();
    KnightriderStuff();
  }
}

void endCycleShowLeds() {
  totalTicks++;
  LEDS.show();
}

