// Initialize display (64x32)
// Rendering functions
// Display buffer
// Display timing
#include "globals.h"

void startGpu(void) {
    GPU gpu;
}

void updateGpu(void) {
    if(cpuTime - gpu.lastRef >= GPU_HZ) {
        // Push buffer to SDL window
    }
}