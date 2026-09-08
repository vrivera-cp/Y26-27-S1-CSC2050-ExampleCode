// Author(s): Vanessa Rivera
// Description: Small program to illustrate simple array usage

#define ARRAY_SIZE 4

int main(void) {

    int values[ARRAY_SIZE] = {1, 2};

    int values[ARRAY_SIZE] = 3;
    int values[ARRAY_SIZE] = 4;

    int sum = 0;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        sum += values[i];
    }

    printf("%d", sum);

    return 0;
}