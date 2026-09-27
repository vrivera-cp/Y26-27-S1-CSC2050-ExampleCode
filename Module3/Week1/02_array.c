void function(double items[], int n) {
    double sum = 0.0;
    
    for (int i = 0; i < n; i++) {
        sum += items[i];
    }

    sum = 0.0;
    int size = sizeof(items);
    for (int i = 0; i < n; i++) {
        sum += *(items++);
    }
}

int main(void) {
    double items[3] = {1.0, 2.0, 3.0};
    
    int size = sizeof(items);

    items[3] = 4.0;
    double *first = &items;
    double *second = &items[1];

    function(items, size / sizeof(double));

    return 0;
}

