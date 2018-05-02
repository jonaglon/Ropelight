 /*____                    _      _       _     _       
 |  __ \                  | |    (_)     | |   | |      
 | |__) |___  _ __   ___  | |     _  __ _| |__ | |_ ___ 
 |  _  // _ \| '_ \ / _ \ | |    | |/ _` | '_ \| __/ __|
 | | \ \ (_) | |_) |  __/ | |____| | (_| | | | | |_\__ \
 |_|  \_\___/| .__/ \___| |______|_|\__, |_| |_|\__|___/
             | |                     __/ |              
             |_|                    |___/            */   
             
#include<FastLED.h>

// todo delete ?
const int middlePos = 300;
long totalTicks;
int currentBarWidth;
byte currentBarWheelColour;
byte currentBackgroundWheelColour;

// new
const int numLeds = 1200; // 960;
CRGB rgbLeds[numLeds];

// LED Intensity
int ledIntensity = 50;
byte wheelR;
byte wheelG;
byte wheelB;

void setup() {
  
  // Debug
  Serial.begin(56000);
  
  randomSeed(analogRead(0));
  pinMode(6, OUTPUT); // signey

  // ? todo 
  totalTicks = 0;
  currentBarWheelColour = 0;
  currentBackgroundWheelColour = 128;
  

  LEDS.addLeds<NEOPIXEL, 7>(rgbLeds, numLeds); // Hardcoded to ports:25,26,27,28,14,15
  LEDS.setBrightness(128); // 128 good max, 255 actual /max
  
}

void loopTest() {
  // Turn the first led red for 1 second
  for(int p=0; p<2; p++)
    rgbLeds[p] = CRGB::Red; 
  FastLED.show();
  delay(1000);

  // Set the first led back to black for 1 second
  for(int p=0; p<2; p++)
    rgbLeds[p] = CRGB::Black;
  FastLED.show();
  delay(1000);
}

void loop() {    
  mainLoop();
}

void incrementTotalTicks() {
totalTicks++;
}

