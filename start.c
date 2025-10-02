// Add option for headless mode
// Add option for interactive mode
// Initialize SDL3
// Start cpu, gpu, input, and timers

#include <stdio.h>
#include "cpu.h"
#include "gpu.h"

int main() {
    // Start on seperate threads
    startCpu();
    startGpu();
    return 0;
}