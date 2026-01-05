#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

const int RB_SIZE = 64;

typedef struct {
    int buffer[RB_SIZE];
    int head;
    int tail;
    bool full;
} RingBuffer;