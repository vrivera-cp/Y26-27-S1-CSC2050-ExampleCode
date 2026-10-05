#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *x = malloc(sizeof(int));
    *x = 1;
    printf("%d\n", *x);

    x = malloc(sizeof(int));
    *x = 2;
    printf("%d\n", *x);

    free(x);

    return 0;
}
