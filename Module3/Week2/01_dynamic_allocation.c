#include <stdio.h>
#include <stdlib.h>

int *heap_int(int value) {
    int *pointer = malloc(sizeof(int));
    if (pointer == NULL) exit(0); // malloc failed

    *pointer = value;
    return pointer;
}

int main(void) {
    int *pointer;

    pointer = heap_int(100);
    printf("%p: %d\n", (void *) pointer, *pointer);

    return 0;
}
