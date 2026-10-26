#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(void) {
    int fd_hello = open("hello.txt", O_RDONLY);
    int fd_goodbye = open("goodbye.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

    close(STDIN_FILENO);
    int fd_mochi = open("mochi.txt", O_RDONLY);

    close(STDOUT_FILENO);
    int fd_dup = dup(fd_goodbye); // Duplicate open file description reference to first available fd

    char c;
    while ((read(STDIN_FILENO, &c, 1)) > 0) {
        write(STDOUT_FILENO, &c, 1);
    }

    close(fd_hello);
    close(fd_goodbye);
    close(fd_mochi);
    close(fd_dup);

    return 0;
}
