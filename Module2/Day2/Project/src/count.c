#include <stdio.h>

#include "count.h"

int count(int values[]) {
    int i = 0;
    for (int value = values[i]; value >= 0; value = values[++i]);
    return i;
}