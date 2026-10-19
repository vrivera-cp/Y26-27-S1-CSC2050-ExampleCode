#include <stdio.h>
#include <errno.h>

int main(int argc, char *argv[]) {
    int c;
    c = getchar(); // Read from stdin
    printf("getchar got: %c\n", c);

    c = fgetc(stdin); // Same functionality in this case
    printf("fgetc got: %c\n", c);

    FILE *file = fopen("hello.txt", "r");
    c = fgetc(file);
    printf("fgetc got: %c\n", c);

    FILE *new = fopen("goodbye.txt", "w");
    fprintf(new, "The '%c' character is being inserted in the new file", c);

    return 0;
}