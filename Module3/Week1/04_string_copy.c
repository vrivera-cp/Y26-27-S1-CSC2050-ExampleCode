#include <stdio.h>

void copy(char *src, char *dst) {
   int i = 0;
   while (src[i] != '\0') {
       dst[i++] = src[i];
   }
   dst[i] = '\0';
}

int main(int argc, char **argv) {
    char container[16];
    copy(argv[1], container);
    printf("%s\n", container);
}
