#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "06_forward_declaration.h"

struct cat {
    char name[32];
    int age;
    float weight;
};

struct cat *cat_create(char name[], int age, float weight) {
    struct cat *cat = malloc(sizeof(struct cat));
    strncpy(cat->name, name, 32);
    cat->age = age;
    cat->weight = weight;
    return cat;
}

void cat_print(struct cat *cat) {
    printf("%s\t%d\t%.2f\n", cat->name, cat->age, cat->weight);
}
