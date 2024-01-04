#include <stdio.h>
#include <stdlib.h>

#include "core/cpu.h"

int main(int argc, char* argv[])
{
    // Check args.
    if(argc < 2)
    {
        perror("Input file needed");
        return 1;
    }

    // Open and check file.
    FILE* file = fopen(argv[1], "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Init memory.
    int RAM[288*1024] = {0};
    int VRAM[96*1024] = {0};

    if(&RAM[0] == &VRAM[0]){};

    // Init CPU.
    CPU* cpu = malloc(sizeof(CPU));

    cpu->flags = 0;
    cpu->state = STATE_ARM;

    // Main loop.
    while(1)
    {
        // TODO: use different threads for fetch decode and execute
        
        // fetch();
        // decode();
        // execute();
        
        break;
    }

    fclose(file);
    return(0);
}