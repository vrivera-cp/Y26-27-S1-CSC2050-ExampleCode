// Author(s): Brian Kernighan and Dennis Ritchie
// Description: Small program to list a table of fahrenheit/Celsius
//              temperatures using a for loop and constants
// Source: C Programming language, Pg(s) 15-16

#include <stdio.h>

#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */

int main(void) {
    int fahr;
    
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0)*(fahr - 32));
    }

    return 0;
}