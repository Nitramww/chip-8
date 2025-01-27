#include <stdio.h>

char sound_timer;
char delay_timer;
char registers[16];
char memory[4096];
short pc; // program counter
short index; // I
short stack;
// display
