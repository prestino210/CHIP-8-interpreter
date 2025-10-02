#ifndef CPU_H
#define CPU_H
#include "globals.h"
#include "timer.h"
#include "memory.h"

typedef enum {
    PAUSED,
    ERROR,
    RUNNING,
    STOPPING,
    WAIT
} STATE;

typedef struct {
    int pc;
    int i;
    int V[16];
    int lastRef;
    STATE cpuState;
} CPU;

void startCpu(void);
void processorLoop(CPU *cpu);
#endif // CPU_H