#include <stdio.h>
#include <stdlib.h>

#include "sum.h"

int main(int argc, char *args[]) {
    
    int values[4] = {0, 0, 0, -1};

    values[0] = atoi(args[1]);
    values[1] = atoi(args[2]);
    values[2] = atoi(args[3]);

    printf("%d\n", sum(values));
    return 0;
}
