#include <Adafruit_CircuitPlayground.h>

// we light one pixel at a time, this is our counter
uint8_t pixeln = 0;

void setup() {
  Serial.begin(9600);

  CircuitPlayground.begin();
}


void loop() {
  // turn on speaker
  CircuitPlayground.speaker.enable(true);

  /************* one button turns lights on, the other button plays tone according to light */
  if (CircuitPlayground.leftButton()) {
   CircuitPlayground.setPixelColor(pixeln++, CircuitPlayground.colorWheel(25 * pixeln));
    if (pixeln == 11) {
     pixeln = 0;
     CircuitPlayground.clearPixels();
   }
  }
  if (CircuitPlayground.rightButton()) {
   CircuitPlayground.playTone(500 + pixeln * 500, 100);
  }
  delay(400);
}