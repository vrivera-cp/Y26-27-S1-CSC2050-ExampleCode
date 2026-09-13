// Author(s): Vanessa Rivera
// Description: A standard "Hello" program

#include <stdio.h>

int main(void) {
    double score = 89.5;

    char letter;
    if (score >= 90.0) {
        letter = 'A';
    } else if (score >= 80.0) {
        letter = 'B';
    } else if (score >= 70.0) {
        letter = 'C';
    } else if (score >= 60.0) {
        letter = 'D';
    } else {
        letter = 'F';
    }

    switch (letter) {
        case 'A':
        case 'B':
        case 'C':
            printf("passing\n");
            break;
        case 'D':
            printf("passing, but review recommended\n");
            break;
        case 'F':
            printf("not passing\n");
            break;
        default:
            printf("invalid grade\n");
            break;
    }

    return 0;
}
