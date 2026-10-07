#include <stdlib.h>

#include "06_forward_declaration.h"

int main(void) {
    struct cat *cat = cat_create("Mochi", 7, 7.0);
    
    cat_print(cat);

    free(cat);

    return 0;
}