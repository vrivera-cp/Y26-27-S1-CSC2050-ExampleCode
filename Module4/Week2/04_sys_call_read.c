#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

struct dictionary_word {
    int length;
    char *word;
};

int main(void) {
    // Open file
    int fd = open("word.data", O_RDONLY);

    // Initialize structure
    struct dictionary_word the_word;

    // Read in data
    read(fd, &the_word.length, sizeof(int));

    the_word.word = malloc(sizeof(char) * the_word.length);
    read(fd, the_word.word, sizeof(char) * the_word.length);

    // Print the text
    write(STDOUT_FILENO, the_word.word, sizeof(char) * the_word.length);

    // Cleanup
    close(fd);
    free(the_word.word);

    return 0;
}
