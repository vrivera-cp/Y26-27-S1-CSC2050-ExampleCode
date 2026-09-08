// Author(s): Brian Kernighan and Dennis Ritchie
// Description: Small program to list a table of fahrenheit/Celsius
//              temperature to exemplify variables and expressions
// Source: C Programming language, Pg(s) 12

#include <stdio.h>

int main(void) {
    double fahr, celsius;
    int lower, upper, step;
    
    lower = 0; /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    fahr = lower;
    
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%6.2f\t%6.2f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}