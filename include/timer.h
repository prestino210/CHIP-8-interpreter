#ifndef TIMER_H
#define TIMER_H
#include "globals.h"

void initTimer(void);
void updateTimer(void);

typedef struct {
    int delay_timer;
    int sound_timer;
    int lastRef;
} TIMER;

#endif