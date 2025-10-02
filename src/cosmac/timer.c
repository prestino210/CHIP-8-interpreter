// Delay timer and sound timer
#include "globals.h"

void initTimer(void) {
    timer.delay_timer = 0;
    timer.sound_timer = 0;
}

void updateTimer(void) {
    if(cpuTime - timer.lastRef >= TIMER_HZ) {
        timer.delay_timer--;
        timer.sound_timer--;
        timer.lastRef = cpuTime;
    }
}