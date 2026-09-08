// Author(s): Vanessa Rivera
// Description: Small program to copy read in and print several values

#include <stdio.h>

int main(void) {
    int x;
    float y;
    char c;
    char string[32];

    scanf("%d %f %c %s", &x, &y, &c, string);
    printf("x:\t%d\ny:\t%.2f\nc:\t%c\nstring:\t%s\n", x, y, c, string);

    return 0;
}