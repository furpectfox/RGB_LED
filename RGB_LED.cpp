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

 void RGB_LED::setColor(String color)
 {
    color.toLowerCase();
    int R, G, B;

    if(color == "red"){R=255; G=0; B=0;}
    else if(color == "lime"){R=0; G=255; B=0;}
    else if(color == "blue"){R=0; G=0; B=255;}
    else if(color == "white"){R=255; G=255; B=255;}
    else if(color == "black"){R=0; G=0; B=0;}
    else if(color == "yellow"){R=255; G=255; B=0;}
    else if(color == "cyan"){R=0; G=255; B=255;}
    else if(color == "magenta"){R=255; G=0; B=255;}
    else if(color == "gray"){R=128; G=128; B=128;}
    else if(color == "maroon"){R=128; G=0; B=0;}
    else if(color == "olive"){R=128; G=128; B=0;}
    else if(color == "green"){R=0; G=128; B=0;}
    else if(color == "purple"){R=128; G=128; B=128;}
    else if(color == "teal"){R=0; G=128; B=128;}
    else if(color == "navy"){R=0; G=0; B=128;}

    analogWrite(_pin_R, 255-R);
    analogWrite(_pin_G, 255-G);
    analogWrite(_pin_B, 255-B);
 }

 void RGB_LED::rainbow(int delayTime)
 {
    int pins[] = {_pin_R, _pin_G, _pin_B};
    int pin2 = 0;
    int pin3 = 0;

    for(int pin1=0; pin1<3; pin1++)
    {
        pin2 = pin1 + 1;
        if(pin2 > 2){pin2 = 0;}
        pin3 = pin2 + 1;
        if(pin3 > 2){pin3 = 0;}
        
        for(int i=0; i<255; i++)
        {
        analogWrite(pins[pin1], i);
        analogWrite(pins[pin2], 255-i);
        analogWrite(pins[pin3], 255);
        delay(delayTime);
        }
    }

 }
