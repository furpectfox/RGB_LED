/*
 * RGB_LED.h - Library for controlling RGB LED.
 * Created by FurbulousFox, December 12, 2023.
 * Released into the public domain.
 */

#ifndef RGB_LED_h
#define RGB_LED_h

#include "Arduino.h"

class RGB_LED
{
  public:
    RGB_LED(int pin_R, int pin_G, int pin_B);
    void begin();
    void setColor(int R, int G, int B);
    void setColor(String color);
  private:
    int _pin_R;
    int _pin_G;
    int _pin_B;
};

#endif
