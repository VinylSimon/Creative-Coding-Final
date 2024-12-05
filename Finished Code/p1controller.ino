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
    Serial.print(1);
    CircuitPlayground.clearPixels();
  } else {
    if (rightButtonPressed){
      Serial.print(2);
     } else {
     Serial.print(0);
    }
  }
  Serial.println();

  incomingData = Serial.read();

     if (incomingData == '6') {
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

  if (incomingData == '5') {
  CircuitPlayground.clearPixels();
  }


   if (incomingData == '8') {

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
  CircuitPlayground.playTone(261, 125);
  CircuitPlayground.playTone(329, 125);
  CircuitPlayground.playTone(392, 125);
  CircuitPlayground.playTone(440, 125);
  CircuitPlayground.playTone(493, 250);
  CircuitPlayground.playTone(261, 125);
  CircuitPlayground.playTone(329, 125);
  CircuitPlayground.playTone(392, 125);
  CircuitPlayground.playTone(440, 125);
  CircuitPlayground.playTone(493, 380);
  CircuitPlayground.playTone(440, 350);

//BARS 2-4
  CircuitPlayground.playTone(261, 125);
  CircuitPlayground.playTone(329, 125);
  CircuitPlayground.playTone(392, 125);
  CircuitPlayground.playTone(440, 125);
  CircuitPlayground.playTone(493, 250);
  CircuitPlayground.playTone(261, 125);
  CircuitPlayground.playTone(329, 125);
  CircuitPlayground.playTone(392, 125);
  CircuitPlayground.playTone(440, 125);
  CircuitPlayground.playTone(493, 380);
  CircuitPlayground.playTone(440, 350);

//BARS 4-6
  CircuitPlayground.playTone(293, 125);
  CircuitPlayground.playTone(349, 125);
  CircuitPlayground.playTone(440, 125);
  CircuitPlayground.playTone(493, 125);
  CircuitPlayground.playTone(587, 250);
  CircuitPlayground.playTone(293, 125);
  CircuitPlayground.playTone(349, 125);
  CircuitPlayground.playTone(440, 125);
  CircuitPlayground.playTone(493, 125);
  CircuitPlayground.playTone(659, 380);
  CircuitPlayground.playTone(587, 350);
 
//BARS 6-8
  CircuitPlayground.playTone(246, 125);
  CircuitPlayground.playTone(329, 125);
  CircuitPlayground.playTone(392, 125);
  CircuitPlayground.playTone(493, 125);
  CircuitPlayground.playTone(587, 250);
  CircuitPlayground.playTone(220, 125);
  CircuitPlayground.playTone(329, 125);
  CircuitPlayground.playTone(440, 125);
  CircuitPlayground.playTone(493, 125);
  CircuitPlayground.playTone(659, 380);
  CircuitPlayground.playTone(587, 350);
  delay(50);
 }

   if (incomingData == '9') {
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
  CircuitPlayground.playTone(98, 1950);
  CircuitPlayground.playTone(138, 330);
  CircuitPlayground.playTone(110, 330);

  //BARS 2-4
  CircuitPlayground.playTone(92, 1950);
  CircuitPlayground.playTone(138, 330);
  CircuitPlayground.playTone(110, 330);

  //BARS 4-6
  CircuitPlayground.playTone(98, 1950);
  CircuitPlayground.playTone(138, 330);
  CircuitPlayground.playTone(110, 330);

  //BARS 6-8
  CircuitPlayground.playTone(73, 1950);
  CircuitPlayground.playTone(73, 330);
  CircuitPlayground.playTone(73, 330);
  delay(50);
}

  delay(100);
}