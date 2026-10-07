#ifndef FORWARD_DECLARATION_H
#define FORWARD_DECLARATION_H

struct cat;

struct cat *cat_create(char name[], int age, float weight);

void cat_print(struct cat *cat);

#endif // FORWARD_DECLARATION_H