#ifndef GPU_H
#define GPU_H
#include "globals.h"

typedef struct {
    int display_buffer[64 * 32];
    int draw_flag;
    int off_rgb[3];
    int on_rgb[3];
    int lastRef;
} GPU;

void startGpu(void);

void updateGpu(void);

#endif 