// FED instructions loop
// follow COSMAC VIP architecture
// CPU states
#include "cpu.h"
#include "interpreter.h"
#include "globals.h"

int cpuTime = 0;

void startCpu(void) {
    resetMemory();
    CPU pcpu;
    pcpu.pc = 0x200;
    pcpu.i = 0;
    pcpu.V[0] = 0;
    pcpu.cpuState = RUNNING;
    pcpu.lastRef = 0;

    initTimer();

    processorLoop(&pcpu);
}

void processorLoop(CPU *cpu) {
    switch(cpu->cpuState) {
        case RUNNING:
            while(cpu->cpuState == RUNNING) {
                if(cpuTime - cpu->lastRef >= CPU_HZ) {
                    // Fetch opcode (test opcode for now)
                    int opcode = 0x0000; // change to fetch from memory
                    parse(&opcode);
                    // Increment program counter
                    cpu->lastRef = cpuTime;
                }

                // Update gpu will be on its own thread later
                updateTimer();
                cpuTime++;
            }
            break;
        case PAUSED:
            break;
        case WAIT:
            break;
        case ERROR:
            break;
        case STOPPING:
            break;
        default:
            break;
    }
}