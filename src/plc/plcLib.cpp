#include "plcLib.h"

// Simple implementations (adapt for Keil HAL)
void in(int pin) { /* read input */ }
void out(int pin, bool state) { /* write output */ }
void timerOn(unsigned long &time, unsigned long preset, bool &done) {
    // Timer logic here
}
void timerOff(unsigned long &time, unsigned long preset, bool &done) {
    // Timer logic here
}