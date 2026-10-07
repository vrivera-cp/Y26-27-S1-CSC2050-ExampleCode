#include <stdio.h>
#include <string.h>

struct cat {
    char name[32];
    int age;
    float weight;
};

struct cat transform(struct cat cat, char name[], int age, float weight) {
    strncpy(cat.name, name, 32);
    cat.age = age;
    cat.weight = weight;

    return cat;
}

int main(void) {
    struct cat mochi = {"Mochi", 1};
    mochi.age += 6;

    struct cat *cat_pointer = &mochi;
    (*cat_pointer).weight = 7.0;
    cat_pointer->weight += 1.0;

    struct cat harvest = transform(mochi, "Harvest", 5, 9.0);

    printf("%s\t%d\t%.2f\n", mochi.name, (*cat_pointer).age, cat_pointer->weight);
    printf("%s\t%d\t%.2f\n", harvest.name, harvest.age, harvest.weight);
}