#include <stdio.h>
#include <SDL2/SDL.h>

#include "gba.h"

int main(int argc, char* argv[])
{
    if(argc < 2)
    {
        perror("Input file needed");
        return 1;
    }
    FILE* file = fopen(argv[1], "r");
    
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    unsigned char buffer[2]; 

    while (fread(buffer, sizeof(unsigned char), 2, file) == 2) {
        printf("%02x: %02x\n", buffer[0], buffer[1]);
    }

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