#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct food_item {
    char *name;
    int kcal;
    double oz;
};

void print_food_item(struct food_item *food_item) {
    printf("%s\t%d\t%.2f\n", food_item->name, food_item->kcal, food_item->oz);
}

int main(void) {
    struct food_item breakfast = {"Oatmeal", 100, 8.0};
    
    struct food_item *dinner = malloc(sizeof(struct food_item));

    dinner->name = strdup("Salmon");
    dinner->kcal = 150;
    dinner->oz = 8.0;

    print_food_item(&breakfast);
    print_food_item(dinner);

    return 0;
}