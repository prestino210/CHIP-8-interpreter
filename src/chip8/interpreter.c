// Parses chipset instructions from opcodes
#include "interpreter.h"
#include <stdio.h> // remove later

void parse(int *opcode) { 
    switch(*opcode) {
        case 0x0000:
            // Terminal should show nothing
            printf("Test opcode passed\n"); // remove later
            break;
        default:
            break;
    }
}