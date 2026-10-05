#include <stdio.h>
#include <stdlib.h>

#define INITIAL_SIZE 4

int main(void) {
    size_t n = INITIAL_SIZE;
    char *text = malloc(sizeof(char) * n);

    int i = 0;
    int current;
    do {
    	if (i >= n) {
        n = n * 2;
            text = realloc(text, sizeof(char) * n);
	    }

	    current = getchar();

        text[i++] = current == EOF ? '\0' : current;
    } while (current != EOF);

    printf("%s", text);

    free(text);

    return 0;
}
