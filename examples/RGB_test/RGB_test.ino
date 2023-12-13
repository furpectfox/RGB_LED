#include "RGB_LED.h"

/*common colors for setColor(String)
 * red
 * green
 * blue
 * white
 * black
 * yellow
 * cyan
 * magenta
 * gray
 * maroon
 * olive
 * green
 * purple
 * teal
 * navy
 */

RGB_LED led(9,10,11);

void setup() {
  // put your setup code here, to run once:
  led.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  led.setColor("red");
  delay(1000);
  led.setColor("green");
  delay(1000);
  led.setColor("blue");
  delay(1000);
  led.setColor("teal");
  delay(2000);
  led.setColor(128, 128, 128);
  delay(2000);
  led.setColor("olive");
  delay(2000);

  for(int i=0; i<3; i++)  //cycle rainbow animation 3 times with a delayTime of 5ms
  {
    led.rainbow(5);
  }
}
