/*
 * RGB_LED.cpp - Library for controlling RGB LED.
 * Created by FurbulousFox, December 12, 2023.
 * Released into the public domain.
 */

#include "Arduino.h" 
#include "RGB_LED.h"

 RGB_LED::RGB_LED(int pin_R, int pin_G, int pin_B)
 {
  _pin_R = pin_R;
  _pin_G = pin_G;
  _pin_B = pin_B;
 }

 void RGB_LED::begin()
 {
  	pinMode(_pin_R, OUTPUT);
	pinMode(_pin_G, OUTPUT);
	pinMode(_pin_B, OUTPUT);

	analogWrite(_pin_R, 255);
	analogWrite(_pin_G, 255);
	analogWrite(_pin_B, 255);
 }

 void RGB_LED::setColor(int R, int G, int B)
 {
  analogWrite(_pin_R, 255-R);
  analogWrite(_pin_G, 255-G);
  analogWrite(_pin_B, 255-B);
 }
