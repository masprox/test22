#pragma once

// plcLib style elements adapted for Keil/C
void in(int pin);
void out(int pin, bool state);
void timerOn(unsigned long &time, unsigned long preset, bool &done);
void timerOff(unsigned long &time, unsigned long preset, bool &done);