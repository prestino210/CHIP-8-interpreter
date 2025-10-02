#ifndef GLOBALS_H
#define GLOBALS_H
#include "gpu.h"
#include <stdint.h>
#include "timer.h"

extern int cpuTime;
extern GPU gpu;
extern uint8_t memory[4096];
extern TIMER timer;
extern const int CPU_HZ;
extern const int GPU_HZ;
extern const int TIMER_HZ;

#endif