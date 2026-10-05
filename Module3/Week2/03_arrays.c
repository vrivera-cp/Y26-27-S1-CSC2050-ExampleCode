#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int n;
    printf("How many numbers? ");
    scanf("%d", &n);

    int *numbers = malloc(n * sizeof(int));

    srand(time(NULL)); // Initialize random numbers
    for (int i = 0; i < n; i++) {
        numbers[i] = rand() % 10;
    }

    printf("Your numbers are:");
    for (int i = 0; i < n; i++) {
        printf(" %d", numbers[i]);
    }
    printf("\n");

    return 0;
}
