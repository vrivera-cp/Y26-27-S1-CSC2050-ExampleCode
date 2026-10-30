#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

struct dictionary_word {
    int length;
    char *word;
};

int main(void) {
    // Open file
    int fd = open("word.data", O_WRONLY | O_CREAT | O_TRUNC, S_IRWXU);

    // Initialize data structure
    struct dictionary_word the_word;

    // Read input
    int capacity = 1;
    char *buffer = malloc(sizeof(char) * capacity);
    while (read(STDIN_FILENO, (buffer + capacity - 1), sizeof(char)) > 0) {
        // Increment buffer size by one each iteration;
        // This is demonstrative and not very efficient performance-wise
        capacity++;
        buffer = realloc(buffer, sizeof(char) * capacity);
    }

    // Fill in data structure
    // (Note: We could've just used these locations for reading above)
    the_word.length = capacity - 1;
    the_word.word = buffer;

    // Write structure information to file
    write(fd, &the_word.length, sizeof(int));
    write(fd, the_word.word, sizeof(char) * the_word.length);

    // Reclaim resources
    close(fd);
    free(buffer);

    return 0;
}
