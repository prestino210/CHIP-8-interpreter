// 4KB memory
// Memory management functions
#include <stdio.h> // remove later
#include "globals.h"

void resetMemory(void) {
    for (int i = 0; i < 4096; i++) {
        memory[i] = 0;
    }

    printf("Memory reset\n"); // remove later
}
