#include <stdio.h>

#define BUFFER_SIZE 8

int main(void) {
    char in[BUFFER_SIZE];
    char out[BUFFER_SIZE];

    setvbuf(stdin, in, _IOFBF, BUFFER_SIZE);
    setvbuf(stdout, out, _IOLBF, BUFFER_SIZE);

    int character;
    while ((character = getchar()) != EOF) {
        putchar(character);
    }

    return 0;
}