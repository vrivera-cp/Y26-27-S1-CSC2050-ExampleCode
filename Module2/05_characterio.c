// Author(s): Brian Kernighan and Dennis Ritchie
// Description: Small program to copy stdin to stdout
//              character-by-character
// Source: C Programming language, Pg(s) 18

#include <stdio.h>

int main(void) {
    int c;
    
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }

    return 0;
}