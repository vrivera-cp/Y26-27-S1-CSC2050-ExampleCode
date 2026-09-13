#include <stdio.h>

#include "sum.h"
#include "count.h"

int sum(int values[]) {
    int n = count(values);
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += values[i];
    }

    return sum;
}
