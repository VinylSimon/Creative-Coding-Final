#include <Adafruit_CircuitPlayground.h>

bool leftButtonPressed;
bool rightButtonPressed;
int incomingData;

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {
  leftButtonPressed = CircuitPlayground.leftButton();
  rightButtonPressed = CircuitPlayground.rightButton();

  //Serial.print("Left Button: ");
  if (leftButtonPressed) {
    Serial.print(3);
    CircuitPlayground.clearPixels();
  } else {
    if (rightButtonPressed){
      Serial.print(4);
     } else {
     Serial.print(0);
    }
  }

  Serial.println();

  incomingData = Serial.read();

  
   if (incomingData == '5') {
  CircuitPlayground.setPixelColor(0,255,255,0);
  CircuitPlayground.setPixelColor(1,255,255,0);
  CircuitPlayground.setPixelColor(2,255,255,0);
  CircuitPlayground.setPixelColor(3,255,255,0);
  CircuitPlayground.setPixelColor(4,255,255,0);
  CircuitPlayground.setPixelColor(5,255,255,0);
  CircuitPlayground.setPixelColor(6,255,255,0);
  CircuitPlayground.setPixelColor(7,255,255,0);
  CircuitPlayground.setPixelColor(8,255,255,0);
  CircuitPlayground.setPixelColor(9,255,255,0);
  }

  if (incomingData == '6') {
  CircuitPlayground.clearPixels();
  }

   if (incomingData == '9') {

  CircuitPlayground.setPixelColor(0,255,0,0);
  CircuitPlayground.setPixelColor(1,255,127,0);
  CircuitPlayground.setPixelColor(2,255,255,0);
  CircuitPlayground.setPixelColor(3,0,255,0);
  CircuitPlayground.setPixelColor(4,0,255,127);
  CircuitPlayground.setPixelColor(5,0,255,255);
  CircuitPlayground.setPixelColor(6,0,0,255);
  CircuitPlayground.setPixelColor(7,127,0,255);
  CircuitPlayground.setPixelColor(8,255,0,255);
  CircuitPlayground.setPixelColor(9,255,0,127);

//BARS 1-2
  CircuitPlayground.playTone(196, 250);
  CircuitPlayground.playTone(246, 250);
  CircuitPlayground.playTone(277, 305);
  CircuitPlayground.playTone(329, 250);
  CircuitPlayground.playTone(277, 250);

  CircuitPlayground.playTone(196, 250);
  CircuitPlayground.playTone(246, 250);
  CircuitPlayground.playTone(277, 305);
  CircuitPlayground.playTone(329, 250);
  CircuitPlayground.playTone(277, 250);

  //BARS 2-4
  CircuitPlayground.playTone(146, 250);
  CircuitPlayground.playTone(185, 250);
  CircuitPlayground.playTone(246, 305);
  CircuitPlayground.playTone(329, 250);
  CircuitPlayground.playTone(277, 250);
 
  CircuitPlayground.playTone(146, 250);
  CircuitPlayground.playTone(185, 250);
  CircuitPlayground.playTone(246, 305);
  CircuitPlayground.playTone(329, 250);
  CircuitPlayground.playTone(277, 250);
  
  //BARS 4-6
  CircuitPlayground.playTone(196, 250);
  CircuitPlayground.playTone(246, 250);
  CircuitPlayground.playTone(277, 305);
  CircuitPlayground.playTone(329, 250);
  CircuitPlayground.playTone(277, 250);

  CircuitPlayground.playTone(196, 250);
  CircuitPlayground.playTone(246, 250);
  CircuitPlayground.playTone(277, 305);
  CircuitPlayground.playTone(369, 250);
  CircuitPlayground.playTone(277, 250);

  //BARS 6-8
  CircuitPlayground.playTone(146, 250);
  CircuitPlayground.playTone(185, 250);
  CircuitPlayground.playTone(246, 305);
  CircuitPlayground.playTone(329, 250);
  CircuitPlayground.playTone(277, 250);
 
  CircuitPlayground.playTone(146, 250);
  CircuitPlayground.playTone(185, 250);
  CircuitPlayground.playTone(246, 305);
  CircuitPlayground.playTone(329, 250);
  CircuitPlayground.playTone(277, 250);
  delay(50);
 }
   if (incomingData == '8') {

  CircuitPlayground.setPixelColor(0,0,0,255);
  CircuitPlayground.setPixelColor(1,0,0,255);
  CircuitPlayground.setPixelColor(2,0,0,255);
  CircuitPlayground.setPixelColor(3,0,0,255);
  CircuitPlayground.setPixelColor(4,0,0,255);
  CircuitPlayground.setPixelColor(5,0,0,255);
  CircuitPlayground.setPixelColor(6,0,0,255);
  CircuitPlayground.setPixelColor(7,0,0,255);
  CircuitPlayground.setPixelColor(8,0,0,255);
  CircuitPlayground.setPixelColor(9,0,0,255);

   //BARS 1-2
  CircuitPlayground.playTone(174,1900);
  
  //BARS 2-4
  CircuitPlayground.playTone(130,2000);

  //BARS 4-6
  CircuitPlayground.playTone(174,1000);
  CircuitPlayground.playTone(246,500);
  CircuitPlayground.playTone(196,500);

  //BARS 6-8
 CircuitPlayground.playTone(110,2000);
delay(50);
}

  delay(100);
}